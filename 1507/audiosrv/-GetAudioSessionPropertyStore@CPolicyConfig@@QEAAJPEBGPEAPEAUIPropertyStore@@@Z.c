/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180033440
 * Callers:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003543C (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCGainStage@@V?$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCGainStage@@PEAV312@1@Z @ 0x18000149C (-NewNode@-$CAtlList@PEAVCGainStage@@V-$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@AEAAPEAVCNode@.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180035BC0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180035BF8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180035CF8 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct IPropertyStore **a3)
{
  CPolicyConfig *v4; // r13
  __int64 v5; // rdi
  __int64 *v6; // r12
  _QWORD *v7; // r14
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rsi
  __int64 v10; // r8
  int v11; // r14d
  __int64 *v12; // rax
  CPolicyConfig *v14; // [rsp+28h] [rbp-50h]
  ATL::CAtlException *v15; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = g_PolicyConfig;
  v14 = g_PolicyConfig;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32));
  v5 = *((_QWORD *)v4 + 11);
  v6 = (__int64 *)((char *)v4 + 72);
  v7 = (_QWORD *)*((_QWORD *)v4 + 9);
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v7 )
        ATL::AtlThrowImpl(-2147467259);
      v9 = (volatile signed __int32 *)v7[2];
      v7 = (_QWORD *)*v7;
      v18 = v9;
      if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)v9, a2) )
        break;
      if ( !--v5 )
        goto LABEL_2;
    }
    v11 = 0;
  }
  else
  {
LABEL_2:
    v8 = (volatile signed __int32 *)operator new(0x58uLL);
    if ( v8 )
    {
      *(_QWORD *)v8 = &CAudioSessionStore::`vftable';
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          75LL,
          &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
          v8);
      }
      *((_DWORD *)v8 + 2) = 1;
      *((_DWORD *)v8 + 10) = 0;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = v8;
    v18 = v8;
    if ( !v8 )
    {
      v11 = -2147024882;
      goto LABEL_29;
    }
    v11 = CAudioSessionStore::Initialize((CAudioSessionStore *)v8, a2);
    if ( v11 < 0 )
      goto LABEL_27;
    try
    {
      v12 = ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::NewNode(
              (__int64)v4 + 72,
              (__int64 *)&v18,
              v10,
              *v6);
      if ( *v6 )
        *(_QWORD *)(*v6 + 8) = v12;
      else
        *((_QWORD *)v4 + 10) = v12;
      *v6 = (__int64)v12;
    }
    catch ( ATL::CAtlException *v15 )
    {
      v4 = v14;
      v11 = *(_DWORD *)v15;
      v9 = v18;
    }
    if ( v11 < 0 )
    {
LABEL_27:
      CAudioSessionStore::Release((CAudioSessionStore *)v8);
      v18 = 0LL;
      goto LABEL_29;
    }
  }
  if ( !v9 )
  {
LABEL_29:
    *a3 = 0LL;
    goto LABEL_17;
  }
  *a3 = (struct IPropertyStore *)v9;
  _InterlockedIncrement(v9 + 2);
  _InterlockedIncrement(v18 + 10);
LABEL_17:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 32));
  if ( v11 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x49u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
