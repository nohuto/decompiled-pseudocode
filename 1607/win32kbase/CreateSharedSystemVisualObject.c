/*
 * XREFs of CreateSharedSystemVisualObject @ 0x1C007D090
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C003A440 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00483A4 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall CreateSharedSystemVisualObject(struct DirectComposition::ResourceObject **a1)
{
  int v2; // ebx
  __int64 v4; // [rsp+28h] [rbp-58h]
  int v5; // [rsp+50h] [rbp-30h] BYREF
  __int64 v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  HANDLE v9; // [rsp+70h] [rbp-10h]
  __int64 v10; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  struct DirectComposition::ResourceObject *v12; // [rsp+A8h] [rbp+28h] BYREF

  *a1 = 0LL;
  v2 = UserAllocDefaultCompositionSecurityDescriptor(0, (__int64 *)&Handle);
  if ( v2 >= 0 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v10 = 0LL;
    LODWORD(v4) = 48;
    v5 = 48;
    v8 = 512;
    v9 = Handle;
    v2 = CompositionObject::Create(
           0LL,
           (__int64)&v5,
           3u,
           0LL,
           2,
           v4,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
           32LL,
           &Handle);
    if ( v2 >= 0 )
    {
      v2 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, &v12);
      if ( v2 >= 0 )
        *a1 = v12;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool();
  }
  return (unsigned int)v2;
}
