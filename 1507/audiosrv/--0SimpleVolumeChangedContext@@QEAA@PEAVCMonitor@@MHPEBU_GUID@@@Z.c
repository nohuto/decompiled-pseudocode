/*
 * XREFs of ??0SimpleVolumeChangedContext@@QEAA@PEAVCMonitor@@MHPEBU_GUID@@@Z @ 0x180098950
 * Callers:
 *     ?OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x18009B0A0 (-OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

SimpleVolumeChangedContext *__fastcall SimpleVolumeChangedContext::SimpleVolumeChangedContext(
        SimpleVolumeChangedContext *this,
        struct CMonitor *a2,
        float a3,
        int a4,
        const struct _GUID *a5)
{
  *(float *)this = a3;
  *((_DWORD *)this + 1) = a4;
  *(struct _GUID *)((char *)this + 8) = *a5;
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
