/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C00E4EC4
 * Callers:
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C00E4DF4 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C012F31C (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000B17C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(BLTQUEUE *this, struct DXGDODPRESENT *a2, int a3, struct _KEVENT *a4, char a5)
{
  unsigned int v7; // edx
  char *v8; // rbx
  char *v9; // rax
  char **v10; // rcx

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 15) = a4;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 42) = -1;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_BYTE *)this + 220) = a5;
  *((_BYTE *)this + 221) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 106) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 432, -1, 32);
  *((_DWORD *)this + 170) = 0;
  `vector constructor iterator'((char *)this + 688, 560LL, 3, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)this + 296) = 0LL;
  *((_DWORD *)this + 594) = 0;
  v7 = 0;
  *((_QWORD *)this + 298) = 0LL;
  v8 = (char *)this + 696;
  *((_QWORD *)this + 299) = 0LL;
  *((_DWORD *)this + 600) = 0;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  v9 = (char *)this + 32;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  do
  {
    v10 = (char **)*((_QWORD *)this + 5);
    *(_QWORD *)v8 = v9;
    *((_QWORD *)v8 + 1) = v10;
    if ( *v10 != v9 )
      __fastfail(3u);
    *v10 = v8;
    ++v7;
    *((_QWORD *)this + 5) = v8;
    v8 += 560;
  }
  while ( v7 < 3 );
  *((_DWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0x100000040LL;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 169) = 0;
  *((_QWORD *)this + 28) = 0LL;
  memset((char *)this + 64, 0, 0x20uLL);
  memset((char *)this + 256, 0, 0x28uLL);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 168) = 0;
  KeInitializeEvent((PRKEVENT)this + 14, NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 360),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 336);
  KeSetImportanceDpc((PRKDPC)((char *)this + 360), HighImportance);
  memset((char *)this + 496, 0, 0xB0uLL);
  return this;
}
