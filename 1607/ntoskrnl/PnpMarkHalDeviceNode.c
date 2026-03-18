/*
 * XREFs of PnpMarkHalDeviceNode @ 0x1407BB2D8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

__int64 PnpMarkHalDeviceNode()
{
  __int64 result; // rax
  __int64 i; // rcx

  result = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)i )
  {
    result = (unsigned int)(*(_DWORD *)(i + 300) - 775);
    if ( (unsigned int)result <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      IopInitHalDeviceNode = i;
      return PipSetDevNodeFlags(i, 4);
    }
  }
  return result;
}
