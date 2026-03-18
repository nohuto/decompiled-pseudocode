/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C00DB5A8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     IsEnsurePointerDeviceHasMonitorSupported_0 @ 0x1C0002CB0 (IsEnsurePointerDeviceHasMonitorSupported_0.c)
 *     EnsurePointerDeviceHasMonitor_0 @ 0x1C0002CB8 (EnsurePointerDeviceHasMonitor_0.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C00D1AAC (RIMAbConfigureDeviceArbitration.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C00DE860 (ApiSetIsPTPInputEnabled.c)
 *     ApiSetProcessHidRawInput @ 0x1C00DE880 (ApiSetProcessHidRawInput.c)
 */

_WORD *__fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  _WORD *result; // rax
  __int64 v5; // rdi
  int v6; // edx
  int HasMonitor_0; // eax
  int v8; // r9d

  result = gpsi;
  if ( (*(_DWORD *)gpsi & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)gpsi & 0x4000) == 0
      || *(_DWORD *)(a2 + 316) && (result = *(_WORD **)(a2 + 464), result[21] == 13) && result[20] == 5 )
    {
      v5 = *(_QWORD *)(a2 + 480);
      if ( (int)IsEnsurePointerDeviceHasMonitorSupported_0() < 0 )
        HasMonitor_0 = 0;
      else
        HasMonitor_0 = EnsurePointerDeviceHasMonitor_0();
      if ( HasMonitor_0 )
      {
        if ( *(_DWORD *)(v5 + 24) != 7 || (unsigned int)ApiSetIsPTPInputEnabled() )
        {
          if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 1) > 3 || RawInputManagerObject::bTouchInputAllowed )
          {
            if ( !*(_DWORD *)(a1 + 592) )
              RIMAbConfigureDeviceArbitration();
            rimDoProcessAnyPointerDeviceInput(a1, a2);
            return (_WORD *)ApiSetProcessHidRawInput(a2);
          }
          v8 = 12;
        }
        else
        {
          v8 = 11;
        }
      }
      else
      {
        v8 = 10;
      }
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        5,
        v8,
        (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
      return (_WORD *)ApiSetProcessHidRawInput(a2);
    }
  }
  return result;
}
