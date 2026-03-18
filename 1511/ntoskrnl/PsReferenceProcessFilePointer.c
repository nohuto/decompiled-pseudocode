/*
 * XREFs of PsReferenceProcessFilePointer @ 0x1404A995C
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140092DB0 (SepMandatorySubProcessToken.c)
 *     PspCallProcessNotifyRoutines @ 0x1403F6564 (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A976C (CmpCheckWrpKeyAccess.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
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
      v7 = MI_REFERENCE_CONTROL_AREA_FILE(v6);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
