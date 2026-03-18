/*
 * XREFs of VerifierMmCreateSection @ 0x1406CFC60
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 */

int __fastcall VerifierMmCreateSection(
        _QWORD *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        void *a7,
        struct _OBJECT_HANDLE_INFORMATION *a8)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  return pXdvMmCreateSection(a1, a2, a3, a4, a5, a6, a7, a8);
}
