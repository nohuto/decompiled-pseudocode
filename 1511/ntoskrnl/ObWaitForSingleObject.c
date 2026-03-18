/*
 * XREFs of ObWaitForSingleObject @ 0x1404F546C
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetWaitObject @ 0x14002E8F8 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
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
