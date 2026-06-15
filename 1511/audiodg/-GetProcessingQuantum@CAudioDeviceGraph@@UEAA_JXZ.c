/*
 * XREFs of ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x140017CF0
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x1400076A0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::GetProcessingQuantum(CAudioDeviceGraph *this)
{
  return *((_QWORD *)this + 10);
}
