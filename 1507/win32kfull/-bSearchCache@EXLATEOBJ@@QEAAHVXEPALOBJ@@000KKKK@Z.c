/*
 * XREFs of ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C011CAA0
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0013F94 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 EXLATEOBJ::bSearchCache(_QWORD *a1, ...)
{
  unsigned int v1; // ebx
  int v3; // r12d
  unsigned int v4; // esi
  int v5; // ebp
  int v6; // r15d
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  _DWORD *v18; // r8
  struct _XLATETABLE near *v19; // rdx
  int v20; // r10d
  int v21; // r11d
  int v22; // eax
  __int64 v23; // r9
  _QWORD v24[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+78h] [rbp+10h]
  __int64 v27; // [rsp+80h] [rbp+18h] BYREF
  va_list va1; // [rsp+80h] [rbp+18h]
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF
  va_list va2; // [rsp+88h] [rbp+20h]
  __int64 v31; // [rsp+90h] [rbp+28h] BYREF
  va_list va3; // [rsp+90h] [rbp+28h]
  __int64 v33; // [rsp+98h] [rbp+30h]
  __int64 v34; // [rsp+A0h] [rbp+38h]
  __int64 v35; // [rsp+A8h] [rbp+40h]
  __int64 v36; // [rsp+B0h] [rbp+48h]
  va_list va4; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v25 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v31 = va_arg(va4, _QWORD);
  v33 = va_arg(va4, _QWORD);
  v34 = va_arg(va4, _QWORD);
  v35 = va_arg(va4, _QWORD);
  v36 = va_arg(va4, _QWORD);
  v1 = *(_DWORD *)(v25 + 56);
  v24[0] = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v3 = v35;
  v4 = 0;
  v5 = v34;
  v6 = v33;
  v7 = 1;
  while ( 1 )
  {
    v8 = XEPALOBJ::ulTime((XEPALOBJ *)va);
    if ( *(_DWORD *)(v10 + v9 + 16) == v8 )
    {
      v12 = XEPALOBJ::ulTime((XEPALOBJ *)va1);
      if ( *(_DWORD *)(v14 + v13 + 20) == v12 )
      {
        v15 = XEPALOBJ::ulTime((XEPALOBJ *)va3);
        if ( *(_DWORD *)(v17 + v16 + 28) == v15 )
        {
          v18 = *(_DWORD **)(v17 + v16 + 8);
          *a1 = v18;
          v19 = xlateTable;
          v20 = v18[19];
          if ( (v20 & 0x6000) == (_DWORD)v36 )
          {
            v21 = v18[1];
            if ( (v21 & 4) == 0 && (v20 & 0x100) == 0 )
              break;
            if ( (v21 & 4) != 0 && v3 == v18[6] )
            {
              v22 = XEPALOBJ::ulTime((XEPALOBJ *)va2);
              if ( *(_DWORD *)((char *)v19 + v23 + 24) == v22 )
                break;
            }
            if ( (v20 & 0x100) != 0 && v6 == v18[7] && v5 == v18[8] )
              break;
          }
        }
      }
    }
    ++v4;
    v1 = ((_BYTE)v1 + 1) & 7;
    if ( v4 >= 8 )
    {
      *a1 = 0LL;
      v7 = 0;
      goto LABEL_5;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)v19 + 8 * v1, 1u);
  *(_DWORD *)(v25 + 56) = v1;
LABEL_5:
  SEMOBJ::vUnlock((SEMOBJ *)v24);
  return v7;
}
