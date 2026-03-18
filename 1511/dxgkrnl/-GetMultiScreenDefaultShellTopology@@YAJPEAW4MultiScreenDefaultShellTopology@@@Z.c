/*
 * XREFs of ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C001FF70
 * Callers:
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C0153534 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C0184964 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 * Callees:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C001FE30 (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 */

__int64 __fastcall GetMultiScreenDefaultShellTopology(
        enum MultiScreenDefaultShellTopology *a1,
        enum MultiScreenShellCapabilities *a2)
{
  __int64 result; // rax
  __int16 v4; // cx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)a1 = 0;
  result = DefaultMultiScreenConfig::DetermineMultiScreenCapabilities((DefaultMultiScreenConfig *)&v5, a2);
  if ( (int)result >= 0 && (v5 & 0x20000000) != 0 )
  {
    v4 = 5;
    if ( (v5 & 0x4000000) == 0 )
      v4 = 3;
    *(_WORD *)a1 = v4;
  }
  return result;
}
