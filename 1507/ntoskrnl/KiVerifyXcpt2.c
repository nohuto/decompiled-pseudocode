/*
 * XREFs of KiVerifyXcpt2 @ 0x1407D9D38
 * Callers:
 *     KiVerifyXcpt15 @ 0x14079A2A0 (KiVerifyXcpt15.c)
 * Callees:
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     KiVerifyXcptFilter @ 0x1407DA314 (KiVerifyXcptFilter.c)
 *     KiVerifyXcptFinally @ 0x1407DA32C (KiVerifyXcptFinally.c)
 */

__int64 __fastcall KiVerifyXcpt2(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  v2[4] = v2;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *(int *)(a1 + 12);
  *(_QWORD *)(a1 + 24) += result;
  return result;
}
