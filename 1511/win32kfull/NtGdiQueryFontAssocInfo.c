/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C00F8710
 * Callers:
 *     <none>
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // edi
  int v3; // eax
  struct _FD_XFORM *v4; // rbx
  int v5; // eax
  int v6; // edx
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  struct LFONT *v8; // [rsp+40h] [rbp+10h] BYREF
  struct _FD_XFORM *v9; // [rsp+48h] [rbp+18h] BYREF

  v1 = 0;
  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v3 = RFONTOBJ::bInit(&v9, (struct XDCOBJ *)v7, 0, 2u);
    v4 = v9;
    if ( v3 )
      GreAcquireSemaphore(*(_QWORD *)&v9[33].eXX);
    if ( v4 )
    {
      v5 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&v4[7].eXX + 32LL) + 44LL);
      if ( (unsigned int)(v5 - 128) <= 8 && (v6 = 323, _bittest(&v6, v5 - 128)) )
      {
        v1 = 2;
      }
      else if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v4[7].eXX + 32LL) + 44LL) && (fFontAssocStatus & 2) != 0
             || v5 == 255 && (fFontAssocStatus & 1) != 0
             || v5 == 2 && (fFontAssocStatus & 4) != 0 )
      {
        LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v8, *(struct HLFONT__ **)(v7[0] + 2136LL), 0LL);
        if ( !v8 || (*((_BYTE *)v8 + 301) & 0x40) != 0 )
        {
          LFONTOBJ::~LFONTOBJ(&v8);
        }
        else
        {
          LFONTOBJ::~LFONTOBJ(&v8);
          v1 = 1;
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v1;
}
