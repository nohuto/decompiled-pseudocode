/*
 * XREFs of PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C007EACC
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0072DA8 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosGpioInterruptIoDescriptor(__int64 a1, __int64 a2)
{
  char v2; // r9
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  _BYTE *v5; // rdx

  if ( *(_BYTE *)(a1 + 4) == 1 )
  {
    v2 = 0;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 4) )
      return 3221225473LL;
    v2 = 1;
  }
  v3 = *(_DWORD *)(a2 + 16);
  v4 = 0;
  if ( v3 )
  {
    v5 = (_BYTE *)(a2 + 20);
    do
    {
      if ( v2 )
      {
        if ( *v5 == 2 && (v5[2] & 0x10) != 0 )
        {
LABEL_10:
          *v5 = 0;
          return 0LL;
        }
      }
      else if ( *v5 == 0x84 )
      {
        goto LABEL_10;
      }
      ++v4;
      v5 += 20;
    }
    while ( v4 < v3 );
  }
  return 3221225473LL;
}
