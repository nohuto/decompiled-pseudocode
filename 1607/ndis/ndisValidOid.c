/*
 * XREFs of ndisValidOid @ 0x1C009BF40
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 *     ndisQueryStatisticsOids @ 0x1C009BB34 (ndisQueryStatisticsOids.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidOid(__int64 a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // edx

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) < 6u && (a2 & 0xFF000000) == 0xFF000000 )
  {
    LOBYTE(v3) = 1;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = 0;
    if ( v3 )
    {
      v5 = *(_DWORD *)(v3 + 4);
      if ( v5 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL * v4) == a2 )
            break;
          ++v4;
        }
        while ( v4 < v5 );
      }
      LOBYTE(v3) = v4 < v5;
    }
  }
  return v3;
}
