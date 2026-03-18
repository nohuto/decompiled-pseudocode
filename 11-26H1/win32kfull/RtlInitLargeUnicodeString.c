/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1401BC6E8
 * Callers:
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x14003E07C (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1402C1790 (NtUserfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // r8d

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) &= ~0x80000000;
  result = 0LL;
  if ( a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(a2 + 2 * v3) );
    v4 = 2 * v3;
    result = (v4 + 2) & 0x7FFFFFFF;
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
