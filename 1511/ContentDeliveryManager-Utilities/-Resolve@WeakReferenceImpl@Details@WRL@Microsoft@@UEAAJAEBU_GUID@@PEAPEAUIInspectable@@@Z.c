/*
 * XREFs of ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800029F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  __int64 result; // rax
  unsigned int v5; // esi

  *a3 = 0LL;
  while ( 1 )
  {
    result = *((unsigned int *)this + 4);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)this + 4, result + 1, result) )
    {
      v5 = (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, struct IInspectable **))this + 3))(
             *((_QWORD *)this + 3),
             a2,
             a3);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
      return v5;
    }
  }
  return result;
}
