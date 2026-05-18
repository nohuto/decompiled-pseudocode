/*
 * XREFs of DwmpRequestUnloadUserRegKeys @ 0x1800047A8
 * Callers:
 *     DwmpNotifyUserLogoff @ 0x180003400 (DwmpNotifyUserLogoff.c)
 * Callees:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 */

int __fastcall DwmpRequestUnloadUserRegKeys(CApiPortClient *a1, __int64 a2, __int16 a3, void *a4)
{
  unsigned int v5; // [rsp+20h] [rbp-28h]
  void *v6; // [rsp+30h] [rbp-18h]
  __int16 v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  v9 = 536870915;
  return CApiPortClient::SendRequest(a1, &v9, a3, a4, v5, &v8, v6, v7);
}
