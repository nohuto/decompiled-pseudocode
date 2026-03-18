/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18003B7C4
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B0464 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x180039940 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x180039950 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x180043F3C (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // edi
  CAnimation *v6; // rbx
  struct _GUID *(__fastcall *v7)(CAnimation *); // rax
  struct _GUID *AnimationScenario; // rax
  const struct _GUID *v9; // rsi
  __int64 (__fastcall *v10)(CAnimation *); // rax
  unsigned int ChannelHandle; // eax
  int v13; // eax
  CAnimation *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *((_DWORD *)this + 154);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v5 = 0;
    if ( v4 <= *((_DWORD *)this + 153) )
    {
      *(_QWORD *)(*((_QWORD *)this + 74) + 8LL * v3) = v14;
      *((_DWORD *)this + 154) = v4;
      goto LABEL_4;
    }
    v13 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 592, 8LL, 1LL, &v14);
    v5 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC39u);
    return (unsigned int)v5;
  }
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
  v10 = *(__int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v6 + 32LL);
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
      *((CPartitionVerticalBlankScheduler **)this + 64),
      ChannelHandle,
      (unsigned __int64)v6 | 0xDD00000000000000uLL,
      v9);
  return (unsigned int)v5;
}
