/*
 * XREFs of SmKmVolumeQueryUniqueId @ 0x1406DE708
 * Callers:
 *     SmKmEtwAppendProductName @ 0x14025775C (SmKmEtwAppendProductName.c)
 *     SmcCacheStart @ 0x1406DB3A8 (SmcCacheStart.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     SmSanitizeString @ 0x1402569F8 (SmSanitizeString.c)
 *     SmKmSendDeviceControl @ 0x1406DD5A4 (SmKmSendDeviceControl.c)
 */

__int64 __fastcall SmKmVolumeQueryUniqueId(struct _DEVICE_OBJECT *a1, unsigned __int16 *a2, ULONG a3)
{
  BOOLEAN v6; // bp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  int v11; // ebx

  v6 = IoSetThreadHardErrorMode(0);
  v10 = SmKmSendDeviceControl(v7, a1, v8, v9, a2, a3);
  if ( v10 >= 0 )
  {
    v11 = *a2 >> 1;
    if ( v11 )
    {
      memmove(a2, a2 + 1, *a2);
      SmSanitizeString(a2, 2 * v11 + 2);
      v10 = 0;
    }
    else
    {
      v10 = -1073740730;
    }
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v10;
}
