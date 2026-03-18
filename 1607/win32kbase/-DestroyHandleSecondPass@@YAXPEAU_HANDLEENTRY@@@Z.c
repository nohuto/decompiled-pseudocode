/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00B4270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DestroyHandleSecondPass(ULONG_PTR *a1)
{
  if ( *(_DWORD *)(*a1 + 8) )
    *(_DWORD *)(*a1 + 8) = 0;
  HMDestroyUnlockedObject(a1);
}
