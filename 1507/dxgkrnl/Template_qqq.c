/*
 * XREFs of Template_qqq @ 0x1C0020B80
 * Callers:
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0153924 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  UserData.Ptr = (ULONGLONG)&v12;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &a5;
  v9 = 4LL;
  v10 = &a6;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &Dxgk_Diag_OutputDupl_High_Level_Update_Start, 0LL, 3u, &UserData);
}
