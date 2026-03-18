/*
 * XREFs of InitMessageTables @ 0x1C037DB50
 * Callers:
 *     <none>
 * Callees:
 *     InitWindowMsgTable @ 0x1C037DD14 (InitWindowMsgTable.c)
 */

__int64 InitMessageTables()
{
  InitWindowMsgTable(&gSharedInfo[68], &gSharedInfo[67], a32);
  InitWindowMsgTable(&gSharedInfo[70], &gSharedInfo[69], &unk_1C02E7580);
  InitWindowMsgTable(&gSharedInfo[26], &gSharedInfo[25], a9);
  InitWindowMsgTable(&gSharedInfo[6], &gSharedInfo[5], &unk_1C02E7500);
  InitWindowMsgTable(&gSharedInfo[10], &gSharedInfo[9], &unk_1C02E74B0);
  InitWindowMsgTable(&gSharedInfo[12], &gSharedInfo[11], &unk_1C02E74A0);
  InitWindowMsgTable(&gSharedInfo[34], &gSharedInfo[33], &unk_1C02E7468);
  InitWindowMsgTable(&gSharedInfo[20], &gSharedInfo[19], &unk_1C02E7420);
  InitWindowMsgTable(&gSharedInfo[30], &gSharedInfo[29], &unk_1C02E71C0);
  InitWindowMsgTable(&gSharedInfo[22], &gSharedInfo[21], &unk_1C02E7370);
  InitWindowMsgTable(&gSharedInfo[24], &gSharedInfo[23], &unk_1C02E71C0);
  InitWindowMsgTable(&gSharedInfo[28], &gSharedInfo[27], &unk_1C02E72B0);
  InitWindowMsgTable(&gSharedInfo[36], &gSharedInfo[35], &unk_1C02E7288);
  return InitWindowMsgTable(&gSharedInfo[38], &gSharedInfo[37], &unk_1C02E7278);
}
