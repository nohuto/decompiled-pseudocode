/*
 * XREFs of CreateSharedSystemVisualObject @ 0x1C00789F0
 * Callers:
 *     <none>
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001F5D0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0071FC8 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007700C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall CreateSharedSystemVisualObject(struct DirectComposition::ResourceObject **a1)
{
  int v2; // ebx
  int v4; // [rsp+50h] [rbp-30h] BYREF
  __int64 v5; // [rsp+58h] [rbp-28h]
  __int64 v6; // [rsp+60h] [rbp-20h]
  int v7; // [rsp+68h] [rbp-18h]
  HANDLE v8; // [rsp+70h] [rbp-10h]
  __int64 v9; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  struct DirectComposition::ResourceObject *v11; // [rsp+A8h] [rbp+28h] BYREF

  *a1 = 0LL;
  v2 = UserAllocDefaultCompositionSecurityDescriptor(0, (__int64 *)&Handle);
  if ( v2 >= 0 )
  {
    v5 = 0LL;
    v6 = 0LL;
    v9 = 0LL;
    v4 = 48;
    v7 = 512;
    v8 = Handle;
    v2 = CompositionObject::Create(
           0LL,
           (__int64)&v4,
           3u,
           0LL,
           2,
           48,
           (__int64 (__fastcall *)(PVOID, __int64, char *))DirectComposition::ResourceObject::ObjectInit,
           31LL,
           &Handle);
    if ( v2 >= 0 )
    {
      v2 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3u, 0, &v11);
      if ( v2 >= 0 )
        *a1 = v11;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool();
  }
  return (unsigned int)v2;
}
