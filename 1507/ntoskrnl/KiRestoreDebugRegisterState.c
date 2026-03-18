/*
 * XREFs of KiRestoreDebugRegisterState @ 0x140182BC0
 * Callers:
 *     NtContinue @ 0x140182DD0 (NtContinue.c)
 *     NtRaiseException @ 0x1401831C0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401837D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401840A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140184440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401847E0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140184B80 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140184F10 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x1401861E0 (KiCallUserMode.c)
 *     KiApcInterrupt @ 0x140186D60 (KiApcInterrupt.c)
 *     KiDpcInterrupt @ 0x1401873D0 (KiDpcInterrupt.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x14018AD30 (KxStartUserThread.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 *     KiNmiInterruptStart @ 0x14018E380 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018F3C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140191BC0 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x140192100 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401949C0 (KiUmsFastReturnToUser.c)
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
