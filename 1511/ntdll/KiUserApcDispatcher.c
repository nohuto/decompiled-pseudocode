/*
 * XREFs of KiUserApcDispatcher @ 0x1800A8A70
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A8A70 (KiUserApcDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A5920 (ZwContinue.c)
 *     KiUserCallForwarder @ 0x1800A8A20 (KiUserCallForwarder.c)
 */

void __noreturn KiUserApcDispatcher()
{
  unsigned __int64 v0; // rcx
  NTSTATUS v1; // eax
  NTSTATUS v2; // esi
  __int64 v3; // rcx
  __int64 retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v5; // [rsp+8h] [rbp+8h]
  __int64 v6; // [rsp+10h] [rbp+10h]
  __int64 v7; // [rsp+18h] [rbp+18h]

  while ( 1 )
  {
    v0 = __ROL8__(-(v7 >> 2), 32);
    if ( (_DWORD)v0 )
    {
      KiUserCallForwarder(retaddr, v5, v6, (__int64)&retaddr);
    }
    else
    {
      v3 = (unsigned int)retaddr | v0;
      if ( Wow64ApcRoutine )
      {
        KiUserCallForwarder(v3, v5, v6, (__int64)&retaddr);
        v2 = -1073741811;
LABEL_5:
        RtlRaiseStatus(v2);
      }
    }
    v1 = ZwContinue((PCONTEXT)&retaddr, 1u);
    if ( v1 )
    {
      v2 = v1;
      goto LABEL_5;
    }
  }
}
