/*
 * XREFs of ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18001AFB4
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035594 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003266C (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180036C70 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180036CA8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::ReleaseAudioSessionPropertyStore(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CPolicyConfig *v2; // rbx
  int v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // r12
  __int64 v6; // rbp
  __int64 **v7; // rdi
  __int64 *v8; // r14
  __int64 *v9; // rbx
  volatile signed __int32 *v10; // r15
  __int64 *v11; // rax
  __int64 *v12; // rax

  v2 = g_PolicyConfig;
  v4 = -2147023728;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_PolicyConfig + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32));
  v6 = *((_QWORD *)v2 + 11);
  v7 = (__int64 **)((char *)v2 + 72);
  v8 = (__int64 *)*((_QWORD *)v2 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v8;
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = (volatile signed __int32 *)v8[2];
      v8 = (__int64 *)*v8;
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
      v11 = (__int64 *)*v9;
      if ( v9 == *v7 )
        *v7 = v11;
      else
        *(_QWORD *)v9[1] = v11;
      v12 = (__int64 *)v9[1];
      if ( v9 == v7[1] )
        v7[1] = v12;
      else
        *(_QWORD *)(*v9 + 8) = v12;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(v7, v9);
      CAudioSessionStore::Release((CAudioSessionStore *)v10);
    }
  }
LABEL_11:
  LeaveCriticalSection(v5);
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      73LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)v4);
  }
  return (unsigned int)v4;
}
