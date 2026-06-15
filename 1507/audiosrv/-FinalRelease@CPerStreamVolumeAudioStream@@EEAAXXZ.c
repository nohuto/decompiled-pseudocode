/*
 * XREFs of ?FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ @ 0x18002EFE0
 * Callers:
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001D380 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Release@CAudioStream@@UEAAKXZ @ 0x18001E7A0 (-Release@CAudioStream@@UEAAKXZ.c)
 * Callees:
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ?UnregisterStream@CAudioStream@@QEAAJXZ @ 0x180082C18 (-UnregisterStream@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerStreamVolumeAudioStream::FinalRelease(CPerStreamVolumeAudioStream *this)
{
  __int64 v2; // rsi
  volatile int *v3; // rdx
  int v4; // eax
  __int64 (__fastcall *v5)(__int64, volatile int *); // rdi
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  if ( !g_UseNewGraphBuilder )
    CAudioStream::UnregisterStream((CPerStreamVolumeAudioStream *)((char *)this - 16));
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v6 = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        12LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        v2);
    }
    if ( (int)GetSAProvider((__int64)&v6) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          13LL,
          &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
          v2,
          v4);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v2);
    }
    if ( v6 )
    {
      v5 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
      if ( v5 == ATL::CComObject<CSaProvider>::Release )
        ATL::CComObject<CSaProvider>::Release(v6, v3);
      else
        ((void (__fastcall *)(__int64))v5)(v6);
    }
  }
  *((_QWORD *)this + 4) = 0LL;
}
