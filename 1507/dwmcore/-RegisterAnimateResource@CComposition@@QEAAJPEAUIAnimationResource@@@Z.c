/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180068518
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18005CD14 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x180046D70 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x180046D80 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x180065300 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  CAnimation *v6; // rbx
  struct _GUID *(__fastcall *v7)(CAnimation *); // rsi
  struct _GUID *AnimationScenario; // rax
  const struct _GUID *v9; // rsi
  __int64 (__fastcall *v10)(CAnimation *); // rbp
  unsigned int ChannelHandle; // eax
  int v13; // eax
  CAnimation *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *((_DWORD *)this + 152);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_15;
  }
  v5 = 0;
  if ( v4 > *((_DWORD *)this + 151) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 584, 8u, 1, &v14);
    v5 = v13;
    if ( v13 >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD16u);
    return v5;
  }
  *(_QWORD *)(*((_QWORD *)this + 73) + 8LL * v3) = v14;
  *((_DWORD *)this + 152) = v4;
LABEL_4:
  v6 = v14;
  v7 = *(struct _GUID *(__fastcall **)(CAnimation *))(*(_QWORD *)v14 + 16LL);
  if ( v7 == CAnimation::GetAnimationScenario )
  {
    AnimationScenario = CAnimation::GetAnimationScenario(v14);
  }
  else
  {
    AnimationScenario = v7(v14);
    v6 = v14;
  }
  v9 = AnimationScenario;
  v10 = *(__int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v6 + 24LL);
  if ( v10 == CAnimation::GetChannelHandle )
  {
    ChannelHandle = CAnimation::GetChannelHandle(v6);
  }
  else
  {
    ChannelHandle = v10(v6);
    v6 = v14;
  }
  if ( v9 || ChannelHandle )
    CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(
      *((CPartitionVerticalBlankScheduler **)this + 63),
      ChannelHandle,
      (unsigned __int64)v6 | 0xDD00000000000000uLL,
      v9);
  return v5;
}
