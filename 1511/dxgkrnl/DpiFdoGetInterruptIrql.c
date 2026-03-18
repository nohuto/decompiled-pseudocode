/*
 * XREFs of DpiFdoGetInterruptIrql @ 0x1C00D1300
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C00D11C0 (DpiFdoConnectInterrupt.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C0173DD0 (DpiLdaGetInterruptIrqlForChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetInterruptIrql(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // r8d
  unsigned int v5; // r9d
  unsigned __int8 *v6; // rcx
  __int64 v7; // r10

  v2 = 0;
  v3 = -1073741275;
  if ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 )
    {
      v6 = (unsigned __int8 *)(a1 + 24);
      v7 = v5;
      do
      {
        if ( *(v6 - 4) == 2 && v2 < *v6 )
        {
          v2 = *v6;
          v3 = 0;
        }
        v6 += 20;
        --v7;
      }
      while ( v7 );
    }
    *a2 = v2;
  }
  return v3;
}
