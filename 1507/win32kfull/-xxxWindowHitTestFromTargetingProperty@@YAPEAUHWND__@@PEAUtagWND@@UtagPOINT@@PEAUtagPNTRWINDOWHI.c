/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CC44
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022CF64 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     xxxWindowHitTest2 @ 0x1C00DF44C (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C022AE5C (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C022BDD8 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        __int64 a1,
        struct tagPOINT a2,
        int *a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  HWND v8; // r12
  int v9; // edi
  __int128 *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // r13
  BOOL v15; // eax
  __int64 v16; // rsi
  LONG v17; // r15d
  __int64 v18; // rcx
  unsigned int MonitorFlags; // eax
  int v20; // eax
  _DWORD *v21; // rsi
  HWND v22; // rax
  struct tagWND *v23; // r15
  struct tagPOINT v25; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v26; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v27; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+68h] [rbp-98h]
  struct tagRECT *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  int *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  struct tagRECT v36; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v37[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v38; // [rsp+D0h] [rbp-30h] BYREF
  int v39; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v40; // [rsp+E4h] [rbp-1Ch]
  __int128 v41; // [rsp+ECh] [rbp-14h]
  __int128 v42; // [rsp+FCh] [rbp-4h]
  int v43; // [rsp+10Ch] [rbp+Ch]

  v28 = a4;
  v25 = a2;
  v29 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 312) == gptiCurrent) )
  {
    v37[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v37;
    ++*(_DWORD *)(a1 + 8);
    v37[1] = a1;
    EtwTraceTouchTargetingPointerTargetStart();
    v10 = (__int128 *)*((_QWORD *)a3 + 5);
    v39 = *((unsigned __int16 *)a3 + 4);
    v40 = *((_QWORD *)v10 + 4);
    v41 = v10[1];
    v42 = *v10;
    v43 = *((_DWORD *)v10 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v11 = xxxSendTransformableMessageTimeout(
            (struct tagWND *)a1,
            0x24Du,
            0LL,
            (struct _LARGE_STRING *)&v39,
            0,
            0,
            0LL,
            1,
            0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v13, v12);
    v14 = (v11 >> 20) & 0xFFF;
    if ( v14 <= 0xFFDu )
    {
      if ( v14 >= (unsigned int)a3[16] && *((_QWORD *)a3 + 7) )
      {
        if ( (a3[44] & 1) == 0 )
          return v8;
        v26.x = v25.x + a3[12];
        v26.y = v25.y + a3[13];
        v15 = PtInRect((_DWORD *)(a1 + 112), *(_QWORD *)&v26);
      }
      else
      {
        v15 = 1;
      }
      if ( v15 )
      {
        v16 = (v11 >> 10) & 0x3FF;
        v26.x = (v11 >> 10) & 0x3FF;
        if ( v26.x > 0x1FFu )
        {
          LODWORD(v16) = v16 - 1024;
          v26.x = v16;
        }
        v17 = v11 & 0x3FF;
        v26.y = v17;
        if ( v17 > 511 )
        {
          v17 -= 1024;
          v26.y = v17;
        }
        if ( (unsigned int)OffsetInContact(v25, *((const struct tagTOUCHTARGETINGCONTACT **)a3 + 5), v26) )
        {
          v25.x += v16;
          v25.y += v17;
          if ( a3[21] )
          {
            v18 = *(_QWORD *)(a1 + 16);
            v27 = v25;
            MonitorFlags = GetMonitorFlags(*(_QWORD *)(v18 + 384));
            LogicalToPhysicalDPIPoint(&v27, &v25, MonitorFlags, 0LL);
            v20 = *a3;
            v21 = a3 + 8;
            v35 = 0;
            v30 = v20;
            v31 = *((_QWORD *)a3 + 1);
            v32 = *((_QWORD *)a3 + 2);
            v34 = a3[9];
            v33 = a3 + 8;
            v22 = xxxDCEWindowHitTest2Internal((struct tagWND *)a1, v27, (struct DCE_WINDOW_HIT_TEST_ARGS *)&v30);
          }
          else
          {
            v21 = a3 + 8;
            v22 = (HWND)xxxWindowHitTest2((struct tagWND *)a1, *(_QWORD *)&v25, a3 + 8, a3[9]);
          }
          v8 = v22;
          if ( v22 )
          {
            v23 = (struct tagWND *)ValidateHwnd(v22);
            if ( v23 )
            {
              if ( IsCompositionInputWindow((struct tagWND *)a1) )
                v14 = 0;
              else
                *v21 = 1;
              v38 = *v29;
              TransformRectBetweenCoordinateSpaces(&v38, v29, v23, a1);
              v36 = v38;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v23, v14, &v26, 0LL, 1, &v36, 1);
              if ( !v14 || !*(_QWORD *)(a1 + 96) )
                v9 = 0;
              *v28 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
