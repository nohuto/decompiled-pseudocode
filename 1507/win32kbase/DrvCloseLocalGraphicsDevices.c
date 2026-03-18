/*
 * XREFs of DrvCloseLocalGraphicsDevices @ 0x1C007E4C0
 * Callers:
 *     InitVideo @ 0x1C007D7D8 (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 */

LONG_PTR DrvCloseLocalGraphicsDevices()
{
  struct tagGRAPHICS_DEVICE *i; // rbx
  LONG_PTR result; // rax

  for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( *((_QWORD *)i + 30) )
    {
      bSetDeviceSessionUsage((__int64)i, 0);
      result = ObfDereferenceObject(*((PVOID *)i + 30));
      *((_QWORD *)i + 17) = 0LL;
      *((_QWORD *)i + 30) = 0LL;
    }
  }
  return result;
}
