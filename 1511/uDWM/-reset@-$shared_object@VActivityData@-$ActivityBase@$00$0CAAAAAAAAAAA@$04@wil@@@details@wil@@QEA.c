/*
 * XREFs of ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEAAXXZ @ 0x1800782C0
 * Callers:
 *     ??1?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x180075B5C (--1-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x180076188 (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x180075B98 (--1ActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::details::shared_object<wil::ActivityBase<1,35184372088832,5>::ActivityData>::reset(
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
        wil::ActivityBase<1,35184372088832,5>::ActivityData::~ActivityData((__int64)(v4 + 2));
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
