/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0266018
 * Callers:
 *     NtGdiAbortDoc @ 0x1C0267A80 (NtGdiAbortDoc.c)
 *     NtGdiEndDoc @ 0x1C0267EA0 (NtGdiEndDoc.c)
 *     NtGdiStartPage @ 0x1C02688D0 (NtGdiStartPage.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0033DDC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C026517C (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0266FF0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0267044 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C027B500 (-bIsProcessLocalSystem@@YAHXZ.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02A27AC (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bEndDocInternal(HDC a1, unsigned int a2, __int16 a3)
{
  _DWORD *v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx
  struct SURFACE *v11; // rdi
  bool v12; // zf
  int v13; // esi
  char *v14; // rcx
  int v15; // r15d
  __int64 v16; // r8
  int v17; // edi
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  SURFACE *v21; // rcx
  int v22; // edx
  XDCOBJ *v24; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v25[6]; // [rsp+30h] [rbp-21h] BYREF
  _QWORD v26[7]; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+D0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( !v25[0]
    || (*(_DWORD *)(v25[0] + 36LL) & 0x200800) != 0
    || *(_WORD *)(v25[0] + 12LL) != a3
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v25)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_39;
  }
  v7 = (unsigned int)v6[30];
  if ( v6[29] > (int)v7 )
  {
    GreRestoreDC(a1, v7);
    v6 = (_DWORD *)v25[0];
  }
  v6[9] |= 0x200000u;
  v8 = 1;
  v9 = *(_QWORD *)(v25[0] + 48LL);
  v27 = v9;
  v10 = *(_DWORD *)(v9 + 56);
  if ( (v10 & 1) != 0 || !*(_QWORD *)(v9 + 2584) )
  {
LABEL_39:
    EngSetLastError(0x3EBu);
    v8 = 0;
  }
  else
  {
    v24 = 0LL;
    v11 = *(struct SURFACE **)(v25[0] + 512LL);
    if ( (v10 & 0x8000) != 0 )
    {
      v24 = (XDCOBJ *)v25;
      XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v25);
      v9 = v27;
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel && (v12 = (unsigned int)bIsProcessLocalSystem() == 0, v9 = v27, !v12)
      || *(_QWORD *)(v9 + 2984) )
    {
      if ( v11 )
        v14 = (char *)v11 + 24;
      else
        v14 = 0LL;
      v13 = (*(__int64 (__fastcall **)(char *, _QWORD))(v9 + 2984))(v14, a2);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n", 2098);
      v13 = 0;
    }
    RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v24);
    v15 = (*(_DWORD *)(v27 + 56) >> 15) & 1;
    *(_WORD *)(v25[0] + 2504LL) = -1;
    UMPDServer(v11);
    v17 = 0;
    *(_QWORD *)(v25[0] + 512LL) = 0LL;
    *(_DWORD *)(v25[0] + 332LL) |= 0xFu;
    v18 = *(_QWORD *)(v25[0] + 128LL);
    if ( *(_DWORD *)(v25[0] + 116LL) - 1 > 0 )
    {
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v26);
        LOBYTE(v19) = 1;
        v20 = HmgLockAllOwners(v18, v19);
        v26[0] = v20;
        if ( !v20 || (v21 = *(SURFACE **)(v20 + 512)) == 0LL )
        {
          DCOBJ::~DCOBJ((DCOBJ *)v26);
          goto LABEL_35;
        }
        v22 = *((_DWORD *)v21 + 28);
        if ( (v22 & 0x800) != 0 )
          break;
        if ( v22 >= 0 )
        {
          SURFACE::vDec_cRef(v21);
          goto LABEL_31;
        }
LABEL_32:
        *(_QWORD *)(v20 + 512) = 0LL;
        *(_DWORD *)(v26[0] + 332LL) |= 0xFu;
        v18 = *(_QWORD *)(v26[0] + 128LL);
        DCOBJ::~DCOBJ((DCOBJ *)v26);
        if ( ++v17 >= *(_DWORD *)(v25[0] + 116LL) - 1 )
          goto LABEL_35;
      }
      DEC_SHARE_REF_CNT(v21);
LABEL_31:
      v20 = v26[0];
      goto LABEL_32;
    }
LABEL_35:
    LOBYTE(v16) = 1;
    PDEVOBJ::vDisableSurface(&v27, 0LL, v16);
    *(_DWORD *)(v25[0] + 36LL) &= ~0x200000u;
    if ( !v15 || !v13 )
      v8 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v24);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v8;
}
