/*
 * XREFs of SeSrpAccessCheck @ 0x1402198A8
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 */

bool __fastcall SeSrpAccessCheck(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        char a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        char a6)
{
  return SepCommonAccessCheckEx(a1, a2, a3, a4, a5, a6);
}
