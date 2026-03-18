/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0265194
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C026561C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0033D5C (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rbx
  _DWORD *v17; // rax
  __int64 v18; // rbx
  struct _SURFOBJ *v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // r8
  struct _FD_XFORM *v23; // [rsp+40h] [rbp-2E8h] BYREF
  int v24; // [rsp+48h] [rbp-2E0h]
  unsigned __int16 *v25; // [rsp+50h] [rbp-2D8h]
  void *v26; // [rsp+58h] [rbp-2D0h]
  _BYTE v28[624]; // [rsp+70h] [rbp-2B8h] BYREF

  v7 = a3;
  v24 = a2;
  v26 = a6;
  v10 = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 3088LL) )
    return 0LL;
  if ( a2 == 8 )
    return _guard_dispatch_icall_fptr();
  if ( (unsigned int)RFONTOBJ::bInit(&v23, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v23[33].eXX);
  if ( !v23 )
  {
LABEL_8:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
    return 0LL;
  }
  if ( a2 == 514 )
  {
    v14 = (unsigned __int64)(int)v7 >> 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8000) != 0 )
    {
      if ( (unsigned int)v7 > 0x2710000 )
        goto LABEL_8;
      v15 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v7, 1886221383LL, 0);
      v16 = v15;
      v25 = v15;
      if ( !v15 )
        goto LABEL_8;
      memmove(v15, a4, v7);
    }
    else
    {
      v16 = a4;
    }
    if ( (unsigned __int64)(int)v14 > 0x9C4000
      || (v17 = PALLOCMEM2((unsigned int)(4 * v14), 1835426887LL, 1), (v10 = v17) == 0LL) )
    {
      if ( v16 != a4 )
        Win32FreePool(v16, v12, v13);
      goto LABEL_8;
    }
    if ( (int)v14 > 1 )
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v23, v16 + 1, v14 - 1, v17 + 1, 0, 0);
    *v10 = *v16;
    if ( v16 != a4 )
      Win32FreePool(v16, v12, v13);
  }
  v18 = *(_QWORD *)a1;
  if ( !SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 512LL)) )
  {
    memset(v28, 0, 0x268uLL);
    v19 = SURFACE::pSurfobj((SURFACE *)v28);
    v19->dhpdev = *(DHPDEV *)(v18 + 24);
    v19->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v19->iType = 1;
  }
  v21 = _guard_dispatch_icall_fptr();
  if ( v10 )
    Win32FreePool(v10, v20, v22);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
  return v21;
}
