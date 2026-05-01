/*
 * XREFs of ??$Register@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@@Z @ 0x180002CA8
 * Callers:
 *     ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002B34 (--$CreateGitHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@D.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Register<Windows::Foundation::IEventHandler<IInspectable *>>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 12);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64))(*(_QWORD *)qword_180022720 + 24LL))(
             qword_180022720,
             a2,
             &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
             a1 + 8);
  return result;
}
