/*
 * XREFs of SeAccessCheckEx @ 0x140135CD0
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 */

__int64 __fastcall SeAccessCheckEx(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  return SepCommonAccessCheckEx(a1, a5, a6, 0);
}
