/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     xxxPointerWindowHitTest @ 0x1C0223C68 (xxxPointerWindowHitTest.c)
 * Callees:
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C0220680 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0220AAC (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C0220AD4 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C0221A84 (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C0221B9C (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02222E0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0222C80 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

HWND __fastcall xxxWindowHitTestWithTargeting(__int64 a1, struct tagPOINT a2, __int64 a3, struct tagRECT *a4, int a5)
{
  int v5; // r15d
  struct tagRECT v6; // xmm6
  struct tagWND *v7; // r12
  __int64 started; // rdx
  HWND v10; // r14
  __int64 v13; // rdi
  struct tagTOUCHTARGETINGCONTACT *v14; // rdx
  struct _D3DMATRIX *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r12d
  int Prop; // r15d
  int v19; // r8d
  _OWORD *v20; // rdx
  int v21; // r9d
  struct tagRECT *v22; // r8
  __int128 v23; // xmm1
  struct tagKE *v24; // rcx
  HWND v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  struct tagPOINT *v28; // rax
  __int64 v29; // rax
  int v31; // [rsp+48h] [rbp-41h]
  int v32; // [rsp+4Ch] [rbp-3Dh] BYREF
  struct tagWND *v33; // [rsp+50h] [rbp-39h]
  __int64 v34; // [rsp+58h] [rbp-31h]
  struct tagRECT v35; // [rsp+68h] [rbp-21h] BYREF
  __int64 v36; // [rsp+78h] [rbp-11h] BYREF
  struct _D3DMATRIX *v37; // [rsp+80h] [rbp-9h]
  int v38; // [rsp+E8h] [rbp+5Fh] BYREF
  struct tagPOINT v39; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v40; // [rsp+100h] [rbp+77h] BYREF

  v39 = a2;
  v5 = 0;
  v6 = *a4;
  v7 = 0LL;
  v32 = -2;
  v31 = 0;
  started = 0LL;
  v33 = 0LL;
  v10 = 0LL;
  v13 = a1;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v7 = *(struct tagWND **)(a1 + 88);
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v33 = v7;
    started = (unsigned int)CanPointStartResize(v7, v14, a2);
  }
  v15 = (struct _D3DMATRIX *)gptiCurrent;
  v36 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v36;
  v37 = 0LL;
  v34 = (int)started;
  if ( v13 )
  {
LABEL_5:
    if ( !v5 )
    {
      while ( 1 )
      {
        v15 = v37;
        v37 = (struct _D3DMATRIX *)v13;
        ++*(_DWORD *)(v13 + 8);
        if ( v15 )
          HMUnlockObject((__int64)v15);
        v16 = *(_QWORD *)(a3 + 40);
        if ( !*(_DWORD *)(v16 + 176) && !*(_DWORD *)(v16 + 180) )
          break;
        if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
          break;
        if ( !(unsigned int)IsCompositionInputWindow((struct tagWND *)v13) && (*(_BYTE *)(v13 + 55) & 0x10) == 0
          || (*(_BYTE *)(v13 + 50) & 8) != 0 && (*(_BYTE *)(v13 + 48) & 0x20) != 0
          || (unsigned int)IsWindowDesktopComposed(v13) && (unsigned int)GetWindowCloakState(v13)
          || v34 && (unsigned int)TouchTargetingIsSpecialTarget(v7, (struct tagWND *)v13) )
        {
          goto LABEL_48;
        }
        v17 = 0;
        v40 = 0;
        if ( *(_DWORD *)(a3 + 88) || (unsigned int)IsCompositionInputWindow((struct tagWND *)v13) )
        {
          Prop = GetProp(v13, (unsigned __int16)gatomPtrTargetFlags, 1LL);
        }
        else
        {
          Prop = 4;
          v19 = 1;
        }
        if ( *(_DWORD *)(a3 + 84) )
        {
          v20 = *(_OWORD **)(v13 + 272);
          if ( v20 )
          {
            v21 = v19;
            v22 = *(struct tagRECT **)(a3 + 40);
            *(_OWORD *)(a3 + 104) = *v20;
            *(_OWORD *)(a3 + 120) = v20[1];
            *(_OWORD *)(a3 + 136) = v20[2];
            v23 = v20[3];
            *(_QWORD *)(a3 + 96) = a3 + 104;
            *(_OWORD *)(a3 + 152) = v23;
            ApplyWindowTransform((struct _D3DMATRIX *)(a3 + 104), &v39, v22, v21);
            if ( (unsigned int)NlsNullProc(v24) )
              TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), a4, 1);
          }
        }
        v35 = *a4;
        v25 = xxxWindowHitTestFromTargetingProperty(v13, v39, (int *)a3, &v38, (unsigned __int16)Prop, &v35);
        if ( *(_DWORD *)(a3 + 88) <= 0xFu )
        {
          v26 = v38;
        }
        else
        {
          v26 = 0;
          *(_DWORD *)(a3 + 180) = 1;
          v38 = 0;
        }
        if ( v26 )
        {
          v35 = *a4;
          v27 = xxxTargetingHitTest(v13, v39, a3, &v40, &v35, Prop, a5);
          v17 = v40;
          v25 = (HWND)v27;
        }
        if ( !v10 && v25 )
          v10 = v25;
        v5 = v31;
        if ( *(_QWORD *)(a3 + 168) == v13 )
          v5 = 1;
        v31 = v5;
        xxxSendNCHitTest(
          (struct tagWND *)v13,
          *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
          *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
          (struct tagPOINT *)(a3 + 48),
          &v32,
          (struct tagPNTRWINDOWHITTTESTARGS *)a3);
        if ( v32 != -1 )
          ClipContact((struct tagWND *)v13, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v17, a4);
        if ( *(_DWORD *)(a3 + 84) )
        {
          v15 = *(struct _D3DMATRIX **)(a3 + 96);
          if ( v15 )
          {
            if ( *(_DWORD *)(a3 + 88) == 1 )
            {
              ApplyWindowTransform(v15, &v39, *(struct tagRECT **)(a3 + 40), 0);
              *a4 = v6;
              v28 = *(struct tagPOINT **)(a3 + 40);
              *(_QWORD *)(a3 + 96) = 0LL;
              v28[4] = a2;
            }
          }
        }
        if ( !v5 )
        {
LABEL_48:
          v13 = *(_QWORD *)(v13 + 72);
          v7 = v33;
          if ( v13 )
            goto LABEL_5;
          break;
        }
        v29 = *(_QWORD *)(v13 + 104);
        if ( !v29 || v29 == v13 )
          break;
        v7 = v33;
        v13 = *(_QWORD *)(v13 + 104);
      }
    }
  }
  ThreadUnlock1(v15, started);
  return v10;
}
