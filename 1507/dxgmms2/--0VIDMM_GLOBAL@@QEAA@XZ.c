/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C003CC18
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00389F4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00060B4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 478) = 0LL;
  *((_QWORD *)this + 477) = 0LL;
  *((_QWORD *)this + 575) = 0LL;
  *((_QWORD *)this + 576) = 0LL;
  *((_BYTE *)this + 4616) = 0;
  *((_DWORD *)this + 1605) = 0;
  *((_QWORD *)this + 803) = 0LL;
  *((_QWORD *)this + 804) = 0LL;
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_QWORD *)this + 808) = 0LL;
  *((_QWORD *)this + 887) = 0LL;
  *((_QWORD *)this + 888) = 0LL;
  *((_QWORD *)this + 889) = 0LL;
  *((_DWORD *)this + 1780) = 0;
  *((_QWORD *)this + 974) = 0LL;
  *((_DWORD *)this + 1950) = 0;
  *((_QWORD *)this + 4981) = 0LL;
  *((_QWORD *)this + 4980) = 0LL;
  *((_DWORD *)this + 9964) = 46;
  *((_DWORD *)this + 9989) = -1;
  *((_DWORD *)this + 9986) = 0;
  *((_DWORD *)this + 9987) = 0;
  *(_WORD *)((char *)this + 39953) = 257;
  *((_QWORD *)this + 4995) = 0LL;
  *((_QWORD *)this + 4996) = 0LL;
  *((_QWORD *)this + 4997) = 0LL;
  *((_QWORD *)this + 4998) = 0LL;
  memset((char *)this + 40000, 0, 0x220uLL);
  *((_BYTE *)this + 40552) &= 0x20u;
  *((_DWORD *)this + 10136) = 0;
  *((_QWORD *)this + 5075) = 0LL;
  *((_DWORD *)this + 10152) = 0;
  *((_QWORD *)this + 5078) = 0LL;
  *((_QWORD *)this + 5077) = 0LL;
  *((_QWORD *)this + 5079) = 0LL;
  *((_DWORD *)this + 10160) = 0;
  *((_QWORD *)this + 5082) = 0LL;
  *((_QWORD *)this + 5081) = 0LL;
  *((_DWORD *)this + 10166) = 66;
  *((_QWORD *)this + 5085) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5084);
  *((_QWORD *)this + 5089) = 0LL;
  *((_QWORD *)this + 5088) = 0LL;
  *((_DWORD *)this + 10184) = 0;
  *((_QWORD *)this + 5091) = (char *)this + 40720;
  *((_QWORD *)this + 5090) = (char *)this + 40720;
  *((_QWORD *)this + 5098) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_QWORD *)this + 5099) = (char *)this + 40704;
  *((_QWORD *)this + 5096) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 40744), NotificationEvent, 1u);
  *((_QWORD *)this + 5100) = 0LL;
  *((_QWORD *)this + 5104) = 0LL;
  `vector constructor iterator'(
    (char *)this + 40840,
    264LL,
    1,
    (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE::VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE);
  *((_DWORD *)this + 10276) = 0;
  *((_QWORD *)this + 5139) = 0LL;
  *((_QWORD *)this + 5140) = 0LL;
  *((_QWORD *)this + 5141) = 0LL;
  *((_QWORD *)this + 5142) = 0LL;
  *((_QWORD *)this + 5143) = 0LL;
  *((_QWORD *)this + 5145) = 0LL;
  v2 = 3LL;
  *((_QWORD *)this + 5144) = 0LL;
  *((_DWORD *)this + 10292) = 60;
  *((_QWORD *)this + 5153) = 0LL;
  *((_QWORD *)this + 5154) = 0LL;
  *((_QWORD *)this + 5155) = 0LL;
  *((_QWORD *)this + 5156) = 0LL;
  *((_QWORD *)this + 5157) = 0LL;
  *((_BYTE *)this + 41264) = 0;
  *((_DWORD *)this + 10322) = -1;
  *((_QWORD *)this + 5160) = 0LL;
  *((_QWORD *)this + 5159) = 0LL;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  *((_QWORD *)this + 468) = (char *)this + 3736;
  *((_QWORD *)this + 467) = (char *)this + 3736;
  *((_QWORD *)this + 470) = (char *)this + 3752;
  *((_QWORD *)this + 469) = (char *)this + 3752;
  *((_QWORD *)this + 472) = (char *)this + 3768;
  *((_QWORD *)this + 471) = (char *)this + 3768;
  *((_QWORD *)this + 474) = (char *)this + 3784;
  *((_QWORD *)this + 473) = (char *)this + 3784;
  *((_QWORD *)this + 4979) = (char *)this + 39824;
  *((_QWORD *)this + 4978) = (char *)this + 39824;
  *((_QWORD *)this + 4984) = (char *)this + 39864;
  *((_QWORD *)this + 4983) = (char *)this + 39864;
  *((_QWORD *)this + 5103) = (char *)this + 40816;
  *((_QWORD *)this + 5102) = (char *)this + 40816;
  *((_QWORD *)this + 5087) = (char *)this + 40688;
  *((_QWORD *)this + 5086) = (char *)this + 40688;
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  v3 = (_QWORD *)((char *)this + 41176);
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v2;
  }
  while ( v2 );
  memset((char *)this + 6472, 0, 0x270uLL);
  *((_QWORD *)this + 809) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5101);
  *((_QWORD *)this + 971) = 0LL;
  *((_QWORD *)this + 972) = 0LL;
  *((_QWORD *)this + 973) = 0LL;
  memset((char *)this + 632, 0, 0x200uLL);
  memset((char *)this + 1144, 0, 0x200uLL);
  memset((char *)this + 3832, 0, 0x100uLL);
  memset((char *)this + 1656, 0, 0x100uLL);
  memset((char *)this + 1912, 0, 0x100uLL);
  memset((char *)this + 2168, 0, 0x100uLL);
  memset((char *)this + 2424, 0, 0x100uLL);
  memset((char *)this + 2680, 0, 0x200uLL);
  memset((char *)this + 3192, 0, 0x200uLL);
  memset((char *)this + 4088, 0, 0x100uLL);
  memset((char *)this + 4344, 0, 0x100uLL);
  memset((char *)this + 4620, 0, 0x100uLL);
  memset((char *)this + 4880, 0, 0x200uLL);
  memset((char *)this + 5904, 0, 0x200uLL);
  memset((char *)this + 5392, 0, 0x200uLL);
  *((_DWORD *)this + 1604) = 1;
  memset((char *)this + 7128, 0, 0x280uLL);
  return this;
}
