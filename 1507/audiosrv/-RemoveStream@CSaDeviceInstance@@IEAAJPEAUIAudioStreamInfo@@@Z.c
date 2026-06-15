/*
 * XREFs of ?RemoveStream@CSaDeviceInstance@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800757EC
 * Callers:
 *     ?UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x1800758B0 (-UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800695F8 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 */

__int64 __fastcall CSaDeviceInstance::RemoveStream(struct _RTL_CRITICAL_SECTION *this, struct IAudioStreamInfo *a2)
{
  _QWORD *i; // rdx
  _QWORD *v5; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v6; // rax
  LPCRITICAL_SECTION v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, this + 3);
  for ( i = (_QWORD *)this[1].SpinCount; i && (struct IAudioStreamInfo *)i[2] != a2; i = (_QWORD *)*i )
    ;
  if ( !i )
    ATL::AtlThrowImpl(-2147467259);
  v5 = (_QWORD *)*i;
  if ( i == (_QWORD *)this[1].SpinCount )
    this[1].SpinCount = (ULONG_PTR)v5;
  else
    *(_QWORD *)i[1] = v5;
  v6 = (struct _RTL_CRITICAL_SECTION_DEBUG *)i[1];
  if ( i == (_QWORD *)this[2].DebugInfo )
    this[2].DebugInfo = v6;
  else
    *(_QWORD *)(*i + 8LL) = v6;
  ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode(
    (__int64)&this[1].SpinCount,
    i);
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return 0LL;
}
