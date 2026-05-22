/*
 * XREFs of ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003C7A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18003C5B4 (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x18003C9E0 (-OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::OnDeviceRemoval(KeyboardProcessor *this, struct DeviceInfo *a2)
{
  int v3; // eax
  bool v4; // dl
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v3 = KeyboardProcessor::InvalidateKeyboardModifiers(this);
  v6 = v3;
  if ( v3 >= 0 )
  {
    KeyboardProcessorTelemetry::OnKeyPress((KeyboardProcessor *)((char *)this + 48), v4);
    return 0;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 160, v3);
  }
  return v6;
}
