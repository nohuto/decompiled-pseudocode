/*
 * XREFs of PnpCollectOpenHandlesCallBack @ 0x14060E540
 * Callers:
 *     <none>
 * Callees:
 *     IopDebugPrint @ 0x1401BF73C (IopDebugPrint.c)
 *     PnpAddVetoInformation @ 0x14060E354 (PnpAddVetoInformation.c)
 */

__int64 __fastcall PnpCollectOpenHandlesCallBack(const void *a1, __int64 a2, const void *a3, int a4, __int64 a5)
{
  if ( *(_BYTE *)(a5 + 36) )
    IopDebugPrint(
      0x14u,
      "  DeviceObject:%p ProcessID:%dT FileObject:%p Handle:%dT\n",
      a1,
      *(_QWORD *)(a2 + 744),
      a3,
      a4);
  if ( *(_BYTE *)(a5 + 37) )
    PnpAddVetoInformation(*(PVOID *)a5, (_QWORD *)(a5 + 16), *(_DWORD *)(a2 + 744));
  ++*(_DWORD *)(a5 + 32);
  return 0LL;
}
