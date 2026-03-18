/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00E3870
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncRegisterSharedVirtualDesktopVisual_0 @ 0x1C0001AC0 (DwmAsyncRegisterSharedVirtualDesktopVisual_0.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1C001F5C0 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
 */

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, PVOID *a2, __int64 a3)
{
  void *v3; // r10
  int v4; // edi
  CompositionObject *v5; // rsi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = (void *)a3;
  Object = 0LL;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (PVOID *)MmUserProbeAddress;
  Object = *a2;
  LOBYTE(a3) = 1;
  v4 = DirectComposition::ResourceObject::ResolveHandle(
         v3,
         1LL,
         a3,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v4 >= 0 )
  {
    v5 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 32 )
    {
      Object = 0LL;
      GreLockDwmState();
      v4 = CompositionObject::OpenDwmHandle(v5, &Object);
      if ( v4 >= 0 )
      {
        UserReferenceDwmApiPort();
        v4 = DwmAsyncRegisterSharedVirtualDesktopVisual_0();
      }
      GreUnlockDwmState();
    }
    else
    {
      v4 = -1073741811;
    }
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
