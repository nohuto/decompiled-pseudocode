/*
 * XREFs of ?Release@CWindowsPolicyManager@@UEAAKXZ @ 0x180005970
 * Callers:
 *     ?Release@CWindowsPolicyManager@@W7EAAKXZ @ 0x180005900 (-Release@CWindowsPolicyManager@@W7EAAKXZ.c)
 *     ?Release@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x180005920 (-Release@CWindowsPolicyManager@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
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
