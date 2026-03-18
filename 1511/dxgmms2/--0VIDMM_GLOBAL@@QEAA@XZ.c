/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0069300
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00647D4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0013DA4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
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
  *((_WORD *)this + 3232) = 0;
  *((_QWORD *)this + 887) = 0LL;
  *((_QWORD *)this + 888) = 0LL;
  *((_QWORD *)this + 889) = 0LL;
  *((_DWORD *)this + 1780) = 0;
  *((_QWORD *)this + 974) = 0LL;
  *((_DWORD *)this + 1950) = 0;
  *((_QWORD *)this + 4981) = 0LL;
  *((_QWORD *)this + 4980) = 0LL;
  *((_DWORD *)this + 9964) = 46;
  *((_QWORD *)this + 4990) = 0LL;
  *((_QWORD *)this + 4989) = 0LL;
  *((_DWORD *)this + 9982) = -1;
  *((_DWORD *)this + 10003) = -1;
  *((_DWORD *)this + 10000) = 0;
  *((_DWORD *)this + 10001) = 0;
  *(_WORD *)((char *)this + 40009) = 257;
  *((_QWORD *)this + 5002) = 0LL;
  *((_QWORD *)this + 5003) = 0LL;
  *((_QWORD *)this + 5004) = 0LL;
  *((_QWORD *)this + 5005) = 0LL;
  memset((char *)this + 40056, 0, 0x220uLL);
  *((_BYTE *)this + 40608) &= 0x20u;
  *((_DWORD *)this + 10150) = 0;
  *((_QWORD *)this + 5082) = 0LL;
  *((_DWORD *)this + 10166) = 0;
  *((_QWORD *)this + 5085) = 0LL;
  *((_QWORD *)this + 5084) = 0LL;
  *((_QWORD *)this + 5086) = 0LL;
  *((_DWORD *)this + 10174) = 0;
  *((_QWORD *)this + 5089) = 0LL;
  *((_QWORD *)this + 5088) = 0LL;
  *((_DWORD *)this + 10180) = 66;
  *((_QWORD *)this + 5092) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5091);
  *((_QWORD *)this + 5096) = 0LL;
  *((_QWORD *)this + 5095) = 0LL;
  *((_DWORD *)this + 10198) = 0;
  *((_QWORD *)this + 5098) = (char *)this + 40776;
  *((_QWORD *)this + 5097) = (char *)this + 40776;
  *((_QWORD *)this + 5105) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_QWORD *)this + 5106) = (char *)this + 40760;
  *((_QWORD *)this + 5103) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 1700, NotificationEvent, 1u);
  *((_QWORD *)this + 5107) = 0LL;
  *((_QWORD *)this + 5111) = 0LL;
  `vector constructor iterator'(
    (char *)this + 40896,
    264LL,
    1,
    (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE::VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE);
  *((_DWORD *)this + 10290) = 0;
  *((_QWORD *)this + 5146) = 0LL;
  *((_QWORD *)this + 5147) = 0LL;
  v2 = 3LL;
  *((_QWORD *)this + 5148) = 0LL;
  *((_QWORD *)this + 5149) = 0LL;
  *((_QWORD *)this + 5150) = 0LL;
  *((_QWORD *)this + 5152) = 0LL;
  *((_QWORD *)this + 5151) = 0LL;
  *((_DWORD *)this + 10306) = 60;
  *((_QWORD *)this + 5160) = 0LL;
  *((_QWORD *)this + 5161) = 0LL;
  *((_QWORD *)this + 5162) = 0LL;
  *((_QWORD *)this + 5163) = 0LL;
  *((_QWORD *)this + 5164) = 0LL;
  *((_BYTE *)this + 41320) = 0;
  *((_QWORD *)this + 5167) = 0LL;
  *((_QWORD *)this + 5166) = 0LL;
  *((_DWORD *)this + 10336) = -1;
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
  *((_QWORD *)this + 4986) = (char *)this + 39880;
  *((_QWORD *)this + 4985) = (char *)this + 39880;
  *((_QWORD *)this + 5110) = (char *)this + 40872;
  *((_QWORD *)this + 5109) = (char *)this + 40872;
  *((_QWORD *)this + 5094) = (char *)this + 40744;
  *((_QWORD *)this + 5093) = (char *)this + 40744;
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  *((_QWORD *)this + 4988) = (char *)this + 39896;
  *((_QWORD *)this + 4987) = (char *)this + 39896;
  *((_QWORD *)this + 4984) = (char *)this + 39864;
  *((_QWORD *)this + 4983) = (char *)this + 39864;
  v3 = (_QWORD *)((char *)this + 41232);
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
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5108);
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
