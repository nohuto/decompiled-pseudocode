/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C00103C4
 * Callers:
 *     rimCompleteReads @ 0x1C00108C8 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0010CA8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C0010CF0 (rimInputApc.c)
 *     RIMInjectInput @ 0x1C00CF600 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00D6304 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00D6A04 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C00D6D2C (RIMIDEInjectMouseInput.c)
 * Callees:
 *     rimProcessMouseInput @ 0x1C0010280 (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C00104A4 (rimSignalReadComplete.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00105A4 (WPP_RECORDER_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0010A8C (RIMStartDeviceSpecificRead.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C001121C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007DE6C (rimFreeAutoRepeatCompleteFrame.c)
 *     rimProcessKeyboardInput @ 0x1C0081DD0 (rimProcessKeyboardInput.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00B57A0 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00B57D0 (EtwTracePointerDeviceReadStop.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     rimProcessHidInput @ 0x1C00D84F0 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00DB5A8 (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidKeyboardInput @ 0x1C00DF3B4 (rimProcessHidKeyboardInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // cl
  int v5; // edx
  int v6; // edx
  int v8; // eax
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 **v11; // rax

  v4 = *(_BYTE *)(a2 + 48);
  if ( v4 < 2u )
    goto LABEL_36;
  if ( v4 != 2 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 || !*(_DWORD *)(a2 + 316) )
  {
LABEL_36:
    if ( (unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
    {
LABEL_22:
      RIMStartDeviceSpecificRead(a1, a2);
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 712) && ((*(_DWORD *)(a2 + 184) & 0x80u) != 0 || *(_QWORD *)(a1 + 720) == a1 + 720) )
    {
      *(_BYTE *)(a1 + 712) = 0;
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
          *(_BYTE *)(a1 + 712) = 1;
          LOBYTE(v5) = 3;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v5,
            3,
            24,
            (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
            *(_BYTE *)(a2 + 48));
        }
      }
      else
      {
        rimProcessMouseInput(a1, a2);
      }
      rimSignalReadComplete(a1, a2);
      if ( *(_BYTE *)(a1 + 712) && (*(_DWORD *)(a2 + 184) & 0x800) == 0 )
      {
        WPP_RECORDER_SF_qq(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          5,
          25,
          (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
          a1,
          a2);
        DbgPrintRIMAlways("FailSafeRead pRimObj(%p) pRimDev(%p)\n");
        goto LABEL_22;
      }
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 184);
      if ( (v8 & 0x80u) == 0 )
      {
        v9 = a1 + 720;
        *(_DWORD *)(a2 + 184) = v8 | 0x80;
        v10 = (__int64 *)(a2 + 120);
        v11 = *(__int64 ***)(v9 + 8);
        if ( *v11 != (__int64 *)v9 )
          __fastfail(3u);
        *v10 = v9;
        v10[1] = (__int64)v11;
        *v11 = v10;
        *(_QWORD *)(v9 + 8) = v10;
      }
    }
  }
  else
  {
    if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
      && *(_DWORD *)(a2 + 316)
      && (!gbTestModeOn
       || (*(_DWORD *)(a2 + 184) & 0x800) != 0
       || (*(_DWORD *)(*(_QWORD *)(a2 + 480) + 252LL) & 0x20000) != 0) )
    {
      EtwTracePointerDeviceReadStart();
      rimFreeAutoRepeatCompleteFrame(a2);
      RIMProcessAnyPointerDeviceInput(a1, a2);
      EtwTracePointerDeviceReadStop();
    }
    if ( (*(_DWORD *)(a2 + 184) & 0x800) == 0 )
      goto LABEL_22;
  }
  return 0LL;
}
