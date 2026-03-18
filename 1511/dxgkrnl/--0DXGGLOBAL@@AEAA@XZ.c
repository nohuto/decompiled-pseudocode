/*
 * XREFs of ??0DXGGLOBAL@@AEAA@XZ @ 0x1C00D4B08
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00CD560 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::DXGGLOBAL(DXGGLOBAL *this)
{
  *((_QWORD *)this + 12) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 136, 9, 1);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 224, 10, 31);
  *((_QWORD *)this + 37) = (char *)this + 288;
  *((_QWORD *)this + 36) = (char *)this + 288;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 304, 32, 1);
  *((_QWORD *)this + 47) = (char *)this + 368;
  *((_QWORD *)this + 46) = (char *)this + 368;
  *((_QWORD *)this + 48) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 392, 35, 1);
  *((_QWORD *)this + 58) = (char *)this + 456;
  *((_QWORD *)this + 57) = (char *)this + 456;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 472, 11, 21);
  *((_QWORD *)this + 68) = (char *)this + 536;
  *((_QWORD *)this + 67) = (char *)this + 536;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 552, 12, 1);
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 170) = -1;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_DWORD *)this + 194) = -1;
  KeInitializeEvent((PRKEVENT)((char *)this + 736), NotificationEvent, 0);
  *((_QWORD *)this + 98) = 0LL;
  *((_WORD *)this + 456) = 0;
  *(_QWORD *)((char *)this + 916) = 0LL;
  *(_QWORD *)((char *)this + 924) = 1LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_DWORD *)this + 236) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 952, 65, 1);
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((void **)this + 127, 0, 0);
  *((_DWORD *)this + 258) = 0;
  *((_DWORD *)this + 259) = 8;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 264) = 67;
  *((_DWORD *)this + 266) = 0;
  *((_QWORD *)this + 134) = 0LL;
  *((_DWORD *)this + 270) = 0;
  *((_QWORD *)this + 136) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1128, 70, 32);
  *((_QWORD *)this + 150) = (char *)this + 1192;
  *((_QWORD *)this + 149) = (char *)this + 1192;
  *((_BYTE *)this + 1208) = 0;
  *((_DWORD *)this + 303) = 0;
  *((_QWORD *)this + 152) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1224, 70, 32);
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 112);
  return this;
}
