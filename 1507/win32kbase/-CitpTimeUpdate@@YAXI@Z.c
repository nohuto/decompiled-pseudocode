/*
 * XREFs of ?CitpTimeUpdate@@YAXI@Z @ 0x1C0052980
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C00525D8 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C0057180 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z.c)
 *     CitDisplayPowerChange @ 0x1C006A880 (CitDisplayPowerChange.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 * Callees:
 *     ?CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z @ 0x1C00E2EB4 (-CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z.c)
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

  v2 = qword_1C0101FE0;
  if ( a1 - dword_1C0101FE8 < (unsigned int)dword_1C0101FEC )
  {
    dword_1C0101FEC -= a1 - dword_1C0101FE8;
    goto LABEL_3;
  }
  v3 = qword_1C0101FA0;
  v4 = qword_1C0101FA8;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v5 = LocalTime;
  v6 = v3 * (LocalTime.QuadPart / v3);
  if ( !v2 )
    goto LABEL_13;
  if ( v6 != qword_1C0101FF8 )
  {
    CitpContextNewPeriod(v2, v3 * (LocalTime.QuadPart / v3));
LABEL_13:
    if ( v6 != qword_1C0101FF8 )
      qword_1C0101FF8 = v6;
  }
  v7 = (v5.QuadPart - v6) / v4;
  dword_1C010202C = (unsigned int)v7 >> 3;
  if ( (unsigned int)v7 >> 3 >= uMultiplier )
    dword_1C010202C = 0;
  v8 = -1;
  byte_1C0102030 = 1 << (v7 & 7);
  v9 = -1;
  if ( (v5.QuadPart - v6) / 0x2710uLL <= 0xFFFFFFFF )
    v9 = (v5.QuadPart - v6) / 0x2710uLL;
  dword_1C0101FF0 = a1 - v9;
  if ( (v4 * ((v5.QuadPart + v4 - 1) / v4) - v5.QuadPart) / 0x2710 <= 0xFFFFFFFF )
    v8 = (v4 * ((v5.QuadPart + v4 - 1) / v4) - v5.QuadPart) / 0x2710;
  dword_1C0101FEC = v8;
LABEL_3:
  dword_1C0101FE8 = a1;
}
