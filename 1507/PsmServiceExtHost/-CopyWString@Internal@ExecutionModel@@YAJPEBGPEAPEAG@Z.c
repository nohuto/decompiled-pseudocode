/*
 * XREFs of ?CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z @ 0x18001B370
 * Callers:
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x180007630 (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 *     ?Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z @ 0x18001BB0C (-Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 */

__int64 __fastcall ExecutionModel::Internal::CopyWString(
        ExecutionModel::Internal *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  unsigned __int64 v7; // rsi
  void *v8; // rax
  void *v9; // rbx

  v3 = 0;
  *(_QWORD *)a2 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *((_WORD *)this + v5) );
  v7 = v5 + 1;
  v8 = malloc(saturated_mul(v7, 2uLL));
  v9 = v8;
  if ( v8 )
  {
    memcpy_0(v8, this, 2 * v7);
    *(_QWORD *)a2 = v9;
  }
  else
  {
    v3 = -2147024882;
  }
  operator delete(0LL);
  return v3;
}
