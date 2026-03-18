/*
 * XREFs of ProtectHandle @ 0x1C004F034
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProtectHandle(void *a1, struct _OBJECT_TYPE *a2, char a3)
{
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  struct _OBJECT_HANDLE_INFORMATION v8; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF
  bool v10; // [rsp+68h] [rbp+20h] BYREF
  char v11; // [rsp+69h] [rbp+21h]

  v5 = ObReferenceObjectByHandle(a1, 0x1F0003u, a2, 1, &Object, &v8);
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = 1;
    v11 = a3;
    v10 = (v8.HandleAttributes & 2) != 0;
    v5 = ObSetHandleAttributes(a1, &v10, v6);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v5;
}
