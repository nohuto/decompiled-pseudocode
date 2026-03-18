/*
 * XREFs of ?DrvMoveGraphicsDevice@@YAXPEAUtagGRAPHICS_DEVICE@@00@Z @ 0x1C008337C
 * Callers:
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00832D4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvMoveGraphicsDevice(
        struct tagGRAPHICS_DEVICE *a1,
        struct tagGRAPHICS_DEVICE *a2,
        struct tagGRAPHICS_DEVICE *a3)
{
  if ( a1 && a2 && a2 != a3 )
  {
    *((_QWORD *)a2 + 16) = *((_QWORD *)a1 + 16);
    if ( a3 )
    {
      *((_QWORD *)a1 + 16) = *((_QWORD *)a3 + 16);
      *((_QWORD *)a3 + 16) = a1;
    }
    else
    {
      *((_QWORD *)a1 + 16) = gpGraphicsDeviceList;
      gpGraphicsDeviceList = (wchar_t *)a1;
    }
    if ( a1 == gpGraphicsDeviceListLast )
      gpGraphicsDeviceListLast = a2;
  }
}
