/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C011B540
 * Callers:
 *     <none>
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // edi
  int v3; // eax
  struct _FD_XFORM *v4; // rbx
  int v5; // eax
  int v6; // edx
  _QWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-20h] BYREF
  struct LFONT *v9; // [rsp+60h] [rbp+10h] BYREF
  struct _FD_XFORM *v10; // [rsp+68h] [rbp+18h] BYREF

  v1 = 0;
  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v3 = RFONTOBJ::bInit(&v10, (struct XDCOBJ *)v7, 0, 2u);
    v4 = v10;
    if ( v3 )
      GreAcquireSemaphore(*(_QWORD *)&v10[33].eXX);
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
        LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v9, *(struct HLFONT__ **)(v7[0] + 2160LL), 0LL);
        if ( !v9 || (*((_BYTE *)v9 + 301) & 0x40) != 0 )
        {
          LFONTOBJ::~LFONTOBJ(&v9);
        }
        else
        {
          LFONTOBJ::~LFONTOBJ(&v9);
          v1 = 1;
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  return v1;
}
