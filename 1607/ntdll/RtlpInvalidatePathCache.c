/*
 * XREFs of RtlpInvalidatePathCache @ 0x180008EE0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x1800069C0 (RtlSetSearchPathMode.c)
 *     LdrAddDllDirectory @ 0x180090680 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x1800DA040 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DA6B8 (RtlpSignalSystemDirsModification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInvalidatePathCache(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( (*(_QWORD *)(v1 + 80))-- == 1LL )
      return v1;
  }
  return result;
}
