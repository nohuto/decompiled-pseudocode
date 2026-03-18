/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C000A524
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C007D9C0 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimResetPnpRemovePendingStateBits @ 0x1C000A4CC (rimResetPnpRemovePendingStateBits.c)
 *     RIMFreeSpecificDev @ 0x1C000CEB0 (RIMFreeSpecificDev.c)
 *     rimOnPnpRemoveComplete @ 0x1C000EA9C (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx

  v3 = (__int64 *)(a1 + 552);
  while ( 1 )
  {
    v5 = v3;
    if ( !*v3 )
      break;
    while ( ((unsigned int)RimDeviceTypeToRimInputType(*v5, *(unsigned __int8 *)(*v5 + 48)) & a2) == 0
         || (*(_DWORD *)(v6 + 184) & 0x800) != 0 )
    {
      v5 = (__int64 *)(v6 + 40);
      if ( !*(_QWORD *)(v6 + 40) )
        return 0LL;
    }
    *(_DWORD *)(v6 + 184) |= 8u;
    rimOnPnpRemoveComplete(a1, *v5);
    v7 = *v5;
    *v5 = *(_QWORD *)(*v5 + 40);
    *(_QWORD *)(v7 + 40) = 0LL;
    rimResetPnpRemovePendingStateBits(v7);
    rimDoRimDevChange(a1, v7, 3LL);
    RIMFreeSpecificDev(a1, v7);
  }
  return 0LL;
}
