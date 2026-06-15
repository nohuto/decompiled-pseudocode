/*
 * XREFs of ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180013DD8
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x180013BD4 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000BE28 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000D100 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(
        CApplicationManager *this,
        struct CApplication *a2)
{
  _QWORD *v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  USHORT v7; // dx
  unsigned int v9; // [rsp+30h] [rbp-29h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-21h] BYREF
  char v11; // [rsp+40h] [rbp-19h]

  v9 = 0;
  if ( *((_DWORD *)a2 + 28) )
    goto LABEL_15;
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)*((_QWORD *)a2 + 8);
  v4 = 0;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v5 + 416) && *(_DWORD *)(v5 + 232) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 || (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
LABEL_15:
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v7 = 42;
      goto LABEL_19;
    }
  }
  else
  {
    CApplication::GrantGoodFaithPLMExemption(a2);
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v7 = 43;
LABEL_19:
      WPP_SF_S(v6[2], v7, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, *((const wchar_t **)a2 + 2));
    }
  }
  return v9;
}
