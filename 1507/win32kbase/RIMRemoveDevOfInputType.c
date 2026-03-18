/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C0075344
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0071410 (RIMRemoveInputOfType.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C001A844 (RimDeviceTypeToRimInputType.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0075A10 (rimResetPnpRemovePendingStateBits.c)
 *     RIMFreeSpecificDev @ 0x1C00760D0 (RIMFreeSpecificDev.c)
 *     rimOnPnpRemoveComplete @ 0x1C0076908 (rimOnPnpRemoveComplete.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx

  v3 = (__int64 *)(a1 + 512);
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
    v8 = *v5;
    *v5 = *(_QWORD *)(*v5 + 40);
    rimResetPnpRemovePendingStateBits(v8);
    RIMFreeSpecificDev(a1, v7);
  }
  return 0LL;
}
