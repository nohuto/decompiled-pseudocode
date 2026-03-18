/*
 * XREFs of GreGetCharWidthInfo @ 0x1C0123B14
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C0123AC0 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, FLOATL *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  FLOATL eXX; // eax
  float eYY; // xmm1_4
  int v8; // eax
  char v9; // r8
  int v10; // eax
  char v11; // r8
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  char v14[32]; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+80h] [rbp+30h] BYREF
  struct _FD_XFORM *v16; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v4 = RFONTOBJ::bInit(&v16, (struct XDCOBJ *)v13, 0, 2u);
    v5 = v16;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v16[33].eXX);
    if ( v5 && *(_QWORD *)(*(_QWORD *)&v5[5].eXX + 3104LL) )
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
        v15 = 0;
        bFToL((float)(16 * LODWORD(eXX)) * eYY, &v15, 0);
        *(_DWORD *)a2 = v15;
        v8 = 16 * LODWORD(v5[44].eXY);
        v15 = 0;
        bFToL((float)v8 * eYY, &v15, v9);
        *((_DWORD *)a2 + 1) = v15;
        v10 = 16 * LODWORD(v5[44].eYX);
        v15 = 0;
        bFToL((float)v10 * eYY, &v15, v11);
        *((_DWORD *)a2 + 2) = v15;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return v3;
}
