/*
 * XREFs of VerifierSeAccessCheck @ 0x1406C0C74
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 */

BOOLEAN __fastcall VerifierSeAccessCheck(
        void *a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        BOOLEAN a3,
        ACCESS_MASK a4,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *a6,
        GENERIC_MAPPING *a7,
        KPROCESSOR_MODE AccessMode,
        ACCESS_MASK *a9,
        NTSTATUS *a10)
{
  return pXdvSeAccessCheck(a1, a2, a3, a4, PreviouslyGrantedAccess, a6, a7, AccessMode, a9, a10);
}
