/*
 * XREFs of _ObReferenceObjectByHandle @ 0x14003F86C
 * Callers:
 *     VerifierObReferenceObjectByHandle @ 0x140754638 (VerifierObReferenceObjectByHandle.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        struct _OBJECT_TYPE *a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  result = ObReferenceObjectByHandle(a1, a2, a3, a4, &Object, HandleInformation);
  *a5 = Object;
  return result;
}
