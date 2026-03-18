/*
 * XREFs of DrvGetDisplayDriverNames @ 0x1C00691C0
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0060CC0 (DrvBuildDevmodeList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     DrvEscapeRemoteDrivers @ 0x1C0088D80 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

unsigned int *__fastcall DrvGetDisplayDriverNames(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int *v3; // rdi
  int v4; // esi
  unsigned int v5; // r14d
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v14; // rax

  v1 = *(_WORD **)(a1 + 208);
  v3 = 0LL;
  v4 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( *v1 )
    {
      ++v5;
      do
      {
        ++v1;
        v4 += 2;
      }
      while ( *v1 );
      ++v1;
      v4 += 2;
    }
    v6 = (unsigned int *)PALLOCMEM2(v4 + 24 * v5 + 26, 1936876615LL, 0);
    v3 = v6;
    if ( v6 )
    {
      v7 = &v6[6 * v5 + 6];
      memmove(v7, *(const void **)(a1 + 208), (unsigned int)(v4 + 2));
      *v3 = 0;
      while ( *(_WORD *)v7 )
      {
        *(_QWORD *)&v3[4 * *v3 + 4] = v7;
        v12 = *v3;
        if ( *v3 >= v5 )
        {
          v14 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
          WdLogEvent5_WdAssertion(v14);
          return v3;
        }
        v9 = 2LL * v12;
        *(_QWORD *)&v3[4 * v12 + 2] = *(_QWORD *)(a1 + 136);
        ++*v3;
        while ( *(_WORD *)v7 )
          v7 = (unsigned int *)((char *)v7 + 2);
        v7 = (unsigned int *)((char *)v7 + 2);
      }
    }
  }
  return v3;
}
