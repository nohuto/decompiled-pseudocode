/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C004A3EC (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B1130 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BB8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BC0 (Win32AllocPoolImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ULongAdd @ 0x1C00317A0 (ULongAdd.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C004C220 (Win32AllocateFromPagedLookasideList.c)
 *     memcmp @ 0x1C00859F0 (memcmp.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     UIntMult @ 0x1C00B1274 (UIntMult.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  RGNOBJ *v4; // r15
  unsigned int *v5; // r14
  int *v6; // r13
  int *v7; // r12
  UINT v8; // ecx
  unsigned int *v9; // rbx
  ULONG v10; // r10d
  UINT v11; // r11d
  UINT v12; // esi
  unsigned int v13; // edi
  int v14; // ebp
  __int64 v15; // rbx
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rdx
  __m128i v23; // xmm2
  __int16 v24; // r9
  __int16 v25; // cx
  int v26; // ecx
  int v27; // ecx
  _QWORD *v28; // rsi
  BOOL v29; // ebp
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rbp
  _QWORD *v37; // rbx
  __int64 v38; // rsi
  __int64 *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rbx
  __int64 v42; // rsi
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // rbx
  __int64 *v46; // rcx
  __int64 **v47; // rax
  __int64 v48; // rax
  _DWORD *v49; // rsi
  signed int v50; // ecx
  int *v51; // r8
  int *v52; // r9
  signed int v53; // ebp
  unsigned __int8 v54; // di
  __int64 v55; // rax
  int v56; // r10d
  int v57; // edx
  int v58; // ecx
  unsigned int v59; // eax
  signed int v60; // ecx
  signed int v61; // ecx
  signed int v62; // edx
  signed int v63; // ecx
  __int32 v65; // [rsp+20h] [rbp-88h]
  UINT puResult; // [rsp+24h] [rbp-84h] BYREF
  __int32 v67; // [rsp+28h] [rbp-80h]
  BOOL v68; // [rsp+2Ch] [rbp-7Ch]
  __int64 v69; // [rsp+30h] [rbp-78h] BYREF
  int v70; // [rsp+38h] [rbp-70h]
  __int64 v71; // [rsp+50h] [rbp-58h]

  v4 = this;
  v5 = 0LL;
  v6 = (int *)(*(_QWORD *)a2 + 104LL);
  v7 = (int *)(*(_QWORD *)a3 + 104LL);
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
    v8 = *(_DWORD *)(*(_QWORD *)v4 + 80LL);
    v9 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
    if ( 4 * (*v6 + *v7) + 16 <= *(_DWORD *)(*(_QWORD *)v4 + 24LL) - v8 )
      goto LABEL_76;
    if ( UIntMult(v8, 2u, &puResult) < 0 || ULongAdd(puResult, v10, &puResult) < 0 )
      return 0LL;
    v12 = puResult;
    v70 = 0;
    if ( puResult < v11 )
      v12 = v11;
    v13 = v12;
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
    {
      v14 = 1;
      v13 = v12 + 160;
    }
    else
    {
      v14 = 0;
    }
    if ( dword_1C0100A00 >= v13 )
    {
      v15 = Win32AllocateFromPagedLookasideList(qword_1C0100290);
      if ( v15 )
      {
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        if ( v14 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v13 + v15 - 160), 0LL);
        LOWORD(v67) = *(_WORD *)(v15 + 12);
        HIWORD(v67) = *(_WORD *)(v15 + 14) | 0x8000;
        _InterlockedExchange((volatile __int32 *)(v15 + 12), v67);
LABEL_23:
        *(_DWORD *)(v15 + 80) = 120;
        *(_QWORD *)(v15 + 84) = 1LL;
        *(_QWORD *)(v15 + 92) = 0LL;
        *(_DWORD *)(v15 + 100) = 0;
        *(_DWORD *)(v15 + 104) = 0;
        *(_DWORD *)(v15 + 108) = 0x80000000;
        *(_QWORD *)(v15 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v15 + 40) = v15 + 120;
        *(_DWORD *)(v15 + 24) = v12;
        *(_QWORD *)(v15 + 28) = 0LL;
        *(_DWORD *)(v15 + 36) = 0;
        *(_QWORD *)(v15 + 56) = v15 + 48;
        *(_QWORD *)(v15 + 48) = v15 + 48;
        goto LABEL_25;
      }
    }
    v15 = 0LL;
    if ( v13 && (int)IsWin32AllocPoolImplSupported_0() >= 0 )
      v15 = Win32AllocPoolImpl_0();
    if ( v15 )
    {
      *(_QWORD *)v15 = 0LL;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = 0LL;
      if ( v14 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v13 + v15 - 160), 0LL);
      goto LABEL_23;
    }
    EngSetLastError(8u);
    v15 = 0LL;
LABEL_25:
    v69 = v15;
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && *ThreadWin32Thread )
    {
      if ( !v15 )
        goto LABEL_123;
      v17 = (_QWORD *)(v15 + 48);
      if ( v15 != -48 )
      {
        KeEnterCriticalRegion();
        v18 = 0LL;
        v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v19 )
          v18 = *v19;
        *(_QWORD *)(v15 + 64) = v15;
        *(_QWORD *)(v15 + 72) = CleanUpRegion;
        if ( v18 )
        {
          v20 = *(_QWORD *)(v18 + 88);
          *v17 = v20;
          *(_QWORD *)(v15 + 56) = v18 + 88;
          if ( *(_QWORD *)(v20 + 8) != v18 + 88 )
            __fastfail(3u);
          *(_QWORD *)(v20 + 8) = v17;
          *(_QWORD *)(v18 + 88) = v17;
        }
        else
        {
          *(_QWORD *)(v15 + 56) = v15 + 48;
          *v17 = v17;
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( !v15 )
    {
LABEL_123:
      EngSetLastError(8u);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v69);
      return 0LL;
    }
    memmove((void *)(v15 + 80), (const void *)(*(_QWORD *)v4 + 80LL), *(unsigned int *)(*(_QWORD *)v4 + 80LL) - 80LL);
    v21 = v15 + 48;
    *(_QWORD *)(v15 + 40) = *(_DWORD *)(*(_QWORD *)v4 + 40LL) - *(_DWORD *)v4 - 104 + v15 + 104;
    v22 = *(_QWORD **)v4;
    v23 = *(__m128i *)v15;
    v24 = *(_WORD *)(v15 + 14);
    v25 = *(_WORD *)(*(_QWORD *)v4 + 14LL);
    v71 = *(_QWORD *)(v15 + 16);
    *(_QWORD *)v15 = *v22;
    HIWORD(v65) = v24 & 0x8000 | v25 & 0x4000;
    LOWORD(v65) = *(_WORD *)(*(_QWORD *)v4 + 12LL);
    _InterlockedExchange((volatile __int32 *)(v15 + 12), v65);
    HIWORD(v65) = v25 & 0x8000 | v24 & 0x4000;
    *(_QWORD *)(v15 + 16) = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
    **(_QWORD **)v4 = v23.m128i_i64[0];
    LOWORD(v65) = _mm_srli_si128(v23, 8).m128i_i16[2];
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v4 + 12LL), v65);
    *(_QWORD *)(*(_QWORD *)v4 + 16LL) = v71;
    v26 = *(_DWORD *)(*(_QWORD *)v4 + 32LL);
    *(_DWORD *)(*(_QWORD *)v4 + 32LL) = *(_DWORD *)(v15 + 32);
    *(_DWORD *)(v15 + 32) = v26;
    v27 = *(_DWORD *)(*(_QWORD *)v4 + 36LL);
    *(_DWORD *)(*(_QWORD *)v4 + 36LL) = *(_DWORD *)(v15 + 36);
    *(_DWORD *)(v15 + 36) = v27;
    v28 = (_QWORD *)(*(_QWORD *)v4 + 48LL);
    v29 = *v28 == (_QWORD)v28;
    v68 = *(_QWORD *)v21 == v21;
    if ( v28 )
    {
      KeEnterCriticalRegion();
      v30 = *v28;
      v31 = (_QWORD *)v28[1];
      if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v31 != v28 )
        __fastfail(3u);
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      v28[1] = v28;
      *v28 = v28;
      KeLeaveCriticalRegion();
    }
    if ( v15 != -48 )
    {
      KeEnterCriticalRegion();
      v32 = *(_QWORD *)v21;
      v33 = *(_QWORD **)(v15 + 56);
      if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || *v33 != v21 )
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      *(_QWORD *)(v15 + 56) = v15 + 48;
      *(_QWORD *)v21 = v21;
      KeLeaveCriticalRegion();
    }
    v34 = *(_QWORD *)v4;
    *(_QWORD *)v4 = v15;
    v69 = v34;
    v35 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v35 && *v35 )
    {
      if ( !v29 )
      {
        v36 = *(_QWORD *)v4;
        v37 = (_QWORD *)(*(_QWORD *)v4 + 48LL);
        if ( *(_QWORD *)v4 != -48LL )
        {
          KeEnterCriticalRegion();
          v38 = 0LL;
          v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v39 )
            v38 = *v39;
          v37[2] = v36;
          v37[3] = CleanUpRegion;
          if ( v38 )
          {
            v40 = *(_QWORD *)(v38 + 88);
            *v37 = v40;
            v37[1] = v38 + 88;
            if ( *(_QWORD *)(v40 + 8) != v38 + 88 )
              __fastfail(3u);
            *(_QWORD *)(v40 + 8) = v37;
            *(_QWORD *)(v38 + 88) = v37;
            KeLeaveCriticalRegion();
          }
          else
          {
            v37[1] = v37;
            *v37 = v37;
            KeLeaveCriticalRegion();
          }
        }
      }
      if ( !v68 )
      {
        v41 = (_QWORD *)(v34 + 48);
        if ( v34 != -48 )
        {
          KeEnterCriticalRegion();
          v42 = 0LL;
          v43 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v43 )
            v42 = *v43;
          *(_QWORD *)(v34 + 64) = v34;
          *(_QWORD *)(v34 + 72) = CleanUpRegion;
          if ( v42 )
          {
            v44 = *(_QWORD *)(v42 + 88);
            *v41 = v44;
            *(_QWORD *)(v34 + 56) = v42 + 88;
            if ( *(_QWORD *)(v44 + 8) != v42 + 88 )
              __fastfail(3u);
            *(_QWORD *)(v44 + 8) = v41;
            *(_QWORD *)(v42 + 88) = v41;
          }
          else
          {
            *(_QWORD *)(v34 + 56) = v34 + 48;
            *v41 = v41;
          }
          KeLeaveCriticalRegion();
        }
      }
    }
    if ( v34 )
    {
      v45 = (__int64 *)(v34 + 48);
      if ( v34 != -48 )
      {
        KeEnterCriticalRegion();
        v46 = (__int64 *)*v45;
        v47 = *(__int64 ***)(v34 + 56);
        if ( *(__int64 **)(*v45 + 8) != v45 || *v47 != v45 )
          __fastfail(3u);
        *v47 = v46;
        v46[1] = (__int64)v47;
        *(_QWORD *)(v34 + 56) = v34 + 48;
        *v45 = (__int64)v45;
        KeLeaveCriticalRegion();
      }
      if ( (struct REGION *)v34 != prgnDefault )
      {
        if ( *(__int16 *)(v34 + 14) >= 0 )
        {
          Win32FreePool();
        }
        else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        {
          Win32FreeToPagedLookasideListImpl_0();
        }
      }
    }
    v48 = *(_QWORD *)v4;
    v69 = 0LL;
    v9 = *(unsigned int **)(v48 + 40);
    if ( v5 )
      v5 = &v9[-*(v9 - 1) - 4];
LABEL_76:
    v49 = v9 + 3;
    v50 = v7[1];
    v51 = v6 + 3;
    v52 = v7 + 3;
    v53 = v7[2];
    if ( v6[1] > v50 )
      v50 = v6[1];
    v54 = a4;
    if ( v6[2] < v53 )
      v53 = v6[2];
    v9[1] = v50;
    v9[2] = v53;
    LOBYTE(v55) = 1;
    v56 = *v6;
    v57 = *v7;
    *v9 = 0;
    while ( v56 )
    {
      v58 = *v51;
      if ( v57 && v58 >= *v52 )
      {
        v55 = (unsigned __int8)v55;
        if ( v58 > *v52 )
        {
          v58 = *v52;
          goto LABEL_90;
        }
        LOBYTE(v55) = byte_1C00E9BC8[(unsigned __int8)v55];
        ++v51;
        --v56;
LABEL_91:
        ++v52;
        --v57;
        goto LABEL_92;
      }
      ++v51;
      --v56;
      LOBYTE(v55) = byte_1C00E9BC8[(unsigned __int8)v55 + 32];
LABEL_92:
      if ( (v54 & (unsigned __int8)v55) != 0 )
      {
        ++*v9;
        *v49++ = v58;
        v54 ^= 0xFu;
      }
    }
    if ( v57 )
    {
      v58 = *v52;
      v55 = (unsigned __int8)v55;
LABEL_90:
      LOBYTE(v55) = byte_1C00E9BC8[v55 + 16];
      goto LABEL_91;
    }
    v4 = this;
    v9[*v9 + 3] = *v9;
    if ( v5 && *v5 == *v9 && !memcmp(v5 + 3, v9 + 3, 4LL * *v5) )
    {
      v59 = v9[2];
      v9 = v5;
      v5[2] = v59;
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
        v60 = v9[3];
        if ( v60 < *(_DWORD *)(*(_QWORD *)this + 88LL) )
          *(_DWORD *)(*(_QWORD *)this + 88LL) = v60;
        v61 = v9[1];
        if ( v61 < *(_DWORD *)(*(_QWORD *)this + 92LL) )
          *(_DWORD *)(*(_QWORD *)this + 92LL) = v61;
        v62 = v9[*v9 + 2];
        if ( v62 > *(_DWORD *)(*(_QWORD *)this + 96LL) )
          *(_DWORD *)(*(_QWORD *)this + 96LL) = v62;
        v63 = v9[2];
        if ( v63 > *(_DWORD *)(*(_QWORD *)this + 100LL) )
          *(_DWORD *)(*(_QWORD *)this + 100LL) = v63;
      }
      if ( v53 == v6[2] )
        v6 = (int *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
      if ( v53 == v7[2] )
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
