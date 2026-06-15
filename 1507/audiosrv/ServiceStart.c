/*
 * XREFs of ServiceStart @ 0x180039720
 * Callers:
 *     AudioSrvStartupThread @ 0x180039610 (AudioSrvStartupThread.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ReportStatusToSCMgr @ 0x1800396A0 (ReportStatusToSCMgr.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180039F48 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x18003A660 (-ServiceStart@CAudioSrv@@UEAAXXZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x18003ACA0 (--0CAudioSrv@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2, _QWORD *a3)
{
  __int64 v5; // rcx
  CAudioSrv *v6; // rax
  unsigned int v7; // edx
  const unsigned __int16 **v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  void (__fastcall *v11)(CAudioSrv *__hidden); // rsi
  __int64 v12; // rcx

  v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      27LL,
      &WPP_908455377377748732ca9cb03e87474b_Traceguids,
      *a3);
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( !a2 )
  {
    if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 0x10) != 0 && *(_BYTE *)(v5 + 25) >= 4u )
      WPP_SF_(*(_QWORD *)(v5 + 16), 0x1Cu, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
    ReportStatusToSCMgr(1u, 0x80004005, 0);
  }
  v6 = (CAudioSrv *)operator new(0xC8uLL);
  if ( v6 )
    v6 = CAudioSrv::CAudioSrv(v6);
  g_AudioService = v6;
  if ( v6 )
  {
    v9 = MyServiceInitialization(a1, v7, v8);
    v10 = v9;
    if ( v9 )
    {
      v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control )
        return v10;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
LABEL_17:
        if ( (struct _GUID *)v12 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(v12 + 28) & 0x10) != 0
          && *(_BYTE *)(v12 + 25) >= 4u )
        {
          WPP_SF_(*(_QWORD *)(v12 + 16), 0x1Fu, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
        }
        return v10;
      }
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Eu,
        (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
        v9);
    }
    else
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x1Du,
          (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
      }
      ReportStatusToSCMgr(4u, 0, 0);
      v11 = *(void (__fastcall **)(CAudioSrv *__hidden))(*(_QWORD *)g_AudioService + 96LL);
      if ( v11 == CAudioSrv::ServiceStart )
        CAudioSrv::ServiceStart(g_AudioService);
      else
        v11(g_AudioService);
    }
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_17;
  }
  return 14LL;
}
