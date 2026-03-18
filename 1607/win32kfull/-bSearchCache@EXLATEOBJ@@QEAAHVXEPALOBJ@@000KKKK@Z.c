/*
 * XREFs of ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C014BBB4
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0036410 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C003A910 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 EXLATEOBJ::bSearchCache(_QWORD *a1, ...)
{
  unsigned int v1; // ebx
  int v3; // r15d
  int v4; // ebp
  int v5; // r14d
  unsigned int v6; // edi
  int v7; // eax
  int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rdx
  int v19; // r8d
  int v20; // r10d
  bool v21; // cf
  struct _XLATETABLE near *v22; // r8
  int v23; // eax
  __int64 v24; // r9
  _QWORD v25[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h] BYREF
  va_list va; // [rsp+68h] [rbp+10h]
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF
  va_list va1; // [rsp+70h] [rbp+18h]
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF
  va_list va2; // [rsp+78h] [rbp+20h]
  __int64 v32; // [rsp+80h] [rbp+28h] BYREF
  va_list va3; // [rsp+80h] [rbp+28h]
  __int64 v34; // [rsp+88h] [rbp+30h]
  __int64 v35; // [rsp+90h] [rbp+38h]
  __int64 v36; // [rsp+98h] [rbp+40h]
  __int64 v37; // [rsp+A0h] [rbp+48h]
  va_list va4; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v32 = va_arg(va4, _QWORD);
  v34 = va_arg(va4, _QWORD);
  v35 = va_arg(va4, _QWORD);
  v36 = va_arg(va4, _QWORD);
  v37 = va_arg(va4, _QWORD);
  v1 = *(_DWORD *)(v26 + 56);
  v25[0] = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v3 = v36;
  v4 = v35;
  v5 = v34;
  v6 = 1;
  while ( 1 )
  {
    v7 = XEPALOBJ::ulTime((XEPALOBJ *)va);
    if ( *(_DWORD *)(v10 + v9 + 16) == v7 )
    {
      v12 = XEPALOBJ::ulTime((XEPALOBJ *)va1);
      if ( *(_DWORD *)(v14 + v13 + 20) == v12 )
      {
        v15 = XEPALOBJ::ulTime((XEPALOBJ *)va3);
        if ( *(_DWORD *)(v17 + v16 + 28) == v15 )
        {
          v18 = *(_DWORD **)(v17 + v16 + 8);
          *a1 = v18;
          v19 = v18[19];
          if ( (v19 & 0x6000) == (_DWORD)v37 )
          {
            v20 = v18[1];
            v21 = (v19 & 0x100) != 0;
            v22 = xlateTable;
            if ( (v20 & 4) == 0 && !v21 )
              break;
            if ( (v20 & 4) != 0 && v3 == v18[6] )
            {
              v23 = XEPALOBJ::ulTime((XEPALOBJ *)va2);
              if ( *(_DWORD *)((char *)v22 + v24 + 24) == v23 )
                break;
            }
            if ( (v18[19] & 0x100) != 0 && v5 == v18[7] && v4 == v18[8] )
              break;
          }
        }
      }
    }
    v1 = ((_BYTE)v1 + 1) & 7;
    if ( (unsigned int)(v8 + 1) >= 8 )
    {
      *a1 = 0LL;
      v6 = 0;
      goto LABEL_5;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)v22 + 8 * v1, 1u);
  *(_DWORD *)(v26 + 56) = v1;
LABEL_5:
  SEMOBJ::vUnlock((SEMOBJ *)v25);
  return v6;
}
