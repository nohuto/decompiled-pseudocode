/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D4080
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncRegisterSharedVirtualDesktopVisual_0 @ 0x1C0001AA0 (DwmAsyncRegisterSharedVirtualDesktopVisual_0.c)
 *     UserReferenceDwmApiPort @ 0x1C000B010 (UserReferenceDwmApiPort.c)
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001485C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0021CA0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     GreLockDwmState @ 0x1C0045760 (GreLockDwmState.c)
 */

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, PVOID *a2, __int64 a3)
{
  void *v3; // r10
  int v4; // edx
  __int64 v5; // rcx
  int v6; // edi
  int v7; // r8d
  CompositionObject *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = (void *)a3;
  Object = 0LL;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (PVOID *)MmUserProbeAddress;
  Object = *a2;
  LOBYTE(a3) = 1;
  v6 = DirectComposition::ResourceObject::ResolveHandle(
         v3,
         1LL,
         a3,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v6 >= 0 )
  {
    v8 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 31 )
    {
      Object = 0LL;
      GreLockDwmState(v5, v4, v7);
      v6 = CompositionObject::OpenDwmHandle(v8, &Object);
      if ( v6 >= 0 )
      {
        UserReferenceDwmApiPort();
        v6 = DwmAsyncRegisterSharedVirtualDesktopVisual_0();
      }
      GreUnlockDwmState(v10, v9, v11);
    }
    else
    {
      v6 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v6;
}
