/*
 * XREFs of ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180070E18
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180069980 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x1800706DC (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A1C90 (-FreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@.c)
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
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+58h] [rbp+10h]
  IUnknown *v12; // [rsp+60h] [rbp+18h]

  v2 = this;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids);
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
        ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode(v3);
        v12 = v5;
      }
      catch ( ATL::CAtlException *v9 )
      {
        v7 = Release;
        v8 = v9;
        if ( *(_DWORD *)v9 == -1073741571 )
          _resetstkoflw();
        v11 = *(_DWORD *)v8;
        Release = v7;
        v2 = this;
        if ( v11 >= 0 )
        {
          v5 = v12;
          goto LABEL_15;
        }
        continue;
      }
LABEL_15:
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xEu,
          (__int64)&WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids,
          (__int64)v5);
      }
      CVolumeStrip::ProviderFinalRelease(v5);
      Release = v5->lpVtbl->Release;
      ((void (__fastcall *)(IUnknown *))Release)(v5);
      continue;
    }
    break;
  }
}
