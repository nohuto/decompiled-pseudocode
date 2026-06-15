/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140010644
 * Callers:
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001040 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__g_CritSecStreamGroupList__ @ 0x140001070 (_dynamic_initializer_for__g_CritSecStreamGroupList__.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x14000C428 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14001051C (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140010850 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     ??0CStreamGroup@@QEAA@XZ @ 0x140012990 (--0CStreamGroup@@QEAA@XZ.c)
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400157A0 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x14001716C (--0CpuManager@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
