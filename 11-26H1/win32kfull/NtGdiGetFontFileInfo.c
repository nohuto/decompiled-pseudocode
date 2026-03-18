/*
 * XREFs of NtGdiGetFontFileInfo @ 0x1400FE220
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1400C6710 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z @ 0x1400FE480 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400FE9F8 (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetFontFileInfo(unsigned int a1, unsigned int a2, __int64 a3, unsigned __int64 a4, void *a5)
{
  __int64 v7; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct PFT *v15; // rcx
  struct PFF *PFFFromId; // rdi
  __int64 v17; // r8
  __int64 v18; // r15
  const wchar_t *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned int v24[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-30h] BYREF
  int v28; // [rsp+58h] [rbp-20h]

  v7 = a2;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v27);
  v12 = *(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96);
  v25 = *(_QWORD *)(v12 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v13 = 0;
  v24[0] = 0;
  PFFFromId = GetPFFFromId(*(struct PFT **)(v12 + 20392), a1, v24);
  if ( !PFFFromId )
  {
    v15 = *(struct PFT **)(v12 + 20384);
    if ( v15 )
    {
      v24[0] = 0;
      PFFFromId = GetPFFFromId(v15, a1, v24);
    }
  }
  if ( !PFFFromId )
  {
    SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v25);
    goto LABEL_18;
  }
  v27[0] = PFFFromId;
  W32GetSessionState(v15, v14, v17);
  ++*((_DWORD *)PFFFromId + 17);
  v28 = 0;
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v25);
  if ( (unsigned int)v7 >= *((_DWORD *)PFFFromId + 9) )
  {
LABEL_18:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v27);
    return 87LL;
  }
  _mm_lfence();
  v18 = *(_QWORD *)(*((_QWORD *)PFFFromId + 26) + 8 * v7);
  v19 = &pszFormat;
  if ( *(_QWORD *)(v18 + 80) )
    v19 = *(const wchar_t **)(v18 + 80);
  v20 = -1LL;
  do
    ++v20;
  while ( v19[v20] );
  v21 = 2 * v20 + 2;
  v22 = 2 * v20 + 18;
  v26 = v22;
  if ( a5 )
  {
    GreProbeAndWriteToUntrustedVa(a5, 8uLL, &v26, 8uLL, 8uLL);
    v22 = v26;
  }
  if ( a3 && a4 >= v22 )
  {
    v25 = *(unsigned int *)(v18 + 24);
    GreProbeAndWriteToUntrustedVa((void *)a3, 4uLL, (const void *)v18, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(a3 + 4), 4uLL, (const void *)(v18 + 4), 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(a3 + 8), 8uLL, &v25, 8uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(a3 + 16), a4 - 16, v19, v21, 1uLL);
  }
  else
  {
    v13 = 122;
    v24[1] = 122;
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v27);
  return v13;
}
