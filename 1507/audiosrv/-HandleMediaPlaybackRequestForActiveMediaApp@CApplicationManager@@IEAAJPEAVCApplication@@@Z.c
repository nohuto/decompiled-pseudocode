/*
 * XREFs of ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800A1710
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x1800A17A8 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800A3238 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?HasPLMExemption@CApplication@@QEAAHXZ @ 0x1800A33CC (-HasPLMExemption@CApplication@@QEAAHXZ.c)
 */

__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(
        CApplicationManager *this,
        const wchar_t **a2)
{
  int v3; // edx
  __int64 v4; // rcx
  unsigned __int16 v5; // dx

  if ( *((_DWORD *)a2 + 28) || (unsigned int)CApplication::HasPLMExemption((CApplication *)a2) )
  {
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      v5 = 39;
      goto LABEL_11;
    }
  }
  else
  {
    CApplication::GrantGoodFaithPLMExemption((CApplication *)a2, v3);
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      v5 = 40;
LABEL_11:
      WPP_SF_S(*(_QWORD *)(v4 + 16), v5, (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids, a2[2]);
    }
  }
  return 0LL;
}
