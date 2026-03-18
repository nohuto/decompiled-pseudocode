/*
 * XREFs of ObWaitForSingleObject @ 0x140534394
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObpGetWaitObject @ 0x1400EDF20 (ObpGetWaitObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ObWaitForSingleObject(
        void *a1,
        KPROCESSOR_MODE a2,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        LARGE_INTEGER *Timeout)
{
  NTSTATUS v7; // ebx
  PVOID v8; // rdi
  void *WaitObject; // rax
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  v7 = ObReferenceObjectByHandleWithTag(a1, 0x100000u, 0LL, a2, 0x7457624Fu, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = Object;
    WaitObject = (void *)ObpGetWaitObject((__int64)Object - 48);
    v7 = KeWaitForSingleObject(WaitObject, UserRequest, a3, a4, Timeout);
    ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
  }
  return (unsigned int)v7;
}
