/*
 * XREFs of ?Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z @ 0x180012AFC
 * Callers:
 *     ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180012B40 (-AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@.c)
 *     ?UnusableNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180150F00 (-UnusableNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwBrushPoolManager::Remove(CHwBrushPoolManager *this, struct CHwCacheablePoolBrush *a2)
{
  struct CHwCacheablePoolBrush **v2; // r8
  struct CHwCacheablePoolBrush *v3; // rax
  struct CHwCacheablePoolBrush *v4; // rax

  v2 = (struct CHwCacheablePoolBrush **)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    do
    {
      v3 = *v2;
      if ( *v2 == a2 )
        break;
      v2 = (struct CHwCacheablePoolBrush **)((char *)v3 + 48);
    }
    while ( *((_QWORD *)v3 + 6) );
    if ( *v2 )
    {
      --*((_DWORD *)this + 12);
      v4 = (struct CHwCacheablePoolBrush *)*((_QWORD *)a2 + 6);
      *v2 = v4;
      if ( !v4 )
      {
        if ( *((_DWORD *)this + 12) )
          *((_QWORD *)this + 8) = v2 - 6;
        else
          *((_QWORD *)this + 8) = 0LL;
      }
    }
  }
}
