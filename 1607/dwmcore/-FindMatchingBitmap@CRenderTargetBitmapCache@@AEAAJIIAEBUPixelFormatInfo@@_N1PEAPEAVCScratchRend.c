/*
 * XREFs of ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800132F0
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013444 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18002DA10 (-IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ.c)
 */

__int64 __fastcall CRenderTargetBitmapCache::FindMatchingBitmap(
        CRenderTargetBitmapCache *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5,
        bool a6,
        struct CScratchRenderTargetBitmap **a7)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  struct CScratchRenderTargetBitmap *v9; // rbp
  unsigned int v10; // r12d
  __int64 v11; // r14
  unsigned int v12; // esi
  struct CScratchRenderTargetBitmap *v13; // r13
  unsigned int v14; // r15d
  int v15; // eax
  bool v16; // zf
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-58h]
  unsigned int v21; // [rsp+88h] [rbp+10h]
  unsigned int v22; // [rsp+90h] [rbp+18h]
  const struct PixelFormatInfo *v23; // [rsp+98h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v7 = *((_DWORD *)this + 6);
  v8 = 0;
  v9 = 0LL;
  v19 = -1;
  v10 = 0;
  if ( !v7 )
    goto LABEL_16;
  v11 = *(_QWORD *)this;
  v12 = -1;
  do
  {
    v13 = *(struct CScratchRenderTargetBitmap **)(v11 + 8LL * v10);
    v14 = *((_DWORD *)v13 + 3);
    v15 = *((_DWORD *)v13 + 54);
    v16 = *((_DWORD *)v13 + 2) == a2;
    if ( *((_DWORD *)v13 + 2) <= a2 )
      goto LABEL_4;
    if ( v14 <= a3 || a6 || v15 != *(_DWORD *)a4 )
    {
      v16 = *((_DWORD *)v13 + 2) == a2;
LABEL_4:
      if ( !v16 || v14 != a3 || v15 != *(_DWORD *)a4 )
        goto LABEL_19;
    }
    if ( a5 == CHwTextureRenderTarget::IsHardwareProtected(*(CHwTextureRenderTarget **)(v11 + 8LL * v10))
      && *((_DWORD *)v13 + 2) < v12
      && v14 < v19 )
    {
      v9 = v13;
      if ( a6 )
        break;
      v12 = *((_DWORD *)v13 + 2);
      v19 = v14;
    }
    a2 = v21;
    a3 = v22;
    a4 = v23;
LABEL_19:
    ++v10;
  }
  while ( v10 < v7 );
  if ( v9 )
  {
    do
    {
      if ( v9 == *(struct CScratchRenderTargetBitmap **)(v11 + 8LL * v8) )
        break;
      ++v8;
    }
    while ( v8 < v7 );
    if ( v8 < v7 )
    {
      if ( v8 < v7 - 1 )
      {
        do
        {
          v18 = v8++;
          *(_QWORD *)(v11 + 8 * v18) = *(_QWORD *)(v11 + 8LL * v8);
        }
        while ( v8 < *((_DWORD *)this + 6) - 1 );
      }
      --*((_DWORD *)this + 6);
    }
  }
LABEL_16:
  *a7 = v9;
  return 0LL;
}
