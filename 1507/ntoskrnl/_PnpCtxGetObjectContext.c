/*
 * XREFs of _PnpCtxGetObjectContext @ 0x1404DD5F4
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404DD3CC (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x1404DD4E0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverInfFile @ 0x14054FC98 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDeviceId @ 0x14058871C (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x14071D50C (DrvDbDispatchDriverFile.c)
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
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 216);
  return v3;
}
