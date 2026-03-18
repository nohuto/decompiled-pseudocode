/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1402BA210
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x14025E3D8 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 */

_BOOL8 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  BOOL v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // r8
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+24h] [rbp-34h]
  int v12; // [rsp+2Ch] [rbp-2Ch]
  int v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+34h] [rbp-24h]
  __int64 v15; // [rsp+3Ch] [rbp-1Ch]

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 && !(unsigned int)IsWindowBeingDestroyed(v4) )
  {
    v14 = *v8;
    v11 = 0LL;
    v13 = 0;
    v15 = 0LL;
    v10 = 4;
    v12 = a2;
    v6 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v10, v7);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
