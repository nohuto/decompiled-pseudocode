/*
 * XREFs of PiAuCreateSecurityObjects @ 0x1407DDDA0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     PiAuFreeUserSids @ 0x1407DDDF4 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x1407DE000 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 */

__int64 PiAuCreateSecurityObjects()
{
  int UserSids; // ebx
  _BYTE v2[72]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, 0x38uLL);
  UserSids = PiAuCreateUserSids(v2);
  if ( UserSids >= 0 )
  {
    UserSids = PiAuCreateStandardSecurityObject(v2);
    if ( UserSids >= 0 )
      UserSids = PiAuCreateLocalSystemSecurityObject(v2);
  }
  PiAuFreeUserSids(v2);
  return (unsigned int)UserSids;
}
