/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C009D208
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxProcessAsyncSendMessage @ 0x1C0072748 (xxxProcessAsyncSendMessage.c)
 *     NtUserfnINSTRINGNULL @ 0x1C009CF70 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C009D040 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     NtUserfnINSTRING @ 0x1C0147AE0 (NtUserfnINSTRING.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C014F1A0 (NtUserfnINLPMDICREATESTRUCT.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C02103F8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
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
