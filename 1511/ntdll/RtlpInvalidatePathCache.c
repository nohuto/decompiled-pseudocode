/*
 * XREFs of RtlpInvalidatePathCache @ 0x180084570
 * Callers:
 *     LdrSetDllDirectory @ 0x180001750 (LdrSetDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x1800844C0 (RtlSetSearchPathMode.c)
 *     LdrAddDllDirectory @ 0x18008D820 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x1800D1BD0 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800D2234 (RtlpSignalSystemDirsModification.c)
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
