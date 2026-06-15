/*
 * XREFs of ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E7FC
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011C70 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180009EDC (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::AddSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  __int64 *v3; // rax
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // edi
  const struct _TlgProvider_t *v8; // rcx
  int *v10; // rbx
  UINT32 v11; // [rsp+20h] [rbp-A8h]
  int v12; // [rsp+30h] [rbp-98h] BYREF
  int v13; // [rsp+34h] [rbp-94h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-90h] BYREF
  char v15; // [rsp+40h] [rbp-88h]
  __int64 v16; // [rsp+48h] [rbp-80h]
  ATL::CAtlException *v17; // [rsp+50h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  const char *v19; // [rsp+80h] [rbp-48h]
  __int64 v20; // [rsp+88h] [rbp-40h]
  int *v21; // [rsp+90h] [rbp-38h]
  __int64 v22; // [rsp+98h] [rbp-30h]
  int *v23; // [rsp+A0h] [rbp-28h]
  __int64 v24; // [rsp+A8h] [rbp-20h]
  struct IAudioSessionInfo *v25; // [rsp+D8h] [rbp+10h] BYREF

  v25 = a2;
  v16 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = 0;
  try
  {
    v3 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
           (__int64)this + 72,
           (__int64 *)&v25,
           0LL,
           *((_QWORD *)this + 9));
    v6 = *((_QWORD *)this + 9);
    if ( v6 )
      *(_QWORD *)(v6 + 8) = v3;
    else
      *((_QWORD *)this + 10) = v3;
    *((_QWORD *)this + 9) = v3;
  }
  catch ( ATL::CAtlException *v17 )
  {
    v10 = (int *)v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _resetstkoflw();
    v12 = *v10;
  }
  v7 = v12;
  if ( v12 < 0 )
  {
    v8 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v12);
      v7 = v12;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v19 = "__FUNC__";
      v20 = 9LL;
      v13 = 2726;
      v21 = &v13;
      v22 = 4LL;
      v23 = &v12;
      v24 = 4LL;
      TlgWrite(v8, &unk_18002D869, v4, v5, v11, &pData);
      v7 = v12;
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
