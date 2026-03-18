/*
 * XREFs of ?CitpTimeUpdate@@YAXI@Z @ 0x1C0011AA0
 * Callers:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0011068 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C0011C30 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C004F274 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C005110C (-CitpStart@@YAJXZ.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C00F595C (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00F5FA4 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitpTimeUpdate(unsigned int a1)
{
  struct _CIT_IMPACT_CONTEXT *v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  void *v5; // r9
  union _LARGE_INTEGER v6; // rbx
  __int64 v7; // rax
  LONGLONG v8; // rsi
  unsigned __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  union _LARGE_INTEGER SystemTime; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+60h] [rbp+18h] BYREF

  v2 = qword_1C011E5D0;
  if ( a1 - dword_1C011E5D8 < dword_1C011E5DC )
  {
    dword_1C011E5DC -= a1 - dword_1C011E5D8;
    goto LABEL_3;
  }
  v3 = qword_1C011E580;
  v4 = qword_1C011E588;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v6 = LocalTime;
  v7 = qword_1C011E5E8;
  v8 = v3 * (LocalTime.QuadPart / v3);
  if ( !v2 )
    goto LABEL_5;
  if ( v8 != qword_1C011E5E8 )
  {
    if ( v8 == qword_1C011E5E8 + qword_1C011E580 )
    {
      CitpContextFlush(v2, a1, qword_1C011E5E8 + qword_1C011E580, v5);
      CitpContextReinitialize(v2, a1);
      v7 = qword_1C011E5E8;
    }
LABEL_5:
    if ( v8 != v7 )
      qword_1C011E5E8 = v8;
  }
  v9 = (v6.QuadPart - v8) / v4;
  dword_1C011E61C = (unsigned int)v9 >> 3;
  if ( (unsigned int)v9 >> 3 >= dword_1C011E5C4 )
    dword_1C011E61C = 0;
  v10 = -1;
  byte_1C011E620 = 1 << (v9 & 7);
  v11 = -1;
  if ( (v6.QuadPart - v8) / 0x2710uLL <= 0xFFFFFFFF )
    v11 = (v6.QuadPart - v8) / 0x2710uLL;
  dword_1C011E5E0 = a1 - v11;
  if ( (v4 * ((v6.QuadPart + v4 - 1) / v4) - v6.QuadPart) / 0x2710 <= 0xFFFFFFFF )
    v10 = (v4 * ((v6.QuadPart + v4 - 1) / v4) - v6.QuadPart) / 0x2710;
  dword_1C011E5DC = v10;
LABEL_3:
  dword_1C011E5D8 = a1;
}
