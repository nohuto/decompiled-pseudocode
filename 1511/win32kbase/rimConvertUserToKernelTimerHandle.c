/*
 * XREFs of rimConvertUserToKernelTimerHandle @ 0x1C0006464
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimConvertUserToKernelTimerHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 2u, ExTimerObjectType, 0, a2);
    ObfDereferenceObject(v4);
  }
  return v5;
}
