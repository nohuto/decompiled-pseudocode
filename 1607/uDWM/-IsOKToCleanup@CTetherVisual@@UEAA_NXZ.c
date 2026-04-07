/*
 * XREFs of ?IsOKToCleanup@CTetherVisual@@UEAA_NXZ @ 0x180089DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTetherVisual::IsOKToCleanup(CTetherVisual *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 47);
  result = 0LL;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1LL;
  return result;
}
