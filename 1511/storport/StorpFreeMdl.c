/*
 * XREFs of StorpFreeMdl @ 0x1C002B154
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 */

__int64 __fastcall StorpFreeMdl(__int64 a1, struct _MDL *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      IoFreeMdl(a2);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x24u,
          (__int64)&WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids);
      }
      return (unsigned int)-1056964600;
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
        0x23u,
        (__int64)&WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  return v2;
}
