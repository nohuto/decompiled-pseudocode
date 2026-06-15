/*
 * XREFs of ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E980
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180004DA8 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009E60 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CProcess::RemoveSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  const GUID *v4; // r9
  GUID *i; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v9; // ebx
  int *v11; // rbx
  UINT32 v12; // [rsp+20h] [rbp-A8h]
  int v13; // [rsp+30h] [rbp-98h] BYREF
  int v14; // [rsp+34h] [rbp-94h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-90h] BYREF
  char v16; // [rsp+40h] [rbp-88h]
  __int64 v17; // [rsp+48h] [rbp-80h]
  ATL::CAtlException *v18; // [rsp+50h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  const char *v20; // [rsp+80h] [rbp-48h]
  int v21; // [rsp+88h] [rbp-40h]
  int v22; // [rsp+8Ch] [rbp-3Ch]
  int *v23; // [rsp+90h] [rbp-38h]
  int v24; // [rsp+98h] [rbp-30h]
  int v25; // [rsp+9Ch] [rbp-2Ch]
  int *v26; // [rsp+A0h] [rbp-28h]
  int v27; // [rsp+A8h] [rbp-20h]
  int v28; // [rsp+ACh] [rbp-1Ch]

  v17 = -2LL;
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (GUID *)*((_QWORD *)this + 9); i && *(struct IAudioSessionInfo **)&i[1].Data1 != a2; i = *(GUID **)&i->Data1 )
    ;
  if ( i )
  {
    v13 = 0;
    try
    {
      v6 = *(_QWORD *)&i->Data1;
      if ( i == *((GUID **)this + 9) )
        *((_QWORD *)this + 9) = v6;
      else
        **(_QWORD **)i->Data4 = v6;
      v7 = *(_QWORD *)i->Data4;
      if ( i == *((GUID **)this + 10) )
        *((_QWORD *)this + 10) = v7;
      else
        *(_QWORD *)(*(_QWORD *)&i->Data1 + 8LL) = v7;
      *(_QWORD *)&i->Data1 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = i;
      if ( (*((_QWORD *)this + 11))-- == 1LL )
        ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this + 72);
    }
    catch ( ATL::CAtlException *v18 )
    {
      v11 = (int *)v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        _resetstkoflw();
      v13 = *v11;
    }
  }
  v9 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v13);
      v9 = v13;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v20 = "__FUNC__";
      v21 = 9;
      v22 = 0;
      v14 = 2754;
      v23 = &v14;
      v24 = 4;
      v25 = 0;
      v26 = &v13;
      v27 = 4;
      v28 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, i, v4, v12, &pData);
      v9 = v13;
    }
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
