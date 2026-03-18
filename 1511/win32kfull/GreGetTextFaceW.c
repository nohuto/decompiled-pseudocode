/*
 * XREFs of GreGetTextFaceW @ 0x1C001B3B4
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C001B2C0 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C001CB54 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0022154 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall GreGetTextFaceW(HDC a1, int a2, void *a3, int a4)
{
  int v4; // r12d
  unsigned int v5; // edi
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rbx
  struct PFE *v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  const wchar_t *v14; // rsi
  __int64 v15; // r14
  const wchar_t *v17; // r15
  int i; // r12d
  __int64 v19; // rax
  __int64 v20; // r14
  const wchar_t *v21; // r15
  int j; // r12d
  __int64 v23; // rax
  unsigned int v24; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  struct _POINTL v29; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v30[3]; // [rsp+58h] [rbp-18h] BYREF

  v4 = a2;
  v5 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v30, a1);
  v9 = v30[0];
  if ( v30[0] )
  {
    v27 = *(_QWORD *)(v30[0] + 48LL);
    if ( (*(_DWORD *)(v27 + 56) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v27);
      v9 = v30[0];
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v26, *(struct HLFONT__ **)(*(_QWORD *)(v9 + 80) + 176LL), (struct PDEVOBJ *)&v27);
    v10 = v26;
    if ( v26 )
    {
      v28 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v11 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v26, (struct XDCOBJ *)v30, &v25, &v29, &v24, 0);
      if ( !v11 )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v28);
        LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v26);
        goto LABEL_20;
      }
      v12 = 0;
      if ( (v24 & 2) == 0 || (v14 = (const wchar_t *)(v10 + 304), !*(_WORD *)(v10 + 304)) )
      {
        v13 = *((_QWORD *)v11 + 4);
        if ( (*(_DWORD *)(v13 + 48) & 0x8000000) != 0 )
          v12 = 1;
        v14 = (const wchar_t *)(v13 + *(int *)(v13 + 8));
      }
      if ( a3 )
      {
        if ( v4 >= 1 )
        {
          v15 = -1LL;
          if ( a4 && v12 )
          {
            v17 = v14;
            for ( i = 0; *v17; v17 = &v14[i] )
            {
              if ( !_wcsicmp((const wchar_t *)(v10 + 304), v17) )
                break;
              v19 = -1LL;
              do
                ++v19;
              while ( v17[v19] );
              i += v19 + 1;
            }
            v4 = a2;
            if ( *v17 )
              v14 = v17;
          }
          do
            ++v15;
          while ( v14[v15] );
          v8 = v15 + 1;
          if ( v4 < v8 )
            v8 = v4;
          memmove(a3, v14, 2LL * v8);
          *((_WORD *)a3 + v8 - 1) = 0;
        }
      }
      else
      {
        v20 = -1LL;
        if ( a4 && v12 )
        {
          v21 = v14;
          for ( j = 0; *v21; v21 = &v14[j] )
          {
            if ( !_wcsicmp((const wchar_t *)(v10 + 304), v21) )
              break;
            v23 = -1LL;
            do
              ++v23;
            while ( v21[v23] );
            j += v23 + 1;
          }
          if ( *v21 )
            v14 = v21;
        }
        do
          ++v20;
        while ( v14[v20] );
        v8 = v20 + 1;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v28);
    }
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v26);
  }
  v5 = v8;
LABEL_20:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v30);
  return v5;
}
