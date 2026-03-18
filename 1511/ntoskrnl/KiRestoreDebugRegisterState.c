/*
 * XREFs of KiRestoreDebugRegisterState @ 0x140154240
 * Callers:
 *     NtContinue @ 0x140154450 (NtContinue.c)
 *     NtRaiseException @ 0x1401546F0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x140154BE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140155360 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401555B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140155800 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140155A50 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140155C90 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x140156DB0 (KiCallUserMode.c)
 *     KiApcInterrupt @ 0x1401575F0 (KiApcInterrupt.c)
 *     KiDpcInterrupt @ 0x140157C00 (KiDpcInterrupt.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x14015A210 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x14015B3A0 (KxStartUserThread.c)
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 *     KiNmiInterruptStart @ 0x14015EB40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14015FA00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14015FFC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140162F00 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x140163700 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140165400 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140165E80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140166140 (KiUmsFastReturnToUser.c)
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
  if ( (__readgsbyte(0x63EAu) & 2) != 0 )
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
