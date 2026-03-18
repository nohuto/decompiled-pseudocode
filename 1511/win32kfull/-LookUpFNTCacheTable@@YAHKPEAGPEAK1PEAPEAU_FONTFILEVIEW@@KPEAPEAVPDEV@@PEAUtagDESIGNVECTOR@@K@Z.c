/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z @ 0x1C001175C
 * Callers:
 *     KmfdLoadFontFileView @ 0x1C0011294 (KmfdLoadFontFileView.c)
 * Callees:
 *     ComputeFNTCacheFastCheckSum @ 0x1C0011878 (ComputeFNTCacheFastCheckSum.c)
 *     SearchFNTCacheHlink @ 0x1C0011B2C (SearchFNTCacheHlink.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        int a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct _FONTFILEVIEW **a5,
        unsigned int a6,
        struct PDEV **a7,
        struct tagDESIGNVECTOR *a8,
        unsigned int a9)
{
  struct PDEV **v9; // r14
  unsigned int v11; // ebx
  int v14; // ebp
  unsigned int v15; // eax
  bool v16; // zf
  __int64 v17; // rdi
  struct PDEV **v18; // r8
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  v9 = a7;
  v11 = 0;
  *a3 = 0;
  *a4 = 0;
  v14 = (int)a2;
  *v9 = 0LL;
  v20 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( qword_1C0323628 )
  {
    if ( a1 )
    {
      v15 = ComputeFNTCacheFastCheckSum(a1, v14, (_DWORD)a5, a6, (__int64)a8, a9);
      v16 = (dword_1C0323620 & 1) == 0;
      *a3 = v15;
      if ( !v16 )
      {
        v17 = qword_1C0323628;
        a7 = 0LL;
        SearchFNTCacheHlink(v15, &a7);
        v18 = a7;
        if ( a7 )
        {
          if ( ((_DWORD)a7[3] & 1) == 0 )
          {
            v11 = 1;
            *a4 = *((_DWORD *)a7 + 1);
            *v9 = *(struct PDEV **)(v17 + 8LL * *((unsigned int *)v18 + 3) + 48);
          }
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  return v11;
}
