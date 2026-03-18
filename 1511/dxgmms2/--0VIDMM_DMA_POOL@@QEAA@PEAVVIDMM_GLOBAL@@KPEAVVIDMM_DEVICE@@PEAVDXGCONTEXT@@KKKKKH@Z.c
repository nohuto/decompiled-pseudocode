/*
 * XREFs of ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C0060010
 * Callers:
 *     VidMmCreateDmaPool @ 0x1C0014C50 (VidMmCreateDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067D00 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::VIDMM_DMA_POOL(
        VIDMM_DMA_POOL *this,
        struct VIDMM_GLOBAL *a2,
        int a3,
        struct VIDMM_DEVICE *a4,
        struct DXGCONTEXT *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11)
{
  int v12; // r8d
  char v13; // cl
  unsigned int v14; // r8d
  char v15; // al
  int v16; // eax
  VIDMM_DMA_POOL *result; // rax

  *((_DWORD *)this + 9) = a9;
  *((_QWORD *)this + 5) = a6;
  *((_QWORD *)this + 6) = a6;
  *((_QWORD *)this + 7) = a6;
  *((_DWORD *)this + 16) = a7;
  *((_DWORD *)this + 17) = a7;
  *((_DWORD *)this + 18) = a7;
  *((_DWORD *)this + 19) = a8;
  *((_DWORD *)this + 20) = a8;
  *((_DWORD *)this + 21) = a8;
  *((_DWORD *)this + 2) = a3;
  v12 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 22) = a10;
  *((_QWORD *)this + 2) = a4;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 3) = a5;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  v13 = 1;
  v14 = (a11 != 0) | v12 & 0xFFFFFFFC | 0xC;
  *((_DWORD *)this + 8) = v14;
  if ( !a5 || (v15 = 1, !*((_BYTE *)a5 + 350)) )
    v15 = 0;
  v16 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(16 * v15)) & 0x10;
  *((_DWORD *)this + 8) = v16;
  if ( !a5 || !*((_BYTE *)a5 + 351) )
    v13 = 0;
  *((_DWORD *)this + 8) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(32 * v13)) & 0x20;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  result = this;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
