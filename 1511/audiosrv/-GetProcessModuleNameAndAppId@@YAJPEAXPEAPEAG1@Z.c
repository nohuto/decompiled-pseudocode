/*
 * XREFs of ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x1800304A8
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180032164 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall GetProcessModuleNameAndAppId(HANDLE ProcessHandle, __int64 a2, unsigned __int16 **a3)
{
  unsigned __int128 v3; // rax
  unsigned __int16 *v4; // rdi
  unsigned __int16 *v5; // r15
  unsigned __int16 **v6; // r14
  NTSTATUS v8; // ecx
  NTSTATUS v9; // eax
  unsigned __int16 **v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int16 *v13; // rax
  int v14; // ebx
  int v15; // edx
  int v16; // ecx
  unsigned __int16 *v17; // rax
  signed int LastError; // eax
  unsigned __int16 **ReturnLength; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-30h]
  unsigned int v22; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v23; // [rsp+40h] [rbp-18h]
  unsigned __int16 *v24; // [rsp+48h] [rbp-10h]
  ULONG ProcessInformationLength; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int16 **v26; // [rsp+A8h] [rbp+50h]
  unsigned __int16 **v27; // [rsp+B0h] [rbp+58h]
  unsigned __int16 *v28; // [rsp+B8h] [rbp+60h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  v27 = a3;
  v26 = (unsigned __int16 **)*((_QWORD *)&v3 + 1);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v28 = 0LL;
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
      v24 = v6[1];
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        v14 = -2147024362;
        goto LABEL_15;
      }
      v23 = 0LL;
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
      v13 = (unsigned __int16 *)LocalAlloc(0, 2 * v12);
      v23 = v13;
      v4 = v13;
      if ( v13 )
      {
        v14 = 0;
        StringCchCopyNExW(v13, v11 + 1, v24, v11, ReturnLength, v21, v22);
        goto LABEL_9;
      }
    }
    v14 = -2147024882;
    goto LABEL_15;
  }
LABEL_26:
  v4 = v23;
  v14 = _AllocStringWorker<CTCoAllocPolicy>((_DWORD)ProcessHandle, DWORD2(v3), (unsigned int)&word_1800AFAB8, 0);
  if ( v14 < 0 )
    goto LABEL_15;
LABEL_11:
  CallerIdentity::GetProcessAppId(ProcessHandle, &v28, v10);
  v17 = v28;
  if ( !v28 )
  {
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v16, v15, (unsigned int)&word_1800AFAB8, 0);
    if ( v14 < 0 )
    {
      v5 = v28;
      goto LABEL_15;
    }
    v17 = v28;
  }
  *v26 = v4;
  v4 = 0LL;
  *v27 = v17;
LABEL_15:
  LocalFree(v4);
  LocalFree(v5);
  LocalFree(v6);
  if ( v14 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
      (unsigned int)v14);
  }
  return (unsigned int)v14;
}
