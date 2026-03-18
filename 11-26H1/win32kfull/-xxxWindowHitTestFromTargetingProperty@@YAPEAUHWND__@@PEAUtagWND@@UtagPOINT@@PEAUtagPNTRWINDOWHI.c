/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x14008982C
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x140244704 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1402C2768 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        __int64 a1,
        struct tagPOINT a2,
        int *a3,
        int *a4,
        int a5,
        __int64 a6)
{
  HWND v8; // r12
  int v9; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r15
  unsigned __int16 v15; // r13
  __int64 v16; // rdi
  unsigned int v17; // r15d
  __int64 v18; // r8
  _DWORD *v19; // rdi
  HWND v20; // rax
  struct tagWND *v21; // r15
  __int64 v22; // rdx
  struct tagPOINT v23; // [rsp+50h] [rbp-89h] BYREF
  struct tagPOINT v24; // [rsp+58h] [rbp-81h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-79h] BYREF
  int *v26; // [rsp+70h] [rbp-69h]
  int v27; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v28[44]; // [rsp+84h] [rbp-55h] BYREF
  char v29; // [rsp+B0h] [rbp-29h]
  int v30; // [rsp+B1h] [rbp-28h]
  __int16 v31; // [rsp+B5h] [rbp-24h]
  char v32; // [rsp+B7h] [rbp-22h]
  __int64 v33; // [rsp+B8h] [rbp-21h]
  __int128 v34; // [rsp+C0h] [rbp-19h] BYREF

  v26 = a4;
  v23 = a2;
  *(_QWORD *)&v34 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1
    && (*(struct tagTHREADINFO **)(a1 + 16) == PtiCurrent(a6) || *(struct tagTHREADINFO **)(a1 + 264) == PtiCurrent(v11)) )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
    EtwTraceTouchTargetingPointerTargetStart();
    v12 = *((_QWORD *)a3 + 5);
    v13 = *((unsigned __int16 *)a3 + 4);
    memset(&v28[8], 0, 32);
    v27 = v13;
    *(_QWORD *)v28 = *(_QWORD *)(v12 + 32);
    *(_OWORD *)&v28[8] = *(_OWORD *)(v12 + 16);
    *(_OWORD *)&v28[24] = *(_OWORD *)v12;
    *(_DWORD *)&v28[40] = *(_DWORD *)(v12 + 40);
    v14 = xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 589LL, 0LL, (__int64)&v27, 0, 0, 0LL, 1u, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    v24 = 0LL;
    v15 = (v14 >> 20) & 0xFFF;
    if ( v15 <= 0xFFDu )
    {
      if ( v15 < (unsigned int)a3[16]
        || !*((_QWORD *)a3 + 7)
        || (a3[44] & 1) != 0
        && (v24.x = v23.x + a3[12],
            v24.y = v23.y + a3[13],
            (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*(_QWORD *)(a1 + 40) + 88LL, v24)) )
      {
        v16 = (v14 >> 10) & 0x3FF;
        v24.x = v16;
        if ( (unsigned int)v16 > 0x1FF )
        {
          LODWORD(v16) = v16 - 1024;
          v24.x = v16;
        }
        v17 = v14 & 0x3FF;
        v24.y = v17;
        if ( v17 > 0x1FF )
        {
          v17 -= 1024;
          v24.y = v17;
        }
        if ( (unsigned int)OffsetInContact(v23, *((const struct tagTOUCHTARGETINGCONTACT **)a3 + 5), v24) )
        {
          v23.y += v17;
          v23.x += v16;
          if ( a3[21] )
          {
            v18 = *(_QWORD *)(a1 + 40);
            BugCheckParameter3[0] = (ULONG_PTR)v23;
            LogicalToPhysicalDPIPoint(BugCheckParameter3, &v23, *(unsigned int *)(v18 + 288), 0LL);
            v19 = a3 + 8;
            v27 = *a3;
            *(_QWORD *)&v28[20] = a3 + 8;
            *(_DWORD *)v28 = 0;
            *(_OWORD *)&v28[4] = *(_OWORD *)(a3 + 2);
            *(_DWORD *)&v28[28] = a3[9];
            *(_WORD *)&v28[33] = 0;
            v28[35] = 0;
            v30 = 0;
            v31 = 0;
            v32 = 0;
            v28[32] = 0;
            *(_QWORD *)&v28[36] = 0LL;
            v29 = 0;
            v33 = 0LL;
            v20 = xxxDCEWindowHitTestIndirect(
                    (struct tagWND *)a1,
                    (struct tagPOINT)BugCheckParameter3[0],
                    1,
                    (struct tagDCE_WINDOW_HIT_TEST_ARGS *)&v27);
          }
          else
          {
            v19 = a3 + 8;
            v20 = (HWND)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))xxxWindowHitTest2)(
                          a1,
                          v23,
                          a3 + 8,
                          (unsigned int)a3[9]);
          }
          v8 = v20;
          if ( v20 )
          {
            v21 = (struct tagWND *)ValidateHwnd(v20);
            if ( v21 )
            {
              if ( (*(_DWORD *)(a1 + 380) & 0x40000000) != 0 )
                v15 = 0;
              else
                *v19 = 1;
              v22 = v34;
              v34 = *(_OWORD *)v34;
              TransformRectBetweenCoordinateSpaces(&v34, v22, v21, a1);
              *(_OWORD *)BugCheckParameter3 = v34;
              _TTUpdateBestTarget(
                (struct tagPNTRWINDOWHITTTESTARGS *)a3,
                v21,
                v15,
                &v24,
                0LL,
                1,
                (struct tagRECT *)BugCheckParameter3,
                1u);
              if ( !v15 || !*(_QWORD *)(a1 + 112) )
                v9 = 0;
              *v26 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
