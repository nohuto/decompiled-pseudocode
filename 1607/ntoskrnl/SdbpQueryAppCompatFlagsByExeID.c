/*
 * XREFs of SdbpQueryAppCompatFlagsByExeID @ 0x140573494
 * Callers:
 *     SdbGetEntryFlags @ 0x1405733F0 (SdbGetEntryFlags.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     AslRegistryGetKey @ 0x140573500 (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x1406C56B8 (AslRegistryGetUInt32.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpQueryAppCompatFlagsByExeID(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int Key; // eax
  unsigned int v7; // ebx
  bool v8; // zf
  int UInt32; // eax
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  v14 = HIDWORD(a1);
  v13 = 0;
  Handle = 0LL;
  Key = AslRegistryGetKey(&Handle, a2, a3, (unsigned int)a3);
  v7 = Key;
  if ( Key >= 0 )
  {
    UInt32 = AslRegistryGetUInt32(&v13, Handle, a2);
    v7 = UInt32;
    if ( UInt32 >= 0 )
    {
      v7 = 0;
    }
    else if ( UInt32 != -1073741772 )
    {
      v12 = UInt32;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
        75,
        (unsigned int)"AslRegistryGetUInt32 failed for key: '%ws' [%x]",
        L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
        v12);
    }
  }
  else if ( Key != -1073741772 )
  {
    v11 = Key;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
      64,
      (unsigned int)"AslRegistryGetKey failed [%x]",
      v11);
  }
  v8 = Handle == 0LL;
  *a4 = v13;
  if ( !v8 )
    ZwClose(Handle);
  return v7;
}
