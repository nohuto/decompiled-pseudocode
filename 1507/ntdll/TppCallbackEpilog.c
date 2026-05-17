/*
 * XREFs of TppCallbackEpilog @ 0x18003A890
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003AC50 (TppCallbackCheckThreadAfterCallback.c)
 *     TppJobpCallbackEpilog @ 0x18003B9C0 (TppJobpCallbackEpilog.c)
 *     TppIopCallbackEpilog @ 0x18003BFD0 (TppIopCallbackEpilog.c)
 *     TppWorkpFree @ 0x18003D7D0 (TppWorkpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppIteWakeWaiters @ 0x18007DF04 (TppIteWakeWaiters.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwReleaseSemaphore @ 0x1800939A0 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x180093B00 (ZwReleaseMutant.c)
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 *     memset @ 0x180098540 (memset.c)
 */

void __fastcall TppCallbackEpilog(__int64 *a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
  __int64 v5; // r8
  __int64 v6; // r14
  char v7; // r15
  signed __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(); // rdi
  __int64 v13; // r8
  int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // r8
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rax
  signed __int64 v30; // [rsp+20h] [rbp-89h]
  signed __int64 v31; // [rsp+20h] [rbp-89h]
  _DWORD v32[2]; // [rsp+28h] [rbp-81h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-79h] BYREF

  TppCallbackCheckThreadAfterCallback(a1);
  if ( !*((_DWORD *)a1 + 36) )
  {
LABEL_13:
    memset(a1, 0, 0x90uLL);
    return;
  }
  while ( 1 )
  {
    v2 = *((_DWORD *)a1 + 36);
    _BitScanForward((unsigned int *)&v3, v2);
    v4 = TppJobpCallbackEpilog;
    v32[1] = v3;
    *((_DWORD *)a1 + 36) = v2 ^ (1 << v3);
    v5 = 0x180000000uLL;
    if ( v3 != 9 )
      break;
    v11 = a1[23];
    a1[23] = 0LL;
    v12 = *(__int64 (__fastcall **)())(*(_QWORD *)(v11 + 8) + 8LL);
    if ( v12 == TppWorkCallbackEpilog )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
      {
        v12 = **(__int64 (__fastcall ***)())(v11 + 8);
        if ( (char *)v12 != (char *)TppWorkpFree )
          goto LABEL_32;
        TppWorkpFree(v11, 0xFFFFFFFFFFFFFFFLL, 0x180000000uLL, TppJobpCallbackEpilog);
      }
    }
    else if ( (char *)v12 == (char *)TppJobpCallbackEpilog )
    {
      TppJobpCallbackEpilog(v11, 0xFFFFFFFFFFFFFFFLL, 0x180000000uLL, TppJobpCallbackEpilog);
    }
    else
    {
      if ( (char *)v12 != (char *)TppIopCallbackEpilog )
      {
LABEL_32:
        ((void (__fastcall *)(__int64, __int64, unsigned __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))v12)(
          v11,
          0xFFFFFFFFFFFFFFFLL,
          0x180000000uLL,
          TppJobpCallbackEpilog);
        goto LABEL_12;
      }
      TppIopCallbackEpilog(v11, 0xFFFFFFFFFFFFFFFLL, 0x180000000uLL, TppJobpCallbackEpilog);
    }
LABEL_12:
    if ( !*((_DWORD *)a1 + 36) )
      goto LABEL_13;
  }
  if ( v3 == 6 )
  {
    v6 = a1[23];
    v7 = 0;
    _m_prefetchw((const void *)(v6 + 56));
    v8 = *(_QWORD *)(v6 + 56);
    do
    {
      if ( v7 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
        v7 = 0;
      }
      v9 = v8;
      v10 = (v8 ^ (v8 - 1)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
      if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
      {
        v10 &= ~0x8000000000000000uLL;
        v7 = 1;
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 64), (char *)0xFFFFFFFFFFFFFFFLL, v5, (__int64)v4);
      }
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 56), v10, v9);
    }
    while ( v9 != v8 );
    if ( v7 )
    {
      v22 = *(_QWORD *)(v6 + 72);
      *(_QWORD *)(v6 + 72) = 0LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
      TppIteWakeWaiters(v22);
    }
    goto LABEL_12;
  }
  switch ( v3 )
  {
    case 0:
      RtlLeaveCriticalSection(a1[24]);
      a1[24] = 0LL;
      goto LABEL_12;
    case 1:
      v26 = ZwReleaseMutant(*((unsigned int *)a1 + 38), 0LL, 0x180000000uLL, TppJobpCallbackEpilog);
      v24 = v26;
      if ( v26 >= 0 )
      {
        *((_DWORD *)a1 + 38) = 0;
        goto LABEL_12;
      }
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      v29 = *((unsigned int *)a1 + 38);
      ExceptionRecord.ExceptionCode = -1073740019;
LABEL_48:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v29;
      ExceptionRecord.ExceptionInformation[3] = v24;
LABEL_49:
      ExceptionRecord.ExceptionInformation[0] = a1[11];
      ExceptionRecord.ExceptionInformation[1] = a1[12];
      memset(a1, 0, 0xF8uLL);
      RtlRaiseException(&ExceptionRecord);
      return;
    case 2:
      v25 = ZwSetEvent(*((unsigned int *)a1 + 37), 0LL);
      v24 = v25;
      if ( v25 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v29 = *((unsigned int *)a1 + 37);
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_48;
      }
      *((_DWORD *)a1 + 37) = 0;
      goto LABEL_12;
    case 3:
      v27 = ZwReleaseSemaphore(*((unsigned int *)a1 + 39), *((unsigned int *)a1 + 40), 0LL, TppJobpCallbackEpilog);
      v28 = v27;
      if ( v27 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[2] = *((unsigned int *)a1 + 39);
        ExceptionRecord.ExceptionInformation[3] = *((unsigned int *)a1 + 40);
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v28;
        goto LABEL_49;
      }
      *(__int64 *)((char *)a1 + 156) = 0LL;
      goto LABEL_12;
    case 4:
      v13 = a1[16];
      v14 = *((_DWORD *)a1 + 18);
      v15 = a1[23];
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 416));
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 420));
        _m_prefetchw((const void *)(v13 + 8));
        v20 = *(_QWORD *)(v13 + 8);
        v31 = v20;
        do
        {
          LODWORD(v31) = (unsigned __int16)(v31 ^ (v31 - 1)) ^ (unsigned int)v31;
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v31, v20);
          v31 = v20;
        }
        while ( v21 != v20 );
        v19 = *(_QWORD *)(v13 + 56);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 136) + 416LL));
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 136) + 420LL));
        v16 = *(_QWORD *)(v15 + 136);
        _m_prefetchw((const void *)(v16 + 8));
        v17 = *(_QWORD *)(v16 + 8);
        v30 = v17;
        do
        {
          LODWORD(v30) = (unsigned __int16)(v30 ^ (v30 - 1)) ^ (unsigned int)v30;
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 8), v30, v17);
          v30 = v17;
        }
        while ( v18 != v17 );
        v19 = *(_QWORD *)(*(_QWORD *)(v15 + 136) + 56LL);
      }
      if ( v14 == 2 )
      {
        v32[0] = 0;
        NtSetInformationWorkerFactory(v19, 9LL, v32, 4LL);
      }
      goto LABEL_12;
    case 5:
      TppBarrierAdjust(a1[22] + 32, 0xFFFFFFFFLL);
      a1[22] = 0LL;
      goto LABEL_12;
    case 7:
      v23 = LdrUnloadDll(a1[25]);
      v24 = v23;
      if ( v23 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v29 = a1[25];
        ExceptionRecord.ExceptionCode = -1073740018;
        goto LABEL_48;
      }
      a1[25] = 0LL;
      goto LABEL_12;
    case 8:
      LdrUnloadDll(a1[21]);
      a1[21] = 0LL;
      goto LABEL_12;
    default:
      goto LABEL_12;
  }
}
