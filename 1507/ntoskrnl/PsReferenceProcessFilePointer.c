/*
 * XREFs of PsReferenceProcessFilePointer @ 0x1404676D0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     PsInitializeFullProcessImageName @ 0x140466C64 (PsInitializeFullProcessImageName.c)
 *     CmpCheckWrpKeyAccess @ 0x140466E0C (CmpCheckWrpKeyAccess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned __int64 v5; // rtt
  __int64 Count; // rcx
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rtt
  unsigned __int64 v11; // rtt

  v3 = a1 + 92;
  _m_prefetchw(&a1[92]);
  v5 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v5 + 2, v5)
    && !ExfAcquireRundownProtection(a1 + 92) )
  {
    return 3221225473LL;
  }
  Count = a1[119].Count;
  if ( !Count )
  {
    _m_prefetchw(v3);
    v11 = v3->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v11 - 2, v11) )
      ExfReleaseRundownProtection(v3);
    return 3221225473LL;
  }
  v7 = MiSectionControlArea(Count);
  v8 = MI_REFERENCE_CONTROL_AREA_FILE(v7);
  _m_prefetchw(v3);
  v9 = v3->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v9 - 2, v9) )
    ExfReleaseRundownProtection(v3);
  *a2 = v8;
  return 0LL;
}
