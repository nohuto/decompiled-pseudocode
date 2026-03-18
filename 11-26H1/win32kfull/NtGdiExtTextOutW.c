/*
 * XREFs of NtGdiExtTextOutW @ 0x14027F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXK@Z @ 0x1401C8584 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXK@Z.c)
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@@Z @ 0x140205B04 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiExtTextOutW(
        HDC a1,
        __int64 a2,
        ULONG a3,
        int a4,
        int *a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  int *v11; // r14
  void *v12; // rcx
  __int64 v13; // rax
  int *v14; // rax
  int v15; // esi
  int v16; // edx
  void *v17; // r9
  unsigned __int64 v18; // rbx
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r15
  _BYTE *v22; // rdi
  int v23; // ecx
  _BYTE *v24; // rdi
  unsigned __int64 v25; // rbx
  int *v26; // r12
  __int64 v27; // rdx
  int v28; // ecx
  __int64 SessionState; // rax
  int *v30; // rax
  int v31; // edx
  int v33; // [rsp+60h] [rbp-238h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-230h]
  unsigned int v35; // [rsp+6Ch] [rbp-22Ch] BYREF
  void *Src; // [rsp+70h] [rbp-228h]
  int v37; // [rsp+78h] [rbp-220h]
  unsigned int v38; // [rsp+80h] [rbp-218h]
  _BYTE *v39; // [rsp+88h] [rbp-210h]
  int *v40; // [rsp+90h] [rbp-208h]
  unsigned int v41; // [rsp+98h] [rbp-200h]
  ULONG v42; // [rsp+A0h] [rbp-1F8h]
  void *v43; // [rsp+A8h] [rbp-1F0h]
  __int64 v44; // [rsp+B0h] [rbp-1E8h]
  void *v45; // [rsp+B8h] [rbp-1E0h]
  HDC v46; // [rsp+C0h] [rbp-1D8h]
  HDC v47; // [rsp+C8h] [rbp-1D0h]
  __int64 v48; // [rsp+D0h] [rbp-1C8h]
  _BYTE v49[56]; // [rsp+D8h] [rbp-1C0h] BYREF
  _QWORD v50[14]; // [rsp+110h] [rbp-188h] BYREF
  __int128 v51; // [rsp+180h] [rbp-118h] BYREF
  _BYTE v52[192]; // [rsp+190h] [rbp-108h] BYREF

  v46 = a1;
  v34 = a7;
  v47 = a1;
  v33 = a2;
  v42 = a3;
  v37 = a4;
  v11 = a5;
  v40 = a5;
  v12 = a6;
  v43 = a6;
  v38 = a7;
  Src = a8;
  v41 = a9;
  v51 = 0LL;
  if ( a7 > 0xFFFF )
    goto LABEL_40;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      GreProbeAndReadFromUntrustedVa(&v51, 0x10uLL, a5, 0x10uLL, 1uLL);
      v11 = (int *)&v51;
      v40 = (int *)&v51;
      v12 = v43;
    }
    else
    {
      v11 = 0LL;
      v40 = 0LL;
    }
  }
  if ( a7 )
  {
    if ( (a4 & 6) != 0 && !v11 || !v12 )
    {
      v16 = 0;
      goto LABEL_18;
    }
    v15 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v35, 1);
    v18 = 0LL;
    v19 = (30 * a7 + 7) & 0xFFFFFFF8;
    v35 = v19;
    if ( v17 )
    {
      v18 = 4 * a7;
      if ( (a4 & 0x2000) != 0 )
        v18 = 8 * a7;
    }
    v48 = (unsigned int)(v18 + 7);
    LODWORD(v45) = v18 + 7;
    v20 = v19 + (v48 & 0xFFFFFFF8) + 2 * a7;
    if ( (unsigned int)v20 <= 0xC0 )
    {
      v21 = 0LL;
      v44 = 0LL;
      v22 = v52;
      v39 = v52;
LABEL_26:
      if ( v17 )
      {
        GreProbeForReadFromUntrustedVa(v17, v18, 1uLL);
        memmove(v22, Src, v18);
        v23 = v34;
        Src = v22;
        v22 += (unsigned int)v48 & 0xFFFFFFF8;
      }
      else
      {
        v23 = v34;
      }
      v45 = v22;
      v24 = &v22[v19];
      v39 = v24;
      v25 = 2LL * v23;
      GreProbeForReadFromUntrustedVa(v43, v25, 2uLL);
      memmove(v24, v43, v25);
      v26 = (int *)Src;
      if ( v15 )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v50, v46);
        if ( v50[0] )
        {
          SessionState = W32GetSessionState(v28, v27);
          EUDCCountRegion::EUDCCountRegion(
            (EUDCCountRegion *)v49,
            (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
          if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v49) )
            v30 = GrepExtTextOutW(
                    &v33,
                    (struct XDCOBJ *)v50,
                    v33,
                    v42,
                    a4,
                    v11,
                    (unsigned __int16 *)v24,
                    v34,
                    v26,
                    v45,
                    v41);
          else
            v30 = ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v33, 0);
          v15 = *v30;
          EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v49);
        }
        else
        {
          v15 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v33, 0);
        }
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v50);
      }
      if ( v21 )
        FreeTmpBuffer(v21);
      goto LABEL_39;
    }
    v21 = AllocFreeTmpBuffer(v20);
    v44 = v21;
    v22 = (_BYTE *)v21;
    v39 = (_BYTE *)v21;
    if ( v21 )
    {
      v17 = Src;
      goto LABEL_26;
    }
LABEL_40:
    v31 = 0;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v33, v31);
  }
  if ( v11 && (a4 & 2) != 0 )
  {
    v13 = W32GetSessionState((_DWORD)v12, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v49,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v13 + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v49) )
      v14 = GreExtTextOutRect(&v33, a1, v11);
    else
      v14 = ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v33, 0);
    v15 = *v14;
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v49);
    goto LABEL_39;
  }
  v16 = 1;
LABEL_18:
  v15 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v33, v16);
LABEL_39:
  v31 = v15;
  return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v33, v31);
}
