/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C026749C
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0140480 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DoFontManagement(struct DCOBJ *a1, int a2, unsigned int a3, unsigned __int16 *a4)
{
  size_t v5; // r14
  _DWORD *v8; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // ebx
  _QWORD v17[10]; // [rsp+50h] [rbp-78h] BYREF
  struct _FD_XFORM *v18; // [rsp+D0h] [rbp+8h] BYREF
  int v19; // [rsp+D8h] [rbp+10h]

  v19 = a2;
  v5 = a3;
  v8 = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 3096LL) )
    return 0LL;
  if ( a2 == 8 )
    return _guard_dispatch_icall_fptr();
  if ( (unsigned int)RFONTOBJ::bInit(&v18, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v18[33].eXX);
  if ( !v18 )
  {
LABEL_8:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    return 0LL;
  }
  if ( a2 == 514 )
  {
    v10 = (unsigned __int64)(int)v5 >> 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8000) != 0 )
    {
      if ( (unsigned int)v5 > 0x2710000 )
        goto LABEL_8;
      v11 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v5, 1886221383LL, 0);
      v12 = v11;
      if ( !v11 )
        goto LABEL_8;
      memmove(v11, a4, v5);
    }
    else
    {
      v12 = a4;
    }
    if ( (unsigned __int64)(int)v10 > 0x9C4000
      || (v13 = PALLOCMEM2((unsigned int)(4 * v10), 1835426887LL, 1), (v8 = v13) == 0LL) )
    {
      if ( v12 != a4 )
        Win32FreePool(v12);
      goto LABEL_8;
    }
    if ( (int)v10 > 1 )
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v18, v12 + 1, v10 - 1, v13 + 1, 0, 0);
    *v8 = *v12;
    if ( v12 != a4 )
      Win32FreePool(v12);
  }
  v14 = *(_QWORD *)a1;
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
  if ( !v15 || v15 == -24 )
  {
    memset(v17, 0, sizeof(v17));
    v17[2] = *(_QWORD *)(v14 + 24);
    v17[3] = *(_QWORD *)(v14 + 48);
    WORD2(v17[9]) = 1;
  }
  v16 = _guard_dispatch_icall_fptr();
  if ( v8 )
    Win32FreePool(v8);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
  return v16;
}
