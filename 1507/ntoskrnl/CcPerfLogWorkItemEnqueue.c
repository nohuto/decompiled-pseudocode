/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x14011E480
 * Callers:
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 *     CcPostWorkQueue @ 0x14003F5E0 (CcPostWorkQueue.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140133BA4 (CcWaitForCurrentLazyWriterActivity.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall CcPerfLogWorkItemEnqueue(__int64 *a1, __int64 a2, char a3, char a4)
{
  char v6; // bl
  char v7; // cl
  unsigned __int8 CurrentIrql; // al
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // r14
  signed __int64 *v13; // rdi
  __int64 v14; // rdx
  ULONG_PTR v15; // r8
  __int64 v16; // r9
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int64 *v22; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+50h] [rbp-20h]
  int v24; // [rsp+54h] [rbp-1Ch]
  __int64 *v25; // [rsp+58h] [rbp-18h] BYREF
  int v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+64h] [rbp-Ch]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a1 == &CcFastTeardownWorkQueue )
  {
    v6 = 1;
  }
  else if ( a1 == &CcExpressWorkQueue )
  {
    v6 = 2;
  }
  else if ( a1 == &CcRegularWorkQueue )
  {
    v6 = 3;
  }
  else if ( a1 == &CcPostTickWorkQueue )
  {
    v6 = 4;
  }
  else if ( a1 == (__int64 *)CcAsyncReadWorkQueue
         || a1 == (__int64 *)(CcAsyncReadWorkQueue + 16)
         || a1 == (__int64 *)(CcAsyncReadWorkQueue + 32) )
  {
    v6 = 5;
  }
  else
  {
    v6 = a1 == 0LL ? 6 : 0;
  }
  v7 = *(_BYTE *)(a2 + 104);
  switch ( v7 )
  {
    case 2:
      BYTE1(v21) = 2;
      if ( a4 )
      {
        v20 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a2 + 16) + 96LL) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v12 = *(_QWORD *)(a2 + 16);
        v13 = (signed __int64 *)(v12 + 96);
        v15 = ObFastReferenceObject((signed __int64 *)(v12 + 96));
        if ( !v15 )
          v15 = CcSlowReferenceSharedCacheMapFileObject(v12, v14, 0LL, v16);
        v20 = *(_QWORD *)(v15 + 24);
        _m_prefetchw(v13);
        v17 = *v13;
        while ( (v15 ^ v17) < 0xF )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64(v13, v17 + 1, v17);
          if ( v18 == v17 )
            goto LABEL_8;
        }
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v15, 0x746C6644u);
      }
      break;
    case 1:
      v10 = *(_QWORD *)(a2 + 16);
      BYTE1(v21) = 1;
      v20 = *(_QWORD *)(v10 + 24);
      break;
    case 3:
      BYTE1(v21) = 3;
      break;
    default:
      v11 = BYTE1(v21);
      if ( v7 == 4 )
        v11 = 4;
      BYTE1(v21) = v11;
      break;
  }
LABEL_8:
  LOBYTE(v21) = v6;
  v19 = a2;
  BYTE2(v21) = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v27 = 0;
    v25 = &v19;
    v26 = 24;
    return EtwTraceKernelEvent((int)&v25, 1, 0x80020000, 0x1600u, 4200706);
  }
  else
  {
    v24 = 0;
    v22 = &v19;
    v23 = 24;
    return EtwTraceKernelEvent((int)&v22, 1, 0x80020000, 0x1600u, 4194562);
  }
}
