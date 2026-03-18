/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0065164
 * Callers:
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064E70 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065340 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065E04 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C006692C (-CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00685CC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00E4E0C (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v4; // rax
  const char *v5; // rdx
  void *v6; // rdi
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  PSID v9; // rbx
  ULONG v10; // r15d
  void *v11; // rax
  void *v12; // r14
  struct _CIT_IMPACT_CONTEXT *v13; // rbx
  struct _LUID v14; // rax
  unsigned int v16; // r8d
  int v17; // ecx
  void *v18; // rdx
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-59h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-51h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v22; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-39h] BYREF
  PSID TokenInformation[12]; // [rsp+68h] [rbp-29h] BYREF

  TokenHandle = 0LL;
  AuthenticationId.LowPart = 0;
  AuthenticationId.HighPart = 0;
  v22 = a1;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2);
  v4 = PsReferencePrimaryToken(CurrentProcess);
  v6 = v4;
  if ( !v4 )
  {
    v8 = -1073741700;
    v16 = 1230;
LABEL_24:
    v17 = v8;
    goto LABEL_25;
  }
  v7 = SeQueryAuthenticationIdToken(v4, &AuthenticationId);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 1237;
LABEL_22:
    v17 = v7;
LABEL_25:
    CitpLogFailureWorker(v17, v5, v16);
    goto LABEL_12;
  }
  if ( AuthenticationId.LowPart != a2->LowPart || AuthenticationId.HighPart != a2->HighPart )
  {
    v8 = -1073741587;
    goto LABEL_12;
  }
  CitpShellTrackingGetEnabledForUser(&byte_1C010716F);
  CitpParametersCompute((struct _CIT_PARAMETERS *)&unk_1C0107118);
  if ( !byte_1C010716C )
  {
    CitpCleanupGlobalImpactContext(&v22);
    v8 = -1073741637;
    goto LABEL_12;
  }
  CitpTimeUpdate((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v7 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 1274;
    goto LABEL_22;
  }
  ReturnLength = 0;
  v7 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 1290;
    goto LABEL_22;
  }
  v9 = TokenInformation[0];
  v10 = RtlLengthSid(TokenInformation[0]);
  v11 = (void *)Win32AllocPool();
  v12 = v11;
  if ( !v11 )
  {
    v8 = -1073741670;
    v16 = 1304;
    goto LABEL_24;
  }
  memmove(v11, v9, v10);
  v13 = v22;
  v14 = *a2;
  *((_QWORD *)v22 + 52) = v12;
  *((struct _LUID *)v13 + 53) = v14;
  if ( byte_1C010716E )
  {
    CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v23, v12);
    CitpSavedDataLoad(v13, v18, (const struct _CIT_SAVE_KEY *)v23);
  }
  CitpPostUpdateUseInfoLoad(v13);
  CitpUpdateBootStats(v13);
  v8 = 0;
LABEL_12:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  return v8;
}
