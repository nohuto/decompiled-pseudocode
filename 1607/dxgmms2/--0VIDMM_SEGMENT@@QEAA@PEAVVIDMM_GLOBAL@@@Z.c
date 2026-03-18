/*
 * XREFs of ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1C006F7CC
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C006DA98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::VIDMM_SEGMENT(VIDMM_SEGMENT *this, struct VIDMM_GLOBAL *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &VIDMM_SEGMENT::`vftable';
  *((_DWORD *)this + 90) = -1;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_WORD *)this + 232) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 364) = 1;
  *((_BYTE *)this + 440) = 1;
  *((_DWORD *)this + 117) = 2;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 21) = (char *)this + 168;
  *((_QWORD *)this + 24) = (char *)this + 184;
  *((_QWORD *)this + 23) = (char *)this + 184;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_QWORD *)this + 37) = (char *)this + 288;
  *((_QWORD *)this + 36) = (char *)this + 288;
  *((_QWORD *)this + 14) = 0LL;
  memset((char *)this + 304, 0, 0x38uLL);
  memset((char *)this + 408, 0, 0x20uLL);
  return this;
}
