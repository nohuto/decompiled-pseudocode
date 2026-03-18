/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD38
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C028BD00 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0151048 (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     vStringBitmapTextOut @ 0x1C028B648 (vStringBitmapTextOut.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029A764 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02B6628 (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
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
  char *v9; // r15
  int v10; // r14d
  __int64 v11; // rcx
  int v12; // ebx
  unsigned int v13; // r12d
  unsigned int v14; // eax
  bool v15; // zf
  __int64 v16; // rbx
  int v17; // esi
  FLOATL eXY; // r8d
  int v19; // ecx
  __int64 v20; // rax
  __int64 *v21; // rax
  int v23; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+30h] [rbp-D0h]
  void *v25; // [rsp+38h] [rbp-C8h]
  struct _FD_XFORM *v26; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v32[4]; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+94h] [rbp-6Ch]
  int v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+B0h] [rbp-50h]
  __int64 *v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  int *v41; // [rsp+158h] [rbp+58h]
  int v42; // [rsp+170h] [rbp+70h]

  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  if ( !v29[0] )
  {
    EngSetLastError(6u);
LABEL_4:
    v7 = 0;
    goto LABEL_34;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v31, (struct XDCOBJ *)v29, 0x204u);
  if ( (*(_BYTE *)(v31 + 32) & 0x43) != 0x43 )
    goto LABEL_4;
  if ( (unsigned int)RFONTOBJ::bInit(&v26, (struct XDCOBJ *)v29, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v26[33].eXX);
  if ( !v26
    || (LODWORD(v26[4].eYX) & 2) != 0
    || (eXY_low = LODWORD(v26[24].eXY), eXY_low | *(_DWORD *)(v29[0] + 2148LL)) )
  {
    v7 = 0;
  }
  else
  {
    v39 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)v32, a2, eXY_low, (struct XDCOBJ *)v29, (struct RFONTOBJ *)&v26, v23, v24, v25);
    if ( (v39 & 4) != 0 )
    {
      v9 = (char *)a4 + 8;
      v10 = v35 - v33;
      v11 = *(_QWORD *)(v40 + 24LL * (unsigned int)(v32[0] - 1) + 8);
      v12 = v34
          + (*(int *)(*(_QWORD *)(v40 + 8) + 16LL) >> 4)
          + ((*(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 20)) >> 4)
          - v32[3];
      v13 = (unsigned int)(v12 + 7) >> 3;
      v14 = (v35 - v33) * v13;
      v7 = v14 + 8;
      if ( a5 >= v14 + 8 )
      {
        memset((char *)a4 + 8, 0, v14);
        v15 = (v39 & 0x1400) == 0;
        *(_DWORD *)a4 = v12;
        v16 = 0LL;
        *((_DWORD *)a4 + 1) = v10;
        v17 = 0;
        v27 = 0LL;
        if ( !v15 )
        {
          v17 = *v41;
          if ( *v41 )
          {
            if ( v17 == 1 )
            {
              v16 = *(_QWORD *)&v26[45].eYX;
            }
            else if ( v17 == 2 )
            {
              v16 = *(_QWORD *)&v26[46].eXX;
            }
            else
            {
              v16 = v17 == 3
                  ? *(_QWORD *)&v26[46].eYX
                  : *(_QWORD *)(*(_QWORD *)&v26[47].eXX + 8LL * (unsigned int)(v17 - 4));
            }
            if ( v16 )
            {
              eXY = v26[19].eXY;
              v19 = *(_DWORD *)(v16 + 312);
              if ( SLODWORD(eXY) < *(_DWORD *)(v16 + 308) - v19 )
                v19 = *(_DWORD *)(v16 + 308) - LODWORD(eXY);
              v20 = v36;
              v27.y = v19 >> 4;
              v30 = 0LL;
              if ( v19 >> 4 )
                v20 = 0LL;
              v36 = v20;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
            }
          }
        }
        v42 = v17;
        v21 = &v28;
        v37 = 0;
        if ( !v16 )
          v21 = v38;
        v38 = v21;
        v28 = v16;
        ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v32, &v27);
        vStringBitmapTextOut(v32, v9, v13);
        v28 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
      }
    }
    else
    {
      v7 = 0;
    }
    ESTROBJ::~ESTROBJ((ESTROBJ *)v32);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
LABEL_34:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v29);
  return v7;
}
