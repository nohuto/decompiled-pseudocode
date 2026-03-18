/*
 * XREFs of ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C014F794
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C002F30C (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0032C38 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C0126284 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029B618 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?vFixedToEf@@YAXPEAVEFLOAT@@AEAU_FIXED@@@Z @ 0x1C02B3688 (-vFixedToEf@@YAXPEAVEFLOAT@@AEAU_FIXED@@@Z.c)
 */

RESETFCOBJ *__fastcall RESETFCOBJ::RESETFCOBJ(
        RESETFCOBJ *this,
        struct DCOBJ *a2,
        struct RFONTOBJ *a3,
        struct _MAT2 *a4,
        int a5,
        unsigned int a6)
{
  int v6; // eax
  struct tagLOGFONTW *v11; // rbx
  int v13; // xmm3_4
  int v14; // xmm1_4
  LONG x; // xmm0_4
  __int64 v16; // rax
  FLOATL eXY; // xmm1_4
  FLOATL eYY; // xmm3_4
  FLOATL eYX; // xmm2_4
  unsigned int v20; // [rsp+28h] [rbp-D8h]
  struct MATRIX *v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct tagLOGFONTW *v22; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v23; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  struct MATRIX *v27[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[16]; // [rsp+90h] [rbp-70h] BYREF
  PFEOBJ *v29; // [rsp+A0h] [rbp-60h] BYREF
  struct _FD_XFORM v30; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v31[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[40]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v33[40]; // [rsp+110h] [rbp+10h] BYREF

  v6 = 1;
  *((_QWORD *)this + 1) = a3;
  *(_DWORD *)this = 1;
  if ( *(_DWORD *)&a4->eM11 != 0x10000
    || a4->eM22.value != 1
    || a4->eM22.fract
    || a4->eM12.value
    || a4->eM12.fract
    || a4->eM21.value
    || a4->eM21.fract )
  {
    v6 = 0;
  }
  *((_DWORD *)this + 1) = v6;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v22, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 176LL), 0LL);
  v11 = v22;
  if ( !v22 )
    goto LABEL_14;
  if ( v22[3].lfEscapement || v22[3].lfOrientation )
  {
    if ( a5 )
      *((_DWORD *)this + 1) = 0;
  }
  if ( !*((_DWORD *)this + 1) )
  {
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v27, (struct MATRIX *)v31, 32);
    vFixedToEf((struct EFLOAT *)&v24, &a4->eM11);
    vFixedToEf((struct EFLOAT *)&v23, &a4->eM22);
    vFixedToEf((struct EFLOAT *)&v25, &a4->eM12);
    vFixedToEf((struct EFLOAT *)&v26, &a4->eM21);
    v13 = v25 ^ _xmm;
    v14 = v26 ^ _xmm;
    *(_DWORD *)v27[0] = v24;
    x = v23.x;
    *((_DWORD *)v27[0] + 1) = v13;
    *((_DWORD *)v27[0] + 2) = v14;
    *((_DWORD *)v27[0] + 3) = x;
    EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v27);
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v21, (struct MATRIX *)v32, 8);
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v28, (struct MATRIX *)v33, 8);
    if ( !a5 )
    {
      RFONTOBJ::vSetNotionalToDevice(a3, (struct EXFORMOBJ *)v21);
LABEL_21:
      if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)v28, v21[0], v27[0], 8u) )
      {
        EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v28, &v30);
        *(_DWORD *)this = RFONTOBJ::bSetNewFDX(a3, a2, &v30, a6);
        goto LABEL_12;
      }
      goto LABEL_14;
    }
    v16 = *(_QWORD *)a3;
    v23 = 0LL;
    v29 = *(PFEOBJ **)(*(_QWORD *)(v16 + 112) + 32LL);
    if ( (unsigned int)PFEOBJ::bSetFontXform(v29, a2, v11 + 3, &v30, 1, v20, &v23, (struct IFIOBJ *)&v29, 0) )
    {
      EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v21);
      eXY = v30.eXY;
      eYY = v30.eYY;
      eYX = v30.eYX;
      *(FLOATL *)v21[0] = v30.eXX;
      *((FLOATL *)v21[0] + 1) = eXY;
      *((FLOATL *)v21[0] + 2) = eYX;
      *((FLOATL *)v21[0] + 3) = eYY;
      *(float *)v21[0] = *(float *)v21[0] * 16.0;
      *((float *)v21[0] + 1) = *((float *)v21[0] + 1) * 16.0;
      *((float *)v21[0] + 2) = *((float *)v21[0] + 2) * 16.0;
      *((float *)v21[0] + 3) = *((float *)v21[0] + 3) * 16.0;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v21, 8u);
      goto LABEL_21;
    }
LABEL_14:
    *(_DWORD *)this = 0;
  }
LABEL_12:
  LFONTOBJ::~LFONTOBJ((struct LFONT **)&v22);
  return this;
}
