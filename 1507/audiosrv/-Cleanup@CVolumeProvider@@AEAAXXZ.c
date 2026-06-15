/*
 * XREFs of ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180072E34
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x18006AC70 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800695F8 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x1800726D0 (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 */

void __fastcall CVolumeProvider::Cleanup(CVolumeProvider *this)
{
  ULONG (__stdcall *Release)(IUnknown *); // rbx
  CVolumeProvider *v2; // rsi
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  IUnknown *v5; // r15
  __int64 v6; // rax
  ULONG (__stdcall *v7)(IUnknown *); // kr00_8
  ATL::CAtlException *v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-28h]
  ATL::CAtlException *v10; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+58h] [rbp+10h]
  IUnknown *v13; // [rsp+60h] [rbp+18h]

  v9 = -2LL;
  v2 = this;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xFu,
      (__int64)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids);
  }
  while ( 2 )
  {
    if ( *((_QWORD *)v2 + 7) )
    {
      try
      {
        v3 = (__int64 *)((char *)v2 + 40);
        v4 = (__int64 *)*((_QWORD *)v2 + 5);
        if ( !v4 )
          ATL::AtlThrowImpl(-2147467259);
        v5 = (IUnknown *)v4[2];
        v6 = *v4;
        *v3 = *v4;
        if ( v6 )
          *(_QWORD *)(v6 + 8) = 0LL;
        else
          *((_QWORD *)v2 + 6) = 0LL;
        ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode((__int64)v3, v4);
        v13 = v5;
      }
      catch ( ATL::CAtlException *v10 )
      {
        v7 = Release;
        v8 = v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _resetstkoflw();
        v12 = *(_DWORD *)v8;
        Release = v7;
        v2 = this;
        if ( v12 >= 0 )
        {
          v5 = v13;
          goto LABEL_15;
        }
        continue;
      }
LABEL_15:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x10u,
          (__int64)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
          v5,
          v9);
      }
      CVolumeStrip::ProviderFinalRelease(v5);
      Release = v5->lpVtbl->Release;
      ((void (__fastcall *)(IUnknown *))Release)(v5);
      continue;
    }
    break;
  }
}
