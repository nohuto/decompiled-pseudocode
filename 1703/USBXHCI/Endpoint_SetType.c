/*
 * XREFs of Endpoint_SetType @ 0x1C0055080
 * Callers:
 *     Endpoint_Create @ 0x1C0054A74 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Endpoint_SetType(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
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
  if ( *(char *)(a1 + 98) < 0 || !*(_DWORD *)(a1 + 120) )
    *(_DWORD *)(a1 + 120) += 4;
  return result;
}
