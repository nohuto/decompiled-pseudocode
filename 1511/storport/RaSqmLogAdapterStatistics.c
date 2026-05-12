/*
 * XREFs of RaSqmLogAdapterStatistics @ 0x1C00280B8
 * Callers:
 *     RaSqmLogStatistics @ 0x1C002844C (RaSqmLogStatistics.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00049C4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidReleasePortData @ 0x1C000A32C (RaidReleasePortData.c)
 *     RaidGetPortData @ 0x1C000A340 (RaidGetPortData.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     StorSqmAddToStream @ 0x1C003DE58 (StorSqmAddToStream.c)
 *     StorSqmCreateStringStreamEntry @ 0x1C003E044 (StorSqmCreateStringStreamEntry.c)
 */

void RaSqmLogAdapterStatistics()
{
  KSPIN_LOCK *PortData; // rax
  KSPIN_LOCK *v1; // r14
  _QWORD *v2; // r12
  _QWORD *i; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbx
  ULONG v7; // kr00_4
  unsigned int v8; // ecx
  int v9; // r9d
  __int64 v10; // r8
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // r8d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v29[36]; // [rsp+50h] [rbp-B0h] BYREF

  LODWORD(v29[0]) = 0;
  memset(&v29[1], 0, 0x118uLL);
  PortData = RaidGetPortData();
  v1 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock(PortData + 3, &LockHandle);
    v2 = v1 + 1;
    for ( i = (_QWORD *)v1[1]; i != v2; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v28);
      v4 = (__int64 *)i[4];
      if ( v4 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v4 - 8)) >= 0 )
          {
            v5 = MEMORY[0xFFFFF78000000320];
            v6 = (v5 - g_RaidSQMLastLogTick) * KeQueryTimeIncrement() / 10000;
            v7 = *((_DWORD *)v4 + 1182) * KeQueryTimeIncrement();
            v8 = *((_DWORD *)v4 + 185);
            *((_DWORD *)v4 + 1189) += *((_DWORD *)v4 + 216);
            if ( *((_DWORD *)v4 + 1190) > v8 )
              v8 = *((_DWORD *)v4 + 1190);
            *((_DWORD *)v4 + 1190) = v8;
            LODWORD(v29[1]) = 1;
            LODWORD(v29[0]) = 1;
            StorSqmCreateStringStreamEntry(&v29[2], v4[593], v7 / 0x2710);
            v29[5] = L"(null)";
            LODWORD(v29[4]) = v9 + 1;
            LODWORD(v29[6]) = v9 + 1;
            v29[7] = L"(null)";
            StorSqmCreateStringStreamEntry(&v29[8], v4[592], v10);
            v11 = *((_DWORD *)v4 + 1176);
            LODWORD(v29[10]) = v12;
            LODWORD(v29[11]) = v11;
            v13 = *((_DWORD *)v4 + 1177);
            LODWORD(v29[12]) = v12;
            LODWORD(v29[13]) = v13;
            v14 = *((_DWORD *)v4 + 1178);
            LODWORD(v29[14]) = v12;
            LODWORD(v29[15]) = v14;
            v15 = *((_DWORD *)v4 + 1179);
            LODWORD(v29[16]) = v12;
            LODWORD(v29[17]) = v15;
            v16 = *((_DWORD *)v4 + 1180);
            LODWORD(v29[18]) = v12;
            LODWORD(v29[19]) = v16;
            v17 = *((_DWORD *)v4 + 1181);
            LODWORD(v29[20]) = v12;
            LODWORD(v29[23]) = v18;
            LODWORD(v29[22]) = v12;
            LODWORD(v29[21]) = v17;
            v19 = *((_DWORD *)v4 + 1183);
            LODWORD(v29[24]) = v12;
            LODWORD(v29[26]) = v12;
            LODWORD(v29[25]) = v19;
            LODWORD(v29[27]) = v6;
            v20 = *((_DWORD *)v4 + 18);
            LODWORD(v29[28]) = v12;
            LODWORD(v29[29]) = v20;
            v21 = *((_DWORD *)v4 + 185);
            LODWORD(v29[30]) = v12;
            LODWORD(v29[31]) = v21;
            v22 = *((_DWORD *)v4 + 216);
            LODWORD(v29[32]) = v12;
            LODWORD(v29[33]) = v22;
            v23 = *((_DWORD *)v4 + 1188);
            LODWORD(v29[34]) = v12;
            LODWORD(v29[35]) = v23;
            StorSqmAddToStream(v24, 5463LL, 18LL, v29);
            v25 = *((_DWORD *)v4 + 224);
            v26 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v4[24];
            v4[588] = 0LL;
            v4[589] = 0LL;
            v4[590] = 0LL;
            v4[591] = 0LL;
            *((_DWORD *)v4 + 185) = v25;
            *((_DWORD *)v4 + 216) = 0;
            ExReleaseRundownProtectionCacheAware(v26);
          }
          v4 = (__int64 *)*v4;
        }
        while ( v4 != i + 4 );
        v2 = v1 + 1;
      }
      KeReleaseInStackQueuedSpinLock(&v28);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v1);
  }
}
