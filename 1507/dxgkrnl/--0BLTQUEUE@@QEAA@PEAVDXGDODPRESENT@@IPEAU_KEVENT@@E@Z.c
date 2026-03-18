/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C00D219C
 * Callers:
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C00D2740 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0128CC0 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000E60C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(BLTQUEUE *this, struct DXGDODPRESENT *a2, int a3, struct _KEVENT *a4, char a5)
{
  char *v7; // rbx
  unsigned int v8; // edx
  char *v9; // rbx
  char *v10; // rax
  char **v11; // rcx

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 15) = a4;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 96) = 0;
  v7 = (char *)this + 664;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
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
  *((_DWORD *)this + 115) = -1;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 116) = 32;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 164) = 0;
  `vector constructor iterator'((char *)this + 664, 560LL, 3, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)v7 + 210) = 0LL;
  *((_DWORD *)v7 + 422) = 0;
  v8 = 0;
  *((_QWORD *)this + 295) = 0LL;
  v9 = v7 + 8;
  *((_QWORD *)this + 296) = 0LL;
  *((_DWORD *)this + 594) = 0;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  v10 = (char *)this + 32;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  do
  {
    v11 = (char **)*((_QWORD *)this + 5);
    *(_QWORD *)v9 = v10;
    *((_QWORD *)v9 + 1) = v11;
    if ( *v11 != v10 )
      __fastfail(3u);
    *v11 = v9;
    ++v8;
    *((_QWORD *)this + 5) = v9;
    v9 += 560;
  }
  while ( v8 < 3 );
  *((_DWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0x100000040LL;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 163) = 0;
  *((_QWORD *)this + 28) = 0LL;
  memset((char *)this + 64, 0, 0x20uLL);
  memset((char *)this + 256, 0, 0x28uLL);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 162) = 0;
  KeInitializeEvent((PRKEVENT)this + 14, NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 360),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 336);
  KeSetImportanceDpc((PRKDPC)((char *)this + 360), HighImportance);
  memset((char *)this + 472, 0, 0xB0uLL);
  return this;
}
