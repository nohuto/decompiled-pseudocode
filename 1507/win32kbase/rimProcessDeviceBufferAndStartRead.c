/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C
 * Callers:
 *     rimCompleteReads @ 0x1C0075A68 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C007859C (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00826A0 (rimInputApc.c)
 *     RIMInjectInput @ 0x1C00C1D70 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C5D18 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C6438 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C6758 (RIMIDEInjectMouseInput.c)
 * Callees:
 *     rimSignalReadComplete @ 0x1C006EEB4 (rimSignalReadComplete.c)
 *     rimProcessMouseInput @ 0x1C006EFA0 (rimProcessMouseInput.c)
 *     WPP_RECORDER_SF_d @ 0x1C00722DC (WPP_RECORDER_SF_d.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0075724 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00761AC (WPP_RECORDER_SF_qq.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00A7AD0 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00A7B00 (EtwTracePointerDeviceReadStop.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     rimProcessFrameBasedHidInput @ 0x1C00C7F10 (rimProcessFrameBasedHidInput.c)
 *     rimProcessHidInput @ 0x1C00C7FA0 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C00C7FE0 (rimProcessKeyboardInput.c)
 *     rimProcessHidKeyboardInput @ 0x1C00CF7DC (rimProcessHidKeyboardInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00D1914 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // cl
  int v5; // edx
  int v6; // edx
  int v8; // eax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  v4 = *(_BYTE *)(a2 + 48);
  if ( v4 >= 2u )
  {
    if ( v4 != 2 )
      return 0LL;
    if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 && *(_DWORD *)(a2 + 316) )
    {
      if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
        && *(_DWORD *)(a2 + 316)
        && (!gbTestModeOn
         || (*(_DWORD *)(a2 + 184) & 0x800) != 0
         || (*(_DWORD *)(*(_QWORD *)(a2 + 416) + 236LL) & 0x8000) != 0) )
      {
        EtwTracePointerDeviceReadStart();
        rimProcessFrameBasedHidInput(a1, a2);
        EtwTracePointerDeviceReadStop();
      }
      if ( (*(_DWORD *)(a2 + 184) & 0x800) == 0 )
        goto LABEL_19;
      return 0LL;
    }
    if ( (unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
    {
LABEL_19:
      RIMStartDeviceSpecificRead(a1, a2);
      return 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 728) && ((*(_DWORD *)(a2 + 184) & 0x80u) != 0 || *(_QWORD *)(a1 + 736) == a1 + 736) )
  {
    *(_BYTE *)(a1 + 728) = 0;
    *(_DWORD *)(a2 + 184) &= ~0x80u;
    v5 = *(_DWORD *)(a2 + 184);
    if ( *(_BYTE *)(a2 + 48) )
    {
      if ( *(_BYTE *)(a2 + 48) == 1 )
      {
        rimProcessKeyboardInput(a1, a2);
      }
      else if ( *(_BYTE *)(a2 + 48) == 2 )
      {
        if ( (v5 & 0x1000) != 0 )
          rimProcessHidKeyboardInput(a1, a2);
        else
          rimProcessHidInput(a1, a2);
      }
      else
      {
        *(_BYTE *)(a1 + 728) = 1;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          3,
          21,
          (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
          *(_BYTE *)(a2 + 48));
      }
    }
    else
    {
      rimProcessMouseInput(a1, a2);
    }
    rimSignalReadComplete(a1, a2);
    if ( *(_BYTE *)(a1 + 728) && (*(_DWORD *)(a2 + 184) & 0x800) == 0 )
    {
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        5,
        22,
        (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
        a1,
        a2);
      DbgPrintRIMAlways("FailSafeRead pRimObj(%p) pRimDev(%p)\n");
      goto LABEL_19;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 184);
    if ( (v8 & 0x80u) == 0 )
    {
      v9 = a1 + 736;
      *(_DWORD *)(a2 + 184) = v8 | 0x80;
      v10 = (_QWORD *)(a2 + 120);
      v11 = *(_QWORD **)(v9 + 8);
      *v10 = v9;
      v10[1] = v11;
      if ( *v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v9 + 8) = v10;
    }
  }
  return 0LL;
}
