/*
 * XREFs of _ContentManagement::TargetedContent::UriContentValueFromJson_::_1_::dtor$3 @ 0x18005C56A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18000B58C (--1-$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall ContentManagement::TargetedContent::UriContentValueFromJson_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 48) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::ContentValueImpl>::~ComPtr<ContentManagement::TargetedContent::ContentValueImpl>(*(volatile signed __int64 ***)(a2 + 72));
  }
  return result;
}
