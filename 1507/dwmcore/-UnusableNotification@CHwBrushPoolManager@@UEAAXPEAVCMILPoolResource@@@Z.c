/*
 * XREFs of ?UnusableNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180142430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwBrushPoolManager::UnusableNotification(CHwBrushPoolManager *this, struct CMILPoolResource *a2)
{
  struct CHwCacheablePoolBrush *v3; // rdx

  v3 = 0LL;
  if ( a2 )
    v3 = (struct CMILPoolResource *)((char *)a2 - 8);
  CHwBrushPoolManager::Remove(this, v3);
}
