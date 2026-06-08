/*
 * XREFs of PepQueryPlatformStateResidency @ 0x1C0003D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepQueryPlatformStateResidency(_QWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // rdx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-10h]

  v2 = a2 + 2;
  v3 = 0;
  v6 = *a2;
  v7 = a2 + 2;
  if ( v6 )
  {
    while ( 1 )
    {
      v4 = v3++;
      v4 *= 2LL;
      *(_QWORD *)&v2[2 * v4] = -1LL;
      *(_QWORD *)&v7[2 * v4 + 2] = 0LL;
      if ( v3 >= v6 )
        break;
      v2 = v7;
    }
  }
  return PoFxProcessorNotification(*a1, 23LL, &v6);
}
