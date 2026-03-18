/*
 * XREFs of ?IsMoveCandidate@CVisual@@UEAA_NXZ @ 0x18008D580
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CVisual::IsMoveCandidate(CVisual *this)
{
  __int64 v1; // r14
  char v2; // si
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 47);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 9);
    if ( (v4 & 2) != 0 )
      v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v5 = *((_QWORD *)this + 9) & 1LL;
    if ( !v5
      && ((*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 47), 79LL)
       || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 47) + 48LL))(
            *((_QWORD *)this + 47),
            84LL)) )
    {
      return 1;
    }
  }
  return v2;
}
