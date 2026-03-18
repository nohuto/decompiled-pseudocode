/*
 * XREFs of ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x180166F3C
 * Callers:
 *     ?Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z @ 0x180167280 (-Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x1801673C4 (-WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x180034398 (-GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x180110D50 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180110DC4 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 */

__int64 __fastcall CAnalogCompositorTarget::EnsureAnalogDisplay(CAnalogCompositorTarget *this)
{
  unsigned int v1; // ebx
  CDisplay **v2; // rsi
  int CurrentDisplaySet; // eax
  int v5; // eax
  int DisplayIdFromMonitor; // eax
  int Display; // eax
  struct IDXGIOutput *DXGIOutput; // rsi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  CDisplaySet *v15; // [rsp+58h] [rbp+10h] BYREF
  HMONITOR v16; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v2 = (CDisplay **)((char *)this + 160);
  v16 = 0LL;
  v14 = 0;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 20) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v15);
    v1 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x167u);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(*(_QWORD *)xmmword_1801F03A0 + 96LL))(
             xmmword_1801F03A0,
             &v16);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x169u);
      }
      else
      {
        DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v15, v16, (struct DisplayId *)&v14);
        v1 = DisplayIdFromMonitor;
        if ( DisplayIdFromMonitor < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x16Bu);
        }
        else
        {
          Display = CDisplaySet::GetDisplay((__int64)v15, v14, v2);
          v1 = Display;
          if ( Display < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, Display, 0x16Du);
          }
          else
          {
            DXGIOutput = CDisplay::GetDXGIOutput(*v2);
            v9 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, char *))DXGIOutput->lpVtbl->QueryInterface)(
                   DXGIOutput,
                   &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
                   (char *)this + 176);
            v1 = v9;
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x170u);
            }
            else
            {
              v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 22) + 72LL))(
                      *((_QWORD *)this + 22),
                      (char *)this + 184);
              v1 = v10;
              if ( v10 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x172u);
            }
            ((void (__fastcall *)(struct IDXGIOutput *))DXGIOutput->lpVtbl->Release)(DXGIOutput);
          }
        }
      }
    }
    if ( v15 )
      CDisplaySet::Release(v15, v11, v12);
  }
  return v1;
}
