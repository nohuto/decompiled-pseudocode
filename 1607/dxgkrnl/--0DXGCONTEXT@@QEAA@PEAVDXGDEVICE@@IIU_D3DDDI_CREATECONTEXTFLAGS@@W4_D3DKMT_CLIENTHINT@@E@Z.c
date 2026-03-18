/*
 * XREFs of ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00B0E40
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00960C4 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

DXGCONTEXT *__fastcall DXGCONTEXT::DXGCONTEXT(
        DXGCONTEXT *this,
        struct DXGDEVICE *a2,
        int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        enum _D3DKMT_CLIENTHINT a6,
        char a7)
{
  int v7; // edi
  unsigned int v9; // esi
  DXGCONTEXT *result; // rax

  v7 = 0;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v9 = a4;
  *((_DWORD *)this + 32) = a6;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 64) = -1;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((struct _D3DDDI_CREATECONTEXTFLAGS *)this + 83) = a5;
  *((_DWORD *)this + 80) = a3;
  *((_BYTE *)this + 350) = a7;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 81) = a4;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_WORD *)this + 174) = 0;
  *(_WORD *)((char *)this + 351) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 94) = 59;
  memset((char *)this + 176, 0, 0x20uLL);
  *((_QWORD *)this + 34) = (char *)this + 264;
  *((_QWORD *)this + 33) = (char *)this + 264;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  while ( 1 )
  {
    v9 >>= 1;
    if ( !v9 )
      break;
    ++v7;
  }
  result = this;
  *((_DWORD *)this + 82) = v7;
  return result;
}
