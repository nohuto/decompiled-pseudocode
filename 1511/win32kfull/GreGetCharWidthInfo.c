/*
 * XREFs of GreGetCharWidthInfo @ 0x1C0102AE4
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C0102A90 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, _DWORD *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+60h] [rbp+30h] BYREF
  struct _FD_XFORM *v13; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v4 = RFONTOBJ::bInit(&v13, (struct XDCOBJ *)v11, 0, 2u);
    v5 = v13;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v13[33].eXX);
    if ( v5 && *(_QWORD *)(*(_QWORD *)&v5[5].eXX + 3112LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 352LL) & 0x802) == 0x802 )
      {
        *a2 = LODWORD(v5[44].eXX);
        a2[1] = LODWORD(v5[44].eXY);
        a2[2] = LODWORD(v5[44].eYX);
      }
      else
      {
        v12 = 0;
        bFToL(2050LL, &v12, 0LL);
        *a2 = v12;
        v12 = 0;
        bFToL(v7, &v12, v8);
        a2[1] = v12;
        v12 = 0;
        bFToL(v9, &v12, v10);
        a2[2] = v12;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v3;
}
