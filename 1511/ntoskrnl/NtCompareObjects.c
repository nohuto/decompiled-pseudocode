/*
 * XREFs of NtCompareObjects @ 0x1404AE510
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v9; // [rsp+58h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(FirstObjectHandle, 0, 0LL, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = ObReferenceObjectByHandle(SecondObjectHandle, 0, 0LL, PreviousMode, &v9, 0LL);
    v6 = Object;
    v7 = v5;
    if ( v5 >= 0 )
    {
      v7 = v9 != Object ? 0xC00001AC : 0;
      ObfDereferenceObject(v9);
    }
    ObfDereferenceObject(v6);
    return v7;
  }
  return result;
}
