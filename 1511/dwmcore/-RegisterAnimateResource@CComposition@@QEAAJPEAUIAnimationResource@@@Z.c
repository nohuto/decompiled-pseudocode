/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180094E98
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800ABB48 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x180083B90 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x180083BA0 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x18008D9E8 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    goto LABEL_17;
  }
  v5 = 0;
  if ( v4 > *((_DWORD *)this + 151) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 584, 8, 1, &v14);
    v5 = v13;
    if ( v13 >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD6Du);
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
