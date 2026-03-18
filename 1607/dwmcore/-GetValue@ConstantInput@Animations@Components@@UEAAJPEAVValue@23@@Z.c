/*
 * XREFs of ?GetValue@ConstantInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x1800AB970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::ConstantInput::GetValue(
        Components::Animations::ConstantInput *this,
        struct Components::Animations::Value *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)this + 1);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 2);
  return result;
}
