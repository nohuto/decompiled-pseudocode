/*
 * XREFs of GreGetCharWidthInfo @ 0x1C00FA0D4
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C00FA080 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, FLOATL *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  FLOATL eXX; // eax
  float eYY; // xmm1_4
  int v9; // eax
  char v10; // r8
  int v11; // eax
  char v12; // r8
  _QWORD v13[6]; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  struct _FD_XFORM *v15; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v4 = RFONTOBJ::bInit(&v15, (struct XDCOBJ *)v13, 0, 2u);
    v5 = v15;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v15[33].eXX);
    if ( v5 && *(_QWORD *)(*(_QWORD *)&v5[5].eXX + 3112LL) )
    {
      eXX = v5[44].eXX;
      if ( (*(_DWORD *)(*(_QWORD *)(v13[0] + 80LL) + 352LL) & 0x802) == 0x802 )
      {
        *a2 = eXX;
        a2[1] = v5[44].eXY;
        a2[2] = v5[44].eYX;
      }
      else
      {
        eYY = v5[42].eYY;
        v14 = 0;
        bFToL((float)(16 * LODWORD(eXX)) * eYY, &v14, 0);
        *(_DWORD *)a2 = v14;
        v9 = 16 * LODWORD(v5[44].eXY);
        v14 = 0;
        bFToL((float)v9 * eYY, &v14, v10);
        *((_DWORD *)a2 + 1) = v14;
        v11 = 16 * LODWORD(v5[44].eYX);
        v14 = 0;
        bFToL((float)v11 * eYY, &v14, v12);
        *((_DWORD *)a2 + 2) = v14;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v3;
}
