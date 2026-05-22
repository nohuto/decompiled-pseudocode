/*
 * XREFs of ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180045950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800451F8 (-UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ @ 0x18004580C (-SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18004EC8C (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCSixDofProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  _OWORD *v4; // rax
  struct InputInfo *v5; // rdx
  __int64 v6; // rcx
  struct IInputDisplay **v7; // rbp
  int v8; // eax
  char v9; // r12
  struct IInputDisplay *v10; // rdi
  MPCHolographicInputManager *Instance; // rax
  int v12; // eax
  _DWORD *v13; // r8
  unsigned int v14; // ebx
  struct IInputTarget *v15; // rcx
  char v16; // al
  char v17; // cl
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IInputTarget *v21; // [rsp+70h] [rbp+8h] BYREF
  struct InputInfo *v22; // [rsp+78h] [rbp+10h] BYREF

  v22 = a2;
  ISMTracing::LogMPCInputReport<InputInfo * &>(&v22);
  v4 = (_OWORD *)(this + 280);
  v5 = a2;
  v6 = 14LL;
  do
  {
    *v4 = *(_OWORD *)v5;
    v4[1] = *((_OWORD *)v5 + 1);
    v4[2] = *((_OWORD *)v5 + 2);
    v4[3] = *((_OWORD *)v5 + 3);
    v4[4] = *((_OWORD *)v5 + 4);
    v4[5] = *((_OWORD *)v5 + 5);
    v4[6] = *((_OWORD *)v5 + 6);
    v4 += 8;
    *(v4 - 1) = *((_OWORD *)v5 + 7);
    v5 = (struct InputInfo *)((char *)v5 + 128);
    --v6;
  }
  while ( v6 );
  *v4 = *(_OWORD *)v5;
  v4[1] = *((_OWORD *)v5 + 1);
  v4[2] = *((_OWORD *)v5 + 2);
  v4[3] = *((_OWORD *)v5 + 3);
  v4[4] = *((_OWORD *)v5 + 4);
  v4[5] = *((_OWORD *)v5 + 5);
  v7 = (struct IInputDisplay **)(this - 16);
  v8 = *((_DWORD *)a2 + 177);
  if ( v8 == 2 )
  {
    *((_BYTE *)v7 + 276) = 0;
    *((_BYTE *)v7 + 274) = 1;
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  if ( v8 != 4 )
    goto LABEL_7;
  *((_BYTE *)v7 + 274) = 0;
  v9 = *((_BYTE *)v7 + 276);
LABEL_8:
  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
    && ((*((_DWORD *)a2 + 330) & *((_DWORD *)a2 + 329)) != 0
     || *((_BYTE *)a2 + 1351) && *((float *)a2 + 335) > *(float *)(this + 176)) )
  {
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 16));
  }
  v21 = 0LL;
  v10 = *(struct IInputDisplay **)(this + 24);
  Instance = MPCHolographicInputManager::GetInstance();
  v12 = MPCHolographicInputManager::Process3DInput(
          Instance,
          v10,
          a2,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 16)),
          &v21);
  v14 = v12;
  if ( v12 >= 0 )
  {
    MPCSixDofProcessor::UpdateDeltas((MPCSixDofProcessor *)(this - 16), a2, v13);
    v16 = *((_BYTE *)v7 + 273);
    v17 = *((_BYTE *)a2 + 1320) & 1;
    *((_BYTE *)v7 + 273) = v17;
    if ( v16 && !v17 )
      MPCSixDofProcessor::SendHomeEvent((MPCSixDofProcessor *)(this - 16));
    v15 = v21;
    if ( v21 && !v9 )
    {
      v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v21 + 24LL))(v21, a2);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x12C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
      v15 = v21;
    }
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v12);
    v15 = v21;
  }
  if ( v15 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v14;
}
