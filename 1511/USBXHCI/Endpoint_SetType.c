/*
 * XREFs of Endpoint_SetType @ 0x1C0051258
 * Callers:
 *     Endpoint_Create @ 0x1C0050C7C (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Endpoint_SetType(__int64 a1)
{
  char result; // al

  switch ( *(_BYTE *)(a1 + 99) & 3 )
  {
    case 1:
      *(_DWORD *)(a1 + 120) = 1;
      break;
    case 2:
      *(_DWORD *)(a1 + 120) = 2;
      break;
    case 3:
      *(_DWORD *)(a1 + 120) = 3;
      break;
    default:
      *(_DWORD *)(a1 + 120) = 0;
      break;
  }
  result = *(_BYTE *)(a1 + 98);
  if ( result < 0 || !*(_DWORD *)(a1 + 120) )
    *(_DWORD *)(a1 + 120) += 4;
  return result;
}
