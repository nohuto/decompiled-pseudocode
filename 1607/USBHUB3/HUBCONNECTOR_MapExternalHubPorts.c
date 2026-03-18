/*
 * XREFs of HUBCONNECTOR_MapExternalHubPorts @ 0x1C006A668
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x1C006A748 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     HUBCONNECTOR_RegisterPort @ 0x1C0069BBC (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapExternalHubPorts(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 *v3; // rsi
  __int64 i; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = 1;
  if ( *(_WORD *)(a1 + 44) )
  {
    v3 = (__int64 *)(a1 + 2304);
LABEL_3:
    for ( i = *v3; ; i = *(_QWORD *)(v5 + 248) )
    {
      v5 = i - 248;
      if ( v3 == (__int64 *)(v5 + 248) )
        break;
      if ( *(_WORD *)(v5 + 200) == v2 )
      {
        if ( v5 )
        {
          v6 = *(_QWORD *)(a1 + 256);
          *(_OWORD *)(v5 + 1368) = *(_OWORD *)v6;
          *(_OWORD *)(v5 + 1384) = *(_OWORD *)(v6 + 16);
          *(_OWORD *)(v5 + 1400) = *(_OWORD *)(v6 + 32);
          *(_QWORD *)(v5 + 1416) = *(_QWORD *)(v6 + 48);
          *(_DWORD *)(v5 + 4LL * (unsigned __int16)++*(_WORD *)(v5 + 1388) + 1392) = v2;
          if ( ((*(_DWORD *)(v5 + 204) & 1) == 0 || (int)HUBCONNECTOR_RegisterPort(v5) >= 0)
            && ++v2 <= *(_WORD *)(a1 + 44) )
          {
            goto LABEL_3;
          }
        }
        return;
      }
    }
  }
}
