/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_835f32be7c34f9eebe0c7b9d899ddfb3_@@@details@wil@@QEAA@XZ @ 0x18001ED18
 * Callers:
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$1 @ 0x180031842 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$1.c)
 *     __lambda_013c46c4876e793d779fba5076862f22_::operator()_::_1_::dtor$1 @ 0x18003189C (__lambda_013c46c4876e793d779fba5076862f22_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180023624 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_835f32be7c34f9eebe0c7b9d899ddfb3_>::~ScopeExitFn<_lambda_835f32be7c34f9eebe0c7b9d899ddfb3_>(
        __int64 a1)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v3; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 16LL), 0LL);
    v3 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 8LL), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
      *(SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation **)a1,
      v3,
      StringRawBuffer);
  }
}
