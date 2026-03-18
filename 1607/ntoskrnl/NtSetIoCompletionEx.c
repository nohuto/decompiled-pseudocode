/*
 * XREFs of NtSetIoCompletionEx @ 0x1403E20B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx @ 0x14007E5C4 (IoSetIoCompletionEx.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetIoCompletionEx(void *a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v9; // ebx
  signed __int32 v10; // eax
  PVOID v11; // rdi
  _DWORD *v12; // rsi
  PVOID v14; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  v9 = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v9 = ObReferenceObjectByHandle(a2, 2u, ObjectType, KeGetCurrentThread()->PreviousMode, &v14, 0LL);
  if ( v9 >= 0 )
  {
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
    v11 = Object;
    v12 = v14;
    if ( v10 )
    {
      v9 = -1073741584;
    }
    else
    {
      v9 = IoSetIoCompletionEx((__int64)Object, a3, a4, a5, a6, 0, (__int64)v14 + 8);
      if ( v9 >= 0 )
        goto LABEL_5;
      *v12 = 0;
    }
    if ( v12 )
      ObfDereferenceObject(v12);
    goto LABEL_5;
  }
  v11 = Object;
LABEL_5:
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)v9;
}
