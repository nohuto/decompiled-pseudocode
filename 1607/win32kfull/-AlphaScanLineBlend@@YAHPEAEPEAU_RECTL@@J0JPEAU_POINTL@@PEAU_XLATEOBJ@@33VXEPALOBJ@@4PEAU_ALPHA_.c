/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C003FC00
 * Callers:
 *     EngAlphaBlend @ 0x1C003F5B0 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v13; // r10d
  unsigned int v14; // r13d
  int v15; // r8d
  int v16; // ebx
  unsigned int *v17; // r15
  int v18; // r9d
  int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int *v29; // rbx
  unsigned int *v30; // rdi
  __int64 (__fastcall *v31)(); // rax
  unsigned int v32; // r9d
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // r10d
  unsigned int v37; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // [rsp+40h] [rbp-98h]
  int *v43; // [rsp+58h] [rbp-80h]
  int *v44; // [rsp+70h] [rbp-68h]
  __int64 v45; // [rsp+78h] [rbp-60h]
  __int64 v46; // [rsp+A0h] [rbp-38h]
  int Size; // [rsp+E8h] [rbp+10h]

  v13 = *a2;
  v14 = a2[2] - *a2;
  v15 = a2[1];
  v42 = a2[3] - v15;
  v16 = 4 * v14;
  v17 = 0LL;
  Size = 0;
  v18 = *(_DWORD *)(a12 + 4) >> 3;
  v19 = *(_DWORD *)a12 >> 3;
  v44 = 0LL;
  v45 = 0LL;
  if ( !a9 )
    return 0LL;
  v46 = *(_QWORD *)(a9 + 56);
  if ( v16 < (int)v14 )
    return 0LL;
  v20 = (unsigned int)(a3 * v15);
  if ( v19 )
  {
    v21 = (int)v20;
    v22 = a1 + v19 * v13;
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v39 = v13 / 8;
    else
      v39 = v13 / 2;
    v21 = v39;
    v22 = a1 + (int)v20;
  }
  v23 = (unsigned int *)(v22 + v21);
  if ( v18 )
  {
    v24 = a5 * a6[1];
    v25 = v18 * *a6;
    v26 = a4 + v24;
  }
  else
  {
    v40 = *a6;
    v20 = a5 * a6[1];
    v24 = (unsigned int)(*a6 >> 31);
    if ( *(_DWORD *)(a12 + 4) == 1 )
    {
      v24 &= 7u;
      v41 = ((int)v24 + v40) >> 3;
    }
    else
    {
      v41 = (v40 - (int)v24) >> 1;
    }
    v25 = v41;
    v26 = a4 + v20;
  }
  v43 = (int *)(v26 + v25);
  if ( *(_QWORD *)(a12 + 16) )
    Size = 4 * v14;
  if ( *(_QWORD *)(a12 + 8) )
  {
    Size += v16;
    if ( Size < v16 )
      return 0LL;
  }
  if ( Size )
  {
    v45 = PALLOCMEM2((unsigned int)Size);
    if ( !v45 )
      return 0LL;
  }
  v27 = v45;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v44 = (int *)v45;
    v27 = v16 + v45;
  }
  if ( *(_QWORD *)(a12 + 16) )
    v17 = (unsigned int *)v27;
  while ( v42-- )
  {
    v29 = v43;
    v30 = v23;
    if ( v44 )
    {
      (*(void (__fastcall **)(int *, int *, _QWORD, _QWORD, __int64))(a12 + 8))(v44, v43, 0LL, v14, a7);
      v29 = v44;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(unsigned int *, unsigned int *, _QWORD, _QWORD, __int64))(a12 + 16))(
        v17,
        v23,
        0LL,
        v14,
        a8);
      v30 = v17;
    }
    v31 = *(__int64 (__fastcall **)())(a12 + 32);
    if ( v31 == vAlphaPerPixelOnly )
    {
      v32 = v14;
      while ( v32-- )
      {
        v34 = *v29;
        v35 = HIBYTE(*v29);
        if ( HIBYTE(*v29) )
        {
          v36 = *v30;
          if ( (_BYTE)v35 != 0xFF )
          {
            v37 = 255 - v35;
            v20 = v37 * ((v36 >> 8) & 0xFF00FF) + 8388736;
            v24 = ((_DWORD)v20 + (((unsigned int)v20 >> 8) & 0xFF00FF)) & 0xFF00FF00;
            v34 += v24
                 + (((v37 * (v36 & 0xFF00FF) + 8388736 + (((v37 * (v36 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
          }
          *v30 = v34;
        }
        ++v29;
        ++v30;
      }
    }
    else
    {
      ((void (__fastcall *)(unsigned int *, int *, _QWORD))v31)(v30, v29, v14);
    }
    if ( v17 )
      (*(void (__fastcall **)(unsigned int *, unsigned int *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v23,
        v17,
        v14,
        0LL,
        a9,
        a10,
        v46);
    v23 = (unsigned int *)((char *)v23 + a3);
    v43 = (int *)((char *)v43 + a5);
  }
  if ( Size )
    Win32FreePool(v45, v24, v20);
  return 1LL;
}
