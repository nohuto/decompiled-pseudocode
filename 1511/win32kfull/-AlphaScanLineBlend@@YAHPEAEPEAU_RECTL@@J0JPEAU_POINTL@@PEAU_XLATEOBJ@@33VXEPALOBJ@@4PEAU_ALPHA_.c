/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C003D420
 * Callers:
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r11d
  unsigned int v13; // r12d
  int v14; // r10d
  int v15; // esi
  char *v16; // r14
  int v17; // r8d
  int v18; // edx
  int v19; // r10d
  __int64 v20; // rbx
  __int64 v21; // rax
  char *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  char *v25; // rcx
  char *v27; // rdi
  char *v28; // rsi
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+48h] [rbp-70h]
  char *v33; // [rsp+58h] [rbp-60h]
  char *v34; // [rsp+60h] [rbp-58h]
  char *v35; // [rsp+68h] [rbp-50h]
  __int64 v36; // [rsp+80h] [rbp-38h]
  int Size; // [rsp+C8h] [rbp+10h]

  v12 = *a2;
  v13 = a2[2] - *a2;
  v14 = a2[1];
  v32 = a2[3] - v14;
  v15 = 4 * v13;
  v16 = 0LL;
  Size = 0;
  v17 = *(_DWORD *)(a12 + 4) >> 3;
  v18 = *(_DWORD *)a12 >> 3;
  v34 = 0LL;
  v35 = 0LL;
  if ( !a9 )
    return 0LL;
  v36 = *(_QWORD *)(a9 + 56);
  if ( v15 < (int)v13 )
    return 0LL;
  v19 = a3 * v14;
  if ( v18 )
  {
    v20 = v19;
    v21 = a1 + v18 * v12;
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v30 = v12 / 8;
    else
      v30 = v12 / 2;
    v20 = v30;
    v21 = a1 + v19;
  }
  v22 = (char *)(v21 + v20);
  if ( v17 )
  {
    v23 = v17 * *a6;
    v24 = a4 + a5 * a6[1];
  }
  else
  {
    if ( *(_DWORD *)(a12 + 4) == 1 )
      v31 = *a6 / 8;
    else
      v31 = *a6 / 2;
    v23 = v31;
    v24 = a4 + a5 * a6[1];
  }
  v33 = (char *)(v24 + v23);
  if ( *(_QWORD *)(a12 + 16) )
    Size = 4 * v13;
  if ( *(_QWORD *)(a12 + 8) )
  {
    Size += v15;
    if ( Size < v15 )
      return 0LL;
  }
  if ( Size )
  {
    v35 = (char *)PALLOCMEM2((unsigned int)Size, 1886150983LL, 1);
    if ( !v35 )
      return 0LL;
  }
  v25 = v35;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v34 = v35;
    v25 = &v35[v15];
  }
  if ( *(_QWORD *)(a12 + 16) )
    v16 = v25;
  while ( v32-- )
  {
    v27 = v33;
    v28 = v22;
    if ( v34 )
    {
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 8))(v34, v33, 0LL, v13, a7);
      v27 = v34;
    }
    if ( v16 )
    {
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 16))(v16, v22, 0LL, v13, a8);
      v28 = v16;
    }
    (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD))(a12 + 32))(v28, v27, v13, *(unsigned int *)(a12 + 40));
    if ( v16 )
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v22,
        v16,
        v13,
        0LL,
        a9,
        a10,
        v36);
    v22 += a3;
    v33 += a5;
  }
  if ( Size )
    Win32FreePool(v35);
  return 1LL;
}
