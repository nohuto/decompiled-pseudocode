/*
 * XREFs of ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8
 * Callers:
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0016CE0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     W32kEtwEnableCallback @ 0x1C007BF14 (W32kEtwEnableCallback.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0017F7C (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0052980 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C005A3DC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079924 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E2F1C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitEtwEnableCallback(__m128i *a1, unsigned int a2, __int64 a3)
{
  int v6; // ecx
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // rbx
  __m128i v10; // [rsp+30h] [rbp-28h]

  if ( (_BYTE)g_CompatImpact && !byte_1C0101F81 )
  {
    if ( a2 <= 1 && (a3 & 0xE00000000800LL) != 0 && !qword_1C0101FE0 )
    {
      CitpParametersCompute((struct _CIT_PARAMETERS *)&unk_1C0101F88);
      if ( (_BYTE)dword_1C0101FD0 )
        CitpStart();
    }
    if ( a2 == 2 && a3 == 2048 && a1 )
    {
      v10 = *a1;
      v6 = (unsigned __int16)WORD2(a1->m128i_i64[0]);
      v10.m128i_i16[2] = 0;
      v10.m128i_i32[0] = 0;
      v7 = v10.m128i_i64[0] - *(_QWORD *)&CitControlGuid.Data1;
      v8 = _mm_cvtsi128_si32(*a1);
      if ( v10.m128i_i64[0] == *(_QWORD *)&CitControlGuid.Data1 )
        v7 = v10.m128i_i64[1] - *(_QWORD *)CitControlGuid.Data4;
      if ( !v7 && qword_1C0101FE0 )
      {
        v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        switch ( v6 )
        {
          case 1:
            CitpContextFlush(qword_1C0101FE0, v9, 1, (void *)0xFFFFF78000000004LL);
            break;
          case 13:
            BYTE2(dword_1C0101FD0) = v8 != 0;
            break;
          case 2:
            CitpSetForegroundProcess(qword_1C0101FE0, v9, 0LL, 0LL, 0LL);
            CitpContextReinitialize(qword_1C0101FE0, v9);
            break;
          case 5:
            dword_1C0101FEC = 0;
            CitpTimeUpdate(v9);
            break;
          case 11:
            CitpPostUpdateUseInfoLoad(qword_1C0101FE0);
            break;
          case 12:
            CitpPostUpdateUseInfoLog(qword_1C0101FE0, 2u);
            break;
        }
      }
    }
  }
}
