/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C00900B8
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C008F8CC (xxxCreateDefaultImeWindow.c)
 *     xxxProcessAsyncSendMessage @ 0x1C008FCE8 (xxxProcessAsyncSendMessage.c)
 *     NtUserfnINSTRINGNULL @ 0x1C008FE20 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C008FEF0 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     NtUserfnINSTRING @ 0x1C0140070 (NtUserfnINSTRING.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C01496F0 (NtUserfnINLPMDICREATESTRUCT.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FF50C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C0217858 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rax
  int v4; // eax

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) &= ~0x80000000;
  v2 = *(_DWORD *)(a1 + 4);
  if ( a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(a2 + 2 * v3) );
    v4 = 2 * v3;
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v2 ^ (v2 ^ (v4 + 2)) & 0x7FFFFFFF;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v2 & 0x80000000;
  }
}
