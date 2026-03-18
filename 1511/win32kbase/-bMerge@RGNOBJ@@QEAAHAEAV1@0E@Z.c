/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90
 * Callers:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003E934 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C007C780 (EngUpdateDeviceSurface.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B48A8 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C002A260 (Win32AllocateFromPagedLookasideList.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     memcmp @ 0x1C0088C80 (memcmp.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  unsigned int *v5; // r14
  _DWORD *v6; // rdi
  int *v7; // r13
  __int64 v8; // r8
  unsigned int *v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned int v12; // edi
  int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int16 *v24; // rdi
  int v25; // esi
  __int16 *v26; // rbx
  __int64 v27; // rdx
  __int16 **v28; // rcx
  signed int v29; // ecx
  int *v30; // r9
  _DWORD *v31; // rsi
  signed int v32; // r12d
  int *v33; // r10
  unsigned __int8 v34; // r8
  int v35; // r11d
  int v36; // edx
  unsigned __int8 v37; // di
  int v38; // ecx
  unsigned int v39; // eax
  signed int v40; // ecx
  signed int v41; // ecx
  signed int v42; // edx
  signed int v43; // ecx
  __int32 v45; // [rsp+20h] [rbp-58h]
  _DWORD *v46; // [rsp+28h] [rbp-50h]
  __int16 *v47; // [rsp+30h] [rbp-48h] BYREF
  int v48; // [rsp+38h] [rbp-40h]

  v5 = 0LL;
  v6 = (_DWORD *)(*(_QWORD *)a2 + 104LL);
  v7 = (int *)(*(_QWORD *)a3 + 104LL);
  v46 = v6;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000;
  while ( 2 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)this + 80LL);
    v9 = *(unsigned int **)(*(_QWORD *)this + 40LL);
    v10 = (unsigned int)(4 * (*v6 + *v7) + 16);
    if ( (unsigned int)v10 <= *(_DWORD *)(*(_QWORD *)this + 24LL) - (int)v8 )
      goto LABEL_50;
    v11 = v10 + 2 * v8;
    v48 = 0;
    if ( v11 < 0xD8 )
      v11 = 216;
    v12 = v11;
    if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
    {
      v13 = 1;
      v12 = v11 + 160;
    }
    else
    {
      v13 = 0;
    }
    if ( dword_1C0103610 >= v12 )
    {
      v14 = Win32AllocateFromPagedLookasideList(qword_1C01036A0, v10, v8, 216LL);
      if ( v14 )
      {
        *(_QWORD *)v14 = 0LL;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = 0LL;
        if ( v13 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v12 + v14 - 160), 0LL);
        LOWORD(v45) = *(_WORD *)(v14 + 12);
        HIWORD(v45) = *(_WORD *)(v14 + 14) | 0x8000;
        _InterlockedExchange((volatile __int32 *)(v14 + 12), v45);
LABEL_21:
        *(_DWORD *)(v14 + 80) = 120;
        v15 = v14 + 104;
        *(_QWORD *)(v14 + 84) = 1LL;
        *(_QWORD *)(v14 + 92) = 0LL;
        *(_DWORD *)(v14 + 100) = 0;
        *(_DWORD *)(v14 + 104) = 0;
        *(_DWORD *)(v14 + 108) = 0x80000000;
        *(_QWORD *)(v14 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v14 + 40) = v14 + 120;
        *(_DWORD *)(v14 + 24) = v11;
        *(_QWORD *)(v14 + 28) = 0LL;
        *(_QWORD *)(v14 + 56) = v14 + 48;
        *(_QWORD *)(v14 + 48) = v14 + 48;
        goto LABEL_23;
      }
    }
    v14 = 0LL;
    if ( v12 && (int)IsWin32AllocPoolImplSupported_0() >= 0 )
      v14 = Win32AllocPoolImpl_0();
    if ( v14 )
    {
      *(_QWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      if ( v13 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v12 + v14 - 160), 0LL);
      goto LABEL_21;
    }
    EngSetLastError(8u);
    v14 = 0LL;
LABEL_23:
    v47 = (__int16 *)v14;
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v8);
    if ( ThreadWin32Thread && *ThreadWin32Thread )
    {
      if ( !v14 )
        goto LABEL_93;
      v17 = (_QWORD *)(v14 + 48);
      if ( v14 != -48 )
      {
        KeEnterCriticalRegion();
        v18 = 0LL;
        v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v19, v20);
        if ( v21 )
          v18 = *v21;
        *(_QWORD *)(v14 + 64) = v14;
        *(_QWORD *)(v14 + 72) = CleanUpRegion;
        if ( v18 )
        {
          v22 = *(_QWORD *)(v18 + 88);
          *v17 = v22;
          *(_QWORD *)(v14 + 56) = v18 + 88;
          if ( *(_QWORD *)(v22 + 8) != v18 + 88 )
            __fastfail(3u);
          *(_QWORD *)(v22 + 8) = v17;
          *(_QWORD *)(v18 + 88) = v17;
        }
        else
        {
          *(_QWORD *)(v14 + 56) = v14 + 48;
          *v17 = v17;
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( !v14 )
    {
LABEL_93:
      EngSetLastError(8u);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v47);
      return 0LL;
    }
    memmove(
      (void *)(v14 + 80),
      (const void *)(*(_QWORD *)this + 80LL),
      *(unsigned int *)(*(_QWORD *)this + 80LL) - 80LL);
    *(_QWORD *)(v14 + 40) = v14 + (int)(*(_DWORD *)(*(_QWORD *)this + 40LL) - *(_QWORD *)this - 104) + 104LL;
    v23 = RGNOBJ::bSwap(this, (struct RGNOBJ *)&v47);
    v24 = v47;
    v25 = v23;
    if ( v47 )
    {
      v26 = v47 + 24;
      if ( v47 != (__int16 *)-48LL )
      {
        KeEnterCriticalRegion();
        v27 = *(_QWORD *)v26;
        v28 = (__int16 **)*((_QWORD *)v24 + 7);
        if ( *(__int16 **)(*(_QWORD *)v26 + 8LL) != v26 || *v28 != v26 )
          __fastfail(3u);
        *v28 = (__int16 *)v27;
        *(_QWORD *)(v27 + 8) = v28;
        *((_QWORD *)v24 + 7) = v24 + 24;
        *(_QWORD *)v26 = v26;
        KeLeaveCriticalRegion();
      }
      if ( v24 != (__int16 *)prgnDefault )
      {
        if ( v24[7] >= 0 )
        {
          Win32FreePool();
        }
        else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        {
          Win32FreeToPagedLookasideListImpl_0();
        }
      }
    }
    v47 = 0LL;
    if ( v48 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
    if ( !v25 )
      return 0LL;
    v6 = v46;
    v9 = *(unsigned int **)(*(_QWORD *)this + 40LL);
    if ( v5 )
      v5 = &v9[-*(v9 - 1) - 4];
LABEL_50:
    v29 = v7[1];
    v30 = v6 + 3;
    v31 = v9 + 3;
    v32 = v7[2];
    v33 = v7 + 3;
    if ( v6[1] > v29 )
      v29 = v6[1];
    v34 = 1;
    if ( v6[2] < v32 )
      v32 = v6[2];
    v9[2] = v32;
    v9[1] = v29;
    v35 = *v6;
    v36 = *v7;
    v37 = a4;
    *v9 = 0;
    while ( v35 )
    {
      v38 = *v30;
      if ( v36 && v38 >= *v33 )
      {
        if ( v38 > *v33 )
        {
          v38 = *v33;
          goto LABEL_64;
        }
        ++v30;
        --v35;
        v34 = byte_1C00ECD30[v34];
LABEL_65:
        ++v33;
        --v36;
        goto LABEL_66;
      }
      ++v30;
      --v35;
      v34 = byte_1C00ECD30[v34 + 32];
LABEL_66:
      if ( (v37 & v34) != 0 )
      {
        ++*v9;
        *v31++ = v38;
        v37 ^= 0xFu;
      }
    }
    if ( v36 )
    {
      v38 = *v33;
LABEL_64:
      v34 = byte_1C00ECD30[v34 + 16];
      goto LABEL_65;
    }
    v9[*v9 + 3] = *v9;
    if ( v5 && *v5 == *v9 && !memcmp(v5 + 3, v9 + 3, 4LL * *v5) )
    {
      v39 = v9[2];
      v9 = v5;
      v5[2] = v39;
    }
    else if ( v5 != v9 )
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = &v9[*v9 + 4];
      *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v9 + 16;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    }
    if ( v9[2] != 0x7FFFFFFF )
    {
      if ( *v9 )
      {
        v40 = v9[3];
        if ( v40 < *(_DWORD *)(*(_QWORD *)this + 88LL) )
          *(_DWORD *)(*(_QWORD *)this + 88LL) = v40;
        v41 = v9[1];
        if ( v41 < *(_DWORD *)(*(_QWORD *)this + 92LL) )
          *(_DWORD *)(*(_QWORD *)this + 92LL) = v41;
        v42 = v9[*v9 + 2];
        if ( v42 > *(_DWORD *)(*(_QWORD *)this + 96LL) )
          *(_DWORD *)(*(_QWORD *)this + 96LL) = v42;
        v43 = v9[2];
        if ( v43 > *(_DWORD *)(*(_QWORD *)this + 100LL) )
          *(_DWORD *)(*(_QWORD *)this + 100LL) = v43;
      }
      v6 = v46;
      if ( v32 == v46[2] )
      {
        v6 = (_DWORD *)((char *)v46 + (unsigned int)(4 * *v46 + 16));
        v46 = v6;
      }
      if ( v32 == v7[2] )
        v7 = (int *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
      if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a2 + 40LL)
        || (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
      {
        return 0LL;
      }
      v5 = v9;
      continue;
    }
    return 1LL;
  }
}
