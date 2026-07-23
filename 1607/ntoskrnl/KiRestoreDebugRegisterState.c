/*
 * XREFs of KiRestoreDebugRegisterState @ 0x14015DF00
 * Callers:
 *     NtContinue @ 0x14015E110 (NtContinue.c)
 *     NtRaiseException @ 0x14015E510 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x14015EF20 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14015F800 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14015FBB0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015FF60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140160310 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401606C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x1401619B0 (KiCallUserMode.c)
 *     KiApcInterrupt @ 0x140162530 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140165560 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140165B40 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140166C50 (KxStartUserThread.c)
 *     KiNmiInterruptStart @ 0x140169D80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14016D640 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401709C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRestoreDebugRegisterState()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x646Au) & 2) != 0 )
  {
    if ( (v3 & 0x200) != 0 )
      result = 2LL;
    if ( (v3 & 0x100) != 0 )
      result = (unsigned int)result | 1;
    if ( (_DWORD)result )
    {
      v5 = result;
      v6 = __readmsr(0x1D9u);
      v7 = HIDWORD(v6);
      result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v7, result));
    }
  }
  return result;
}
