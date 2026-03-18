/*
 * XREFs of DpiDisableInterruptResources @ 0x1C016B42C
 * Callers:
 *     DpiFdoHandleFilterResources @ 0x1C00DD800 (DpiFdoHandleFilterResources.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDisableInterruptResources(__int64 a1)
{
  unsigned int i; // r8d
  unsigned int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
    {
      v3 = 0;
      v4 = a1 + 40LL * i;
      if ( *(_DWORD *)(v4 + 36) )
      {
        do
        {
          v5 = 32LL * v3;
          if ( *(_BYTE *)(v5 + v4 + 41) == 2 )
            *(_BYTE *)(v5 + v4 + 41) = 0;
          ++v3;
        }
        while ( v3 < *(_DWORD *)(v4 + 36) );
      }
    }
  }
}
