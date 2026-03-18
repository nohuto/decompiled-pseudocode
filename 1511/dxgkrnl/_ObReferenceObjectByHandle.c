/*
 * XREFs of _ObReferenceObjectByHandle @ 0x1C001C8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
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
