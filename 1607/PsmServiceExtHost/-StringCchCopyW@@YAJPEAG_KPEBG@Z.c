/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180005C2C
 * Callers:
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r9d
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 232LL;
  v4 = 0;
  v5 = a3 - a1;
  do
  {
    if ( v3 == -2147483414 )
      break;
    v6 = *(_WORD *)&a1[v5];
    if ( !v6 )
      break;
    *(_WORD *)a1 = v6;
    a1 += 2;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
  {
    a1 -= 2;
    v4 = -2147024774;
  }
  *(_WORD *)a1 = 0;
  return v4;
}
