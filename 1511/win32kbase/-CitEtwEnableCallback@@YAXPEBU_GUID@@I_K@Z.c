/*
 * XREFs of ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118
 * Callers:
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0067FB0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     W32kEtwEnableCallback @ 0x1C0068E54 (W32kEtwEnableCallback.c)
 * Callees:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004FC0C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00656FC (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065E04 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00685CC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0068724 (-CitpStart@@YAJXZ.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E4080 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitEtwEnableCallback(const struct _GUID *a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-28h]

  if ( (_BYTE)g_CompatImpact && !byte_1C0107111 )
  {
    if ( a2 <= 1 && (a3 & 0xE00000000800LL) != 0 && !qword_1C0107180 )
    {
      CitpParametersCompute((struct _CIT_PARAMETERS *)&unk_1C0107118);
      if ( byte_1C010716C )
        CitpStart();
    }
    if ( a2 == 2 && a3 == 2048 && a1 )
    {
      v10 = (__int128)*a1;
      v7 = (unsigned __int16)WORD2(*(_QWORD *)&a1->Data1);
      WORD2(v10) = 0;
      LODWORD(v10) = 0;
      v8 = v10 - *(_QWORD *)&CitControlGuid.Data1;
      if ( (_QWORD)v10 == *(_QWORD *)&CitControlGuid.Data1 )
        v8 = *((_QWORD *)&v10 + 1) - *(_QWORD *)CitControlGuid.Data4;
      if ( !v8 && qword_1C0107180 )
      {
        v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        switch ( (_DWORD)v7 )
        {
          case 1:
            CitpContextFlush(qword_1C0107180, (unsigned int)v9, a3, a4);
            break;
          case 2:
            CitpSetForegroundProcess(qword_1C0107180, v9, 0LL, 0LL, 0LL);
            CitpContextReinitialize(qword_1C0107180, v9);
            break;
          case 5:
            dword_1C010718C = 0;
            CitpTimeUpdate(v9);
            break;
          case 0xE:
            CitpResetTracking(v7, 0xFFFFF78000000004uLL, a3, a4);
            break;
          case 0xF:
            CitpInteractionSummariesFlush(qword_1C0107180, 0xFFFFF78000000004uLL, a3);
            break;
          case 0xB:
            CitpPostUpdateUseInfoLoad(qword_1C0107180);
            break;
          case 0xC:
            CitpPostUpdateUseInfoLog(qword_1C0107180, 2);
            break;
        }
      }
    }
  }
}
