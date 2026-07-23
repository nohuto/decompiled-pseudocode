/*
 * XREFs of TtmNotifyDeviceArrival @ 0x140546F5C
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     TtmiAcquireCurrentSession @ 0x140547078 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x1406774F0 (TtmpFindDeviceByToken.c)
 *     TtmiScheduleSessionWorker @ 0x140678DEC (TtmiScheduleSessionWorker.c)
 */

__int64 __fastcall TtmNotifyDeviceArrival(unsigned int a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  void *v6; // rdi
  signed __int32 v7; // r12d
  NTSTATUS v10; // ebx
  int v11; // r14d
  unsigned int v13; // ebx
  PVOID PoolWithTag; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-91h]
  int SessionId; // [rsp+4Ch] [rbp-8Dh] BYREF
  unsigned int v27; // [rsp+50h] [rbp-89h] BYREF
  signed __int32 v28; // [rsp+54h] [rbp-85h] BYREF
  int v29; // [rsp+58h] [rbp-81h] BYREF
  NTSTATUS v30; // [rsp+5Ch] [rbp-7Dh] BYREF
  __int64 v31; // [rsp+60h] [rbp-79h] BYREF
  size_t pcchLength[2]; // [rsp+68h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-61h] BYREF
  int *p_SessionId; // [rsp+98h] [rbp-41h]
  __int64 v35; // [rsp+A0h] [rbp-39h]
  int *v36; // [rsp+A8h] [rbp-31h]
  __int64 v37; // [rsp+B0h] [rbp-29h]
  __int64 *v38; // [rsp+B8h] [rbp-21h]
  __int64 v39; // [rsp+C0h] [rbp-19h]
  signed __int32 *v40; // [rsp+C8h] [rbp-11h]
  __int64 v41; // [rsp+D0h] [rbp-9h]
  int *v42; // [rsp+D8h] [rbp-1h]
  __int64 v43; // [rsp+E0h] [rbp+7h]
  NTSTATUS *v44; // [rsp+E8h] [rbp+Fh]
  __int64 v45; // [rsp+F0h] [rbp+17h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = -1;
  v25 = a1;
  v24 = 0LL;
  if ( !a3 )
  {
    v10 = -1073741811;
    goto LABEL_33;
  }
  if ( !*a3 )
  {
    v10 = -1073741811;
LABEL_17:
    TtmiLogError("TtmNotifyDeviceArrival");
    v11 = a4;
    goto LABEL_12;
  }
  if ( a5 )
  {
    v10 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(a5 + 8), 0x104uLL, pcchLength);
    if ( v10 < 0 )
      goto LABEL_17;
  }
  v10 = TtmiAcquireCurrentSession(&v24);
  if ( v10 >= 0 )
  {
    v5 = v24;
    v13 = v25;
    if ( !(unsigned __int8)TtmpFindDeviceByToken(v24, v25, a2, 0LL) )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x268uLL, 0x446D7454u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x268uLL);
        *((_DWORD *)v6 + 4) = v13;
        *((_QWORD *)v6 + 3) = a2;
        *((_DWORD *)v6 + 8) = v7;
        *((_QWORD *)v6 + 5) = *a3;
        *((_QWORD *)v6 + 6) = a3[1];
        *((_QWORD *)v6 + 7) = a3[2];
        v15 = a3[3];
        v11 = a4;
        *((_QWORD *)v6 + 8) = v15;
        *((_DWORD *)v6 + 18) = a4;
        v10 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)v6 + 38, 0x104uLL, *(NTSTRSAFE_PCWSTR *)(a5 + 8));
        if ( v10 >= 0 )
        {
          v18 = 0;
          if ( *((_DWORD *)v6 + 4) == 2 )
          {
            v16 = *((_DWORD *)v6 + 18);
            if ( v16 <= 0x10 )
            {
              v17 = 65810;
              if ( _bittest(&v17, v16) )
                v18 = 1;
            }
          }
          *((_DWORD *)v6 + 149) = -1;
          v5 = v24;
          *((_DWORD *)v6 + 150) = *((_DWORD *)v6 + 150) ^ (*((_DWORD *)v6 + 150) ^ (v18 << 7)) & 0x80 | 1;
          v19 = *(_QWORD **)(v5 + 104);
          if ( *v19 != v5 + 96 )
            __fastfail(3u);
          *((_QWORD *)v6 + 1) = v19;
          *(_QWORD *)v6 = v5 + 96;
          *v19 = v6;
          *(_QWORD *)(v5 + 104) = v6;
          TtmiScheduleSessionWorker(v5, 1LL);
          v6 = 0LL;
          v10 = 0;
        }
        else
        {
          TtmiLogError("TtmNotifyDeviceArrival");
          v5 = v24;
        }
        goto LABEL_8;
      }
      v10 = -1073741670;
      goto LABEL_6;
    }
    v10 = -1073741768;
LABEL_33:
    TtmiLogError("TtmNotifyDeviceArrival");
    goto LABEL_7;
  }
LABEL_6:
  TtmiLogError("TtmNotifyDeviceArrival");
  v5 = v24;
LABEL_7:
  v11 = a4;
LABEL_8:
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x446D7454u);
LABEL_12:
  if ( stru_1407478B0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1407478B0, 1uLL) )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v27 = v25;
    p_SessionId = &SessionId;
    v36 = (int *)&v27;
    v38 = &v31;
    v40 = &v28;
    v42 = &v29;
    v44 = &v30;
    v31 = a2;
    v28 = v7;
    v29 = v11;
    v30 = v10;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 8LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    TlgWrite(&stru_1407478B0, &unk_14027DB78, 0LL, 0LL, 8u, &pData);
  }
  return (unsigned int)v10;
}
