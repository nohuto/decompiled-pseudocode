/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D6090
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncRegisterSharedVirtualDesktopVisual_0 @ 0x1C0001AC0 (DwmAsyncRegisterSharedVirtualDesktopVisual_0.c)
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1C0037340 (GreLockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0045F80 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C0072820 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007700C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, PVOID *a2, void *a3)
{
  int v3; // edi
  CompositionObject *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (PVOID *)MmUserProbeAddress;
  Object = *a2;
  v3 = DirectComposition::ResourceObject::ResolveHandle(a3, 1u, 1, (struct DirectComposition::ResourceObject **)&Object);
  if ( v3 >= 0 )
  {
    v4 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 31 )
    {
      Object = 0LL;
      GreLockDwmState();
      v3 = CompositionObject::OpenDwmHandle(v4, &Object, v5, v6);
      if ( v3 >= 0 )
      {
        UserReferenceDwmApiPort();
        v3 = DwmAsyncRegisterSharedVirtualDesktopVisual_0();
      }
      GreUnlockDwmState();
    }
    else
    {
      v3 = -1073741811;
    }
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
