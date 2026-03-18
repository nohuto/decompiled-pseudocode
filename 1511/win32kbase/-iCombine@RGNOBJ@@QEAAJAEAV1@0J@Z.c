/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890
 * Callers:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00294B0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002CD50 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00A8B90 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00BF800 (GreIntersectVisRect.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0029990 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r10
  struct RGNOBJ *v5; // r14
  __int64 result; // rax
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r15d
  __int64 Object; // rax
  __int64 v15; // rdx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v17; // r13
  _QWORD *v18; // r15
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int16 **v24; // rcx
  int v25; // eax
  __int64 v26; // r15
  int v27; // r12d
  __int64 v28; // r14
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  int v31; // eax
  __int16 **v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // r8
  __int64 v35; // rdx
  _DWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i v39; // xmm2
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // xmm1_8
  unsigned __int64 v42; // rax
  LONG v43; // r8d
  unsigned __int64 v44; // xmm2_8
  LONG v45; // edx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r11
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // [rsp+20h] [rbp-50h] BYREF
  int v52; // [rsp+28h] [rbp-48h]
  _QWORD v53[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v54[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v55; // [rsp+50h] [rbp-20h] BYREF

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
            v33 = *(_DWORD *)(v11 + 80);
            if ( v10 >= v33 )
            {
              RGNOBJ::vCopy(this, v5);
              goto LABEL_14;
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v54, v33);
            v24 = (__int16 **)v54;
            if ( !v54[0] )
              goto LABEL_36;
            RGNOBJ::vCopy((RGNOBJ *)v54, v5);
            v31 = RGNOBJ::bSwap(this, (struct RGNOBJ *)v54);
            v32 = (__int16 **)v54;
          }
          else
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v53);
            v24 = (__int16 **)v53;
            if ( !v53[0] )
              goto LABEL_36;
            RGNOBJ::vCopy((RGNOBJ *)v53, v5);
            v31 = RGNOBJ::bSwap(this, (struct RGNOBJ *)v53);
            v32 = (__int16 **)v53;
          }
          v27 = v31;
          RGNMEMOBJTMP::~RGNMEMOBJTMP(v32);
        }
        else
        {
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
          v52 = 0;
          if ( v13 < 0xD8 )
            v13 = 216;
          Object = AllocateObject(v13);
          v51 = Object;
          if ( Object )
          {
            *(_DWORD *)(Object + 80) = 120;
            v15 = Object + 104;
            *(_QWORD *)(Object + 84) = 1LL;
            *(_QWORD *)(Object + 92) = 0LL;
            *(_DWORD *)(Object + 100) = 0;
            *(_DWORD *)(Object + 104) = 0;
            *(_DWORD *)(Object + 108) = 0x80000000;
            *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
            *(_QWORD *)(Object + 40) = Object + 120;
            *(_DWORD *)(Object + 24) = v13;
            *(_QWORD *)(Object + 28) = 0LL;
            *(_QWORD *)(Object + 56) = Object + 48;
            *(_QWORD *)(Object + 48) = Object + 48;
          }
          ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, Object);
          if ( ThreadWin32Thread && *ThreadWin32Thread )
          {
            v17 = v51;
            if ( !v51 )
            {
LABEL_35:
              v24 = (__int16 **)&v51;
LABEL_36:
              RGNMEMOBJTMP::~RGNMEMOBJTMP(v24);
              goto LABEL_59;
            }
            v18 = (_QWORD *)(v51 + 48);
            if ( v51 != -48 )
            {
              KeEnterCriticalRegion();
              v19 = 0LL;
              v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v20, v21);
              if ( v22 )
                v19 = *v22;
              v17 = v51;
              *(_QWORD *)(v51 + 64) = v51;
              v18[3] = CleanUpRegion;
              if ( v19 )
              {
                v23 = *(_QWORD *)(v19 + 88);
                *v18 = v23;
                v18[1] = v19 + 88;
                if ( *(_QWORD *)(v23 + 8) != v19 + 88 )
                  __fastfail(3u);
                *(_QWORD *)(v23 + 8) = v18;
                *(_QWORD *)(v19 + 88) = v18;
                KeLeaveCriticalRegion();
              }
              else
              {
                v18[1] = v18;
                *v18 = v18;
                KeLeaveCriticalRegion();
              }
            }
          }
          else
          {
            v17 = v51;
          }
          if ( !v17 )
            goto LABEL_35;
          memmove(
            (void *)(v17 + 80),
            (const void *)(*(_QWORD *)v5 + 80LL),
            *(unsigned int *)(*(_QWORD *)v5 + 80LL) - 80LL);
          *(_QWORD *)(v17 + 40) = v17 + (int)(*(_DWORD *)(*(_QWORD *)v5 + 40LL) - *(_QWORD *)v5 - 104) + 104LL;
          v25 = RGNOBJ::bSwap(this, (struct RGNOBJ *)&v51);
          v26 = v51;
          v27 = v25;
          if ( v51 )
          {
            v28 = v51 + 48;
            if ( v51 != -48 )
            {
              KeEnterCriticalRegion();
              v29 = *(_QWORD *)v28;
              v30 = *(_QWORD **)(v26 + 56);
              if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 || *v30 != v28 )
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
              *(_QWORD *)(v26 + 56) = v26 + 48;
              *(_QWORD *)v28 = v28;
              KeLeaveCriticalRegion();
            }
            if ( (struct REGION *)v26 != prgnDefault )
            {
              if ( *(__int16 *)(v26 + 14) >= 0 )
              {
                Win32FreePool();
              }
              else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
              {
                Win32FreeToPagedLookasideListImpl_0();
              }
            }
          }
          v51 = 0LL;
          if ( v52 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
        }
        if ( v27 )
          goto LABEL_14;
LABEL_59:
        v34 = *(_QWORD *)this;
        v35 = *(_QWORD *)this + 104LL;
        *(_DWORD *)(v34 + 80) = 120;
        *(_QWORD *)(v34 + 84) = 1LL;
        *(_QWORD *)(v34 + 92) = 0LL;
        result = 0LL;
        *(_DWORD *)(v34 + 100) = 0;
        *(_DWORD *)v35 = 0;
        *(_DWORD *)(v35 + 4) = 0x80000000;
        *(_QWORD *)(v35 + 8) = 0x7FFFFFFFLL;
        *(_QWORD *)(v34 + 40) = v35 + 16;
        return result;
      }
    }
    v36 = *(_DWORD **)a3;
    if ( *(_DWORD *)(*(_QWORD *)a3 + 80LL) == 160
      && v36[22] <= v8[22]
      && v36[24] >= v8[24]
      && v36[23] <= v8[23]
      && v36[25] >= v8[25] )
    {
      if ( a4 == 1 )
        a3 = v5;
      if ( (unsigned int)RGNOBJ::bCopy(this, a3) )
        goto LABEL_68;
      goto LABEL_86;
    }
  }
  if ( a4 != 1
    || (v37 = *(_QWORD *)v5, *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 160)
    || (v38 = *(_QWORD *)a3, *(_DWORD *)(*(_QWORD *)a3 + 80LL) != 160) )
  {
    if ( (unsigned int)RGNOBJ::bMerge(this, v5, a3, *((_BYTE *)&gafjRgnOp + a4)) )
    {
LABEL_68:
      if ( *(_DWORD *)(*(_QWORD *)this + 84LL) == 1 )
        return 1LL;
      else
        return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
    }
LABEL_86:
    v49 = *(_QWORD *)this;
    v50 = *(_QWORD *)this + 104LL;
    *(_DWORD *)(v49 + 80) = 120;
    *(_QWORD *)(v49 + 84) = 1LL;
    *(_QWORD *)(v49 + 92) = 0LL;
    *(_DWORD *)(v49 + 100) = 0;
    *(_DWORD *)v50 = 0;
    *(_DWORD *)(v50 + 4) = 0x80000000;
    *(_QWORD *)(v50 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v49 + 40) = v50 + (unsigned int)(4 * *(_DWORD *)v50 + 16);
    return 0LL;
  }
  v39 = *(__m128i *)(v37 + 88);
  v40 = *(_QWORD *)(v38 + 88);
  v41 = _mm_srli_si128(*(__m128i *)(v38 + 88), 8).m128i_u64[0];
  v42 = *(_QWORD *)(v37 + 88);
  v43 = v40;
  v44 = _mm_srli_si128(v39, 8).m128i_u64[0];
  if ( (int)v42 > (int)v40 )
    v43 = v42;
  v45 = v41;
  v55.left = v43;
  if ( (int)v44 < (int)v41 )
    v45 = v44;
  v46 = HIDWORD(v42);
  v47 = HIDWORD(v40);
  v55.right = v45;
  if ( (int)v46 > (int)v47 )
    LODWORD(v47) = v46;
  v48 = HIDWORD(v41);
  v55.top = v47;
  if ( SHIDWORD(v44) < SHIDWORD(v41) )
    LODWORD(v48) = HIDWORD(v44);
  v55.bottom = v48;
  if ( v43 >= v45 || (int)v47 >= (int)v48 )
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
    RGNOBJ::vSet(this, &v55);
    return 2LL;
  }
  return result;
}
