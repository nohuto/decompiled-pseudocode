/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z @ 0x1C0022810
 * Callers:
 *     KmfdLoadFontFileView @ 0x1C0022388 (KmfdLoadFontFileView.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C00217A8 (SearchFNTCacheHlink.c)
 *     ComputeFNTCacheFastCheckSum @ 0x1C00220F0 (ComputeFNTCacheFastCheckSum.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        unsigned int a1,
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
  unsigned int v15; // eax
  bool v16; // zf
  __int64 v17; // rdi
  struct PDEV **v18; // r8
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  v9 = a7;
  v11 = 0;
  *a3 = 0;
  *a4 = 0;
  *v9 = 0LL;
  v20 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( qword_1C0328CC8 )
  {
    if ( a1 )
    {
      v15 = ComputeFNTCacheFastCheckSum(a1, a2, (__int64 *)a5, a6, a8, a9);
      v16 = (dword_1C0328CC0 & 1) == 0;
      *a3 = v15;
      if ( !v16 )
      {
        v17 = qword_1C0328CC8;
        a7 = 0LL;
        SearchFNTCacheHlink(v15, (__int64 *)&a7, *(_QWORD *)qword_1C0328CC8);
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
