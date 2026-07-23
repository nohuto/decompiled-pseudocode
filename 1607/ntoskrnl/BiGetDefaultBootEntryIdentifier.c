/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x1406D2608
 * Callers:
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BiGetDefaultBootEntryIdentifier(void *a1, _OWORD *a2)
{
  NTSTATUS ElementDataWithFlags; // ebx
  BCD_FLAGS v4; // r8d
  ULONG BufferSize; // [rsp+30h] [rbp-38h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-30h] BYREF
  __int128 Buffer; // [rsp+40h] [rbp-28h] BYREF

  BcdObjectHandle = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( ElementDataWithFlags >= 0 )
  {
    BufferSize = 16;
    ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, 0x23000003u, v4, &Buffer, &BufferSize);
    if ( ElementDataWithFlags >= 0 )
      *a2 = Buffer;
  }
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)ElementDataWithFlags;
}
