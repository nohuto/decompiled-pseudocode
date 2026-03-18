/*
 * XREFs of ?GetComponentMultiplier@InteractiveControlParser@@SAXPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@PEAJ1@Z @ 0x1C02405B0
 * Callers:
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C0240160 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlParser::GetComponentMultiplier(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int *a2,
        int *a3)
{
  int v4; // r8d
  int v5; // eax
  int v6; // eax
  bool v7; // cc
  __int64 v8; // r9

  if ( !*((_QWORD *)a1 + 9) )
  {
    *((_DWORD *)a1 + 18) = *((_DWORD *)a1 + 16);
    *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 17);
  }
  *a2 = 1;
  *a3 = 1;
  v4 = *((_DWORD *)a1 + 14) & 0xF;
  if ( (unsigned int)(v4 - 8) <= 7 )
    v4 -= 16;
  v5 = *((_DWORD *)a1 + 15);
  switch ( v5 )
  {
    case 17:
      v6 = 1000 * *a2;
      break;
    case 19:
      v6 = 2540 * *a2;
      break;
    case 18:
      v6 = 5730 * *a2;
      break;
    case 20:
      v6 = 100 * *a2;
      break;
    default:
      if ( v5 || *((_DWORD *)a1 + 4) != 3 )
        goto LABEL_17;
      v6 = 36000 * *a2;
      break;
  }
  *a2 = v6;
LABEL_17:
  v7 = v4 <= 0;
  if ( v4 >= 0 )
    goto LABEL_23;
  v8 = (unsigned int)-v4;
  v4 = 0;
  do
  {
    *a3 *= 10;
    --v8;
  }
  while ( v8 );
  while ( 1 )
  {
    v7 = v4 <= 0;
LABEL_23:
    if ( v7 )
      break;
    *a2 *= 10;
    --v4;
  }
}
