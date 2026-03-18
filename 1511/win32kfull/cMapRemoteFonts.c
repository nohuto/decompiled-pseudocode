/*
 * XREFs of cMapRemoteFonts @ 0x1C027E968
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C027E6FC (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027E800 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0011868 (-UseUmfd@@YAHPEBG@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     Win32DestroySection @ 0x1C01D3948 (Win32DestroySection.c)
 *     Win32CreateSection @ 0x1C01E8B94 (Win32CreateSection.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02B8A20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C02B8C50 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  char *v16; // rcx
  void *v17; // r9
  void *v18; // r13
  _DWORD *v19; // r8
  __int64 v20; // rax
  _DWORD *v21; // rcx
  unsigned int *v22; // rcx
  _DWORD *v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int *v26; // rcx
  _DWORD *v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rcx
  __int64 v30; // rax
  const unsigned __int16 *v31; // rcx
  int v32; // r14d
  unsigned __int64 v33; // r8
  int v34; // eax
  char *v35; // r14
  enum _SECTION_INHERIT v37; // [rsp+30h] [rbp-B8h]
  unsigned int v38; // [rsp+38h] [rbp-B0h]
  unsigned int v39; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-90h]
  void *v42; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-78h]
  int v45; // [rsp+74h] [rbp-74h]
  int v46; // [rsp+78h] [rbp-70h]
  union _LARGE_INTEGER v47; // [rsp+80h] [rbp-68h] BYREF
  void *v48; // [rsp+88h] [rbp-60h]
  unsigned __int64 v49; // [rsp+90h] [rbp-58h]
  _DWORD *v50; // [rsp+98h] [rbp-50h]
  unsigned __int64 v51; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v52[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v46 = 0;
  v7 = *a1;
  v49 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v42 = 0LL;
  if ( !a3 )
    return 0LL;
  memset((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v41 = *(_DWORD *)(v7 + 4);
    v8 = v41;
    if ( v41 > 3 || (unsigned int)v6 > 0x10000000 || v7 < 0x10000 || v7 > (unsigned __int64)MmHighestUserAddress )
      return 0LL;
    if ( v41 )
      goto LABEL_14;
    v46 = 1;
    v8 = 2;
  }
  else
  {
    v8 = 1;
  }
  v41 = v8;
LABEL_14:
  v9 = (4 * v8 + 15) & 0xFFFFFFF8;
  v44 = v9;
  if ( (unsigned int)v6 < v9 )
    return 0LL;
  v51 = v6;
  if ( (int)Win32CreateSection(&Object) < 0 )
    return 0LL;
  v47.QuadPart = 0LL;
  v43 = v6;
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v42, 0LL, v43, &v47, &v43, 2, 0x400000, 4) < 0 )
  {
LABEL_17:
    Win32DestroySection(Object);
    return 0LL;
  }
  v17 = v42;
  v18 = v42;
  v48 = v42;
  v19 = v42;
  v50 = v42;
  if ( (unsigned __int64)v42 > v7 )
    goto LABEL_21;
  v16 = (char *)v42 + v43;
  if ( v7 < (unsigned __int64)v42 + v43 )
  {
LABEL_22:
    v20 = PsGetCurrentProcess(v16, v15, v42, v42);
    MmUnmapViewOfSection(v20, v18);
    goto LABEL_17;
  }
  if ( (unsigned __int64)v42 >= v7 )
  {
LABEL_21:
    if ( (unsigned __int64)v42 < v7 + v6 )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v42 = (char *)v42 + 16;
    v21 = v19;
    if ( (unsigned __int64)v19 >= W32UserProbeAddress )
      v21 = (_DWORD *)W32UserProbeAddress;
    *v21 = 0;
    v22 = v19 + 1;
    if ( (unsigned __int64)(v19 + 1) >= W32UserProbeAddress )
      v22 = (unsigned int *)W32UserProbeAddress;
    *v22 = v8;
    v23 = v19 + 2;
    if ( (unsigned __int64)(v19 + 2) >= W32UserProbeAddress )
      v23 = (_DWORD *)W32UserProbeAddress;
    *v23 = v6;
    v45 = 1;
    v17 = v42;
  }
  if ( (_DWORD)v6 )
  {
    v24 = v7 + (unsigned int)v6;
    if ( v24 > W32UserProbeAddress || v24 < v7 )
    {
      *W32UserProbeAddress = 0;
      v17 = v42;
    }
  }
  memmove(v17, (const void *)v7, (unsigned int)v6);
  v45 = 1;
  if ( v46 )
  {
    v25 = W32UserProbeAddress;
    v27 = v50;
    v29 = v50;
    if ( (unsigned __int64)v50 >= W32UserProbeAddress )
      v29 = (_DWORD *)W32UserProbeAddress;
    *v29 = 0;
    v26 = v27 + 1;
    if ( (unsigned __int64)(v27 + 1) >= W32UserProbeAddress )
      v26 = (unsigned int *)W32UserProbeAddress;
    *v26 = v8;
  }
  v30 = PsGetCurrentProcess(v26, v25, v27, v28);
  if ( (int)MmUnmapViewOfSection(v30, v18) < 0 )
    goto LABEL_17;
  v42 = 0LL;
  v43 = 0LL;
  v47.QuadPart = 0LL;
  *(_DWORD *)(a3 + 40) ^= (*(_DWORD *)(a3 + 40) ^ (32 * UseUmfd(v31))) & 0x20;
  if ( (*(_DWORD *)(a3 + 40) & 0x20) != 0 )
  {
    v32 = -1073741823;
    if ( !UmfdHostLifeTimeManager::EnsureUmfdHost() )
      goto LABEL_47;
    v34 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v42, v33, v43, &v47, &v43, v37, v38, v39, v52);
  }
  else
  {
    v34 = MmMapViewOfSection(Object, gpepCSRSS, &v42, 0LL, 0LL, &v47, &v43, 2, 0x400000, 2);
  }
  v32 = v34;
LABEL_47:
  if ( v32 < 0 )
    goto LABEL_17;
  v35 = (char *)v42;
  if ( a4 == 2 )
    LODWORD(v6) = v6 + 16;
  *(_QWORD *)(a3 + 104) = v42;
  *(_QWORD *)(a3 + 16) = &v35[v9];
  *(_DWORD *)(a3 + 24) = v6 - v9;
  *(_QWORD *)(a3 + 88) = v43;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v52[0];
  *a1 = (unsigned __int64)v35;
  return v8;
}
