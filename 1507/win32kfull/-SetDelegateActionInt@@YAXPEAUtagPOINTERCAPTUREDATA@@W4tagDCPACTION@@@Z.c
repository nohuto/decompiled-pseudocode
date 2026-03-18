/*
 * XREFs of ?SetDelegateActionInt@@YAXPEAUtagPOINTERCAPTUREDATA@@W4tagDCPACTION@@@Z @ 0x1C01FC71C
 * Callers:
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01FC704 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDelegateActionInt(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 == 1 )
              *(_DWORD *)(a1 + 80) |= 0x20u;
          }
          else
          {
            *(_DWORD *)(a1 + 80) |= 0x10u;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 80) |= 8u;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 80) |= 4u;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 80) |= 2u;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 80) |= 1u;
  }
}
