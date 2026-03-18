/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0222C80
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowHitTest2 @ 0x1C011807C (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C0220D20 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0221DA4 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
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
  int v9; // esi
  __int128 *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // r13
  BOOL v15; // eax
  __int64 v16; // rdi
  LONG v17; // r15d
  unsigned int MonitorFlagsFromWindow; // eax
  int v19; // eax
  _DWORD *v20; // rdi
  HWND v21; // rax
  struct tagWND *v22; // r15
  struct tagPOINT v24; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v25; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v26; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT *v27; // [rsp+68h] [rbp-98h]
  int *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  int *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  struct tagRECT v37; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v38[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v39; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v40[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v41; // [rsp+FCh] [rbp-4h]
  __int128 v42; // [rsp+10Ch] [rbp+Ch]
  int v43; // [rsp+11Ch] [rbp+1Ch]

  v28 = a4;
  v24 = a2;
  v27 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 312) == gptiCurrent) )
  {
    v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v38;
    ++*(_DWORD *)(a1 + 8);
    v38[1] = a1;
    EtwTraceTouchTargetingPointerTargetStart();
    v10 = (__int128 *)*((_QWORD *)a3 + 5);
    v40[0] = *((unsigned __int16 *)a3 + 4);
    *(_QWORD *)&v40[1] = *((_QWORD *)v10 + 4);
    v41 = v10[1];
    v42 = *v10;
    v43 = *((_DWORD *)v10 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v11 = xxxSendTransformableMessageTimeout((struct tagWND *)a1, 589LL, 0LL, (__int64)v40, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v13, v12);
    v14 = (v11 >> 20) & 0xFFF;
    if ( v14 <= 0xFFDu )
    {
      if ( v14 >= (unsigned int)a3[16] && *((_QWORD *)a3 + 7) )
      {
        if ( (a3[44] & 1) == 0 )
          return v8;
        v25.x = v24.x + a3[12];
        v25.y = v24.y + a3[13];
        v15 = PtInRect((_DWORD *)(a1 + 112), *(_QWORD *)&v25);
      }
      else
      {
        v15 = 1;
      }
      if ( v15 )
      {
        v16 = (v11 >> 10) & 0x3FF;
        v25.x = (v11 >> 10) & 0x3FF;
        if ( v25.x > 0x1FFu )
        {
          LODWORD(v16) = v16 - 1024;
          v25.x = v16;
        }
        v17 = v11 & 0x3FF;
        v25.y = v17;
        if ( v17 > 511 )
        {
          v17 -= 1024;
          v25.y = v17;
        }
        if ( (unsigned int)OffsetInContact(v24, *((const struct tagTOUCHTARGETINGCONTACT **)a3 + 5), v25) )
        {
          v24.x += v16;
          v24.y += v17;
          if ( a3[21] )
          {
            v26 = v24;
            MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
            LogicalToPhysicalDPIPoint(&v26, &v24, MonitorFlagsFromWindow, 0LL);
            v19 = *a3;
            v20 = a3 + 8;
            v34 = 0;
            v29 = v19;
            v30 = *((_QWORD *)a3 + 1);
            v31 = *((_QWORD *)a3 + 2);
            v33 = a3[9];
            v35 = 0LL;
            v36 = 0LL;
            v32 = a3 + 8;
            v21 = xxxDCEWindowHitTest2Internal((struct tagWND *)a1, v26, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)&v29);
          }
          else
          {
            v20 = a3 + 8;
            v21 = (HWND)xxxWindowHitTest2((struct tagWND *)a1, *(_QWORD *)&v24, a3 + 8, a3[9]);
          }
          v8 = v21;
          if ( v21 )
          {
            v22 = (struct tagWND *)ValidateHwnd(v21);
            if ( v22 )
            {
              if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)a1) )
                v14 = 0;
              else
                *v20 = 1;
              v39 = *v27;
              TransformRectBetweenCoordinateSpaces(&v39, v27, v22, a1);
              v37 = v39;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v22, v14, &v25, 0LL, 1, &v37, 1);
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
