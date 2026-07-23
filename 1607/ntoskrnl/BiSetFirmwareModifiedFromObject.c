/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1401263AC
 * Callers:
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1406D216C (BcdDeleteObject.c)
 * Callees:
 *     BiOpenStoreKeyFromObject @ 0x1401263F0 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModified @ 0x14012E4F0 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // edi
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = BiOpenStoreKeyFromObject(a1, &Handle);
  if ( v2 >= 0 )
  {
    LOBYTE(v1) = 1;
    BiSetFirmwareModified(Handle, v1);
  }
  if ( Handle )
    BiCloseKey(Handle);
  return (unsigned int)v2;
}
