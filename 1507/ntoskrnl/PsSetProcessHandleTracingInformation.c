/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x1406BFC88
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x14074A890 (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExDisableHandleTracing @ 0x1402630B0 (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x1406EFFA0 (ExEnableHandleTracing.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 v9; // rtt

  v4 = ObReferenceProcessHandleTable(a1);
  v8 = 0;
  if ( v4 )
  {
    if ( a2 )
      v8 = ExEnableHandleTracing(v4, *(unsigned int *)(a2 + 4));
    else
      ExDisableHandleTracing(v4, v5, v6, v7);
    _m_prefetchw(&a1[92]);
    v9 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v9 - 2, v9) )
      ExfReleaseRundownProtection(a1 + 92);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v8;
}
