/*
 * XREFs of CreateSharedSystemVisualObject @ 0x1C00156E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C000FC10 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001485C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0032F10 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall CreateSharedSystemVisualObject(struct DirectComposition::ResourceObject **a1)
{
  int v2; // ebx
  HANDLE v3; // rsi
  __int64 v5; // [rsp+28h] [rbp-58h]
  int v6; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  HANDLE v10; // [rsp+70h] [rbp-10h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  struct DirectComposition::ResourceObject *v13; // [rsp+A8h] [rbp+28h] BYREF

  *a1 = 0LL;
  v2 = UserAllocDefaultCompositionSecurityDescriptor(0LL, &Handle);
  if ( v2 >= 0 )
  {
    v3 = Handle;
    v7 = 0LL;
    v8 = 0LL;
    v11 = 0LL;
    LODWORD(v5) = 48;
    v6 = 48;
    v9 = 512;
    v10 = Handle;
    v2 = CompositionObject::Create(
           0LL,
           (__int64)&v6,
           3u,
           0LL,
           2,
           v5,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
           31LL,
           &Handle);
    if ( v2 >= 0 )
    {
      v2 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, &v13);
      if ( v2 >= 0 )
        *a1 = v13;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool(v3);
  }
  return (unsigned int)v2;
}
