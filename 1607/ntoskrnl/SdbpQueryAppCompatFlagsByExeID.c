/*
 * XREFs of SdbpQueryAppCompatFlagsByExeID @ 0x1405739D4
 * Callers:
 *     SdbGetEntryFlags @ 0x140573930 (SdbGetEntryFlags.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     AslRegistryGetKey @ 0x140573A40 (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x1406C57F0 (AslRegistryGetUInt32.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpQueryAppCompatFlagsByExeID(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int Key; // eax
  unsigned int v7; // ebx
  bool v8; // zf
  int UInt32; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  Handle = 0LL;
  Key = AslRegistryGetKey(&Handle, a2, a3, (unsigned int)a3);
  v7 = Key;
  if ( Key >= 0 )
  {
    UInt32 = AslRegistryGetUInt32(&v11, Handle, a2);
    v7 = UInt32;
    if ( UInt32 >= 0 )
    {
      v7 = 0;
    }
    else if ( UInt32 != -1073741772 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
        75,
        (unsigned int)"AslRegistryGetUInt32 failed for key: '%ws' [%x]");
    }
  }
  else if ( Key != -1073741772 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
      64,
      (unsigned int)"AslRegistryGetKey failed [%x]");
  }
  v8 = Handle == 0LL;
  *a4 = v11;
  if ( !v8 )
    ZwClose(Handle);
  return v7;
}
