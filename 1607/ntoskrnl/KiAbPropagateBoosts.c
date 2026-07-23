/*
 * XREFs of KiAbPropagateBoosts @ 0x14006B69C
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x14006B5D4 (KiAbDeferredProcessingWorker.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 */

__int64 __fastcall KiAbPropagateBoosts(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF

  while ( *a1 )
  {
    v6 = *a1;
    if ( *a1 )
    {
      result = *(_QWORD *)v6;
      *a1 = *(_QWORD *)v6;
    }
    *(_QWORD *)v6 = 1LL;
    _InterlockedOr(v8, 0);
    if ( *(_BYTE *)(v6 - 583) )
      result = KiAbProcessThreadLocks((int)v6 - 1376, 0, 1, 0, a3, (__int64)a1, a2);
    _InterlockedDecrement16((volatile signed __int16 *)(v6 + 44));
  }
  return result;
}
