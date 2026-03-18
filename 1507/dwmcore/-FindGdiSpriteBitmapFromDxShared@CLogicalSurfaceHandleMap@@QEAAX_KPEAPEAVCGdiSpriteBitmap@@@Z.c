/*
 * XREFs of ?FindGdiSpriteBitmapFromDxShared@CLogicalSurfaceHandleMap@@QEAAX_KPEAPEAVCGdiSpriteBitmap@@@Z @ 0x1800F0FA4
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180062648 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLogicalSurfaceHandleMap::FindGdiSpriteBitmapFromDxShared(
        CLogicalSurfaceHandleMap *this,
        __int64 a2,
        struct CGdiSpriteBitmap **a3)
{
  char *v3; // r10
  __int64 v4; // rax
  struct CGdiSpriteBitmap *v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // r11d
  _QWORD *v10; // rdx

  *a3 = 0LL;
  v3 = (char *)this + 80;
  v4 = *((_QWORD *)this + 11);
LABEL_5:
  while ( (char *)v4 != v3 )
  {
    v7 = (struct CGdiSpriteBitmap *)(v4 - 480);
    v8 = 0;
    v9 = *(_DWORD *)(v4 - 480 + 440);
    v10 = (_QWORD *)(v4 - 480 + 184);
    v4 = *(_QWORD *)(v4 + 8);
    if ( v9 )
    {
      while ( a2 != *v10 )
      {
        ++v8;
        ++v10;
        if ( v8 >= v9 )
          goto LABEL_5;
      }
      *a3 = v7;
      return;
    }
  }
}
