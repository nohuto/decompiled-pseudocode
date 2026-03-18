/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78
 * Callers:
 *     NtGdiAbortDoc @ 0x1C02695E0 (NtGdiAbortDoc.c)
 *     NtGdiEndDoc @ 0x1C02699F0 (NtGdiEndDoc.c)
 *     NtGdiStartPage @ 0x1C026A420 (NtGdiStartPage.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0019BF0 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C01C2D7C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0267484 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0268C94 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0268CE8 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02A1798 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bEndDocInternal(HDC a1, unsigned int a2)
{
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // ecx
  struct SURFACE *v10; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  bool v12; // zf
  int v13; // esi
  char *v14; // rcx
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r14d
  __int64 v19; // rdi
  __int64 v20; // rdi
  SURFACE *v21; // rcx
  int v22; // eax
  _QWORD v24[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  int v26; // [rsp+38h] [rbp-8h]
  int v27; // [rsp+3Ch] [rbp-4h]
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF
  XDCOBJ *v29; // [rsp+88h] [rbp+48h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( !DWMSPRITEREF::bValid((DWMSPRITEREF *)v24)
    || (*(_DWORD *)(v24[0] + 36LL) & 0x200800) != 0
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v24)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_37;
  }
  v6 = (unsigned int)v4[30];
  if ( v4[29] > (int)v6 )
  {
    GreRestoreDC(a1, v6);
    v4 = (_DWORD *)v24[0];
  }
  v4[9] |= 0x200000u;
  v7 = 1;
  v8 = *(_QWORD *)(v24[0] + 48LL);
  v28 = v8;
  v9 = *(_DWORD *)(v8 + 56);
  if ( (v9 & 1) != 0 || !*(_QWORD *)(v8 + 2584) )
  {
LABEL_37:
    EngSetLastError(0x3EBu);
    v7 = 0;
  }
  else
  {
    v29 = 0LL;
    v10 = *(struct SURFACE **)(v24[0] + 512LL);
    if ( (v9 & 0x8000) != 0 )
    {
      v29 = (XDCOBJ *)v24;
      XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v24);
      v8 = v28;
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, gUMPDSecurityLevel, v4, v5),
          v12 = (unsigned int)bIsProcessLocalSystem(CurrentProcess) == 0,
          v8 = v28,
          !v12)
      || *(_QWORD *)(v8 + 2992) )
    {
      if ( v10 )
        v14 = (char *)v10 + 24;
      else
        v14 = 0LL;
      v13 = (*(__int64 (__fastcall **)(char *, _QWORD))(v8 + 2992))(v14, a2);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n", 2085);
      v13 = 0;
    }
    RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v29);
    v15 = (*(_DWORD *)(v28 + 56) >> 15) & 1;
    *(_WORD *)(v24[0] + 2480LL) = -1;
    UMPDServer(v10);
    v18 = 0;
    *(_QWORD *)(v24[0] + 512LL) = 0LL;
    *(_DWORD *)(v24[0] + 332LL) |= 0xFu;
    v19 = *(_QWORD *)(v24[0] + 128LL);
    if ( *(_DWORD *)(v24[0] + 116LL) - 1 > 0 )
    {
      while ( 1 )
      {
        v26 = 0;
        LOBYTE(v16) = 1;
        v27 = 0;
        v25 = HmgLockAllOwners(v19, v16);
        v20 = v25;
        if ( !DWMSPRITEREF::bValid((DWMSPRITEREF *)&v25) )
          break;
        v21 = *(SURFACE **)(v20 + 512);
        if ( !v21 )
          break;
        v22 = *((_DWORD *)v21 + 28);
        if ( (v22 & 0x800) != 0 )
        {
          DEC_SHARE_REF_CNT(v21);
        }
        else if ( v22 >= 0 )
        {
          SURFACE::vDec_cRef(v21);
        }
        *(_QWORD *)(v20 + 512) = 0LL;
        *(_DWORD *)(v20 + 332) |= 0xFu;
        v19 = *(_QWORD *)(v20 + 128);
        DCOBJ::~DCOBJ((DCOBJ *)&v25);
        if ( ++v18 >= *(_DWORD *)(v24[0] + 116LL) - 1 )
          goto LABEL_33;
      }
      DCOBJ::~DCOBJ((DCOBJ *)&v25);
    }
LABEL_33:
    LOBYTE(v17) = 1;
    PDEVOBJ::vDisableSurface(&v28, 0LL, v17);
    *(_DWORD *)(v24[0] + 36LL) &= ~0x200000u;
    if ( !v15 || !v13 )
      v7 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v29);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v7;
}
