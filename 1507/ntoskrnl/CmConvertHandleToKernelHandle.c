/*
 * XREFs of CmConvertHandleToKernelHandle @ 0x1404455C0
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1406521DC (NtSaveMergedKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmConvertHandleToKernelHandle(
        void *a1,
        void *a2,
        KPROCESSOR_MODE a3,
        ACCESS_MASK a4,
        PHANDLE Handle)
{
  POBJECT_TYPE *v5; // rsi
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  v5 = CmKeyObjectType;
  if ( a1 )
  {
    v8 = ObReferenceObjectByHandle(a1, a4, (POBJECT_TYPE)CmKeyObjectType, a3, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = ObOpenObjectByPointer(Object, 0x200u, 0LL, a4, (POBJECT_TYPE)v5, 0, Handle);
      ObfDereferenceObject(Object);
    }
    return (unsigned int)v8;
  }
  else
  {
    *Handle = 0LL;
    return 0LL;
  }
}
