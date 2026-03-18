/*
 * XREFs of GreSetPaletteOwner @ 0x1C000C180
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetPaletteOwner(struct _DEVOBJ_EXTENSION *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 != WPP_MAIN_CB.DeviceObjectExtension )
  {
    LOBYTE(a3) = 8;
    return HmgSetOwner(a1, a2, a3);
  }
  return result;
}
