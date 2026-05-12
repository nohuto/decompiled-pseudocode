/*
 * XREFs of StorpAllocatePool @ 0x1C00116B4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 */

__int64 __fastcall StorpAllocatePool(__int64 a1, unsigned int a2, ULONG a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax
  __int64 v7; // r9

  v4 = 0;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( KeGetCurrentIrql() > 2u )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 27LL, &WPP_8a1d37565fd3ed53073ecf5f585bed2d_Traceguids, a4);
      }
      return (unsigned int)-1056964600;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a2, a3);
      *a4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 28LL, &WPP_8a1d37565fd3ed53073ecf5f585bed2d_Traceguids, v7);
        }
        return (unsigned int)-1056964605;
      }
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v4;
}
