/*
 * XREFs of VerifierMmMapViewOfSection @ 0x1406D00BC
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmMapViewOfSection(
        __int64 a1,
        struct _KPROCESS *a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a10, retaddr);
  return pXdvMmMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
