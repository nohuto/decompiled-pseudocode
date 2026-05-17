/*
 * XREFs of RtlpInvalidatePathCache @ 0x180059D70
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x180059CC0 (RtlSetSearchPathMode.c)
 *     LdrRemoveDllDirectory @ 0x1800C90F0 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800C9754 (RtlpSignalSystemDirsModification.c)
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
    if ( !--*(_QWORD *)(v1 + 80) )
      return v1;
  }
  return result;
}
