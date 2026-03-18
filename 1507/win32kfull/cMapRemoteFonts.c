/*
 * XREFs of cMapRemoteFonts @ 0x1C027EF80
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C027ED0C (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027EE10 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0141BB8 (-UseUmfd@@YAHPEBG@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     Win32DestroySection @ 0x1C01D1EF8 (Win32DestroySection.c)
 *     Win32CreateSection @ 0x1C01E8564 (Win32CreateSection.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02B9644 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C02B9874 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  char *v14; // rcx
  void *v15; // r9
  void *v16; // r13
  _DWORD *v17; // r8
  __int64 v18; // rax
  _DWORD *v19; // rcx
  unsigned int *v20; // rcx
  _DWORD *v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int *v24; // rcx
  _DWORD *v25; // r8
  _DWORD *v26; // rcx
  __int64 v27; // rax
  const unsigned __int16 *v28; // rcx
  int v29; // r14d
  unsigned __int64 v30; // r8
  int v31; // eax
  char *v32; // r14
  enum _SECTION_INHERIT v34; // [rsp+30h] [rbp-B8h]
  unsigned int v35; // [rsp+38h] [rbp-B0h]
  unsigned int v36; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-90h]
  void *v39; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-78h]
  int v42; // [rsp+74h] [rbp-74h]
  int v43; // [rsp+78h] [rbp-70h]
  union _LARGE_INTEGER v44; // [rsp+80h] [rbp-68h] BYREF
  void *v45; // [rsp+88h] [rbp-60h]
  unsigned __int64 v46; // [rsp+90h] [rbp-58h]
  _DWORD *v47; // [rsp+98h] [rbp-50h]
  unsigned __int64 v48; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v49[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v43 = 0;
  v7 = *a1;
  v46 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v39 = 0LL;
  if ( !a3 )
    return 0LL;
  memset((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v38 = *(_DWORD *)(v7 + 4);
    v8 = v38;
    if ( v38 > 3 || (unsigned int)v6 > 0x10000000 || v7 < 0x10000 || v7 > (unsigned __int64)MmHighestUserAddress )
      return 0LL;
    if ( v38 )
      goto LABEL_14;
    v43 = 1;
    v8 = 2;
  }
  else
  {
    v8 = 1;
  }
  v38 = v8;
LABEL_14:
  v9 = (4 * v8 + 15) & 0xFFFFFFF8;
  v41 = v9;
  if ( (unsigned int)v6 < v9 )
    return 0LL;
  v48 = v6;
  if ( (int)Win32CreateSection(&Object) < 0 )
    return 0LL;
  v44.QuadPart = 0LL;
  v40 = v6;
  CurrentProcess = PsGetCurrentProcess(v11, v10);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v39, 0LL, v40, &v44, &v40, 2, 0x400000, 4) < 0 )
  {
LABEL_17:
    Win32DestroySection(Object);
    return 0LL;
  }
  v15 = v39;
  v16 = v39;
  v45 = v39;
  v17 = v39;
  v47 = v39;
  if ( (unsigned __int64)v39 > v7 )
    goto LABEL_21;
  v14 = (char *)v39 + v40;
  if ( v7 < (unsigned __int64)v39 + v40 )
  {
LABEL_22:
    v18 = PsGetCurrentProcess(v14, v13);
    MmUnmapViewOfSection(v18, v16);
    goto LABEL_17;
  }
  if ( (unsigned __int64)v39 >= v7 )
  {
LABEL_21:
    if ( (unsigned __int64)v39 < v7 + v6 )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v39 = (char *)v39 + 16;
    v19 = v17;
    if ( (unsigned __int64)v17 >= W32UserProbeAddress )
      v19 = (_DWORD *)W32UserProbeAddress;
    *v19 = 0;
    v20 = v17 + 1;
    if ( (unsigned __int64)(v17 + 1) >= W32UserProbeAddress )
      v20 = (unsigned int *)W32UserProbeAddress;
    *v20 = v8;
    v21 = v17 + 2;
    if ( (unsigned __int64)(v17 + 2) >= W32UserProbeAddress )
      v21 = (_DWORD *)W32UserProbeAddress;
    *v21 = v6;
    v42 = 1;
    v15 = v39;
  }
  if ( (_DWORD)v6 )
  {
    v22 = v7 + (unsigned int)v6;
    if ( v22 > W32UserProbeAddress || v22 < v7 )
    {
      *W32UserProbeAddress = 0;
      v15 = v39;
    }
  }
  memmove(v15, (const void *)v7, (unsigned int)v6);
  v42 = 1;
  if ( v43 )
  {
    v23 = W32UserProbeAddress;
    v25 = v47;
    v26 = v47;
    if ( (unsigned __int64)v47 >= W32UserProbeAddress )
      v26 = (_DWORD *)W32UserProbeAddress;
    *v26 = 0;
    v24 = v25 + 1;
    if ( (unsigned __int64)(v25 + 1) >= W32UserProbeAddress )
      v24 = (unsigned int *)W32UserProbeAddress;
    *v24 = v8;
  }
  v27 = PsGetCurrentProcess(v24, v23);
  if ( (int)MmUnmapViewOfSection(v27, v16) < 0 )
    goto LABEL_17;
  v39 = 0LL;
  v40 = 0LL;
  v44.QuadPart = 0LL;
  *(_DWORD *)(a3 + 40) ^= (*(_DWORD *)(a3 + 40) ^ (32 * UseUmfd(v28))) & 0x20;
  if ( (*(_DWORD *)(a3 + 40) & 0x20) != 0 )
  {
    v29 = -1073741823;
    if ( !UmfdHostLifeTimeManager::EnsureUmfdHost() )
      goto LABEL_47;
    v31 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v39, v30, v40, &v44, &v40, v34, v35, v36, v49);
  }
  else
  {
    v31 = MmMapViewOfSection(Object, gpepCSRSS, &v39, 0LL, 0LL, &v44, &v40, 2, 0x400000, 2);
  }
  v29 = v31;
LABEL_47:
  if ( v29 < 0 )
    goto LABEL_17;
  v32 = (char *)v39;
  if ( a4 == 2 )
    LODWORD(v6) = v6 + 16;
  *(_QWORD *)(a3 + 104) = v39;
  *(_QWORD *)(a3 + 16) = &v32[v9];
  *(_DWORD *)(a3 + 24) = v6 - v9;
  *(_QWORD *)(a3 + 88) = v40;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v49[0];
  *a1 = (unsigned __int64)v32;
  return v8;
}
