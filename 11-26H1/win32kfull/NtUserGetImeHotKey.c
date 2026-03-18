/*
 * XREFs of NtUserGetImeHotKey @ 0x1402373D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1402374DC (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetImeHotKey(unsigned int a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  HKL *v5; // rdi
  unsigned int ULongFromUser; // eax
  unsigned int v7; // eax
  __int64 ULong64FromUser; // rax
  HKL v9; // rcx
  int ImeHotKey; // ebx
  unsigned int v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-34h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-28h]
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  ULongFromUser = RtlReadULongFromUser(a2);
  RtlWriteULongToUser(a2, ULongFromUser);
  v7 = RtlReadULongFromUser(a3);
  RtlWriteULongToUser(a3, v7);
  if ( a4 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a4);
    RtlWriteULong64ToUser(a4, ULong64FromUser);
    v5 = (HKL *)&v14;
    v15 = &v14;
  }
  ImeHotKey = GetImeHotKey(a1, &v12, &v13, v5);
  if ( ImeHotKey )
  {
    *a2 = v12;
    v9 = (HKL)v13;
    *a3 = v13;
    if ( a4 )
    {
      v9 = *v5;
      *a4 = *v5;
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  return ImeHotKey;
}
