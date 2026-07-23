/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x14006B5D4
 * Callers:
 *     <none>
 * Callees:
 *     KiAbPropagateBoosts @ 0x14006B69C (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 *     KiReadyDeferredReadyList @ 0x1400D13F8 (KiReadyDeferredReadyList.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  char *v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = (char *)(SystemArgument1 + 3223);
  v6 = SystemArgument1 + 3222;
  while ( 1 )
  {
    if ( !*v6 )
    {
      KiAbPropagateBoosts(v4, v6, &v9, SystemArgument2);
      if ( !*v6 )
        break;
    }
    v7 = *v6;
    if ( *v6 )
      *v6 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 1LL;
    _InterlockedOr(v8, 0);
    if ( *(_BYTE *)(v7 + 39) )
      KiAbProcessThreadLocks(v7 - 1384, 0, 0, 1, (__int64)&v9, (__int64)v4, 0LL);
    _InterlockedDecrement16((volatile signed __int16 *)(v7 + 36));
  }
  SystemArgument1[3228] = 0LL;
  KiReadyDeferredReadyList(SystemArgument1, &v9);
}
