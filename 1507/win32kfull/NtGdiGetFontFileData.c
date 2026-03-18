/*
 * XREFs of NtGdiGetFontFileData @ 0x1C02B4880
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0110104 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0110120 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C01C14A0 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E85C0 (Win32UnmapViewInSessionSpace.c)
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C029B1A8 (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall NtGdiGetFontFileData(unsigned int a1, unsigned int a2, size_t *a3, char *a4, size_t Size)
{
  __int64 v6; // rsi
  struct PFF *PFFFromId; // rbx
  ULONG_PTR v10; // rsi
  size_t v11; // r14
  ULONG v12; // ebx
  NTSTATUS v13; // r15d
  char *v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+28h] [rbp-50h] BYREF
  size_t v17; // [rsp+30h] [rbp-48h]
  ULONG_PTR v18; // [rsp+38h] [rbp-40h]
  _QWORD v19[2]; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+50h] [rbp-28h]

  v6 = a2;
  if ( ((unsigned __int8)a3 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = *a3;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v19);
  v15 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  PFFFromId = GetPFFFromId(gpPFTPublic, a1, 0LL);
  if ( !PFFFromId && gpPFTPrivate )
    PFFFromId = GetPFFFromId(gpPFTPrivate, a1, 0LL);
  if ( !PFFFromId )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v15);
LABEL_8:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v19);
    return 87LL;
  }
  v19[0] = PFFFromId;
  ++*((_DWORD *)PFFFromId + 17);
  v20 = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  if ( (unsigned int)v6 >= *((_DWORD *)PFFFromId + 9) )
    goto LABEL_8;
  _mm_lfence();
  v10 = *(_QWORD *)(*((_QWORD *)PFFFromId + 19) + 8 * v6);
  v18 = v10;
  v11 = v17;
  if ( v17 + Size < v17 || *(unsigned int *)(v10 + 24) < v17 + Size )
    goto LABEL_8;
  if ( !(unsigned int)EngMapFontFileFDInternal((struct _FILEVIEW *)v10, 0LL, 0LL, 0) )
  {
    v12 = 87;
LABEL_16:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v19);
    return v12;
  }
  v13 = MapFontFileInKernel(*(PVOID *)(v10 + 32), &MappedBase);
  if ( v13 < 0 )
  {
    EngUnmapFontFileFD(v10);
    v12 = RtlNtStatusToDosError(v13);
    goto LABEL_16;
  }
  v14 = (char *)MappedBase + v11;
  if ( (*((_DWORD *)PFFFromId + 13) & 0x10) != 0 )
    v14 += 16;
  if ( (unsigned __int64)&a4[Size] > W32UserProbeAddress || &a4[Size] <= a4 )
    *W32UserProbeAddress = 0;
  memmove(a4, v14, Size);
  Win32UnmapViewInSessionSpace(MappedBase);
  EngUnmapFontFileFD(v10);
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v19);
  return 0LL;
}
