/*
 * XREFs of NtGdiAddRemoteMMInstanceToDC @ 0x1C026AB90
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C015BA90 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     TraceGreReleaseSemaphore @ 0x1C015CBD8 (TraceGreReleaseSemaphore.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     TraceGreAcquireSemaphoreEx @ 0x1C025E164 (TraceGreAcquireSemaphoreEx.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z @ 0x1C0268C78 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z.c)
 */

__int64 __fastcall NtGdiAddRemoteMMInstanceToDC(HDC a1, char *Src, size_t Size)
{
  size_t v3; // rsi
  unsigned int v5; // edi
  struct _FONTFILEVIEW **v7; // rax
  struct _FONTFILEVIEW **v8; // r8
  struct _FONTFILEVIEW *v9; // rax
  int v10; // [rsp+44h] [rbp-134h] BYREF
  char v11[8]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v12[6]; // [rsp+50h] [rbp-128h] BYREF
  _OWORD v13[5]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v14; // [rsp+D0h] [rbp-A8h]
  __int128 v15; // [rsp+E0h] [rbp-98h]
  __int64 v16; // [rsp+F0h] [rbp-88h]
  _DWORD v17[20]; // [rsp+100h] [rbp-78h] BYREF

  v3 = (unsigned int)Size;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    if ( (*(_DWORD *)(v12[0] + 36LL) & 1) == 0 && (unsigned int)v3 <= 0x50 )
    {
      memset(v17, 0, sizeof(v17));
      if ( (_DWORD)v3 && ((unsigned __int64)&Src[v3] > W32UserProbeAddress || &Src[v3] < Src) )
        *W32UserProbeAddress = 0;
      memmove(v17, Src, v3);
      if ( v17[3] <= 0x10u )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        TraceGreAcquireSemaphoreEx((__int64)L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
        if ( (unsigned int)GreGetBaseUFIBits((struct _UNIVERSAL_FONT_ID *)v17, (struct _FONTFILEVIEW *)v13) )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v11);
          v7 = (struct _FONTFILEVIEW **)PALLOCMEM2(0x80uLL, 1986422343LL, 1);
          v8 = v7;
          if ( v7 )
          {
            v10 = 0;
            v9 = (struct _FONTFILEVIEW *)(v7 + 1);
            *v8 = v9;
            *((_QWORD *)&v14 + 1) = 0LL;
            DWORD1(v15) = 0;
            *(_OWORD *)v9 = v13[0];
            *((_OWORD *)v9 + 1) = v13[1];
            *((_OWORD *)v9 + 2) = v13[2];
            *((_OWORD *)v9 + 3) = v13[3];
            *((_OWORD *)v9 + 4) = v13[4];
            *((_OWORD *)v9 + 5) = v14;
            *((_OWORD *)v9 + 6) = v15;
            *((_QWORD *)v9 + 14) = v16;
            v5 = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                   (PUBLIC_PFTOBJ *)v11,
                   (struct XDCOBJ *)v12,
                   v8,
                   1u,
                   (struct tagDESIGNVECTOR *)&v17[2],
                   0LL,
                   &v10);
          }
          else
          {
            v5 = 0;
          }
        }
        TraceGreReleaseSemaphore((__int64)L"ghsemPublicPFT", ghsemPublicPFT);
        GreReleaseSemaphoreInternal(ghsemPublicPFT);
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return v5;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return 0LL;
  }
}
