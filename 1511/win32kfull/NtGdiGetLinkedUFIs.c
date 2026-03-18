/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C0269B80
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C029A344 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, int a3)
{
  __int64 v3; // r14
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rsi
  bool v8; // zf
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+34h] [rbp-24h]
  struct _FD_XFORM *v13; // [rsp+78h] [rbp+20h] BYREF

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
    v11 = 0;
    v12 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v10, a1);
    if ( v10 )
    {
      if ( (unsigned int)RFONTOBJ::bInit(&v13, (struct XDCOBJ *)&v10, 0, 2u) )
        GreAcquireSemaphore(*(_QWORD *)&v13[33].eXX);
      if ( v13 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v13, (struct XDCOBJ *)&v10, v7, v3);
      else
        LinkedFontUFIs = -1;
      XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
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
