/*
 * XREFs of DrvCloseLocalGraphicsDevices @ 0x1C005D8D0
 * Callers:
 *     InitVideo @ 0x1C0089318 (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C005E280 (bSetDeviceSessionUsage.c)
 */

LONG_PTR DrvCloseLocalGraphicsDevices()
{
  struct tagGRAPHICS_DEVICE *i; // rbx
  LONG_PTR result; // rax

  for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( *((_QWORD *)i + 30) )
    {
      bSetDeviceSessionUsage(i, 0LL);
      result = ObfDereferenceObject(*((PVOID *)i + 30));
      *((_QWORD *)i + 17) = 0LL;
      *((_QWORD *)i + 30) = 0LL;
    }
  }
  return result;
}
