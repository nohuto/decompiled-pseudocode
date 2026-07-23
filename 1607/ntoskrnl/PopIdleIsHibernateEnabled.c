/*
 * XREFs of PopIdleIsHibernateEnabled @ 0x1403F4580
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x14020D310 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIdleIsHibernateEnabled(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] && a1[22] == 2 )
  {
    if ( a1[7] )
      return FileObject != 0LL;
  }
  return result;
}
