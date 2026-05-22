/*
 * XREFs of ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180040F20 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastHitTestedTarget@MPCInputProviderBase@@UEBA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ @ 0x18002CCC0 (-GetLastHitTestedTarget@MPCInputProviderBase@@UEBA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180041B70 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004C36C (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x18004D0FC (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18004D51C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18004EC8C (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCMouseProcessor::hydroForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  MPCHolographicInputManager *Instance; // rax
  struct IInputTarget *FocusedTarget; // rax
  MPCHolographicInputManager *v8; // rax
  struct IMPCInputTarget *v9; // rax
  struct IInputDisplay *v10; // rbx
  MPCHolographicInputManager *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // edx
  struct IInputTarget *v22; // rbx
  unsigned int *v23; // rsi
  struct MPCHolographicInputManager *v24; // rax
  struct IInputTarget *v25; // rcx
  struct IInputTarget *v27; // rcx
  _QWORD v28[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v30; // [rsp+80h] [rbp+40h] BYREF
  __int64 v31; // [rsp+90h] [rbp+50h] BYREF
  struct IInputTarget *v32; // [rsp+98h] [rbp+58h] BYREF

  v28[1] = -2LL;
  *((_DWORD *)this + 76) = *((__int16 *)a3 + 355);
  *((_DWORD *)this + 88) = GetTickCount();
  Instance = MPCHolographicInputManager::GetInstance();
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance);
  if ( MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget) )
  {
    v8 = MPCHolographicInputManager::GetInstance();
    v9 = MPCHolographicInputManager::GetFocusedTarget(v8);
    *((_DWORD *)a3 + 170) = (*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v9 + 64LL))(v9);
    MPCMouseProcessor::DownLevelInput(this, a2, a3, *((_DWORD *)a3 + 179), *((_DWORD *)a3 + 180), 0);
LABEL_31:
    *((_WORD *)this + 154) = *((_WORD *)a3 + 354);
    *((_BYTE *)this + 310) = *((_BYTE *)a2 + 20);
    return 0LL;
  }
  if ( !MPCInputProviderBase::IsPrimary((MPCMouseProcessor *)((char *)this + 48)) )
  {
    MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 32));
    goto LABEL_31;
  }
  v32 = 0LL;
  v10 = (struct IInputDisplay *)*((_QWORD *)this + 9);
  v11 = MPCHolographicInputManager::GetInstance();
  v12 = MPCHolographicInputManager::Process3DInput(v11, v10, a3, (MPCMouseProcessor *)((char *)this + 48), &v32);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v15 = 1;
    if ( *((_BYTE *)a3 + 785) )
    {
      v31 = 0LL;
      MPCInputProviderBase::GetLastHitTestedTarget((__int64)this + 48, v28);
      v16 = v28[0];
      if ( v28[0] )
      {
        v17 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
               v16,
               &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
               &v31) >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 56LL))(v31, &v30);
          if ( v18 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x123,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v18);
            __debugbreak();
          }
          if ( v30 )
            *((_BYTE *)a3 + 1882) = 1;
        }
      }
      *((_DWORD *)a3 + 16) = (int)*((float *)a3 + 197);
      *((_DWORD *)a3 + 17) = (int)*((float *)a3 + 198);
      *((_BYTE *)a3 + 684) = 0;
      *((_BYTE *)a3 + 785) = 0;
      *((_DWORD *)a3 + 170) = *((_DWORD *)a3 + 204);
      *((_BYTE *)a3 + 1883) = 1;
      MPCMouseProcessor::DownLevelInput(
        this,
        a2,
        a3,
        (int)*((float *)a3 + 197),
        (int)*((float *)a3 + 198),
        *((_BYTE *)a3 + 1072) != 0);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v19 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = *((_BYTE *)a2 + 20) != 0 ? 4 : 1;
    v21 = (unsigned __int16)(v20 & *((_WORD *)this + 154));
    if ( (unsigned __int16)(v20 & *((_WORD *)a3 + 354)) == v20 )
    {
      if ( v21 == v20 )
        goto LABEL_29;
    }
    else
    {
      if ( v21 != v20 )
        goto LABEL_29;
      v15 = 0;
    }
    v22 = v32;
    v23 = (unsigned int *)*((_QWORD *)this + 8);
    v24 = MPCHolographicInputManager::GetInstance();
    v12 = MPCHolographicInputManager::InjectInteractionState(v24, v15, *v23, (char *)a3 + 784, v22);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 327LL;
      goto LABEL_26;
    }
LABEL_29:
    v27 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    goto LABEL_31;
  }
  v14 = 281LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v12);
  v25 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v13;
}
