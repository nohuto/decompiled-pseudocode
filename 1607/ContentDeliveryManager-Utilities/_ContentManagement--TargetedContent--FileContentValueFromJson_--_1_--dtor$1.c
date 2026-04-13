/*
 * XREFs of _ContentManagement::TargetedContent::FileContentValueFromJson_::_1_::dtor$1 @ 0x18005C636
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18000B58C (--1-$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall ContentManagement::TargetedContent::FileContentValueFromJson_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::ContentValueImpl>::~ComPtr<ContentManagement::TargetedContent::ContentValueImpl>(*(volatile signed __int64 ***)(a2 + 56));
  }
  return result;
}
