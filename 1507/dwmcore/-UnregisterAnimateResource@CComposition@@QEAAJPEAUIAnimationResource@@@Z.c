/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180068410
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18005CCD0 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x180046D70 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x180046D80 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x1800652C0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned int v4; // ecx
  unsigned int v5; // r14d
  unsigned __int64 v6; // r8
  unsigned __int64 i; // rbx
  __int64 v8; // rcx
  struct _GUID *(__fastcall *v9)(CAnimation *); // rdi
  struct _GUID *AnimationScenario; // rax
  const struct _GUID *v11; // rdi
  __int64 (__fastcall *v12)(CAnimation *); // rbp
  unsigned int ChannelHandle; // eax

  v2 = *((_QWORD *)this + 73);
  v4 = *((_DWORD *)this + 152);
  v5 = 0;
  v6 = 0LL;
  for ( i = a2; (unsigned int)v6 < v4; v6 = (unsigned int)(v6 + 1) )
  {
    if ( a2 == *(_QWORD *)(v2 + 8 * v6) )
      break;
  }
  if ( (unsigned int)v6 >= v4 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD3Du);
  }
  else
  {
    if ( (unsigned int)v6 < v4 - 1 )
    {
      do
      {
        a2 = (unsigned int)(v6 + 1);
        v8 = (unsigned int)v6;
        v6 = a2;
        *(_QWORD *)(v2 + 8 * v8) = *(_QWORD *)(v2 + 8 * a2);
      }
      while ( (unsigned int)a2 < *((_DWORD *)this + 152) - 1 );
    }
    --*((_DWORD *)this + 152);
  }
  v9 = *(struct _GUID *(__fastcall **)(CAnimation *))(*(_QWORD *)i + 16LL);
  if ( v9 == CAnimation::GetAnimationScenario )
    AnimationScenario = CAnimation::GetAnimationScenario((CAnimation *)i);
  else
    AnimationScenario = (struct _GUID *)((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64, __int64))v9)(
                                          i,
                                          a2,
                                          v6,
                                          v2);
  v11 = AnimationScenario;
  v12 = *(__int64 (__fastcall **)(CAnimation *))(*(_QWORD *)i + 24LL);
  if ( v12 == CAnimation::GetChannelHandle )
    ChannelHandle = CAnimation::GetChannelHandle((CAnimation *)i);
  else
    ChannelHandle = v12((CAnimation *)i);
  if ( v11 || ChannelHandle )
    CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
      *((CPartitionVerticalBlankScheduler **)this + 63),
      ChannelHandle,
      i | 0xDD00000000000000uLL,
      v11);
  return v5;
}
