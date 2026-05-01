/*
 * XREFs of ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAEKPEAK@Z @ 0x18001B904
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x18004D900 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Common::Guid::Encode(const struct _GUID *a1, unsigned __int8 *a2, __int64 a3, unsigned int *a4)
{
  unsigned int Data1; // r11d
  unsigned int Data1_high; // r10d
  unsigned int v8; // ecx
  unsigned __int16 Data2; // dx
  unsigned __int16 Data3; // dx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax

  Data1 = a1->Data1;
  Data1_high = HIWORD(a1->Data1);
  v8 = (unsigned __int8)BYTE2(a1->Data1);
  *a2 = Common::Guid::hex[(unsigned __int64)BYTE1(Data1_high) >> 4];
  a2[1] = Common::Guid::hex[BYTE1(Data1_high) & 0xF];
  a2[2] = Common::Guid::hex[(unsigned __int64)v8 >> 4];
  a2[3] = Common::Guid::hex[v8 & 0xF];
  a2[4] = Common::Guid::hex[(unsigned __int64)BYTE1(Data1) >> 4];
  a2[5] = Common::Guid::hex[BYTE1(Data1) & 0xF];
  a2[6] = Common::Guid::hex[(unsigned __int64)(unsigned __int8)Data1 >> 4];
  a2[7] = Common::Guid::hex[Data1 & 0xF];
  a2[8] = 45;
  Data2 = a1->Data2;
  a2[9] = Common::Guid::hex[(unsigned __int64)HIBYTE(Data2) >> 4];
  a2[10] = Common::Guid::hex[HIBYTE(Data2) & 0xF];
  a2[11] = Common::Guid::hex[(unsigned __int64)(unsigned __int8)Data2 >> 4];
  a2[12] = Common::Guid::hex[Data2 & 0xF];
  a2[13] = 45;
  Data3 = a1->Data3;
  a2[14] = Common::Guid::hex[(unsigned __int64)HIBYTE(Data3) >> 4];
  a2[15] = Common::Guid::hex[HIBYTE(Data3) & 0xF];
  a2[16] = Common::Guid::hex[(unsigned __int64)(unsigned __int8)Data3 >> 4];
  a2[17] = Common::Guid::hex[Data3 & 0xF];
  a2[18] = 45;
  LOBYTE(v8) = a1->Data4[0];
  *a4 = 36;
  a2[19] = Common::Guid::hex[(unsigned __int64)(unsigned __int8)v8 >> 4];
  a2[20] = Common::Guid::hex[v8 & 0xF];
  v11 = a1->Data4[1];
  a2[21] = Common::Guid::hex[v11 >> 4];
  a2[22] = Common::Guid::hex[v11 & 0xF];
  a2[23] = 45;
  v12 = a1->Data4[2];
  a2[24] = Common::Guid::hex[v12 >> 4];
  a2[25] = Common::Guid::hex[v12 & 0xF];
  v13 = a1->Data4[3];
  a2[26] = Common::Guid::hex[v13 >> 4];
  a2[27] = Common::Guid::hex[v13 & 0xF];
  v14 = a1->Data4[4];
  a2[28] = Common::Guid::hex[v14 >> 4];
  a2[29] = Common::Guid::hex[v14 & 0xF];
  v15 = a1->Data4[5];
  a2[30] = Common::Guid::hex[v15 >> 4];
  a2[31] = Common::Guid::hex[v15 & 0xF];
  v16 = a1->Data4[6];
  a2[32] = Common::Guid::hex[v16 >> 4];
  a2[33] = Common::Guid::hex[v16 & 0xF];
  LOBYTE(v8) = a1->Data4[7];
  a2[34] = Common::Guid::hex[(unsigned __int64)(unsigned __int8)v8 >> 4];
  a2[35] = Common::Guid::hex[v8 & 0xF];
  return 0LL;
}
