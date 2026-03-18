/*
 * XREFs of ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BA944
 * Callers:
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00864FC (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvAddEntryToGraphicsDeviceList(wchar_t *a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  if ( gpGraphicsDeviceList )
    *((_QWORD *)gpGraphicsDeviceListLast + 16) = a1;
  else
    gpGraphicsDeviceList = a1;
  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)a1;
}
