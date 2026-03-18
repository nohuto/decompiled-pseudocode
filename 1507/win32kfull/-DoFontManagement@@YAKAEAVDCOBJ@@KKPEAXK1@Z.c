/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02687F8
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C012588C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002BF60 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009CDAC (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DoFontManagement(
        struct DCOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        void *a6)
{
  size_t v7; // r14
  _DWORD *v10; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rbx
  _DWORD *v15; // rax
  __int64 v16; // rbx
  struct _SURFOBJ *v17; // r10
  unsigned int v18; // ebx
  struct _FD_XFORM *v19; // [rsp+40h] [rbp-2D8h] BYREF
  int v20; // [rsp+48h] [rbp-2D0h]
  unsigned __int16 *v21; // [rsp+50h] [rbp-2C8h]
  void *v23; // [rsp+60h] [rbp-2B8h]
  _BYTE v24[608]; // [rsp+70h] [rbp-2A8h] BYREF

  v7 = a3;
  v20 = a2;
  v23 = a6;
  v10 = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 3096LL) )
    return 0LL;
  if ( a2 == 8 )
    return _guard_dispatch_icall_fptr();
  if ( (unsigned int)RFONTOBJ::bInit(&v19, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v19[33].eXX);
  if ( !v19 )
  {
LABEL_8:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
    return 0LL;
  }
  if ( a2 == 514 )
  {
    v12 = (unsigned __int64)(int)v7 >> 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8000) != 0 )
    {
      if ( (unsigned int)v7 > 0x2710000 )
        goto LABEL_8;
      v13 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v7, 1886221383LL, 0);
      v14 = v13;
      v21 = v13;
      if ( !v13 )
        goto LABEL_8;
      memmove(v13, a4, v7);
    }
    else
    {
      v14 = a4;
    }
    if ( (unsigned __int64)(int)v12 > 0x9C4000
      || (v15 = PALLOCMEM2((unsigned int)(4 * v12), 1835426887LL, 1), (v10 = v15) == 0LL) )
    {
      if ( v14 != a4 )
        Win32FreePool(v14);
      goto LABEL_8;
    }
    if ( (int)v12 > 1 )
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v19, v14 + 1, v12 - 1, v15 + 1, 0, 0);
    *v10 = *v14;
    if ( v14 != a4 )
      Win32FreePool(v14);
  }
  v16 = *(_QWORD *)a1;
  if ( !SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 512LL)) )
  {
    memset(v24, 0, sizeof(v24));
    v17 = SURFACE::pSurfobj((SURFACE *)v24);
    v17->dhpdev = *(DHPDEV *)(v16 + 24);
    v17->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v17->iType = 1;
  }
  v18 = _guard_dispatch_icall_fptr();
  if ( v10 )
    Win32FreePool(v10);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
  return v18;
}
