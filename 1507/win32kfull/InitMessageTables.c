/*
 * XREFs of InitMessageTables @ 0x1C0378D70
 * Callers:
 *     <none>
 * Callees:
 *     InitWindowMsgTable @ 0x1C0378F34 (InitWindowMsgTable.c)
 */

__int64 InitMessageTables()
{
  InitWindowMsgTable(&gSharedInfo[68], &gSharedInfo[67], a32);
  InitWindowMsgTable(&gSharedInfo[70], &gSharedInfo[69], &unk_1C02E0A60);
  InitWindowMsgTable(&gSharedInfo[26], &gSharedInfo[25], a9);
  InitWindowMsgTable(&gSharedInfo[6], &gSharedInfo[5], &unk_1C02E09E0);
  InitWindowMsgTable(&gSharedInfo[10], &gSharedInfo[9], &unk_1C02E0990);
  InitWindowMsgTable(&gSharedInfo[12], &gSharedInfo[11], &unk_1C02E0980);
  InitWindowMsgTable(&gSharedInfo[34], &gSharedInfo[33], &unk_1C02E0948);
  InitWindowMsgTable(&gSharedInfo[20], &gSharedInfo[19], &unk_1C02E0900);
  InitWindowMsgTable(&gSharedInfo[30], &gSharedInfo[29], &unk_1C02E06A0);
  InitWindowMsgTable(&gSharedInfo[22], &gSharedInfo[21], &unk_1C02E0850);
  InitWindowMsgTable(&gSharedInfo[24], &gSharedInfo[23], &unk_1C02E06A0);
  InitWindowMsgTable(&gSharedInfo[28], &gSharedInfo[27], &unk_1C02E0790);
  InitWindowMsgTable(&gSharedInfo[36], &gSharedInfo[35], &unk_1C02E0768);
  return InitWindowMsgTable(&gSharedInfo[38], &gSharedInfo[37], &unk_1C02E0758);
}
