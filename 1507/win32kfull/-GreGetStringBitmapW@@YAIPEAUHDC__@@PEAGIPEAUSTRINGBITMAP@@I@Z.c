/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD0C
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C028BEE0 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015B8F8 (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     vStringBitmapTextOut @ 0x1C028B798 (vStringBitmapTextOut.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029ACDC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02B7214 (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  int eXY_low; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // r15d
  unsigned int v16; // eax
  bool v17; // zf
  int v18; // esi
  __int64 v19; // rbx
  FLOATL eXY; // r8d
  int v21; // ecx
  __int64 v22; // rax
  __int64 *v23; // rax
  int v25; // [rsp+28h] [rbp-D8h]
  int v26; // [rsp+30h] [rbp-D0h]
  void *v27; // [rsp+38h] [rbp-C8h]
  struct _FD_XFORM *v28; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v32[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v34[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B4h] [rbp-4Ch]
  int v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+D0h] [rbp-30h]
  __int64 *v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+178h] [rbp+78h]
  int v44; // [rsp+190h] [rbp+90h]

  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  if ( !v32[0] )
  {
    EngSetLastError(6u);
LABEL_4:
    v7 = 0;
    goto LABEL_34;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v33, (struct XDCOBJ *)v32, 0x204u);
  if ( (*(_BYTE *)(v33 + 32) & 0x43) != 0x43 )
    goto LABEL_4;
  if ( (unsigned int)RFONTOBJ::bInit(&v28, (struct XDCOBJ *)v32, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v28[33].eXX);
  if ( !v28
    || (LODWORD(v28[4].eYX) & 2) != 0
    || (eXY_low = LODWORD(v28[24].eXY), eXY_low | *(_DWORD *)(v32[0] + 2172LL)) )
  {
    v7 = 0;
  }
  else
  {
    v41 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)v34, a2, eXY_low, (struct XDCOBJ *)v32, (struct RFONTOBJ *)&v28, v25, v26, v27);
    if ( (v41 & 4) != 0 )
    {
      v9 = v42;
      v12 = v37 - v35;
      v13 = *(_QWORD *)(v42 + 24LL * (unsigned int)(v34[0] - 1) + 8);
      v14 = v36
          + (*(int *)(*(_QWORD *)(v42 + 8) + 16LL) >> 4)
          + ((*(_DWORD *)(v13 + 12) - *(_DWORD *)(v13 + 20)) >> 4)
          - v34[3];
      v15 = (unsigned int)(v14 + 7) >> 3;
      v16 = (v37 - v35) * v15;
      v7 = v16 + 8;
      if ( a5 >= v16 + 8 )
      {
        memset((char *)a4 + 8, 0, v16);
        v17 = (v41 & 0x1400) == 0;
        *((_DWORD *)a4 + 1) = v12;
        v18 = 0;
        *(_DWORD *)a4 = v14;
        v19 = 0LL;
        v29 = 0LL;
        if ( !v17 )
        {
          v18 = *v43;
          if ( *v43 )
          {
            if ( v18 == 1 )
            {
              v19 = *(_QWORD *)&v28[45].eYX;
            }
            else if ( v18 == 2 )
            {
              v19 = *(_QWORD *)&v28[46].eXX;
            }
            else
            {
              v19 = v18 == 3
                  ? *(_QWORD *)&v28[46].eYX
                  : *(_QWORD *)(*(_QWORD *)&v28[47].eXX + 8LL * (unsigned int)(v18 - 4));
            }
            if ( v19 )
            {
              eXY = v28[19].eXY;
              v21 = *(_DWORD *)(v19 + 312);
              if ( SLODWORD(eXY) < *(_DWORD *)(v19 + 308) - v21 )
                v21 = *(_DWORD *)(v19 + 308) - LODWORD(eXY);
              v22 = v38;
              v29.y = v21 >> 4;
              v31 = 0LL;
              if ( v21 >> 4 )
                v22 = 0LL;
              v38 = v22;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
            }
          }
        }
        v44 = v18;
        v23 = &v30;
        v39 = 0;
        if ( !v19 )
          v23 = v40;
        v40 = v23;
        v30 = v19;
        ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v34, &v29);
        vStringBitmapTextOut(v34, a4, v15);
        v30 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
      }
    }
    else
    {
      v7 = 0;
    }
    ESTROBJ::~ESTROBJ((ESTROBJ *)v34, v9, v10, v11);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v32);
  return v7;
}
