/*
 * XREFs of _ContentManagement::TargetedContent::MakeContentValueForJsonObject_::_1_::dtor$0 @ 0x18005C6B2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18000B58C (--1-$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall ContentManagement::TargetedContent::MakeContentValueForJsonObject_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 64) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::ContentValueImpl>::~ComPtr<ContentManagement::TargetedContent::ContentValueImpl>(*(volatile signed __int64 ***)(a2 + 56));
  }
  return result;
}
