/*
 * XREFs of xxxPromotePointerDataToMouse @ 0x1C01F3488
 * Callers:
 *     xxxPromotePointerToMouse @ 0x1C01D7C84 (xxxPromotePointerToMouse.c)
 *     xxxDefPointerProc @ 0x1C022A614 (xxxDefPointerProc.c)
 * Callees:
 *     <none>
 */

int __fastcall xxxPromotePointerDataToMouse(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v4; // eax
  int v5; // eax

  if ( !a1 )
    return 0;
  if ( a2 == 0x10000000 )
  {
    v4 = *(_DWORD *)(a1 + 36);
    if ( (v4 & 1) != 0 )
    {
      a2 = 0;
    }
    else if ( (v4 & 2) == 0 )
    {
      return 0;
    }
  }
  v5 = *(_DWORD *)(a1 + 36);
  if ( (v5 & 8) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( !a2 )
        return PointerPromotion::xxxPromotePointer(
                 (PointerPromotion *)*(unsigned __int16 *)(a1 + 16),
                 *(_DWORD *)(a1 + 28),
                 a2,
                 a4);
    }
    else if ( a2 )
    {
      return PointerPromotion::xxxPromotePointer(
               (PointerPromotion *)*(unsigned __int16 *)(a1 + 16),
               *(_DWORD *)(a1 + 28),
               a2,
               a4);
    }
  }
  return 0;
}
