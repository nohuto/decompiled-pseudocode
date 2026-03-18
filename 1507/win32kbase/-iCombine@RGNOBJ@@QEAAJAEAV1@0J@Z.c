/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003F720 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00A3FE0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C10 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0049F18 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r10
  struct RGNOBJ *v5; // r15
  __int64 result; // rax
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // rdi
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v17; // r12
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // rcx
  RGNMEMOBJTMP *v21; // rcx
  int v22; // eax
  __int64 v23; // r15
  int v24; // r12d
  __int64 v25; // rdi
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  int v28; // eax
  RGNMEMOBJTMP *v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // r8
  __int64 v32; // rdx
  _DWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __m128i v36; // xmm2
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // xmm1_8
  unsigned __int64 v39; // rax
  LONG v40; // r8d
  unsigned __int64 v41; // xmm2_8
  LONG v42; // edx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r11
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // [rsp+20h] [rbp-50h] BYREF
  int v49; // [rsp+28h] [rbp-48h]
  _QWORD v50[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v51[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v52; // [rsp+50h] [rbp-20h] BYREF
  int v53; // [rsp+90h] [rbp+20h]
  __int32 v54; // [rsp+90h] [rbp+20h]

  v4 = *(_QWORD *)this;
  v5 = a2;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v8 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 80LL) == 160 )
    {
      v9 = *(_DWORD **)a3;
      if ( v8[22] <= *(_DWORD *)(*(_QWORD *)a3 + 88LL) && v8[24] >= v9[24] && v8[23] <= v9[23] && v8[25] >= v9[25] )
      {
        v10 = *(_DWORD *)(v4 + 24);
        if ( a4 == 1 )
          v5 = a3;
        v11 = *(_QWORD *)v5;
        v12 = 1;
        if ( v10 > 0xD8 )
        {
          if ( *(_DWORD *)(v11 + 24) > 0xD8u )
          {
            v30 = *(_DWORD *)(v11 + 80);
            if ( v10 >= v30 )
            {
              RGNOBJ::vCopy(this, v5);
              goto LABEL_14;
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v51, v30);
            v21 = (RGNMEMOBJTMP *)v51;
            if ( !v51[0] )
              goto LABEL_50;
            RGNOBJ::vCopy((RGNOBJ *)v51, v5);
            v28 = RGNOBJ::bSwap(this, (struct RGNOBJ *)v51);
            v29 = (RGNMEMOBJTMP *)v51;
          }
          else
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v50);
            v21 = (RGNMEMOBJTMP *)v50;
            if ( !v50[0] )
              goto LABEL_50;
            RGNOBJ::vCopy((RGNOBJ *)v50, v5);
            v28 = RGNOBJ::bSwap(this, (struct RGNOBJ *)v50);
            v29 = (RGNMEMOBJTMP *)v50;
          }
          v24 = v28;
          RGNMEMOBJTMP::~RGNMEMOBJTMP(v29);
          goto LABEL_72;
        }
        if ( *(_DWORD *)(v11 + 24) <= 0xD8u )
        {
          memmove((void *)(v4 + 80), (const void *)(v11 + 80), *(unsigned int *)(v11 + 80) - 80LL);
          *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)v5 + 40LL)
                                              - *(_DWORD *)v5
                                              - 104
                                              + *(_QWORD *)this
                                              + 104LL;
LABEL_14:
          if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
            return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
          return v12;
        }
        v13 = *(_DWORD *)(v11 + 80);
        v49 = 0;
        if ( v13 < 0xD8 )
          v13 = 216;
        v14 = v13;
        if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
        {
          v53 = 1;
          v14 = v13 + 160;
        }
        else
        {
          v53 = 0;
        }
        if ( dword_1C0100A00 >= v14
          && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0
          && (v15 = Win32AllocateFromPagedLookasideListImpl_0()) != 0 )
        {
          *(_QWORD *)v15 = 0LL;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = 0LL;
          if ( v53 )
            RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v14 + v15 - 160), 0LL);
          LOWORD(v54) = *(_WORD *)(v15 + 12);
          HIWORD(v54) = *(_WORD *)(v15 + 14) | 0x8000;
          _InterlockedExchange((volatile __int32 *)(v15 + 12), v54);
        }
        else
        {
          v15 = 0LL;
          if ( v14 )
            v15 = Win32AllocPool(v14, 875587655LL);
          if ( !v15 )
          {
            EngSetLastError(8u);
            v15 = 0LL;
            v48 = 0LL;
LABEL_36:
            ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( ThreadWin32Thread && *ThreadWin32Thread )
            {
              if ( !v15 )
              {
LABEL_49:
                v21 = (RGNMEMOBJTMP *)&v48;
LABEL_50:
                RGNMEMOBJTMP::~RGNMEMOBJTMP(v21);
                goto LABEL_73;
              }
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
              goto LABEL_49;
            memmove(
              (void *)(v15 + 80),
              (const void *)(*(_QWORD *)v5 + 80LL),
              *(unsigned int *)(*(_QWORD *)v5 + 80LL) - 80LL);
            *(_QWORD *)(v15 + 40) = v15 + (int)(*(_DWORD *)(*(_QWORD *)v5 + 40LL) - *(_QWORD *)v5 - 104) + 104LL;
            v22 = RGNOBJ::bSwap(this, (struct RGNOBJ *)&v48);
            v23 = v48;
            v24 = v22;
            if ( v48 )
            {
              v25 = v48 + 48;
              if ( v48 != -48 )
              {
                KeEnterCriticalRegion();
                v26 = *(_QWORD *)v25;
                v27 = *(_QWORD **)(v23 + 56);
                if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 || *v27 != v25 )
                  __fastfail(3u);
                *v27 = v26;
                *(_QWORD *)(v26 + 8) = v27;
                *(_QWORD *)(v23 + 56) = v23 + 48;
                *(_QWORD *)v25 = v25;
                KeLeaveCriticalRegion();
              }
              if ( (struct REGION *)v23 != prgnDefault )
              {
                if ( *(__int16 *)(v23 + 14) >= 0 )
                {
                  Win32FreePool();
                }
                else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
                {
                  Win32FreeToPagedLookasideListImpl_0();
                }
              }
            }
            v48 = 0LL;
            if ( v49 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
LABEL_72:
            if ( v24 )
              goto LABEL_14;
LABEL_73:
            v31 = *(_QWORD *)this;
            v32 = *(_QWORD *)this + 104LL;
            *(_DWORD *)(v31 + 80) = 120;
            *(_QWORD *)(v31 + 84) = 1LL;
            *(_QWORD *)(v31 + 92) = 0LL;
            result = 0LL;
            *(_DWORD *)(v31 + 100) = 0;
            *(_DWORD *)v32 = 0;
            *(_DWORD *)(v32 + 4) = 0x80000000;
            *(_QWORD *)(v32 + 8) = 0x7FFFFFFFLL;
            *(_QWORD *)(v31 + 40) = v32 + 16;
            return result;
          }
          *(_QWORD *)v15 = 0LL;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = 0LL;
          if ( v53 )
            RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v14 + v15 - 160), 0LL);
        }
        *(_DWORD *)(v15 + 80) = 120;
        *(_QWORD *)(v15 + 84) = 1LL;
        *(_QWORD *)(v15 + 92) = 0LL;
        *(_DWORD *)(v15 + 100) = 0;
        *(_DWORD *)(v15 + 104) = 0;
        *(_DWORD *)(v15 + 108) = 0x80000000;
        *(_QWORD *)(v15 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v15 + 40) = v15 + 120;
        *(_DWORD *)(v15 + 24) = v13;
        *(_QWORD *)(v15 + 28) = 0LL;
        *(_DWORD *)(v15 + 36) = 0;
        *(_QWORD *)(v15 + 56) = v15 + 48;
        *(_QWORD *)(v15 + 48) = v15 + 48;
        v48 = v15;
        goto LABEL_36;
      }
    }
    v33 = *(_DWORD **)a3;
    if ( *(_DWORD *)(*(_QWORD *)a3 + 80LL) == 160
      && v33[22] <= v8[22]
      && v33[24] >= v8[24]
      && v33[23] <= v8[23]
      && v33[25] >= v8[25] )
    {
      if ( a4 == 1 )
        a3 = v5;
      if ( (unsigned int)RGNOBJ::bCopy(this, a3) )
        goto LABEL_82;
      goto LABEL_100;
    }
  }
  if ( a4 != 1
    || (v34 = *(_QWORD *)v5, *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 160)
    || (v35 = *(_QWORD *)a3, *(_DWORD *)(*(_QWORD *)a3 + 80LL) != 160) )
  {
    if ( (unsigned int)RGNOBJ::bMerge(this, v5, a3, *((_BYTE *)&gafjRgnOp + a4)) )
    {
LABEL_82:
      if ( *(_DWORD *)(*(_QWORD *)this + 84LL) == 1 )
        return 1LL;
      else
        return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
    }
LABEL_100:
    v46 = *(_QWORD *)this;
    v47 = *(_QWORD *)this + 104LL;
    *(_DWORD *)(v46 + 80) = 120;
    *(_QWORD *)(v46 + 84) = 1LL;
    *(_QWORD *)(v46 + 92) = 0LL;
    *(_DWORD *)(v46 + 100) = 0;
    *(_DWORD *)v47 = 0;
    *(_DWORD *)(v47 + 4) = 0x80000000;
    *(_QWORD *)(v47 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v46 + 40) = v47 + (unsigned int)(4 * *(_DWORD *)v47 + 16);
    return 0LL;
  }
  v36 = *(__m128i *)(v34 + 88);
  v37 = *(_QWORD *)(v35 + 88);
  v38 = _mm_srli_si128(*(__m128i *)(v35 + 88), 8).m128i_u64[0];
  v39 = *(_QWORD *)(v34 + 88);
  v40 = v37;
  v41 = _mm_srli_si128(v36, 8).m128i_u64[0];
  if ( (int)v39 > (int)v37 )
    v40 = v39;
  v42 = v38;
  v52.left = v40;
  if ( (int)v41 < (int)v38 )
    v42 = v41;
  v43 = HIDWORD(v39);
  v44 = HIDWORD(v37);
  v52.right = v42;
  if ( (int)v43 > (int)v44 )
    LODWORD(v44) = v43;
  v45 = HIDWORD(v38);
  v52.top = v44;
  if ( SHIDWORD(v41) < SHIDWORD(v38) )
    LODWORD(v45) = HIDWORD(v41);
  v52.bottom = v45;
  if ( v40 >= v42 || (int)v44 >= (int)v45 )
  {
    *(_DWORD *)(v4 + 80) = 120;
    *(_QWORD *)(v4 + 84) = 1LL;
    *(_QWORD *)(v4 + 92) = 0LL;
    *(_DWORD *)(v4 + 100) = 0;
    *(_DWORD *)(v4 + 104) = 0;
    *(_DWORD *)(v4 + 108) = 0x80000000;
    *(_QWORD *)(v4 + 112) = 0x7FFFFFFFLL;
    result = 2LL;
    *(_QWORD *)(v4 + 40) = v4 + 120;
  }
  else
  {
    RGNOBJ::vSet(this, &v52);
    return 2LL;
  }
  return result;
}
