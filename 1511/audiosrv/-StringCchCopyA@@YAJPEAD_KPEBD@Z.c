/*
 * XREFs of ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18008634C
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800367D0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800821BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  char v6; // al

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_10;
    v4 = 2147483646 - a2;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = a1[v5];
      if ( !v6 )
        break;
      *a1++ = v6;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_10:
      --a1;
      v3 = -2147024774;
    }
    goto LABEL_12;
  }
  if ( a2 )
LABEL_12:
    *a1 = 0;
  return (unsigned int)v3;
}
