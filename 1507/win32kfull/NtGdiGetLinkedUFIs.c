/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C026B000
 * Callers:
 *     <none>
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C029A874 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, int a3)
{
  __int64 v3; // r14
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rsi
  bool v8; // zf
  _QWORD v10[7]; // [rsp+28h] [rbp-50h] BYREF
  struct _FD_XFORM *v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  LinkedFontUFIs = 0;
  v7 = 0LL;
  v8 = a3 == 0;
  if ( a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a3 <= 0x4E2000 )
        v7 = (struct _UNIVERSAL_FONT_ID *)PALLOCMEM2((unsigned int)(8 * a3), 1684629063LL, 0);
      if ( !v7 )
        LinkedFontUFIs = -1;
      goto LABEL_14;
    }
    v8 = a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    LinkedFontUFIs = -1;
    goto LABEL_28;
  }
  if ( a3 < 0 && a2 )
    LinkedFontUFIs = -1;
LABEL_14:
  if ( LinkedFontUFIs != -1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v10, a1);
    if ( v10[0] )
    {
      if ( (unsigned int)RFONTOBJ::bInit(&v11, (struct XDCOBJ *)v10, 0, 2u) )
        GreAcquireSemaphore(*(_QWORD *)&v11[33].eXX);
      if ( v11 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v11, (struct XDCOBJ *)v10, v7, v3);
      else
        LinkedFontUFIs = -1;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v10);
    if ( LinkedFontUFIs > 0 && a2 )
    {
      ProbeForWrite(a2, 8 * v3, 4u);
      if ( LinkedFontUFIs < (int)v3 )
        LODWORD(v3) = LinkedFontUFIs;
      memmove(a2, v7, 8LL * (int)v3);
    }
  }
LABEL_28:
  if ( v7 )
    Win32FreePool(v7);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return (unsigned int)LinkedFontUFIs;
}
