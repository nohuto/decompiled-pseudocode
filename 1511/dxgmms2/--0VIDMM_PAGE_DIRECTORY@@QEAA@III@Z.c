/*
 * XREFs of ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C003FA38
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FBF0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 */

VIDMM_PAGE_DIRECTORY *__fastcall VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(
        VIDMM_PAGE_DIRECTORY *this,
        char a2,
        int a3,
        int a4)
{
  bool v8; // dl
  int v9; // eax
  unsigned int v10; // edi
  VIDMM_PAGE_DIRECTORY *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  memset(this, 0, 0x28uLL);
  v8 = 0;
  *(_DWORD *)this ^= ((unsigned __int8)a4 ^ (unsigned __int8)*(_DWORD *)this) & 7;
  v9 = *(_DWORD *)this ^ (*(_DWORD *)this ^ (16 * (a4 == a3))) & 0x10 ^ (*(_BYTE *)this ^ (*(_BYTE *)this ^ (unsigned __int8)(16 * (a4 == a3))) & 0x10 ^ (unsigned __int8)(32 * (a4 == 1))) & 0x20;
  *(_DWORD *)this = v9;
  if ( a4 == a3 )
    v8 = a3 == 1;
  v10 = v9 & 0xFFFFF077 | (8 * (v8 | (16 * (a2 & 0x1F))));
  result = this;
  *(_DWORD *)this = v10;
  return result;
}
