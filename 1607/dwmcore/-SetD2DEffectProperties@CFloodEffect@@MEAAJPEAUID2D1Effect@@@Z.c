/*
 * XREFs of ?SetD2DEffectProperties@CFloodEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18012BF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFloodEffect::SetD2DEffectProperties(CFloodEffect *this, struct ID2D1Effect *a2)
{
  return (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           0LL,
           0LL,
           (char *)this + 272,
           16);
}
