/*
 * XREFs of FindConfigDeviceForInput @ 0x1C01D4DF4
 * Callers:
 *     SetUserPTPEnabledPreference @ 0x1C01D1800 (SetUserPTPEnabledPreference.c)
 *     ConfigurePointerDevice @ 0x1C01D48A0 (ConfigurePointerDevice.c)
 * Callees:
 *     ?IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z @ 0x1C01D4334 (-IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z.c)
 */

__int64 __fastcall FindConfigDeviceForInput(struct tagHIDDESC *a1, struct DEVICEINFO *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 i; // rbx

  v3 = 0;
  *a3 = 0LL;
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_BYTE *)(i + 48) == 3
      && (unsigned int)IsParentCommon(
                         a2,
                         (struct DEVICEINFO *)i,
                         a1,
                         *(_WORD *)(*(_QWORD *)(i + 400) + 110LL),
                         *(_WORD *)(*(_QWORD *)(i + 400) + 112LL)) )
    {
      v3 = 1;
      *a3 = i;
      return v3;
    }
  }
  return v3;
}
