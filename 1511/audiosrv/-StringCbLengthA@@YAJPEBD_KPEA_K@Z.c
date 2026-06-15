/*
 * XREFs of ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x180086298
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800367D0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800821BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbLengthA(const char *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  int v5; // edx
  __int64 v6; // r10

  v3 = 0LL;
  v4 = 0LL;
  if ( !a1 )
    goto LABEL_7;
  v5 = 0;
  v6 = 0x7FFFFFFFLL;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
  {
    v4 = 0LL;
LABEL_7:
    v5 = -2147024809;
    goto LABEL_8;
  }
  v4 = 0x7FFFFFFF - v6;
LABEL_8:
  if ( a3 )
  {
    if ( v5 >= 0 )
      v3 = v4;
    *a3 = v3;
  }
  return (unsigned int)v5;
}
