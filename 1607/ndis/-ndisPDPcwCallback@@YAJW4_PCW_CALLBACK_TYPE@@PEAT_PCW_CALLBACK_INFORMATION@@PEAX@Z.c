/*
 * XREFs of ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00707F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1C00DF300 (-NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z.c)
 */

__int64 __fastcall ndisPDPcwCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  NTSTATUS v3; // r12d
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // r13
  _QWORD *v9; // rsi
  int v10; // r14d
  __int64 *i; // rbx
  unsigned int InstanceId; // eax
  struct _PCW_DATA Data; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-29h]
  union _PCW_CALLBACK_INFORMATION *v15; // [rsp+50h] [rbp-21h]
  _QWORD *v16; // [rsp+58h] [rbp-19h]
  void *v17; // [rsp+60h] [rbp-11h]
  KLockThisExclusive v18; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v19[24]; // [rsp+80h] [rbp+Fh] BYREF

  v3 = 0;
  v17 = a3;
  Data.Data = 0LL;
  Data.Size = 0;
  v15 = a2;
  v14 = a1;
  if ( a1 <= 1 )
    return 0LL;
  KLockThisExclusive::KLockThisExclusive(&v18, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v5 = qword_1C0089668;
  v6 = qword_1C0089668 + 16;
  v7 = *(_QWORD **)(qword_1C0089668 + 16);
  while ( 1 )
  {
    v16 = v7;
    if ( v7 == (_QWORD *)v6 )
      break;
    v8 = v7 + 2;
    v9 = (_QWORD *)v7[2];
    if ( v9 != v7 + 2 )
    {
      v10 = (int)v17;
      do
      {
        for ( i = (__int64 *)v9[12]; i != v9 + 12; i = (__int64 *)*i )
        {
          if ( *((_DWORD *)i + 14) == v10 )
          {
            if ( v14 == 2 )
            {
              v3 = PcwAddInstance(
                     v15->EnumerateInstances.Buffer,
                     (PCUNICODE_STRING)i + 6,
                     *((_DWORD *)i + 17),
                     1u,
                     &Data);
              if ( v3 < 0 )
                break;
            }
            else
            {
              InstanceId = v15->EnumerateInstances.InstanceId;
              if ( InstanceId == -1 || InstanceId == *((_DWORD *)i + 17) )
              {
                NdisPDPIQueryCounter((struct NDIS_PD_COUNTER_HANDLE__ *)(i - 1), (union _NDIS_PD_COUNTER_VALUE *)v19);
                Data.Data = v19;
                if ( v10 == 1 )
                {
                  Data.Size = 24;
                }
                else if ( (unsigned int)(v10 - 2) < 2 )
                {
                  Data.Size = 16;
                }
                else
                {
                  Data.Size = 0;
                }
                v3 = PcwAddInstance(
                       v15->EnumerateInstances.Buffer,
                       (PCUNICODE_STRING)i + 6,
                       *((_DWORD *)i + 17),
                       1u,
                       &Data);
                break;
              }
            }
          }
        }
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != v8 );
      v5 = qword_1C0089668;
      v7 = v16;
    }
    v7 = (_QWORD *)*v7;
    v6 = v5 + 16;
  }
  KLockHolder::~KLockHolder(&v18);
  return (unsigned int)v3;
}
