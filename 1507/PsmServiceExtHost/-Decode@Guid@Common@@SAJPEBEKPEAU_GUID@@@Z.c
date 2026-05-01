/*
 * XREFs of ?Decode@Guid@Common@@SAJPEBEKPEAU_GUID@@@Z @ 0x18004D714
 * Callers:
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x18004D88C (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetHexByte@Guid@Common@@CAKPEBE@Z @ 0x18004D988 (-GetHexByte@Guid@Common@@CAKPEBE@Z.c)
 */

__int64 __fastcall Common::Guid::Decode(const unsigned __int8 *a1, __int64 a2, struct _GUID *a3)
{
  unsigned int HexByte; // eax
  int v6; // r10d
  int v7; // r8d
  int v8; // r9d
  __int16 v9; // ax
  __int16 v10; // r8
  __int16 v11; // ax
  __int16 v12; // r8
  unsigned int v13; // eax
  int v14; // r11d

  if ( a1[8] != 45 || a1[13] != 45 || a1[18] != 45 || a1[23] != 45 )
    return 2147942411LL;
  Common::Guid::GetHexByte(a1);
  Common::Guid::GetHexByte(a1 + 2);
  Common::Guid::GetHexByte(a1 + 4);
  HexByte = Common::Guid::GetHexByte(a1 + 6);
  a3->Data1 = HexByte | ((v8 | ((v7 | (v6 << 8)) << 8)) << 8);
  Common::Guid::GetHexByte(a1 + 9);
  v9 = Common::Guid::GetHexByte(a1 + 11);
  a3->Data2 = v9 | (v10 << 8);
  Common::Guid::GetHexByte(a1 + 14);
  v11 = Common::Guid::GetHexByte(a1 + 16);
  a3->Data3 = v11 | (v12 << 8);
  a3->Data4[0] = Common::Guid::GetHexByte(a1 + 19);
  a3->Data4[1] = Common::Guid::GetHexByte(a1 + 21);
  a3->Data4[2] = Common::Guid::GetHexByte(a1 + 24);
  a3->Data4[3] = Common::Guid::GetHexByte(a1 + 26);
  a3->Data4[4] = Common::Guid::GetHexByte(a1 + 28);
  a3->Data4[5] = Common::Guid::GetHexByte(a1 + 30);
  a3->Data4[6] = Common::Guid::GetHexByte(a1 + 32);
  v13 = Common::Guid::GetHexByte(a1 + 34);
  a3->Data4[7] = v13;
  return (v14 | v13) >= 0x100 ? 0x8007000B : 0;
}
