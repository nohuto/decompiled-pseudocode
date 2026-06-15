/*
 * XREFs of ?RegisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x18007D800
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDuckWorkItem@@PEAV312@1@Z @ 0x180068490 (-NewNode@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAV.c)
 *     ?Find@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAUIAudioStreamVolumeCallback@@PEAU3@@Z @ 0x18007CC30 (-Find@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCallbac.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RegisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  struct IAudioStreamVolumeCallback *v2; // rsi
  unsigned int v4; // edi
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 **v7; // rcx
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  struct IAudioStreamVolumeCallback *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v2 = a2;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
  v4 = 0;
  if ( v2 )
  {
    v5 = (__int64 **)((char *)this + 224);
    if ( !ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::Find(v5, &v13) )
    {
      try
      {
        v6 = ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::NewNode(
               (__int64)v5,
               (__int64 *)&v13,
               (__int64)v5[1]);
        v7 = (__int64 **)v5[1];
        if ( v7 )
          *v7 = v6;
        else
          *v5 = v6;
        v5[1] = v6;
      }
      catch ( ATL::CAtlException *v10 )
      {
        v9 = v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _resetstkoflw();
        v2 = v13;
        v4 = *(_DWORD *)v9;
      }
      (*(void (__fastcall **)(struct IAudioStreamVolumeCallback *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return v4;
}
