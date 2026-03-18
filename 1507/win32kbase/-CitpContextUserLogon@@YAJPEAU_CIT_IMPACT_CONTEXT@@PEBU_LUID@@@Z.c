/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C
 * Callers:
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 * Callees:
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0052980 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C005A3DC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0071124 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079728 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079924 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C007A224 (-CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00E3400 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E37A8 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v4; // rax
  const char *v5; // rdx
  void *v6; // rdi
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  UCHAR v9; // dl
  PSID v10; // rbx
  ULONG v11; // r15d
  void *v12; // rax
  void *v13; // r14
  struct _CIT_IMPACT_CONTEXT *v14; // rbx
  struct _LUID v15; // rax
  unsigned int v17; // r8d
  int v18; // ecx
  void *v19; // rdx
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-59h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-51h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v23; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v24[16]; // [rsp+58h] [rbp-39h] BYREF
  PSID TokenInformation[12]; // [rsp+68h] [rbp-29h] BYREF

  TokenHandle = 0LL;
  AuthenticationId.LowPart = 0;
  AuthenticationId.HighPart = 0;
  v23 = a1;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2);
  v4 = PsReferencePrimaryToken(CurrentProcess);
  v6 = v4;
  if ( !v4 )
  {
    v8 = -1073741700;
    v17 = 1265;
LABEL_24:
    v18 = v8;
    goto LABEL_25;
  }
  v7 = SeQueryAuthenticationIdToken(v4, &AuthenticationId);
  v8 = v7;
  if ( v7 < 0 )
  {
    v17 = 1272;
LABEL_22:
    v18 = v7;
LABEL_25:
    CitpLogFailureWorker(v18, v5, v17);
    goto LABEL_12;
  }
  if ( AuthenticationId.LowPart != a2->LowPart || AuthenticationId.HighPart != a2->HighPart )
  {
    v8 = -1073741587;
    goto LABEL_12;
  }
  CitpShellTrackingGetEnabledForUser((unsigned __int8 *)&dword_1C0101FD0 + 3);
  CitpParametersCompute((struct _CIT_PARAMETERS *)&unk_1C0101F88, v9);
  if ( !(_BYTE)dword_1C0101FD0 )
  {
    CitpCleanupGlobalImpactContext(&v23);
    v8 = -1073741637;
    goto LABEL_12;
  }
  CitpTimeUpdate((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v7 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  v8 = v7;
  if ( v7 < 0 )
  {
    v17 = 1309;
    goto LABEL_22;
  }
  ReturnLength = 0;
  v7 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  v8 = v7;
  if ( v7 < 0 )
  {
    v17 = 1325;
    goto LABEL_22;
  }
  v10 = TokenInformation[0];
  v11 = RtlLengthSid(TokenInformation[0]);
  v12 = (void *)Win32AllocPool();
  v13 = v12;
  if ( !v12 )
  {
    v8 = -1073741670;
    v17 = 1339;
    goto LABEL_24;
  }
  memmove(v12, v10, v11);
  v14 = v23;
  v15 = *a2;
  *((_QWORD *)v23 + 52) = v13;
  *((struct _LUID *)v14 + 53) = v15;
  if ( BYTE2(dword_1C0101FD0) )
  {
    CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v24, v13);
    CitpSavedDataLoad(v14, v19, (const struct _CIT_SAVE_KEY *)v24);
  }
  CitpPostUpdateUseInfoLoad(v14);
  CitpUpdateBootStats(v14);
  v8 = 0;
LABEL_12:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  return v8;
}
