/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x180005240
 * Callers:
 *     ?Release@CProcess@@WBA@EAAKXZ @ 0x18000A030 (-Release@CProcess@@WBA@EAAKXZ.c)
 *     ?Release@CProcess@@WBI@EAAKXZ @ 0x18000A040 (-Release@CProcess@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::Release(CUnknown *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 32LL))(this);
    (*(void (__fastcall **)(CUnknown *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
