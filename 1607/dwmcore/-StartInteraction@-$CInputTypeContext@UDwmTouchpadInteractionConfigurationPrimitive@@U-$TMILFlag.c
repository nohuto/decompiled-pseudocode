/*
 * XREFs of ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00@Z @ 0x18016F804
 * Callers:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0K@Z @ 0x18011276C (-StartInteraction@CInteractionProcessor@@QEAAJ_N0K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
        _BYTE *a1,
        __int64 a2,
        char a3,
        char a4)
{
  unsigned int v5; // ebx
  char v6; // si
  __int64 v7; // rcx

  v5 = 0;
  v6 = a2;
  a1[144] = a1[144] ^ (a1[144] ^ (2 * a3)) & 2 | 1;
  v7 = *(_QWORD *)a1;
  if ( v7 )
  {
    if ( a4 )
    {
      LOBYTE(a2) = a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 72LL))(v7, a2);
    }
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 64LL))(*(_QWORD *)a1);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v5;
}
