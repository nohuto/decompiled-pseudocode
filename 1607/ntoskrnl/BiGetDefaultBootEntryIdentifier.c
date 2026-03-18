/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x1406D24D0
 * Callers:
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BiGetDefaultBootEntryIdentifier(__int64 a1, _OWORD *a2)
{
  int ElementDataWithFlags; // ebx
  __int64 v4; // r8
  int v6; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  Handle = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, (__int128 *)&GUID_WINDOWS_BOOTMGR, &Handle);
  if ( ElementDataWithFlags >= 0 )
  {
    v6 = 16;
    ElementDataWithFlags = BcdGetElementDataWithFlags((__int64)Handle, 0x23000003u, v4, (__int64)&v8, &v6);
    if ( ElementDataWithFlags >= 0 )
      *a2 = v8;
  }
  if ( Handle )
    BcdCloseObject(Handle);
  return (unsigned int)ElementDataWithFlags;
}
