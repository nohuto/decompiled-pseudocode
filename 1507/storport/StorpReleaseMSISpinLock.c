/*
 * XREFs of StorpReleaseMSISpinLock @ 0x1C0029D6C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 */

__int64 __fastcall StorpReleaseMSISpinLock(__int64 a1, unsigned int a2, KIRQL a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  if ( a1 )
  {
    v4 = **(_QWORD **)(a1 - 16);
    if ( !*(_BYTE *)(v4 + 4449) )
      return (unsigned int)-1056964601;
    v5 = *(_QWORD *)(v4 + 4432);
    if ( a2 < *(_DWORD *)(v5 + 4) )
    {
      KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * a2 + 24), a3);
      return v3;
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x38u,
      (__int64)&WPP_8a1d37565fd3ed53073ecf5f585bed2d_Traceguids);
  }
  return (unsigned int)-1056964602;
}
