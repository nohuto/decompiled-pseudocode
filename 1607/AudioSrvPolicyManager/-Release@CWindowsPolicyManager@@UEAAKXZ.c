/*
 * XREFs of ?Release@CWindowsPolicyManager@@UEAAKXZ @ 0x180005140
 * Callers:
 *     ?Release@CWindowsPolicyManager@@W7EAAKXZ @ 0x1800050D0 (-Release@CWindowsPolicyManager@@W7EAAKXZ.c)
 *     ?Release@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x1800050F0 (-Release@CWindowsPolicyManager@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::Release(CWindowsPolicyManager *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 16;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 16);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
