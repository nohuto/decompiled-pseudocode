/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x14063EDC4
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x1406C7E8C (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExDisableHandleTracing @ 0x1402137F0 (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x14066C82C (ExEnableHandleTracing.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx

  v4 = ObReferenceProcessHandleTable(a1);
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
      v5 = ExEnableHandleTracing(v4, *(unsigned int *)(a2 + 4));
    else
      ExDisableHandleTracing(v4);
    ExReleaseRundownProtection_0(a1 + 92);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
