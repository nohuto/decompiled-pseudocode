/*
 * XREFs of StorpGetSystemAddress @ 0x1C002F428
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetSystemAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v6; // rcx
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int64 v9; // rcx
  PVOID v10; // rax

  v4 = 0;
  if ( !a4 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v7 = 39;
LABEL_6:
    WPP_SF_((__int64)v6->AttachedDevice, v7, (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
    return (unsigned int)-1056964602;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v8 = *(_QWORD *)(a2 + 96);
    else
      v8 = *(_QWORD *)(a2 + 48);
    if ( a3 )
      v9 = *(_QWORD *)(v8 + 136);
    else
      v9 = *(_QWORD *)(v8 + 104);
    if ( !v9 )
    {
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return (unsigned int)-1056964602;
      }
      v7 = 41;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(v9 + 10) & 5) != 0 )
      v10 = *(PVOID *)(v9 + 24);
    else
      v10 = MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000010u);
    *a4 = v10;
    if ( !v10 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Au,
          (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
      }
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x28u,
        (__int64)&WPP_adf5a490639137350fe391398fd0549f_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
