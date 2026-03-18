/*
 * XREFs of xxxMNDrawFullNC @ 0x1402FA704
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 * Callees:
 *     MNIsFlatMenu @ 0x14000B3F8 (MNIsFlatMenu.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     DrawEdge @ 0x1401266B0 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x14012768C (GreSetBrushOrg.c)
 *     xxxSendUAHMenuMessage @ 0x14020C3E0 (xxxSendUAHMenuMessage.c)
 *     DrawFrame @ 0x1402245C8 (DrawFrame.c)
 *     GreGetBrushOrg @ 0x140242288 (GreGetBrushOrg.c)
 *     MNDrawEdge @ 0x14024FA0C (MNDrawEdge.c)
 *     MNDrawArrow @ 0x1402FA3FC (MNDrawArrow.c)
 *     GetDpiMetricsForWindow @ 0x140302474 (GetDpiMetricsForWindow.c)
 */

__int64 __fastcall xxxMNDrawFullNC(__int64 a1, HDC a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // r14d
  Gre::Base *DCEx; // rbx
  _DWORD *v9; // rdx
  __int32 v10; // eax
  __int32 v11; // r14d
  __int32 v12; // r15d
  int v13; // r12d
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r15d
  __int64 DpiMetricsForWindow; // rax
  __int64 v21; // rax
  __m128i BugCheckParameter3; // [rsp+30h] [rbp-10h] BYREF
  int v23; // [rsp+90h] [rbp+50h]
  __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  result = *(_QWORD *)a3;
  v24 = 0LL;
  v7 = 0;
  if ( *(_QWORD *)(*(_QWORD *)result + 40LL) )
  {
    if ( a2 )
      DCEx = (Gre::Base *)a2;
    else
      DCEx = (Gre::Base *)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(struct tagMENU **)(**(_QWORD **)a3 + 40LL), (__int64)a2);
    if ( (_DWORD)result )
    {
      result = *(_QWORD *)a3;
      if ( *(_QWORD *)(**(_QWORD **)a3 + 16LL) )
      {
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
          &BugCheckParameter3,
          *(_QWORD *)(**(_QWORD **)a3 + 16LL));
        v7 = xxxSendUAHMenuMessage(*(struct tagWND **)(**(_QWORD **)a3 + 16LL), 0x95u);
        result = Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>(BugCheckParameter3.m128i_i64);
      }
    }
    if ( !*(_QWORD *)(**(_QWORD **)a3 + 40LL) )
    {
      if ( a2 || !DCEx )
        return result;
      return _ReleaseDC(DCEx);
    }
    if ( v7 )
    {
      MNDrawArrow((HDC)DCEx, a3, -3);
      result = MNDrawArrow((HDC)DCEx, a3, -4);
    }
    else
    {
      v9 = *(_DWORD **)(a1 + 40);
      BugCheckParameter3.m128i_i64[0] = 0LL;
      BugCheckParameter3.m128i_i32[2] = v9[24] - v9[22];
      BugCheckParameter3.m128i_i32[3] = v9[25] - v9[23];
      if ( MNIsFlatMenu(BugCheckParameter3.m128i_u32[3], (__int64)v9) )
      {
        MNDrawEdge(*(_QWORD *)(**(_QWORD **)a3 + 40LL), a2, &BugCheckParameter3, 0x2000);
        v10 = BugCheckParameter3.m128i_i32[1];
        v11 = BugCheckParameter3.m128i_i32[3];
        v12 = BugCheckParameter3.m128i_i32[2];
        v13 = BugCheckParameter3.m128i_i32[0];
      }
      else
      {
        DrawEdge((HDC)DCEx, &BugCheckParameter3, 5u, 8207);
        DrawFrame((HDC)DCEx, BugCheckParameter3.m128i_i32, 1, 120);
        v10 = BugCheckParameter3.m128i_i32[1] + 1;
        v13 = BugCheckParameter3.m128i_i32[0] + 1;
        v12 = BugCheckParameter3.m128i_i32[2] - 1;
        v11 = BugCheckParameter3.m128i_i32[3] - 1;
      }
      v23 = v10;
      v14 = v11 - *(_DWORD *)(GetDpiMetricsForWindow(a1) + 28);
      GreGetBrushOrg((HDC)DCEx, &v24);
      v16 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL);
      if ( *(_QWORD *)(v16 + 24) )
      {
        v17 = MNGetpItemFromIndex(
                *(_QWORD *)(**(_QWORD **)a3 + 40LL),
                *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 116LL));
        GreSetBrushOrg((HDC)DCEx, 0, -*(_DWORD *)(*(_QWORD *)v17 + 68LL), 0LL);
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL) + 24LL);
      }
      else
      {
        v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 19904) + 4728LL);
      }
      BugCheckParameter3.m128i_i64[0] = GreSelectBrush(DCEx, v18);
      v19 = v12 - v13;
      DpiMetricsForWindow = GetDpiMetricsForWindow(a1);
      GrePatBlt(DCEx, v13, v23, v19, *(_DWORD *)(DpiMetricsForWindow + 28), 15728673);
      MNDrawArrow((HDC)DCEx, a3, -3);
      v21 = GetDpiMetricsForWindow(a1);
      GrePatBlt(DCEx, v13, v14, v19, *(_DWORD *)(v21 + 28), 15728673);
      MNDrawArrow((HDC)DCEx, a3, -4);
      GreSetBrushOrg((HDC)DCEx, v24, SHIDWORD(v24), 0LL);
      result = GreSelectBrush(DCEx, BugCheckParameter3.m128i_i64[0]);
    }
    if ( !a2 )
      return _ReleaseDC(DCEx);
  }
  return result;
}
