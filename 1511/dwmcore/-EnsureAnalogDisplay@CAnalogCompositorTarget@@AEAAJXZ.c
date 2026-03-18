/*
 * XREFs of ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x18013CF58
 * Callers:
 *     ?Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z @ 0x18013D2F0 (-Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z @ 0x18013D450 (-WaitForVBlankInternal@CAnalogCompositorTarget@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18001D708 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x180070478 (-GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800FBFE8 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayMonitor@CAnalogCompositorClient@@QEAAJPEAPEAUHMONITOR__@@@Z @ 0x18013C214 (-GetDisplayMonitor@CAnalogCompositorClient@@QEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CAnalogCompositorTarget::EnsureAnalogDisplay(CAnalogCompositorTarget *this)
{
  unsigned int v1; // edi
  CDisplay **v2; // rbx
  int CurrentDisplaySet; // eax
  CAnalogCompositorClient *v5; // rcx
  int DisplayMonitor; // eax
  int DisplayIdFromMonitor; // eax
  int Display; // eax
  struct IDXGIOutput *DXGIOutput; // r15
  int v10; // eax
  int v11; // eax
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  CDisplaySet *v14; // [rsp+68h] [rbp+10h] BYREF
  HMONITOR v15; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = (CDisplay **)((char *)this + 88);
  v15 = 0LL;
  v13 = 0;
  v14 = 0LL;
  if ( !*((_QWORD *)this + 11) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v14);
    v1 = CurrentDisplaySet;
    if ( CurrentDisplaySet >= 0 )
    {
      DisplayMonitor = CAnalogCompositorClient::GetDisplayMonitor(v5, &v15);
      v1 = DisplayMonitor;
      if ( DisplayMonitor >= 0 )
      {
        DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v14, v15, (struct DisplayId *)&v13);
        v1 = DisplayIdFromMonitor;
        if ( DisplayIdFromMonitor >= 0 )
        {
          Display = CDisplaySet::GetDisplay((__int64)v14, v13, v2);
          v1 = Display;
          if ( Display >= 0 )
          {
            DXGIOutput = CDisplay::GetDXGIOutput(*v2);
            v10 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, char *))DXGIOutput->lpVtbl->QueryInterface)(
                    DXGIOutput,
                    &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
                    (char *)this + 104);
            v1 = v10;
            if ( v10 >= 0 )
            {
              v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 13) + 72LL))(
                      *((_QWORD *)this + 13),
                      (char *)this + 112);
              v1 = v11;
              if ( v11 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x181u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x17Fu);
            }
            ((void (__fastcall *)(struct IDXGIOutput *))DXGIOutput->lpVtbl->Release)(DXGIOutput);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, Display, 0x17Cu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x17Au);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayMonitor, 0x178u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x176u);
    }
    if ( v14 )
      CDisplaySet::Release(v14);
  }
  return v1;
}
