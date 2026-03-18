/*
 * XREFs of ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C004779C (-CitpLastInputUpdate@@YAXEGI@Z.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C004B210 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0065164 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0068724 (-CitpStart@@YAJXZ.c)
 *     CitDisplayPowerChange @ 0x1C0085528 (CitDisplayPowerChange.c)
 * Callees:
 *     ?CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z @ 0x1C00E401C (-CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z.c)
 */

void __fastcall CitpTimeUpdate(int a1)
{
  struct _CIT_IMPACT_CONTEXT *v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  union _LARGE_INTEGER v5; // rbx
  LONGLONG v6; // rsi
  unsigned __int64 v7; // rax
  int v8; // r9d
  int v9; // r8d
  union _LARGE_INTEGER SystemTime; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+60h] [rbp+18h] BYREF

  v2 = qword_1C0107180;
  if ( a1 - dword_1C0107188 < (unsigned int)dword_1C010718C )
  {
    dword_1C010718C -= a1 - dword_1C0107188;
    goto LABEL_3;
  }
  v3 = qword_1C0107130;
  v4 = qword_1C0107138;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v5 = LocalTime;
  v6 = v3 * (LocalTime.QuadPart / v3);
  if ( !v2 )
    goto LABEL_13;
  if ( v6 != qword_1C0107198 )
  {
    CitpContextNewPeriod(v2, v3 * (LocalTime.QuadPart / v3));
LABEL_13:
    if ( v6 != qword_1C0107198 )
      qword_1C0107198 = v6;
  }
  v7 = (v5.QuadPart - v6) / v4;
  dword_1C01071CC = (unsigned int)v7 >> 3;
  if ( (unsigned int)v7 >> 3 >= uMultiplier )
    dword_1C01071CC = 0;
  v8 = -1;
  byte_1C01071D0 = 1 << (v7 & 7);
  v9 = -1;
  if ( (v5.QuadPart - v6) / 0x2710uLL <= 0xFFFFFFFF )
    v9 = (v5.QuadPart - v6) / 0x2710uLL;
  dword_1C0107190 = a1 - v9;
  if ( (v4 * ((v5.QuadPart + v4 - 1) / v4) - v5.QuadPart) / 0x2710 <= 0xFFFFFFFF )
    v8 = (v4 * ((v5.QuadPart + v4 - 1) / v4) - v5.QuadPart) / 0x2710;
  dword_1C010718C = v8;
LABEL_3:
  dword_1C0107188 = a1;
}
