/*
 * XREFs of ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228880
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C0228F4C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsHelpOrEndProc(struct tagKE *a1)
{
  __int16 v1; // r10
  __int16 v2; // r10
  unsigned __int8 v3; // al
  __int16 v4; // r10
  __int16 v5; // r10
  __int64 v6; // r11
  __int16 v7; // r10

  v1 = *((_WORD *)a1 + 1);
  if ( (v1 & 0x800) != 0 )
    return 1LL;
  v2 = v1 & 0x8F00;
  v3 = fNlsKbdConfiguration;
  *((_WORD *)a1 + 1) = v2;
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( !(unsigned int)NlsTestKeyStateToggle(0x15u) )
      {
LABEL_9:
        v7 = v5 | 0x23;
LABEL_12:
        *(_WORD *)(v6 + 2) = v7;
        return 1LL;
      }
    }
    else if ( (unsigned int)NlsTestKeyStateToggle(0x15u) )
    {
      goto LABEL_9;
    }
    v7 = v5 | 0x2F;
    goto LABEL_12;
  }
  if ( (v3 & 2) != 0 )
    v4 = v2 | 0x23;
  else
    v4 = v2 | 0x2F;
  *((_WORD *)a1 + 1) = v4;
  return 1LL;
}
