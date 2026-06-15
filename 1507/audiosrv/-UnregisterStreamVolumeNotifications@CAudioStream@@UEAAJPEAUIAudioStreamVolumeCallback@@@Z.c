/*
 * XREFs of ?UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x180082D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180072FF0 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?Find@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAUIAudioStreamVolumeCallback@@PEAU3@@Z @ 0x180081988 (-Find@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCallbac.c)
 */

__int64 __fastcall CAudioStream::UnregisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  LPCRITICAL_SECTION v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct IAudioStreamVolumeCallback *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 192));
  v4 = 0;
  if ( a2 )
  {
    v5 = ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::Find(
           (_QWORD *)this + 29,
           &v9);
    if ( v5 )
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt((_QWORD *)this + 29, v5);
      (*(void (__fastcall **)(struct IAudioStreamVolumeCallback *))(*(_QWORD *)a2 + 16LL))(a2);
    }
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
  return v4;
}
