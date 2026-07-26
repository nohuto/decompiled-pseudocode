/*
 * XREFs of ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C006CC30
 * Callers:
 *     <none>
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00D9010 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 */

__int64 __fastcall ndisPDPcwUtilizationCallback(int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  NTSTATUS v5; // edi
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 *v9; // rbx
  unsigned int InstanceId; // eax
  ULONG v11; // r8d
  struct _PCW_BUFFER *v12; // rcx
  ULONG v14; // r8d
  struct _PCW_BUFFER *Buffer; // rcx
  unsigned __int64 CounterMask; // rdx
  unsigned int i; // ecx
  struct _PCW_DATA v18; // [rsp+30h] [rbp-58h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-48h] BYREF
  KLockHolder v20; // [rsp+50h] [rbp-38h] BYREF

  v5 = 0;
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v20,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
  v6 = *(_QWORD *)&qword_1C0085808;
  v7 = *(_QWORD *)&qword_1C0085808 + 16LL;
  v8 = *(_QWORD **)(*(_QWORD *)&qword_1C0085808 + 16LL);
  while ( v8 != (_QWORD *)v7 )
  {
    v9 = (__int64 *)v8[6];
    if ( v9 != v8 + 6 )
    {
      do
      {
        if ( a1 >= 0 )
        {
          if ( a1 <= 1 )
          {
            if ( ndisWildCardStringMatch(a2->AddCounter.InstanceMask, (const struct _UNICODE_STRING *)(v9 + 5), v6) )
            {
              CounterMask = a2->AddCounter.CounterMask;
              for ( i = 0; CounterMask; CounterMask &= CounterMask - 1 )
                ++i;
              if ( a1 == 1 )
                i = -i;
              _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 9, i);
            }
          }
          else if ( a1 == 2 )
          {
            v14 = *((_DWORD *)v9 + 8);
            Buffer = a2->EnumerateInstances.Buffer;
            v18.Data = 0LL;
            v18.Size = 56;
            v5 = PcwAddInstance(Buffer, (PCUNICODE_STRING)(v9 + 5), v14, 1u, &v18);
            if ( v5 < 0 )
              goto LABEL_10;
          }
          else if ( a1 == 3 )
          {
            InstanceId = a2->EnumerateInstances.InstanceId;
            if ( InstanceId == -1 || InstanceId == *((_DWORD *)v9 + 8) )
            {
              v11 = *((_DWORD *)v9 + 8);
              v12 = a2->EnumerateInstances.Buffer;
              Data.Data = v9 + 7;
              Data.Size = 56;
              v5 = PcwAddInstance(v12, (PCUNICODE_STRING)(v9 + 5), v11, 1u, &Data);
              goto LABEL_10;
            }
          }
        }
        v9 = (__int64 *)*v9;
      }
      while ( v9 != v8 + 6 );
      v6 = *(_QWORD *)&qword_1C0085808;
    }
    v8 = (_QWORD *)*v8;
    v7 = v6 + 16;
  }
LABEL_10:
  KLockHolder::~KLockHolder(&v20);
  return (unsigned int)v5;
}
