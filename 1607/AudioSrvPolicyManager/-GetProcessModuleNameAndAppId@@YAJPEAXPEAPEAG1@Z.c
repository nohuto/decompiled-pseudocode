/*
 * XREFs of ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180011610
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180010C00 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180022928 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall GetProcessModuleNameAndAppId(__int64 ProcessHandle, __int64 a2, unsigned __int16 **a3)
{
  unsigned __int128 v3; // rax
  unsigned __int16 *v4; // rbx
  unsigned __int16 *v5; // r14
  unsigned __int16 **v6; // r15
  HANDLE v7; // r13
  NTSTATUS v8; // ecx
  signed int LastError; // ecx
  unsigned int v10; // eax
  int v11; // eax
  unsigned __int16 **v12; // r8
  signed int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r12
  signed int v17; // edi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rax
  const GUID *v22; // r8
  const GUID *v23; // r9
  __int64 result; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-89h]
  unsigned int v26; // [rsp+40h] [rbp-69h] BYREF
  ULONG ProcessInformationLength; // [rsp+44h] [rbp-65h] BYREF
  unsigned __int16 *v28; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int16 *v29; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int16 *v30; // [rsp+58h] [rbp-51h]
  unsigned __int16 **v31; // [rsp+60h] [rbp-49h]
  unsigned __int16 **v32; // [rsp+68h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  const char *v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+98h] [rbp-11h]
  int v36; // [rsp+9Ch] [rbp-Dh]
  unsigned __int16 **v37; // [rsp+A0h] [rbp-9h]
  int v38; // [rsp+A8h] [rbp-1h]
  int v39; // [rsp+ACh] [rbp+3h]
  unsigned int *v40; // [rsp+B0h] [rbp+7h]
  int v41; // [rsp+B8h] [rbp+Fh]
  int v42; // [rsp+BCh] [rbp+13h]

  *((_QWORD *)&v3 + 1) = a2;
  v26 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v32 = a3;
  v6 = 0LL;
  v31 = (unsigned __int16 **)*((_QWORD *)&v3 + 1);
  v29 = 0LL;
  v7 = (HANDLE)ProcessHandle;
  v28 = 0LL;
  if ( !ProcessHandle )
  {
LABEL_19:
    v18 = _AllocStringWorker<CTCoAllocPolicy>(
            ProcessHandle,
            *((__int64 *)&v3 + 1),
            (const unsigned __int16 *)&word_18002B5B4,
            0LL,
            (__int64)ReturnLength,
            &v29);
    v4 = v29;
    v26 = v18;
    if ( v18 < 0 )
      goto LABEL_24;
LABEL_20:
    CallerIdentity::GetProcessAppId(v7, &v28, v12);
    v21 = v28;
    if ( !v28 )
    {
      v26 = _AllocStringWorker<CTCoAllocPolicy>(
              v20,
              v19,
              (const unsigned __int16 *)&word_18002B5B4,
              0LL,
              (__int64)ReturnLength,
              &v28);
      if ( (v26 & 0x80000000) != 0 )
      {
        v5 = v28;
        goto LABEL_24;
      }
      v21 = v28;
    }
    *v31 = v4;
    v4 = 0LL;
    *v32 = v21;
    goto LABEL_24;
  }
  v8 = NtQueryInformationProcess((HANDLE)ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741820 )
  {
    RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v8);
    LastError = GetLastError();
    v10 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v10 = LastError;
    v26 = v10;
    goto LABEL_24;
  }
  v6 = (unsigned __int16 **)LocalAlloc(0x40u, ProcessInformationLength);
  v26 = v6 == 0LL ? 0x8007000E : 0;
  if ( !v6 )
    goto LABEL_24;
  v11 = NtQueryInformationProcess(v7, ProcessImageFileName, v6, ProcessInformationLength, &ProcessInformationLength);
  if ( v11 < 0 )
  {
    RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v11);
    v13 = GetLastError();
    v14 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v14 = v13;
    v26 = v14;
    goto LABEL_24;
  }
  v15 = (unsigned __int64)*((unsigned __int16 *)v6 + 1) >> 1;
  v30 = v6[1];
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v26 = -2147024362;
    goto LABEL_24;
  }
  v29 = 0LL;
  v3 = v16 * (unsigned __int128)2uLL;
  if ( is_mul_ok(v16, 2uLL) )
  {
    *(_QWORD *)&v3 = LocalAlloc(0, 2 * v16);
    v29 = (unsigned __int16 *)v3;
    ProcessHandle = -(__int64)v3;
    v4 = (unsigned __int16 *)v3;
    v17 = (_QWORD)v3 == 0LL ? 0x8007000E : 0;
    if ( (_QWORD)v3 )
      StringCchCopyNExW((char *)v3, v15 + 1, v30, v15);
  }
  else
  {
    v17 = -2147024362;
  }
  v26 = v17;
  if ( v17 >= 0 )
  {
    if ( v4 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_24:
  LocalFree(v4);
  LocalFree(v5);
  LocalFree(v6);
  result = v26;
  if ( (v26 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v26);
      result = v26;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v34 = "__FUNC__";
      v37 = &v28;
      v40 = &v26;
      v35 = 9;
      LODWORD(v28) = 347;
      v38 = 4;
      v41 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v22, v23, (UINT32)ReturnLength, &pData);
      return v26;
    }
  }
  return result;
}
