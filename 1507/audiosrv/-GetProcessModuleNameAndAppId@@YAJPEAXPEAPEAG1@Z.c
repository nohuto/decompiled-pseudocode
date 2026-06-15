/*
 * XREFs of ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18002D8FC
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180028950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18002DAA8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall GetProcessModuleNameAndAppId(HANDLE ProcessHandle, __int64 a2, unsigned __int16 **a3)
{
  unsigned __int128 v3; // rax
  char *v4; // rdi
  char *v5; // r15
  unsigned __int16 **v6; // r14
  NTSTATUS v8; // ecx
  NTSTATUS v9; // eax
  unsigned __int16 **v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  char *v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rax
  signed int LastError; // eax
  int v20; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-38h]
  char *v22; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int16 *v23; // [rsp+48h] [rbp-10h]
  ULONG ProcessInformationLength; // [rsp+A0h] [rbp+48h] BYREF
  char **v25; // [rsp+A8h] [rbp+50h]
  unsigned __int16 **v26; // [rsp+B0h] [rbp+58h]
  char *v27; // [rsp+B8h] [rbp+60h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  v26 = a3;
  v25 = (char **)*((_QWORD *)&v3 + 1);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  v27 = 0LL;
  if ( ProcessHandle )
  {
    v8 = NtQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741820 )
    {
LABEL_22:
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v8);
      LastError = GetLastError();
      v14 = LastError;
      if ( LastError > 0 )
        v14 = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_15;
    }
    v6 = (unsigned __int16 **)LocalAlloc(0x40u, ProcessInformationLength);
    if ( v6 )
    {
      v9 = NtQueryInformationProcess(
             ProcessHandle,
             ProcessImageFileName,
             v6,
             ProcessInformationLength,
             &ProcessInformationLength);
      if ( v9 < 0 )
      {
        v8 = v9;
        goto LABEL_22;
      }
      v11 = (unsigned __int64)*((unsigned __int16 *)v6 + 1) >> 1;
      v23 = v6[1];
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        v14 = -2147024362;
        goto LABEL_15;
      }
      v22 = 0LL;
      v3 = v12 * (unsigned __int128)2uLL;
      if ( !is_mul_ok(v12, 2uLL) )
      {
        v14 = -2147024362;
LABEL_9:
        if ( v14 < 0 )
          goto LABEL_15;
        if ( v4 )
          goto LABEL_11;
        goto LABEL_26;
      }
      v13 = (char *)LocalAlloc(0, 2 * v12);
      v22 = v13;
      v4 = v13;
      if ( v13 )
      {
        v14 = 0;
        StringCchCopyNExW(v13, v11 + 1, v23, v11);
        goto LABEL_9;
      }
    }
    v14 = -2147024882;
    goto LABEL_15;
  }
LABEL_26:
  v20 = _AllocStringWorker<CTCoAllocPolicy>(
          (__int64)ProcessHandle,
          *((__int64 *)&v3 + 1),
          &word_1800B1B90,
          0LL,
          (__int64)ReturnLength,
          &v22);
  v4 = v22;
  v14 = v20;
  if ( v20 < 0 )
    goto LABEL_15;
LABEL_11:
  CallerIdentity::GetProcessAppId(ProcessHandle, &v27, v10);
  v17 = v27;
  if ( !v27 )
  {
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v16, v15, &word_1800B1B90, 0LL, (__int64)ReturnLength, &v27);
    if ( v14 < 0 )
    {
      v5 = v27;
      goto LABEL_15;
    }
    v17 = v27;
  }
  *v25 = v4;
  v4 = 0LL;
  *v26 = (unsigned __int16 *)v17;
LABEL_15:
  LocalFree(v4);
  LocalFree(v5);
  LocalFree(v6);
  if ( v14 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10LL,
      &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      (unsigned int)v14);
  }
  return (unsigned int)v14;
}
