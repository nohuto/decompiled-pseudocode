/*
 * XREFs of ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x140017310
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140006D20 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::GetProcessingQuantum(CAudioDeviceGraph *this)
{
  return *((_QWORD *)this + 10);
}
