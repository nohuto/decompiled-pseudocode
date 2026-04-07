/*
 * XREFs of ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0A@$04@wil@@@details@wil@@QEAAXXZ @ 0x180007190
 * Callers:
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180007380 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ActivityData@?$ActivityBase@$00$0A@$04@wil@@QEAA@XZ @ 0x180007630 (--1ActivityData@-$ActivityBase@$00$0A@$04@wil@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall wil::details::shared_object<wil::ActivityBase<1,0,5>::ActivityData>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rbp

  v2 = *a1;
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v4 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<1,0,5>::ActivityData::~ActivityData(v4 + 2);
        result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, volatile signed __int32 *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 32LL))(
                   WPF::g_pProcessHeap,
                   v4);
      }
    }
    *a1 = 0LL;
  }
  return result;
}
