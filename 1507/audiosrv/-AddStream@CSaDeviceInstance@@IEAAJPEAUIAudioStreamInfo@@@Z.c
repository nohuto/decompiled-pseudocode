/*
 * XREFs of ?AddStream@CSaDeviceInstance@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180073DF4
 * Callers:
 *     ?RegisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x180075040 (-RegisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSaDeviceInstance@@PEAV312@1@Z @ 0x180074F88 (-NewNode@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSaDeviceInstance::AddStream(struct _RTL_CRITICAL_SECTION *this, struct IAudioStreamInfo *a2)
{
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v5; // rax
  ULONG_PTR SpinCount; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  struct IAudioStreamInfo *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, this + 3);
  v4 = 0;
  try
  {
    v5 = ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::NewNode(
           &this[1].SpinCount,
           &v12,
           v3,
           this[1].SpinCount,
           -2LL);
    SpinCount = this[1].SpinCount;
    if ( SpinCount )
      *(_QWORD *)(SpinCount + 8) = v5;
    else
      this[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v5;
    this[1].SpinCount = v5;
  }
  catch ( ATL::CAtlException *v9 )
  {
    v8 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _resetstkoflw();
    v4 = *(_DWORD *)v8;
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return v4;
}
