/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800445D0
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeLimitTrackerNull@@UIVolumeLimitTracker@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180044288 (--$MakeAndInitialize@VCVolumeLimitTrackerNull@@UIVolumeLimitTracker@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18004468C (InlineIsEqualGUID.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeLimitTracker,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *v6; // r8

  v4 = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v5, &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35) )
  {
    *v6 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v4;
}
