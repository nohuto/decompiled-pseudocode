/*
 * XREFs of GreGetTextFaceW @ 0x1C0023264
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C0023170 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0023DC8 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C002A12C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(HDC a1, int a2, void *a3, int a4)
{
  int v4; // r12d
  unsigned int v5; // edi
  int v8; // r14d
  __int64 v9; // rbx
  struct PFE *v10; // rax
  int v11; // edx
  const wchar_t *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r14
  const wchar_t *v15; // r15
  int i; // r12d
  __int64 v17; // rax
  __int64 v18; // r14
  const wchar_t *v19; // r15
  int j; // r12d
  __int64 v21; // rax
  __int64 v23; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-21h] BYREF
  __int64 v25; // [rsp+48h] [rbp-19h] BYREF
  __int64 v26; // [rsp+50h] [rbp-11h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-9h] BYREF
  struct _POINTL v28; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp+7h] BYREF
  char v30[32]; // [rsp+78h] [rbp+17h] BYREF

  v4 = a2;
  v5 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  if ( !v29[0] )
    goto LABEL_40;
  v25 = *(_QWORD *)(v29[0] + 48LL);
  if ( (*(_DWORD *)(v25 + 56) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v25);
  LFONTOBJ::LFONTOBJ(
    (LFONTOBJ *)&v23,
    *(struct HLFONT__ **)(*(_QWORD *)(v29[0] + 80LL) + 176LL),
    (struct PDEVOBJ *)&v25);
  v9 = v23;
  if ( !v23 )
  {
LABEL_39:
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v23);
LABEL_40:
    v5 = v8;
    goto LABEL_41;
  }
  v26 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v10 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v23, (struct XDCOBJ *)v29, &v27, &v28, &v24, 0);
  if ( v10 )
  {
    v11 = 0;
    if ( (v24 & 2) == 0 || (v12 = (const wchar_t *)(v9 + 304), !*(_WORD *)(v9 + 304)) )
    {
      v13 = *((_QWORD *)v10 + 4);
      if ( (*(_DWORD *)(v13 + 48) & 0x8000000) != 0 )
        v11 = 1;
      v12 = (const wchar_t *)(v13 + *(int *)(v13 + 8));
    }
    if ( a3 )
    {
      if ( v4 >= 1 )
      {
        v14 = -1LL;
        if ( a4 && v11 )
        {
          v15 = v12;
          for ( i = 0; *v15; v15 = &v12[i] )
          {
            if ( !_wcsicmp((const wchar_t *)(v9 + 304), v15) )
              break;
            v17 = -1LL;
            do
              ++v17;
            while ( v15[v17] );
            i += v17 + 1;
          }
          v4 = a2;
          if ( *v15 )
            v12 = v15;
        }
        do
          ++v14;
        while ( v12[v14] );
        v8 = v14 + 1;
        if ( v4 < v8 )
          v8 = v4;
        memmove(a3, v12, 2LL * v8);
        *((_WORD *)a3 + v8 - 1) = 0;
      }
    }
    else
    {
      v18 = -1LL;
      if ( a4 && v11 )
      {
        v19 = v12;
        for ( j = 0; *v19; v19 = &v12[j] )
        {
          if ( !_wcsicmp((const wchar_t *)(v9 + 304), v19) )
            break;
          v21 = -1LL;
          do
            ++v21;
          while ( v19[v21] );
          j += v21 + 1;
        }
        if ( *v19 )
          v12 = v19;
      }
      do
        ++v18;
      while ( v12[v18] );
      v8 = v18 + 1;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v26);
    goto LABEL_39;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v23);
LABEL_41:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v29);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v30);
  return v5;
}
