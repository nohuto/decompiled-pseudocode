/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1401338B8
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14021E060 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_HHLssLLL @ 0x1402CC178 (WPP_RECORDER_AND_TRACE_SF_HHLssLLL.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendMousePromotion(__int64 a1, int a2)
{
  __int64 v3; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // r14d
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // si
  int IsEnabledDeviceUsageNoInline; // eax
  int v18; // edx
  bool v19; // zf
  int v20; // r12d
  bool v21; // di
  __int64 UserSessionState; // rax
  const char *v23; // rdx
  int v24; // r8d
  int v25; // ebx
  int v26; // eax
  LARGE_INTEGER v29; // [rsp+88h] [rbp-1h]
  __int128 v30; // [rsp+90h] [rbp+7h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+17h]

  v31 = 0LL;
  v30 = 0LL;
  LOWORD(v30) = -2;
  v3 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = ((_DWORD)v3 << 8) - (*(_DWORD *)(a1 + 24) << 8);
  v29 = PerformanceCounter;
  ((void (__fastcall *)(_QWORD, _QWORD))InputTraceLogging::Mouse::InjectInput)(
    3LL,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  v6 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v6 == 3 )
  {
    v7 = *(unsigned __int16 *)(a1 + 40);
    WORD1(v30) |= 0x40u;
    v6 = v5 | v7;
    v8 = *(_DWORD *)(a1 + 44);
    HIDWORD(v31) = v6;
    if ( (v8 & 0x40) != 0 )
    {
      LODWORD(v6) = v6 | 0x80;
      HIDWORD(v31) = v6;
    }
  }
  else if ( (_DWORD)v6 == 2 )
  {
    v9 = *(unsigned __int16 *)(a1 + 40);
    WORD1(v30) |= 0x10u;
    HIDWORD(v31) = v5 | v9 | 0x80;
  }
  v10 = 0;
  v11 = 0;
  v12 = -(*(_DWORD *)(a1 + 44) & 1);
  v13 = *(_QWORD *)(W32GetUserSessionState(v6, 64LL) + 19904);
  v14 = 0;
  if ( *(_DWORD *)(v13 + 1988) )
    LOBYTE(v14) = v12 == 0;
  else
    LOBYTE(v14) = v12 != 0;
  v15 = *(_DWORD *)(a1 + 20);
  v16 = 1;
  if ( (v15 & 0x40000) != 0 )
  {
    WORD2(v30) |= v14 != 0 ? 2 : 8;
    v11 = (v15 >> 15) & 1;
  }
  else if ( (v15 & 0x10000) != 0 )
  {
    WORD2(v30) |= v14 != 0 ? 1 : 4;
  }
  IsEnabledDeviceUsageNoInline = Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  v18 = *(_DWORD *)(a1 + 44);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( __CFSHR__(v18, 2) )
    {
      v19 = (v18 & 4) == 0;
      goto LABEL_19;
    }
LABEL_20:
    v10 = 1;
    goto LABEL_21;
  }
  if ( !__CFSHR__(v18, 2) )
    goto LABEL_20;
  if ( !UIPrivilegeIsolation::Enforced((UIPrivilegeIsolation *)(unsigned int)-__CFSHR__(v18, 2)) )
    goto LABEL_21;
  v19 = (*(_DWORD *)(a1 + 44) & 4) == 0;
LABEL_19:
  if ( !v19 )
    goto LABEL_20;
LABEL_21:
  v20 = *(_DWORD *)(a1 + 12);
  HIDWORD(v30) = *(_DWORD *)(a1 + 8);
  LODWORD(v31) = v20;
  v21 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v16 = 0;
  if ( v21 || v16 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    v23 = "FALSE";
    LOBYTE(v24) = v16;
    LOBYTE(v23) = v21;
    WPP_RECORDER_AND_TRACE_SF_HHLssLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v23,
      v24,
      *(_QWORD *)(UserSessionState + 69152));
  }
  v25 = a2 | ((v11 << 12) + 10294);
  v26 = v25 | 0x40;
  if ( !v10 )
    v26 = v25;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
           0LL,
           &v30,
           v3,
           (LARGE_INTEGER)v29.QuadPart,
           v26);
}
