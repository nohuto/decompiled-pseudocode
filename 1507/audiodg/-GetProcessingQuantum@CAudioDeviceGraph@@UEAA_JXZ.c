/*
 * XREFs of ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x140018AA0
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F970 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::GetProcessingQuantum(CAudioDeviceGraph *this)
{
  return *((_QWORD *)this + 10);
}
