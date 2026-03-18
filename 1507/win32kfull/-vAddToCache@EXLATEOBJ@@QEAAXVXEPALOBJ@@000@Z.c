/*
 * XREFs of ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0026984
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0013F94 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void EXLATEOBJ::vAddToCache(__int64 a1, ...)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _XLATETABLE near *v4; // rdx
  int v5; // eax
  unsigned int *v6; // r8
  int v7; // eax
  unsigned int *v8; // r8
  int v9; // eax
  unsigned int *v10; // r8
  int v11; // eax
  int *v12; // r8
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  va_list va; // [rsp+48h] [rbp+10h]
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  va_list va1; // [rsp+50h] [rbp+18h]
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF
  va_list va2; // [rsp+58h] [rbp+20h]
  va_list va3; // [rsp+60h] [rbp+28h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v13[0] = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v2 = *(_QWORD *)&ulTableIndex;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = xlateTable;
    if ( !*(&xlateTable + 4 * ulTableIndex + 1) )
      break;
    if ( !*((_DWORD *)&xlateTable + 8 * ulTableIndex) )
    {
      FreeThreadBufferWithTag(*(&xlateTable + 4 * ulTableIndex + 1));
      break;
    }
    v3 = (unsigned int)(v3 + 1);
    ulTableIndex = ((_BYTE)ulTableIndex + 1) & 7;
    if ( (unsigned int)v3 >= 8 )
      goto LABEL_6;
  }
  PopThreadGuardedObject(*(_QWORD *)a1 - 32LL, v4, v2, v3, v13[0]);
  *((_DWORD *)&xlateTable + 8 * ulTableIndex) = 1;
  *(&xlateTable + 4 * ulTableIndex + 1) = *(struct _XLATETABLE near **)a1;
  v5 = XEPALOBJ::ulTime((XEPALOBJ *)va);
  *((_DWORD *)&xlateTable + 8 * *v6 + 4) = v5;
  v7 = XEPALOBJ::ulTime((XEPALOBJ *)va1);
  *((_DWORD *)&xlateTable + 8 * *v8 + 5) = v7;
  v9 = XEPALOBJ::ulTime((XEPALOBJ *)va2);
  *((_DWORD *)&xlateTable + 8 * *v10 + 6) = v9;
  v11 = XEPALOBJ::ulTime((XEPALOBJ *)va3);
  *((_DWORD *)&xlateTable + 8 * (unsigned int)*v12 + 7) = v11;
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) = *v12;
  *(_DWORD *)(v14 + 56) = *v12;
  *v12 = ((unsigned __int8)*v12 + 1) & 7;
LABEL_6:
  SEMOBJ::vUnlock((SEMOBJ *)v13);
}
