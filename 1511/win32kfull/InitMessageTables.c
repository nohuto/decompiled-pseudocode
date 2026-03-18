/*
 * XREFs of InitMessageTables @ 0x1C0378B30
 * Callers:
 *     <none>
 * Callees:
 *     InitWindowMsgTable @ 0x1C0378CF4 (InitWindowMsgTable.c)
 */

__int64 InitMessageTables()
{
  InitWindowMsgTable(&gSharedInfo[68], &gSharedInfo[67], a32);
  InitWindowMsgTable(&gSharedInfo[70], &gSharedInfo[69], &unk_1C02DF870);
  InitWindowMsgTable(&gSharedInfo[26], &gSharedInfo[25], a9);
  InitWindowMsgTable(&gSharedInfo[6], &gSharedInfo[5], &unk_1C02DF7F0);
  InitWindowMsgTable(&gSharedInfo[10], &gSharedInfo[9], &unk_1C02DF7A0);
  InitWindowMsgTable(&gSharedInfo[12], &gSharedInfo[11], &unk_1C02DF790);
  InitWindowMsgTable(&gSharedInfo[34], &gSharedInfo[33], &unk_1C02DF758);
  InitWindowMsgTable(&gSharedInfo[20], &gSharedInfo[19], &unk_1C02DF710);
  InitWindowMsgTable(&gSharedInfo[30], &gSharedInfo[29], &unk_1C02DF4B0);
  InitWindowMsgTable(&gSharedInfo[22], &gSharedInfo[21], &unk_1C02DF660);
  InitWindowMsgTable(&gSharedInfo[24], &gSharedInfo[23], &unk_1C02DF4B0);
  InitWindowMsgTable(&gSharedInfo[28], &gSharedInfo[27], &unk_1C02DF5A0);
  InitWindowMsgTable(&gSharedInfo[36], &gSharedInfo[35], &unk_1C02DF578);
  return InitWindowMsgTable(&gSharedInfo[38], &gSharedInfo[37], &unk_1C02DF568);
}
