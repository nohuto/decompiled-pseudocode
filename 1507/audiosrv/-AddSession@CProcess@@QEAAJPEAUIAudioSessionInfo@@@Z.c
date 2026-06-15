/*
 * XREFs of ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800120FC
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001CEE0 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180006FF8 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::AddSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // rax
  __int64 v5; // rcx
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+8h]
  struct IAudioSessionInfo *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = 0;
  try
  {
    v4 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
           (__int64)this + 72,
           (__int64 *)&v12,
           0LL,
           *((_QWORD *)this + 9));
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
      *(_QWORD *)(v5 + 8) = v4;
    else
      *((_QWORD *)this + 10) = v4;
    *((_QWORD *)this + 9) = v4;
  }
  catch ( ATL::CAtlException *v8 )
  {
    v7 = v8;
    if ( *(_DWORD *)v8 == -1073741571 )
      _resetstkoflw();
    v11 = *(_DWORD *)v7;
    v3 = *(_DWORD *)v7;
    if ( v11 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        36LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
        (unsigned int)v11);
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
