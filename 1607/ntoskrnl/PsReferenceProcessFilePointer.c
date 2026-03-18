/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14046EFC0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14007C05C (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x140219CAC (SepVerifyDesktopAppxImage.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x140428E24 (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     CmpCheckExeOwnerForPca @ 0x140601DF0 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 92;
  if ( ExAcquireRundownProtection(a1 + 92) )
  {
    Count = a1[119].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFile(v6);
      ExReleaseRundownProtection(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection(v2);
  }
  return 3221225473LL;
}
