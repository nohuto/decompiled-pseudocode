/*
 * XREFs of ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0044040
 * Callers:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0041720 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void EXLATEOBJ::vAddToCache(__int64 a1, ...)
{
  unsigned int v2; // r9d
  int v3; // eax
  unsigned int *v4; // r8
  int v5; // eax
  unsigned int *v6; // r8
  int v7; // eax
  unsigned int *v8; // r8
  int v9; // eax
  int *v10; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  va_list va; // [rsp+48h] [rbp+10h]
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  va_list va1; // [rsp+50h] [rbp+18h]
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF
  va_list va2; // [rsp+58h] [rbp+20h]
  va_list va3; // [rsp+60h] [rbp+28h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  v11[0] = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v2 = 0;
  while ( *(&xlateTable + 4 * ulTableIndex + 1) )
  {
    if ( !*((_DWORD *)&xlateTable + 8 * ulTableIndex) )
    {
      FreeThreadBufferWithTag(*(&xlateTable + 4 * ulTableIndex + 1), xlateTable);
      break;
    }
    ++v2;
    ulTableIndex = ((_BYTE)ulTableIndex + 1) & 7;
    if ( v2 >= 8 )
      goto LABEL_6;
  }
  PopThreadGuardedObject(*(_QWORD *)a1 - 32LL);
  *((_DWORD *)&xlateTable + 8 * ulTableIndex) = 1;
  *(&xlateTable + 4 * ulTableIndex + 1) = *(struct _XLATETABLE near **)a1;
  v3 = XEPALOBJ::ulTime((XEPALOBJ *)va);
  *((_DWORD *)&xlateTable + 8 * *v4 + 4) = v3;
  v5 = XEPALOBJ::ulTime((XEPALOBJ *)va1);
  *((_DWORD *)&xlateTable + 8 * *v6 + 5) = v5;
  v7 = XEPALOBJ::ulTime((XEPALOBJ *)va2);
  *((_DWORD *)&xlateTable + 8 * *v8 + 6) = v7;
  v9 = XEPALOBJ::ulTime((XEPALOBJ *)va3);
  *((_DWORD *)&xlateTable + 8 * (unsigned int)*v10 + 7) = v9;
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) = *v10;
  *(_DWORD *)(v12 + 56) = *v10;
  *v10 = ((unsigned __int8)*v10 + 1) & 7;
LABEL_6:
  SEMOBJ::vUnlock((SEMOBJ *)v11);
}
