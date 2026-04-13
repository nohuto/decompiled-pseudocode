/*
 * XREFs of _ContentManagement::TargetedContent::ImageContentValueFromJson_::_1_::dtor$2 @ 0x18005C67A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18000B58C (--1-$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall ContentManagement::TargetedContent::ImageContentValueFromJson_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 40) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::ContentValueImpl>::~ComPtr<ContentManagement::TargetedContent::ContentValueImpl>(*(volatile signed __int64 ***)(a2 + 80));
  }
  return result;
}
