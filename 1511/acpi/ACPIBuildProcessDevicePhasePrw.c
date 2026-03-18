/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C000D540
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C00087C8 (ACPIGpeValidIndex.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021828 (ACPIBuildDevicePowerNodes.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AFD4 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r15
  bool v4; // bl
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // ebp
  __int64 v16; // rbx
  int v17; // r8d
  unsigned __int8 v18; // r8
  _QWORD v19[16]; // [rsp+30h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 400) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C005A228 = 0;
      byte_1C005A22C = 0;
      FreeDataBuffs(a1 + 80, 1LL);
    }
  }
  else
  {
    v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1465074783LL);
    if ( v6 )
      *(_DWORD *)(v1 + 544) |= 0x40u;
    else
      v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1465077855LL);
    *(_QWORD *)(v1 + 400) = v6;
    if ( !*(_QWORD *)(a1 + 56) )
    {
      if ( (*(_DWORD *)(v1 + 544) & 0x40) == 0 )
        goto LABEL_6;
      _InterlockedOr64((volatile signed __int64 *)v1, 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x400000000uLL);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 )
        v4 = (*(_QWORD *)v1 & 0x800000000LL) == 0;
      if ( *(_WORD *)(v2 + 2) != 4 )
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      v5 = ACPIBuildDevicePowerNodes(v1, *(_QWORD *)(a1 + 56));
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v8 = *(_QWORD *)(v2 + 32);
      v9 = *(_WORD *)(v8 + 10);
      if ( v9 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v9);
      v10 = *(_WORD *)(v8 + 50);
      if ( v10 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v10);
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 448) = *(_DWORD *)(v8 + 24);
        v11 = *(_QWORD *)(v8 + 64);
        if ( v11 >= 6 )
          v12 = 0;
        else
          v12 = SystemPowerStateTranslation[v11];
        *(_DWORD *)(v1 + 480) = v12;
        _InterlockedOr64((volatile signed __int64 *)v1, 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x100000000uLL);
        }
        else
        {
          v13 = *(_QWORD *)(v1 + 904);
          if ( (v13 & 0x800000000LL) != 0 )
          {
            if ( (v13 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v8 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && (*(_QWORD *)(v1 + 904) & 0x100000000LL) == 0
        && ACPIGpeValidIndex(*(_DWORD *)(v8 + 24)) )
      {
        v14 = *(unsigned __int8 *)(v8 + 24) >> 3;
        v15 = 1 << (*(unsigned __int8 *)(v8 + 24) % 8);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        if ( ((unsigned __int8)v15 & *((_BYTE *)GpeEnable + v14)) != 0 )
        {
          if ( (*(_QWORD *)v1 & 0x800000000LL) != 0 )
          {
            *((_BYTE *)GpeSpecialHandler + v14) |= v15;
            v18 = *((_BYTE *)GpeWakeHandler + v14);
            if ( (v18 & (unsigned __int8)v15) != 0 )
              *((_BYTE *)GpeWakeHandler + v14) = v18 & ~(_BYTE)v15;
          }
          else if ( ((unsigned __int8)v15 & *((_BYTE *)GpeSpecialHandler + v14)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v14) |= v15;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs(v2, 1LL);
    v16 = *(_QWORD *)(v1 + 400);
    if ( v16 )
    {
      memset(v19, 0, 0x78uLL);
      v17 = *(_BYTE *)(v1 + 544) & 0x40;
      WORD1(v19[0]) = 1;
      v19[2] = 0LL;
      WORD1(v19[5]) = 1;
      v19[7] = 0LL;
      WORD1(v19[10]) = 1;
      v19[12] = 0LL;
      AMLIAsyncEvalObject(v16, 0LL, (v17 | 0x20u) >> 5, v19, 0LL, 0LL);
    }
  }
LABEL_6:
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return v5;
}
