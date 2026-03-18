/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C01E5880
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C010DBD0 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C012F180 (HandleDisplayChangeForInactiveDesktops.c)
 */

__int64 xxxBroadcastModernAppRedraw()
{
  __int64 result; // rax

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    return HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
  return result;
}
