/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0 (-hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180045950 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480 (-hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180049670 (-hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18004A750 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x18004A784 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z @ 0x18004A7DC (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x18004B57C (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004BCB0 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004BE90 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004C17C (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004C7E8 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18004CB14 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004CC70 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x18004CE24 (-InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18004D038 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        struct IMPCInputProviderBase *a4,
        struct IInputTarget **a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  const char *v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r15
  _QWORD *v18; // rcx
  struct InputInfo *v19; // rcx
  struct InputInfo *v20; // rcx
  struct InputInfo *v21; // rcx
  const char *v22; // r9
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  struct IInputTarget **v27; // r15
  struct InputInfo *v28; // rcx
  int v29; // eax
  const char *v30; // r9
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v34; // rbx
  _QWORD *v35; // rax
  struct InputInfo *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  const char *v40; // r9
  MPCGamepadInputHelper *Instance; // rax
  MPCGamepadInputHelper *v42; // r10
  bool ShouldUseGazeAndCommit; // al
  char v44; // dl
  int v45; // eax
  MPCHolographicInputManager *v46; // rcx
  void *v47[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v48; // [rsp+60h] [rbp-19h]
  __int64 (__fastcall **v49)(); // [rsp+68h] [rbp-11h] BYREF
  __int128 v50; // [rsp+70h] [rbp-9h]
  __int64 (__fastcall ***v51)(); // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  struct InputInfo *v53; // [rsp+D8h] [rbp+5Fh] BYREF

  if ( !*((_BYTE *)this + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x144,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 262) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a4 + 216LL))(a4);
    v10 = v9;
    if ( *((_QWORD *)this + 263) != v9 )
    {
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v11 = *((_QWORD *)this + 263);
      *((_QWORD *)this + 263) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 263) + 56LL))(*((_QWORD *)this + 263));
    v13 = v12;
    if ( *((_QWORD *)this + 262) != v12 )
    {
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v14 = *((_QWORD *)this + 262);
      *((_QWORD *)this + 262) = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    MPCHolographicInputManager::InitializeCursor3D(this);
  }
  if ( !*((_QWORD *)this + 262) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  MPCHolographicInputManager::UpdateGazeSensorData(this, a3);
  if ( !*((_BYTE *)this + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1F1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v15);
    __debugbreak();
  }
  v16 = 0LL;
  if ( (__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 3 )
  {
    while ( 1 )
    {
      v17 = *((_QWORD *)this + 264);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 8 * v16) + 24LL))(*(_QWORD *)(v17 + 8 * v16)) )
        break;
      if ( ++v16 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 3) )
        goto LABEL_36;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 8 * v16) + 72LL))(*(_QWORD *)(v17 + 8 * v16)) )
    {
      v18 = (_QWORD *)*((_QWORD *)this + 295);
      if ( *v18 == *((_QWORD *)this + 269) || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 72LL))(*v18) )
      {
        v20 = *(struct InputInfo **)(v17 + 8 * v16);
        v53 = v20;
        if ( v20 )
          (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v20 + 8LL))(v20);
      }
      else
      {
        v19 = (struct InputInfo *)*((_QWORD *)this + 269);
        v53 = v19;
        if ( v19 )
          (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    else
    {
      v21 = *(struct InputInfo **)(v17 + 8 * v16);
      v53 = v21;
      if ( v21 )
        (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v21 + 8LL))(v21);
    }
    MPCHolographicInputManager::TrySetProviderAsPrimary(this, &v53);
    if ( v53 )
      (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v53 + 16LL))(v53);
  }
LABEL_36:
  if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a4 + 72LL))(a4) )
  {
    *((_DWORD *)a3 + 180) = *((_DWORD *)a3 + 1);
    *((_BYTE *)a3 + 848) = 0;
    *((_BYTE *)a3 + 785) = 0;
    *((_DWORD *)a3 + 204) = 0;
    v29 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a4 + 56LL))(
            a4,
            this,
            a3);
    v31 = v29;
    if ( v29 >= 0 )
    {
      if ( !*((_BYTE *)a3 + 684) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x366,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v30);
        __debugbreak();
      }
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a4 + 144LL))(a4, a3);
      MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct InputInfo *)((char *)a3 + 724));
      v31 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x364,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v29);
    }
    if ( v31 >= 0 )
    {
      v34 = *((_QWORD *)this + 262);
      v35 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo **))(*(_QWORD *)a4 + 200LL))(
                        a4,
                        &v53);
      v27 = a5;
      v31 = (*(__int64 (__fastcall **)(__int64, struct IInputDisplay *, struct InputInfo *, _QWORD, _QWORD, struct IInputTarget **))(*(_QWORD *)v34 + 48LL))(
              v34,
              a2,
              a3,
              0LL,
              *v35,
              a5);
      v36 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v36 + 16LL))(v36);
      }
      if ( v31 >= 0 )
        goto LABEL_57;
      v32 = 363LL;
    }
    else
    {
      v32 = 355LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v31);
    return (unsigned int)v31;
  }
  if ( !*((_QWORD *)this + 269) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x159,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v22);
    __debugbreak();
  }
  v23 = (_OWORD *)((char *)a3 + 784);
  v24 = (_OWORD *)((char *)this + 984);
  v25 = 2LL;
  do
  {
    *v23 = *v24;
    v23[1] = v24[1];
    v23[2] = v24[2];
    v23[3] = v24[3];
    v23[4] = v24[4];
    v23[5] = v24[5];
    v23[6] = v24[6];
    v23 += 8;
    *(v23 - 1) = v24[7];
    v24 += 8;
    --v25;
  }
  while ( v25 );
  *v23 = *v24;
  v23[1] = v24[1];
  *((_QWORD *)v23 + 4) = *((_QWORD *)v24 + 4);
  v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct InputInfo **, __int64))(**((_QWORD **)this + 269) + 200LL))(
                    *((_QWORD *)this + 269),
                    &v53,
                    128LL);
  if ( *v26 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 8LL))(*v26);
  v27 = a5;
  *a5 = (struct IInputTarget *)*v26;
  v28 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(struct InputInfo *))(*(_QWORD *)v28 + 16LL))(v28);
  }
LABEL_57:
  MPCHolographicInputManager::UpdateGazeCursor(this, a3);
  v53 = a3;
  if ( *((_DWORD *)a3 + 176) == 8 )
  {
    v47[0] = this;
    v47[1] = &v53;
    v49 = off_1800A6D28;
    v50 = *(_OWORD *)v47;
    v51 = &v49;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v49);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a4 + 128LL))(
    a4,
    this,
    a3);
  Instance = MPCGamepadInputHelper::GetInstance(v38, v37, v39, v40);
  if ( !MPCGamepadInputHelper::ShouldHandleMPCInput(Instance)
    || (ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v42, a3), v44 = 1,
                                                                                         !ShouldUseGazeAndCommit) )
  {
    v44 = 0;
  }
  if ( v44 != *((_BYTE *)v42 + 24) )
    MPCGamepadInputHelper::UpdateGamepadFocus(v42, v44);
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a4) )
  {
    *((_BYTE *)this + 2088) = *((_BYTE *)a3 + 1072) != 0;
    MPCHolographicInputManager::ProcessCursorData(
      this,
      a4,
      (char *)a3 + 784,
      (unsigned int)(a4 != **((struct IMPCInputProviderBase ***)this + 295)) + 1,
      (char *)a3 + 1080);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *, void **, MPCHolographicInputManager *))(*(_QWORD *)a4 + 104LL))(
      a4,
      v47,
      this);
    v45 = (*(__int64 (__fastcall **)(_QWORD, signed __int64))(**((_QWORD **)this + 272) + 80LL))(
            *((_QWORD *)this + 272),
            ((char *)v47[1] - (char *)v47[0]) / 80);
    if ( v45 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x186,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v45);
    if ( v47[0] )
      std::_Deallocate((char *)v47[0], (signed __int64)(v48 - (unsigned __int64)v47[0]) / 80, 0x50uLL);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct IInputTarget *))(*(_QWORD *)a4 + 192LL))(a4, *v27);
  MPCHolographicInputManager::ProcessCapture(v46, a3, a4, v27);
  return 0LL;
}
