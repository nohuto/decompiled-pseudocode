/*
 * XREFs of ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x1800335B4
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035354 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180001474 (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180035BC0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180035BF8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::ReleaseAudioSessionPropertyStore(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CPolicyConfig *v2; // rbx
  int v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  volatile signed __int32 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = g_PolicyConfig;
  v4 = -2147023728;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_PolicyConfig + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32));
  v6 = *((_QWORD *)v2 + 11);
  v7 = (_QWORD *)((char *)v2 + 72);
  v8 = (_QWORD *)*((_QWORD *)v2 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v8;
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = (volatile signed __int32 *)v8[2];
      v8 = (_QWORD *)*v8;
      if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)v10, a2) )
        break;
      if ( !--v6 )
        goto LABEL_11;
    }
    v4 = 0;
    if ( _InterlockedExchangeAdd(v10 + 10, 0xFFFFFFFF) == 1 )
    {
      if ( !v9 )
        ATL::AtlThrowImpl(-2147467259);
      v11 = *v9;
      if ( v9 == (_QWORD *)*v7 )
        *v7 = v11;
      else
        *(_QWORD *)v9[1] = v11;
      v12 = v9[1];
      if ( v9 == (_QWORD *)v7[1] )
        v7[1] = v12;
      else
        *(_QWORD *)(*v9 + 8LL) = v12;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode((__int64)v7, v9);
      CAudioSessionStore::Release((CAudioSessionStore *)v10);
    }
  }
LABEL_11:
  LeaveCriticalSection(v5);
  if ( v4 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x4Au,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
