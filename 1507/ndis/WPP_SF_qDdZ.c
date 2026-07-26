/*
 * XREFs of WPP_SF_qDdZ @ 0x1C0058FF4
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C005A9DC (ndisMResetCompleteStage1.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDdZ(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, unsigned __int16 *a6)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  const wchar_t *v8; // rcx
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF
  int v10; // [rsp+98h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v6 = (__int64 *)a6;
  if ( a6 && *((_QWORD *)a6 + 1) )
    v7 = *a6;
  else
    v7 = 10LL;
  if ( !a6 || (v8 = (const wchar_t *)*((_QWORD *)a6 + 1)) == 0LL )
    v8 = L"NULL";
  if ( !a6 || !*a6 )
    v6 = qword_1C00241B0;
  ndisWppFastTraceMessage(
    &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids,
    0x48u,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v6,
    2LL,
    v8,
    v7,
    0LL);
}
