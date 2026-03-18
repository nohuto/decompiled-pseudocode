/*
 * XREFs of Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002B46C
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002ABC0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     memmove @ 0x1C0007C40 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithStoppedCompletion(
        __int64 a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v7 = *a2;
    *(_DWORD *)(v7 + 92) += a4;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 32LL) & 1) != 0 && *(_DWORD *)(v7 + 60) == 2 )
      memmove((void *)a2[8], *(const void **)(a2[9] + 16), a4);
    if ( *(_DWORD *)(v7 + 92) == *(_DWORD *)(v7 + 88) )
    {
      *(_DWORD *)(v7 + 52) = 1;
    }
    else if ( a3 == 28 )
    {
      *(_DWORD *)(v7 + 52) = 28;
    }
  }
  result = a5;
  *(_DWORD *)(a1 + 304) = a5;
  return result;
}
