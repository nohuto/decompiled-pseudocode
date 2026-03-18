/*
 * XREFs of RtlReadUCharFromUser @ 0x1403E2190
 * Callers:
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x14003E07C (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINSTRING @ 0x1401BBF30 (NtUserfnINSTRING.c)
 *     NtUserfnINSTRINGNULL @ 0x1401BC0C0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1401BCEE0 (NtUserfnINLPCREATESTRUCT.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1402842D8 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1402C1790 (NtUserfnINLPMDICREATESTRUCT.c)
 *     RtlReadUCharFromUser$thunk$9616555523636242751 @ 0x140357040 (RtlReadUCharFromUser$thunk$9616555523636242751.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 */

char __fastcall RtlReadUCharFromUser(volatile void *a1)
{
  ProbeForRead_0(a1, 1uLL, 1u);
  return *(_BYTE *)a1;
}
