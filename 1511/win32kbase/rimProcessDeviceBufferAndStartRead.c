/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C0086A90
 * Callers:
 *     rimCompleteReads @ 0x1C000F0AC (rimCompleteReads.c)
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C007E814 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMInjectInput @ 0x1C00C2A80 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C6C04 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C730C (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C762C (RIMIDEInjectMouseInput.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000A3C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0010BF0 (WPP_RECORDER_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C007AAF0 (RIMStartDeviceSpecificRead.c)
 *     rimSignalReadComplete @ 0x1C0086B48 (rimSignalReadComplete.c)
 *     rimProcessMouseInput @ 0x1C0086C40 (rimProcessMouseInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0086CD0 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00AC040 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00AC070 (EtwTracePointerDeviceReadStop.c)
 *     DbgPrintRIMAlways @ 0x1C00B62F0 (DbgPrintRIMAlways.c)
 *     rimProcessFrameBasedHidInput @ 0x1C00C8E14 (rimProcessFrameBasedHidInput.c)
 *     rimProcessHidInput @ 0x1C00C8EA0 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C00C8EE0 (rimProcessKeyboardInput.c)
 *     rimProcessHidKeyboardInput @ 0x1C00D0BB0 (rimProcessHidKeyboardInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // cl
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 **v11; // rax

  v4 = *(_BYTE *)(a2 + 48);
  if ( v4 < 2u )
    goto LABEL_36;
  if ( v4 != 2 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 176) & 0x2000) != 0 || !*(_DWORD *)(a2 + 308) )
  {
LABEL_36:
    if ( (unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
    {
LABEL_20:
      RIMStartDeviceSpecificRead(a1, a2);
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 760) && ((*(_DWORD *)(a2 + 176) & 0x80u) != 0 || *(_QWORD *)(a1 + 768) == a1 + 768) )
    {
      *(_BYTE *)(a1 + 760) = 0;
      *(_DWORD *)(a2 + 176) &= ~0x80u;
      v5 = *(unsigned int *)(a2 + 176);
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
          *(_BYTE *)(a1 + 760) = 1;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v5,
            3u,
            0x16u,
            (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
            *(unsigned __int8 *)(a2 + 48));
        }
      }
      else
      {
        rimProcessMouseInput(a1, a2);
      }
      rimSignalReadComplete(a1, a2);
      if ( *(_BYTE *)(a1 + 760) && (*(_DWORD *)(a2 + 176) & 0x800) == 0 )
      {
        WPP_RECORDER_SF_qq(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v6,
          5u,
          0x17u,
          (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
          a1,
          a2);
        DbgPrintRIMAlways("FailSafeRead pRimObj(%p) pRimDev(%p)\n");
        goto LABEL_20;
      }
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 176);
      if ( (v8 & 0x80u) == 0 )
      {
        v9 = a1 + 768;
        *(_DWORD *)(a2 + 176) = v8 | 0x80;
        v10 = (__int64 *)(a2 + 112);
        v11 = *(__int64 ***)(v9 + 8);
        *v10 = v9;
        v10[1] = (__int64)v11;
        if ( *v11 != (__int64 *)v9 )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v9 + 8) = v10;
      }
    }
  }
  else
  {
    if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
      && *(_DWORD *)(a2 + 308)
      && (!gbTestModeOn
       || (*(_DWORD *)(a2 + 176) & 0x800) != 0
       || (*(_DWORD *)(*(_QWORD *)(a2 + 416) + 252LL) & 0x20000) != 0) )
    {
      EtwTracePointerDeviceReadStart();
      rimProcessFrameBasedHidInput(a1, a2);
      EtwTracePointerDeviceReadStop();
    }
    if ( (*(_DWORD *)(a2 + 176) & 0x800) == 0 )
      goto LABEL_20;
  }
  return 0LL;
}
