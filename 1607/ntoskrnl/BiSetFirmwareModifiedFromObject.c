/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x140125E3C
 * Callers:
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1406D2034 (BcdDeleteObject.c)
 * Callees:
 *     BiOpenStoreKeyFromObject @ 0x140125E80 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModified @ 0x14012DF80 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
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
