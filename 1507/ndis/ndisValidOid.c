/*
 * XREFs of ndisValidOid @ 0x1C00960C8
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C0096198 (ndisQueryStatisticsOids.c)
 *     ndisDeviceControlHandler @ 0x1C009652C (ndisDeviceControlHandler.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidOid(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) < 6u && (a2 & 0xFF000000) == 0xFF000000 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  v5 = *(_DWORD *)(v3 + 4);
  if ( v5 )
  {
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v4) == a2 )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  return (unsigned int)v4 < v5;
}
