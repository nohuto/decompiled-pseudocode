/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x18002E828 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002EB60 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18004A750 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x18004D0FC (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18004D51C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18004EC8C (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  char *v2; // rbp
  struct InputInfo *v4; // rcx
  __int64 v6; // rdx
  char *v7; // rax
  __int128 v8; // xmm1
  MPCGamepadInputHelper *Instance; // rax
  bool ShouldHandleMPCInput; // al
  bool v11; // si
  MPCHolographicInputManager *v12; // rax
  struct IInputTarget *FocusedTarget; // rax
  struct IInputTarget **v14; // r14
  __int64 v15; // rcx
  struct IMPCInputProviderBase *v16; // rsi
  struct IInputDisplay *v17; // rbx
  MPCHolographicInputManager *v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)(this + 184);
  v4 = a2;
  v6 = 14LL;
  v7 = v2;
  do
  {
    *(_OWORD *)v7 = *(_OWORD *)v4;
    *((_OWORD *)v7 + 1) = *((_OWORD *)v4 + 1);
    *((_OWORD *)v7 + 2) = *((_OWORD *)v4 + 2);
    *((_OWORD *)v7 + 3) = *((_OWORD *)v4 + 3);
    *((_OWORD *)v7 + 4) = *((_OWORD *)v4 + 4);
    *((_OWORD *)v7 + 5) = *((_OWORD *)v4 + 5);
    *((_OWORD *)v7 + 6) = *((_OWORD *)v4 + 6);
    v7 += 128;
    v8 = *((_OWORD *)v4 + 7);
    v4 = (struct InputInfo *)((char *)v4 + 128);
    *((_OWORD *)v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)v7 = *(_OWORD *)v4;
  *((_OWORD *)v7 + 1) = *((_OWORD *)v4 + 1);
  *((_OWORD *)v7 + 2) = *((_OWORD *)v4 + 2);
  *((_OWORD *)v7 + 3) = *((_OWORD *)v4 + 3);
  *((_OWORD *)v7 + 4) = *((_OWORD *)v4 + 4);
  *((_OWORD *)v7 + 5) = *((_OWORD *)v4 + 5);
  *(_OWORD *)(this + 2080) = *((_OWORD *)a2 + 44);
  *(_OWORD *)(this + 2096) = *((_OWORD *)a2 + 45);
  *(_OWORD *)(this + 2112) = *((_OWORD *)a2 + 46);
  *(_OWORD *)(this + 2128) = *((_OWORD *)a2 + 47);
  Instance = MPCGamepadInputHelper::GetInstance();
  ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(Instance);
  v11 = ShouldHandleMPCInput;
  if ( *(_BYTE *)(this + 2509) && !ShouldHandleMPCInput )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 24), a2);
  *(_BYTE *)(this + 2509) = v11;
  if ( !v11
    || (v12 = MPCHolographicInputManager::GetInstance(),
        FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v12),
        MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget)) )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(this + 152) + 48LL))(*(_QWORD *)(this + 152), v2);
  }
  else
  {
    if ( (*((_DWORD *)a2 + 178) & 4) != 0 && (*(_DWORD *)(this + 2072) & 4) == 0 )
      *((_DWORD *)a2 + 176) = 2;
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      && MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 24)) )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 16));
    }
    v14 = (struct IInputTarget **)(this + 168);
    v15 = *(_QWORD *)(this + 168);
    v16 = (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24));
    if ( v15 )
    {
      *v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v17 = *(struct IInputDisplay **)(this + 24);
    v18 = MPCHolographicInputManager::GetInstance();
    v19 = MPCHolographicInputManager::Process3DInput(v18, v17, a2, v16, v14);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x95,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v19);
      return v20;
    }
  }
  return 0LL;
}
