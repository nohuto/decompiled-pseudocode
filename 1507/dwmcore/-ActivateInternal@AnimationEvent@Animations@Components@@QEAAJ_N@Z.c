/*
 * XREFs of ?ActivateInternal@AnimationEvent@Animations@Components@@QEAAJ_N@Z @ 0x1801570C0
 * Callers:
 *     ?ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801552FC (-ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::AnimationEvent::ActivateInternal(
        Components::Animations::AnimationEvent *this,
        char a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *); // rdi
  __int64 v5; // rdi
  __int64 result; // rax

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *))*((_QWORD *)this + 6);
  if ( !v2
    || (v5 = (**v2)(v2, &GUID_e927e19f_bbb0_4b34_b84c_91bdabdb14d8),
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
                   v5,
                   *((unsigned int *)this + 14),
                   *((unsigned int *)this + 15)),
        (int)result >= 0) )
  {
    if ( a2 )
      --*((_DWORD *)this + 16);
    return 0LL;
  }
  return result;
}
