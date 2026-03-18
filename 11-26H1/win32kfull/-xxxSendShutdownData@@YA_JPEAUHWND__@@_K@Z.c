/*
 * XREFs of ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14013DE70
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     SfnCOPYDATA @ 0x1400082D0 (SfnCOPYDATA.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     _GetWindowIcon @ 0x14013E208 (_GetWindowIcon.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxSendShutdownData(HWND a1, ULONG_PTR a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 Prop; // rdx
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // di
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 UserSessionState; // rax
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int16 v29; // ax
  _WORD *v30; // rax
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v34; // [rsp+60h] [rbp-A0h]
  _QWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  _WORD v36[261]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v37[267]; // [rsp+28Ah] [rbp+18Ah] BYREF

  memset_0(v35, 0, 0x428uLL);
  v33 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63480) )
  {
    if ( a1 == (HWND)0xFFFF )
    {
LABEL_15:
      v35[0] = a1;
      v34 = v35;
      v31 = 0LL;
      v32 = 1064;
      v17 = *(_QWORD *)(W32GetUserSessionState(v7, Prop) + 19904);
      v18 = *(_QWORD *)(v17 + 752);
      v20 = *(_QWORD *)(W32GetUserSessionState(v17, v19) + 63480);
      v21 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 120LL);
      UserSessionState = W32GetUserSessionState(v20, v22);
      SfnCOPYDATA(*(__int64 **)(UserSessionState + 63480), 809, a2, (__int64)&v31, v21, v18);
      return 0LL;
    }
    v8 = ValidateHwndEx(a1, 0LL, 0LL);
    if ( !a2 )
    {
      if ( v8 )
        *(_DWORD *)(v8 + 380) &= ~0x400000u;
      goto LABEL_15;
    }
    v9 = v8;
    if ( v8 )
    {
      v11 = 1;
      if ( *(_QWORD *)v8 == *(_QWORD *)(W32GetUserSessionState(v7, Prop) + 19160) )
      {
        a2 = 2LL;
        goto LABEL_7;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 236LL) == 1 )
      {
LABEL_7:
        *(_DWORD *)(v9 + 380) |= 0x400000u;
        v35[1] = GetWindowIcon(v9, 1LL);
        v13 = 261LL;
        v14 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 184LL);
        if ( (_DWORD)v14 )
        {
          v15 = ((unsigned __int64)(unsigned int)v14 >> 1) + 1;
          if ( v15 > 0x105 )
            v15 = 261LL;
          RtlStringCchCopyW(v37, v15, *(const unsigned __int16 **)(v9 + 184));
        }
        else
        {
          v37[0] = 0;
        }
        v16 = W32GetUserSessionState(v14, v12);
        Prop = GetProp(v9, *(unsigned __int16 *)(v16 + 41392), 1u);
        if ( Prop )
        {
          Prop -= (__int64)v36;
          v7 = v36;
          do
          {
            if ( v13 == -2147483385 )
              break;
            v29 = *(_WORD *)((char *)v7 + Prop);
            if ( !v29 )
              break;
            *v7++ = v29;
            --v13;
          }
          while ( v13 );
          v30 = v7 - 1;
          if ( v13 )
            v30 = v7;
          *v30 = 0;
        }
        else
        {
          v36[0] = 0;
        }
        goto LABEL_15;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69152),
          4,
          11,
          16,
          (__int64)&WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids,
          v9);
      }
    }
  }
  return 0LL;
}
