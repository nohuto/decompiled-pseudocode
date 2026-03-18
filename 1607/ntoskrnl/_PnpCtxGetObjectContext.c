/*
 * XREFs of _PnpCtxGetObjectContext @ 0x140502AF4
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404D5600 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverDatabase @ 0x1405028D0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x1405029E4 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverInfFile @ 0x140503EA4 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverFile @ 0x1406E3A98 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 9 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 224);
  return v3;
}
