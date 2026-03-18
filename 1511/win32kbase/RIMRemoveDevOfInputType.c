/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C000BCF8
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C007D4D0 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimResetPnpRemovePendingStateBits @ 0x1C000F054 (rimResetPnpRemovePendingStateBits.c)
 *     rimOnPnpRemoveComplete @ 0x1C0010044 (rimOnPnpRemoveComplete.c)
 *     RIMFreeSpecificDev @ 0x1C0010B14 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     RimDeviceTypeToRimInputType @ 0x1C001152C (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  _QWORD *v3; // rbp
  bool v5; // zf
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx

  v3 = (_QWORD *)(a1 + 544);
LABEL_2:
  v5 = *v3 == 0LL;
  v6 = v3;
  while ( !v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(*v6, *(unsigned __int8 *)(*v6 + 48LL)) & a2) != 0
      && (*(_DWORD *)(v7 + 176) & 0x800) == 0 )
    {
      *(_DWORD *)(v7 + 176) |= 8u;
      rimOnPnpRemoveComplete(a1, *v6);
      v8 = *v6;
      v9 = *v6;
      *v6 = *(_QWORD *)(*v6 + 40LL);
      rimResetPnpRemovePendingStateBits(v9);
      rimDoRimDevChangeCallback(a1, v8, 3LL);
      RIMFreeSpecificDev(a1, v8);
      goto LABEL_2;
    }
    v6 = (_QWORD *)(v7 + 40);
    v5 = *(_QWORD *)(v7 + 40) == 0LL;
  }
  return 0LL;
}
