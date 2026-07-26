/*
 * XREFs of WPP_SF_qDdZ @ 0x1C005D1B0
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0023CBC (ndisMResetCompleteStage1.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDdZ(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, unsigned __int16 *a6)
{
  int v6; // edx
  const wchar_t *v7; // r8
  const wchar_t *v8; // rcx
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF
  int v10; // [rsp+98h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  if ( a6 )
    v6 = *a6;
  else
    v6 = 8;
  if ( a6 )
    v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
  else
    v7 = L"NULL";
  v8 = L"\b";
  if ( a6 )
    v8 = a6;
  ndisWppFastTraceMessage(
    &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
    0x4Bu,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v8,
    2LL,
    v7,
    v6,
    0LL);
}
