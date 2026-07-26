/*
 * XREFs of ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0070B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCountSetBits64@@YAK_K@Z @ 0x1C0070694 (-ndisCountSetBits64@@YAK_K@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00D8650 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 */

__int64 __fastcall ndisPDPcwUtilizationCallback(int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  NTSTATUS v5; // edi
  unsigned __int8 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 *v10; // rbx
  unsigned int InstanceId; // eax
  ULONG v12; // r8d
  struct _PCW_BUFFER *v13; // rcx
  ULONG v15; // r8d
  struct _PCW_BUFFER *Buffer; // rcx
  unsigned int v17; // eax
  struct _PCW_DATA v18; // [rsp+30h] [rbp-58h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-48h] BYREF
  KLockHolder v20; // [rsp+50h] [rbp-38h] BYREF

  v5 = 0;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v20, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v7 = qword_1C0089668;
  v8 = qword_1C0089668 + 16;
  v9 = *(_QWORD **)(qword_1C0089668 + 16);
  while ( v9 != (_QWORD *)v8 )
  {
    v10 = (__int64 *)v9[6];
    if ( v10 != v9 + 6 )
    {
      do
      {
        if ( a1 >= 0 )
        {
          if ( a1 <= 1 )
          {
            if ( ndisWildCardStringMatch(a2->AddCounter.InstanceMask, (const struct _UNICODE_STRING *)(v10 + 5), v6) )
            {
              v17 = ndisCountSetBits64(a2->AddCounter.CounterMask);
              if ( a1 == 1 )
                v17 = -v17;
              _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 9, v17);
            }
          }
          else if ( a1 == 2 )
          {
            v15 = *((_DWORD *)v10 + 8);
            Buffer = a2->EnumerateInstances.Buffer;
            v18.Data = 0LL;
            v18.Size = 64;
            v5 = PcwAddInstance(Buffer, (PCUNICODE_STRING)(v10 + 5), v15, 1u, &v18);
            if ( v5 < 0 )
              goto LABEL_10;
          }
          else if ( a1 == 3 )
          {
            InstanceId = a2->EnumerateInstances.InstanceId;
            if ( InstanceId == -1 || InstanceId == *((_DWORD *)v10 + 8) )
            {
              v12 = *((_DWORD *)v10 + 8);
              v13 = a2->EnumerateInstances.Buffer;
              Data.Data = v10 + 7;
              Data.Size = 64;
              v5 = PcwAddInstance(v13, (PCUNICODE_STRING)(v10 + 5), v12, 1u, &Data);
              goto LABEL_10;
            }
          }
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != v9 + 6 );
      v7 = qword_1C0089668;
    }
    v9 = (_QWORD *)*v9;
    v8 = v7 + 16;
  }
LABEL_10:
  KLockHolder::~KLockHolder(&v20);
  return (unsigned int)v5;
}
