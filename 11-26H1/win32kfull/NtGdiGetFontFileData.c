/*
 * XREFs of NtGdiGetFontFileData @ 0x1400CF300
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1400C6710 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1400CEF7C (-vUnmapFontFileInKernel@@YAXPEAX@Z.c)
 *     ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1400CF540 (-MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z @ 0x1400FE480 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400FE9F8 (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetFontFileData(
        unsigned int a1,
        unsigned int a2,
        const void *a3,
        void *a4,
        unsigned __int64 a5)
{
  __int64 v6; // rsi
  ULONG v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rdx
  struct PFT *v14; // rcx
  struct PFF *PFFFromId; // rdi
  __int64 v16; // r8
  HSEMAPHORE v17; // rsi
  void *v19; // r14
  char *v20; // r8
  void *v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  HSEMAPHORE v23; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+58h] [rbp-20h]

  v6 = a2;
  v8 = 0;
  v22 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v22, 8uLL, a3, 8uLL, 8uLL);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v24);
  v12 = *(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96);
  v23 = *(HSEMAPHORE *)(v12 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  LODWORD(v21) = 0;
  PFFFromId = GetPFFFromId(*(struct PFT **)(v12 + 20392), a1, (unsigned int *)&v21);
  if ( !PFFFromId )
  {
    v14 = *(struct PFT **)(v12 + 20384);
    if ( v14 )
    {
      LODWORD(v21) = 0;
      PFFFromId = GetPFFFromId(v14, a1, (unsigned int *)&v21);
    }
  }
  if ( PFFFromId )
  {
    v24[0] = PFFFromId;
    W32GetSessionState(v14, v13, v16);
    ++*((_DWORD *)PFFFromId + 17);
    v25 = 0;
    SEMOBJ<17>::vUnlock(&v23);
    if ( (unsigned int)v6 < *((_DWORD *)PFFFromId + 9)
      && (_mm_lfence(), v17 = *(HSEMAPHORE *)(*((_QWORD *)PFFFromId + 26) + 8 * v6), v23 = v17, v22 + a5 >= v22)
      && v22 + a5 <= *((unsigned int *)v17 + 6)
      && (unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v17) )
    {
      v21 = 0LL;
      if ( MapFontFileInKernel(*((void **)v17 + 4), &v21) )
      {
        v19 = v21;
        v20 = (char *)v21 + v22 + 16;
        if ( (*((_DWORD *)PFFFromId + 13) & 0x10) == 0 )
          v20 = (char *)v21 + v22;
        GreProbeAndWriteToUntrustedVa(a4, a5, v20, (unsigned int)(*((_DWORD *)v17 + 6) - v22), 1uLL);
        vUnmapFontFileInKernel(v19);
        EngUnmapFontFileFD((ULONG_PTR)v17);
      }
      else
      {
        EngUnmapFontFileFD((ULONG_PTR)v17);
        v8 = RtlNtStatusToDosError(-1073741801);
      }
    }
    else
    {
      v8 = 87;
    }
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v24);
    return v8;
  }
  else
  {
    SEMOBJ<17>::vUnlock(&v23);
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v24);
    return 87LL;
  }
}
