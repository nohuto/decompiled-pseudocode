/*
 * XREFs of RtlInitLargeAnsiString @ 0x1C00907B4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     NtUserfnINSTRINGNULL @ 0x1C008FE20 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C008FEF0 (NtUserfnINLPCREATESTRUCT.c)
 *     NtUserfnINSTRING @ 0x1C0140070 (NtUserfnINSTRING.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C01496F0 (NtUserfnINLPMDICREATESTRUCT.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C0217858 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeAnsiString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r8d
  __int64 v4; // rax

  result = 0x80000000LL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) |= 0x80000000;
  v3 = *(_DWORD *)(a1 + 4);
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_BYTE *)(a2 + v4) );
    *(_DWORD *)a1 = v4;
    result = v3 ^ (v3 ^ ((_DWORD)v4 + 1)) & 0x7FFFFFFFu;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v3 & 0x80000000;
  }
  return result;
}
