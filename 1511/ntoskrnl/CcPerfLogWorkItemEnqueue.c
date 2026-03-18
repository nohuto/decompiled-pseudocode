/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x140123444
 * Callers:
 *     CcWorkerThread @ 0x1400B2610 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueue @ 0x140100FF0 (CcPostWorkQueue.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140103C60 (CcWaitForCurrentLazyWriterActivity.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogWorkItemEnqueue(__int64 *a1, __int64 a2, char a3, char a4)
{
  char v6; // di
  char v7; // cl
  unsigned __int8 CurrentIrql; // al
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int64 *v17; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+54h] [rbp-Ch]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
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
      BYTE1(v16) = 2;
      if ( a4 )
      {
        v15 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a2 + 16) + 96LL) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v12 = *(_QWORD *)(a2 + 16);
        v13 = CcReferenceSharedCacheMapFileObject(v12);
        v15 = *(_QWORD *)(v13 + 24);
        CcDereferenceSharedCacheMapFileObject(v12, v13);
      }
      break;
    case 1:
      v10 = *(_QWORD *)(a2 + 16);
      BYTE1(v16) = 1;
      v15 = *(_QWORD *)(v10 + 24);
      break;
    case 3:
      BYTE1(v16) = 3;
      break;
    default:
      v11 = BYTE1(v16);
      if ( v7 == 4 )
        v11 = 4;
      BYTE1(v16) = v11;
      break;
  }
  LOBYTE(v16) = v6;
  v14 = a2;
  BYTE2(v16) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0;
  v18 = 24;
  v17 = &v14;
  if ( CurrentIrql < 2u )
    return EtwTraceKernelEvent((int)&v17, 1, 0x80020000, 0x1600u, 4200706);
  else
    return EtwTraceKernelEvent((int)&v17, 1, 0x80020000, 0x1600u, 4194562);
}
