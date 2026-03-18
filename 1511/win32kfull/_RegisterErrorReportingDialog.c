/*
 * XREFs of _RegisterErrorReportingDialog @ 0x1C01F7414
 * Callers:
 *     NtUserRegisterErrorReportingDialog @ 0x1C021EDC0 (NtUserRegisterErrorReportingDialog.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C0142778 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 */

__int64 __fastcall RegisterErrorReportingDialog(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+24h] [rbp-34h]
  int v9; // [rsp+2Ch] [rbp-2Ch]
  int v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+3Ch] [rbp-1Ch]

  if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    v11 = *v2;
    v8 = v4;
    v10 = v4;
    v12 = v4;
    v7 = 4;
    v9 = v5;
    LODWORD(v4) = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v7, v1, v3, v4);
  }
  return (unsigned int)v4;
}
