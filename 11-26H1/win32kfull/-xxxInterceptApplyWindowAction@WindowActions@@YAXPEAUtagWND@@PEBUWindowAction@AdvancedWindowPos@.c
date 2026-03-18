/*
 * XREFs of ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E54FC
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x140264104 (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258 (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptApplyWindowAction(
        WindowActions *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WindowAction *a3)
{
  char v5; // r14
  char v6; // si
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // ebx
  int v12; // r14d
  int v13; // edx
  struct CInterceptWindowProp *v14; // rax
  struct CInterceptWindowProp *v15; // rsi
  CMonitorTopology *v16; // rcx
  volatile signed __int32 *v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  int v29; // eax
  int v30; // [rsp+50h] [rbp-39h] BYREF
  int v31; // [rsp+54h] [rbp-35h]
  int v32; // [rsp+58h] [rbp-31h]
  __int64 v33; // [rsp+5Ch] [rbp-2Dh]
  __int64 v34; // [rsp+64h] [rbp-25h]
  __int64 v35; // [rsp+70h] [rbp-19h]
  int v36; // [rsp+78h] [rbp-11h]
  __int128 v37; // [rsp+7Ch] [rbp-Dh]
  __int128 v38; // [rsp+8Ch] [rbp+3h]
  int v39; // [rsp+9Ch] [rbp+13h]
  __int64 v40; // [rsp+A0h] [rbp+17h]
  int v41; // [rsp+A8h] [rbp+1Fh]

  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    v7 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      97,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v7);
  }
  memset_0(&v30, 0, 0x60uLL);
  v11 = *(_DWORD *)a2;
  v12 = *((_DWORD *)a2 + 1);
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    if ( !SaveSystemOperationData(this, (struct tagWND *)((char *)a2 + 108)) )
      return;
    v13 = v30 | 0x400;
    v30 |= 0x400u;
  }
  else
  {
    v13 = v30;
  }
  if ( (v11 & 0x200) != 0 )
  {
    v14 = CInterceptWindowProp::GetOrCreate(this);
    v15 = v14;
    if ( v14 )
    {
      v16 = (CMonitorTopology *)*((_QWORD *)v14 + 8);
      if ( v16 )
        CMonitorTopology::Release(v16);
      v17 = (volatile signed __int32 *)*((_QWORD *)a2 + 21);
      *((_QWORD *)v15 + 8) = v17;
      _InterlockedIncrement(v17);
      *((_BYTE *)v15 + 57) = *((_BYTE *)a2 + 6) & 1;
      *((_BYTE *)v15 + 56) = (*((_DWORD *)a2 + 1) & 0x1000) != 0;
      if ( (*((_DWORD *)a2 + 1) & 0x4000) != 0 )
        *(_OWORD *)((char *)v15 + 72) = *(_OWORD *)((char *)a2 + 76);
      if ( (*((_DWORD *)a2 + 1) & 0x8000) != 0 )
        *((_DWORD *)v15 + 22) = *((_DWORD *)a2 + 23);
    }
    v18 = *((_QWORD *)a2 + 21);
    v13 = v30 | 0x200;
    v30 |= 0x200u;
    v41 = *(_DWORD *)(v18 + 12);
  }
  if ( (v11 & 1) != 0 )
  {
    v19 = *((unsigned __int8 *)a2 + 8);
    v13 |= 1u;
    v30 = v13;
    v32 = v19;
  }
  if ( (v11 & 2) != 0 )
  {
    v20 = *(_QWORD *)((char *)a2 + 12);
    v13 |= 2u;
    v30 = v13;
    v33 = v20;
  }
  if ( (v11 & 4) != 0 )
  {
    v21 = *(_QWORD *)((char *)a2 + 20);
    v13 |= 4u;
    v30 = v13;
    v34 = v21;
  }
  if ( (v11 & 8) != 0 )
  {
    v22 = *((_QWORD *)a2 + 4);
    v13 |= 8u;
    v30 = v13;
    v35 = v22;
  }
  if ( (v11 & 0x10) != 0 && (v13 |= 0x10u, v30 = v13, (v12 & 4) != 0) )
  {
    v23 = v31 | 8;
    v31 |= 8u;
  }
  else
  {
    v23 = v31;
  }
  if ( (v11 & 0x20) != 0 )
  {
    v24 = *((_DWORD *)a2 + 10);
    v13 |= 0x20u;
    v30 = v13;
    switch ( v24 )
    {
      case 1:
        v36 = 1;
        break;
      case 2:
        v36 = 2;
        break;
      case 3:
        v36 = 3;
        break;
      default:
        v36 = v24 != 0 ? v36 : 0;
        break;
    }
  }
  if ( (v11 & 0x100) != 0 )
  {
    v25 = *(_QWORD *)((char *)a2 + 100);
    v13 |= 0x80u;
    v30 = v13;
    v40 = v25;
  }
  if ( (v12 & 0x200) != 0 )
  {
    v26 = *(_QWORD *)((char *)a2 + 100);
    v23 |= 0x400u;
    v31 = v23;
    v40 = v26;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v27 = *(_OWORD *)((char *)a2 + 44);
    v13 |= 0x40u;
    v30 = v13;
    v37 = v27;
  }
  if ( (v11 & 0x80) != 0 )
    v30 = v13 | 0x100;
  if ( (v12 & 1) != 0 )
  {
    v23 |= 1u;
    v31 = v23;
  }
  if ( (v12 & 8) != 0 )
  {
    v23 |= 0x10u;
    v31 = v23;
  }
  if ( (v12 & 0x10) != 0 )
  {
    v23 |= 0x20u;
    v31 = v23;
  }
  if ( (v12 & 0x20) != 0 )
  {
    v23 |= 0x40u;
    v31 = v23;
  }
  if ( (v12 & 0x40) != 0 )
  {
    v23 |= 0x80u;
    v31 = v23;
  }
  if ( (v12 & 0x80) != 0 )
  {
    v28 = *(_OWORD *)((char *)a2 + 60);
    v23 |= 0x100u;
    v31 = v23;
    v38 = v28;
  }
  if ( (v12 & 0x100) != 0 )
  {
    v29 = *((_DWORD *)a2 + 24);
    v31 = v23 | 0x200;
    v39 = v29;
  }
  xxxSendMessage(this, 0x346u);
}
