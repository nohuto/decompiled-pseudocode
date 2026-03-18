/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022D268
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     xxxPointerWindowHitTest @ 0x1C022DEF4 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     ThreadLockExchangeAlways @ 0x1C0096828 (ThreadLockExchangeAlways.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C022AAD4 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C022AEF4 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C022AF1C (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C022BDBC (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C022BED4 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C5F8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CF48 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

HWND __fastcall xxxWindowHitTestWithTargeting(__int64 a1, struct tagPOINT a2, __int64 a3, struct tagRECT *a4, int a5)
{
  struct tagWND *v5; // r15
  struct tagRECT v6; // xmm6
  __int64 started; // rdx
  HWND v9; // r14
  int v10; // r13d
  __int64 v12; // rdi
  struct tagTOUCHTARGETINGCONTACT *v13; // rdx
  __int64 v14; // r12
  const struct _D3DMATRIX *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r12d
  int Prop; // r15d
  int v19; // r8d
  _OWORD *v20; // rdx
  int v21; // r9d
  struct tagRECT *v22; // r8
  __int128 v23; // xmm1
  HWND v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  struct tagRECT *v27; // r15
  struct tagPOINT *v28; // rax
  __int64 v29; // rax
  unsigned int v31; // [rsp+48h] [rbp-41h] BYREF
  int v32; // [rsp+4Ch] [rbp-3Dh] BYREF
  struct tagWND *v33; // [rsp+50h] [rbp-39h]
  __int64 v34; // [rsp+58h] [rbp-31h]
  struct tagRECT v35; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v36[6]; // [rsp+78h] [rbp-11h] BYREF
  int v37; // [rsp+E8h] [rbp+5Fh] BYREF
  struct tagPOINT v38; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v39; // [rsp+100h] [rbp+77h]

  v39 = a4;
  v38 = a2;
  v5 = 0LL;
  v6 = *a4;
  v32 = -2;
  started = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v12 = a1;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v5 = *(struct tagWND **)(a1 + 88);
    v13 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v33 = v5;
    started = (unsigned int)CanPointStartResize(v5, v13, a2);
  }
  v14 = (int)started;
  v34 = (int)started;
  v15 = (const struct _D3DMATRIX *)gptiCurrent;
  v36[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v36;
  v36[1] = 0LL;
LABEL_47:
  if ( v12 && !v10 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways(v12, (__int64)v36);
      v16 = *(_QWORD *)(a3 + 40);
      if ( !*(_DWORD *)(v16 + 176) && !*(_DWORD *)(v16 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      if ( !(unsigned int)IsCompositionInputWindow((struct tagWND *)v12) && (*(_BYTE *)(v12 + 55) & 0x10) == 0
        || (*(_BYTE *)(v12 + 50) & 8) != 0 && (*(_BYTE *)(v12 + 48) & 0x20) != 0
        || (unsigned int)IsWindowDesktopComposed(v12) && (unsigned int)GetWindowCloakState(v12)
        || v14 && (unsigned int)TouchTargetingIsSpecialTarget(v5, (struct tagWND *)v12) )
      {
        goto LABEL_46;
      }
      v17 = 0;
      v31 = 0;
      if ( *(_DWORD *)(a3 + 88) || (unsigned int)IsCompositionInputWindow((struct tagWND *)v12) )
      {
        Prop = GetProp(v12, (unsigned __int16)gatomPtrTargetFlags, 1LL);
      }
      else
      {
        Prop = 4;
        v19 = 1;
      }
      if ( *(_DWORD *)(a3 + 84) )
      {
        v20 = *(_OWORD **)(v12 + 272);
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
          ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v38, v22, v21);
          TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v39, 1);
        }
      }
      v35 = *v39;
      v24 = xxxWindowHitTestFromTargetingProperty(v12, v38, (int *)a3, &v37, (unsigned __int16)Prop, &v35);
      if ( *(_DWORD *)(a3 + 88) <= 0xFu )
      {
        v25 = v37;
      }
      else
      {
        v25 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v37 = 0;
      }
      if ( v25 )
      {
        v35 = *v39;
        v26 = xxxTargetingHitTest(v12, v38, a3, &v31, &v35, Prop, a5);
        v17 = v31;
        v24 = (HWND)v26;
      }
      if ( !v9 && v24 )
        v9 = v24;
      if ( *(_QWORD *)(a3 + 168) == v12 )
        v10 = 1;
      xxxSendNCHitTest(
        (struct tagWND *)v12,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v32,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v27 = v39;
      if ( v32 != -1 )
        ClipContact((struct tagWND *)v12, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v17, v39);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v15 = *(const struct _D3DMATRIX **)(a3 + 96);
        if ( v15 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform(v15, &v38, *(struct tagRECT **)(a3 + 40), 0);
            *v27 = v6;
            v28 = *(struct tagPOINT **)(a3 + 40);
            *(_QWORD *)(a3 + 96) = 0LL;
            v28[4] = a2;
          }
        }
      }
      if ( !v10 )
      {
        v14 = v34;
LABEL_46:
        v12 = *(_QWORD *)(v12 + 72);
        v5 = v33;
        goto LABEL_47;
      }
      v29 = *(_QWORD *)(v12 + 104);
      if ( !v29 || v29 == v12 )
        break;
      v5 = v33;
      v12 = *(_QWORD *)(v12 + 104);
      v14 = v34;
    }
  }
  ThreadUnlock1(v15, started);
  return v9;
}
