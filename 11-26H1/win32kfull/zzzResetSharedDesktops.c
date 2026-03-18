/*
 * XREFs of zzzResetSharedDesktops @ 0x1401ED3F0
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1400F9A0C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzResetSharedDesktops(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v7; // r14d
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r10
  int v14; // r9d
  int v15; // r11d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  HRGN v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  ULONG_PTR *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // kr00_8
  _DWORD *v34; // r8
  int v35; // edi
  unsigned __int64 v37; // [rsp+20h] [rbp-38h]
  HRGN EmptyRgn; // [rsp+28h] [rbp-30h] BYREF
  __int128 v39; // [rsp+30h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 40);
  v7 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v13 = *(_QWORD *)(v4 + 16);
  v39 = *(_OWORD *)(**(_QWORD **)(UserSessionState + 56968) + 24LL);
  if ( v13 )
  {
    v10 = HIDWORD(v39);
    v12 = *((_QWORD *)&v39 + 1);
    v14 = DWORD1(v39);
    v15 = v39;
    do
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 88LL) = v15;
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 92LL) = v14;
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 96LL) = v12;
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 100LL) = v10;
      v11 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 104LL) = v15;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 108LL) = v14;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 112LL) = v12;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 116LL) = v10;
      v13 = *(_QWORD *)(v13 + 32);
    }
    while ( v13 );
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(v11, v10, v12);
  CalcVisRgn(&EmptyRgn, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL), *(struct tagWND **)(*(_QWORD *)(a1 + 8) + 24LL), 1);
  GreLockVisRgn(v18, v17, v19);
  v20 = EmptyRgn;
  v23 = W32GetUserSessionState(v22, v21);
  GreSelectVisRgn(*(_QWORD *)(*(_QWORD *)(v23 + 56968) + 56LL), v20, 1LL);
  GreUnlockVisRgn(v24);
  zzzUpdateWindowsAfterModeChange(v7, a3);
  v25 = *(ULONG_PTR **)(a1 + 8);
  v26 = *(unsigned int *)(*v25 + 64);
  if ( (v26 & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v25[3], 0, 0LL);
  v27 = W32GetUserSessionState(v25, v26);
  CCursorClip::ClearClip(*(CCursorClip **)(v27 + 36272));
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
    && a4
    && (v30 = W32GetUserSessionState(v29, v28),
        MonitorFromPoint(*(_QWORD *)(*(_QWORD *)(v30 + 19904) + 4960LL), 0LL, 0x12u)) )
  {
    v32 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 19904);
    v37 = *(_QWORD *)(v32 + 4960);
    v33 = v37;
  }
  else
  {
    v32 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 56968);
    v34 = *(_DWORD **)(*(_QWORD *)(v32 + 96) + 40LL);
    v35 = (v34[9] - v34[7]) / 2;
    LODWORD(v37) = v35;
    v31 = (unsigned int)((v34[10] - v34[8]) >> 31);
    LODWORD(v31) = (v34[10] - v34[8]) % 2;
    HIDWORD(v37) = (v34[10] - v34[8]) / 2;
    v33 = __PAIR64__(HIDWORD(v37), v35);
  }
  *(_QWORD *)(W32GetUserSessionState(v32, v31) + 36256) = v37;
  return zzzInternalSetCursorPos((unsigned int)v33, HIDWORD(v33), 2, 0);
}
