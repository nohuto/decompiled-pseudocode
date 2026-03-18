/*
 * XREFs of ?SpbApc@@YAXPEAX00@Z @ 0x1C01EA1C0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveScreenBits @ 0x1C0290ED8 (GreSaveScreenBits.c)
 */

void __fastcall SpbApc(void *a1, void *a2, void *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(1LL);
  if ( a2 )
  {
    v7 = a2;
    HMAssignmentUnlock(&v7);
  }
  if ( a3 )
    GreSaveScreenBits(*gpDispInfo, 2LL, a3);
  UserSessionSwitchLeaveCrit(v6, v5);
}
