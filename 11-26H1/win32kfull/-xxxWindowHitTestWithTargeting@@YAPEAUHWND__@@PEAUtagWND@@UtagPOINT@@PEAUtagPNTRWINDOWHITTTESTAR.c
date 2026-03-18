/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1400869B0 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x140086338 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1400887E8 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1400895D8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x14008982C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x140225CB8 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x140225CF8 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1402C280C (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxWindowHitTestWithTargeting(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        struct tagRECT *a4,
        int a5)
{
  struct tagRECT v6; // xmm6
  struct tagPOINT v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rcx
  int v12; // r13d
  struct tagTOUCHTARGETINGCONTACT *v14; // rdx
  struct tagTHREADINFO *v15; // rax
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 UserSessionState; // rax
  unsigned int Prop; // r15d
  __int64 v25; // rcx
  int v26; // eax
  struct tagRECT *v27; // r15
  __int64 v28; // rax
  _OWORD *v30; // rax
  struct tagTOUCHTARGETINGCONTACT *v31; // r8
  __int128 v32; // xmm1
  const struct _D3DMATRIX *v33; // rcx
  struct tagPOINT *v34; // rax
  int v35; // [rsp+48h] [rbp-31h] BYREF
  int started; // [rsp+4Ch] [rbp-2Dh]
  int v37; // [rsp+50h] [rbp-29h]
  int v38; // [rsp+54h] [rbp-25h]
  int v39; // [rsp+58h] [rbp-21h] BYREF
  struct tagWND *v40; // [rsp+60h] [rbp-19h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT v42[2]; // [rsp+78h] [rbp-1h] BYREF
  int v43; // [rsp+D8h] [rbp+5Fh] BYREF
  struct tagPOINT v44; // [rsp+E0h] [rbp+67h] BYREF
  struct tagRECT *v45; // [rsp+F0h] [rbp+77h]

  v45 = a4;
  v44 = a2;
  v6 = *a4;
  v39 = -2;
  v35 = 0;
  v43 = 0;
  v8 = a2;
  v40 = 0LL;
  v9 = 0LL;
  started = 0;
  v10 = 2LL;
  v12 = 0;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v40 = *(struct tagWND **)(a1 + 104);
    started = CanPointStartResize(v40, v14, a2);
  }
  v15 = PtiCurrent(v10);
  BugCheckParameter3[0] = *((_QWORD *)v15 + 56);
  *((_QWORD *)v15 + 56) = BugCheckParameter3;
  BugCheckParameter3[1] = 0LL;
LABEL_5:
  v16 = 1;
  if ( a1 && !v12 )
  {
    while ( 1 )
    {
      Win32HM_ExchangeThreadLock<1>(a1, BugCheckParameter3);
      v17 = *(_QWORD *)(a3 + 40);
      if ( !*(_DWORD *)(v17 + 176) && !*(_DWORD *)(v17 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      if ( (*(_DWORD *)(a1 + 380) & 0x40000000) == 0 )
      {
        v16 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) == 0 )
          goto LABEL_11;
      }
      v18 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v18 + 26) & 8) != 0 && (*(_BYTE *)(v18 + 24) & 0x20) != 0 )
        goto LABEL_11;
      v19 = IsWindowDesktopComposed(a1);
      v22 = 0LL;
      if ( v19 )
      {
        if ( IsWindowCloaked((const struct tagWND *)a1) )
          goto LABEL_11;
      }
      if ( started != (_DWORD)v22 && (unsigned int)TouchTargetingIsSpecialTarget(v40, (struct tagWND *)a1) )
        goto LABEL_11;
      v35 = v22;
      if ( *(_DWORD *)(a3 + 88) != (_DWORD)v22 || v16 )
      {
        UserSessionState = W32GetUserSessionState(v21, v20);
        Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41388), 1u);
        v22 = 0LL;
      }
      else
      {
        Prop = 4;
      }
      if ( *(_DWORD *)(a3 + 84) != (_DWORD)v22 && *(_QWORD *)(a1 + 216) != v22 )
      {
        if ( gbIgnoreStressedOutStuff == (_DWORD)v22 )
        {
          if ( *(_QWORD *)(a3 + 96) != v22 )
          {
            v37 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3208LL);
            LODWORD(v22) = 0;
          }
          if ( gbIgnoreStressedOutStuff == (_DWORD)v22 && *(_DWORD *)(a3 + 88) != 1 )
          {
            v38 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3209LL);
          }
        }
        v30 = *(_OWORD **)(a1 + 216);
        v31 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
        *(_OWORD *)(a3 + 104) = *v30;
        *(_OWORD *)(a3 + 120) = v30[1];
        *(_OWORD *)(a3 + 136) = v30[2];
        v32 = v30[3];
        *(_QWORD *)(a3 + 96) = a3 + 104;
        *(_OWORD *)(a3 + 152) = v32;
        ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v44, v31, 1);
        TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v45, 1);
        v8 = v44;
      }
      v42[0] = *v45;
      v25 = (__int64)xxxWindowHitTestFromTargetingProperty(
                       a1,
                       v8,
                       (int *)a3,
                       &v43,
                       (unsigned __int16)Prop,
                       (__int64)v42);
      if ( *(_DWORD *)(a3 + 88) >= 0xFu )
      {
        v26 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v43 = 0;
      }
      else
      {
        v26 = v43;
      }
      if ( v26 )
      {
        v42[0] = *v45;
        v25 = xxxTargetingHitTest(a1, a2, v8, (unsigned int *)a3, &v35, v42, Prop, a5);
      }
      if ( !v9 && v25 )
        v9 = v25;
      if ( *(_QWORD *)(a3 + 168) == a1 )
        v12 = 1;
      xxxSendNCHitTest(
        (float **)a1,
        a2,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v39,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v27 = v45;
      if ( v39 != -1 )
        ClipContact((struct tagWND *)a1, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), (unsigned int)v35, v45);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v33 = *(const struct _D3DMATRIX **)(a3 + 96);
        if ( v33 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform(v33, &v44, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), 0);
            v34 = *(struct tagPOINT **)(a3 + 40);
            v8 = v44;
            *(_QWORD *)(a3 + 96) = 0LL;
            *v27 = v6;
            v34[4] = a2;
          }
        }
      }
      if ( !v12 )
      {
LABEL_11:
        a1 = *(_QWORD *)(a1 + 88);
        goto LABEL_5;
      }
      v28 = *(_QWORD *)(a1 + 120);
      if ( !v28 || v28 == a1 )
        break;
      a1 = *(_QWORD *)(a1 + 120);
      v16 = 1;
    }
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  return v9;
}
