/*
 * XREFs of PiAuCreateSecurityObjects @ 0x140769B88
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     PiAuFreeUserSids @ 0x140769BDC (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140769C5C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140769DE8 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
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
