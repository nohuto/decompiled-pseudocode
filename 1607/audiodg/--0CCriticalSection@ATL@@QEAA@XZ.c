/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400050C4
 * Callers:
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001040 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__g_CritSecStreamGroupList__ @ 0x140001070 (_dynamic_initializer_for__g_CritSecStreamGroupList__.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x140001400 (--0CpuManager@@QEAA@XZ.c)
 *     ??0CStreamGroup@@QEAA@XZ @ 0x140003050 (--0CStreamGroup@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140003548 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140003930 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x140007874 (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140014024 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
