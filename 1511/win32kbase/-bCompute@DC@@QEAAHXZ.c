/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C002CD50
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B990 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0029990 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029C70 (-vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     LongAdd @ 0x1C00B49A8 (LongAdd.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  _DWORD *v1; // rdi
  struct _RECTL *v2; // r14
  int v3; // r15d
  unsigned int v5; // r13d
  __int64 *v6; // rbx
  int v7; // r12d
  unsigned int v8; // r14d
  unsigned int v10; // eax
  __m128i **v11; // rcx
  int v12; // eax
  __m128i **v13; // rcx
  unsigned int v14; // edx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int16 *v20; // rbx
  __int64 Object; // rax
  __int64 v22; // rdi
  unsigned int v23; // eax
  int v24; // eax
  __int16 **v25; // rcx
  unsigned int v26; // edx
  int v27; // ebx
  int v28; // eax
  unsigned int v29; // r10d
  __int64 v30; // rcx
  int v31; // eax
  signed int v32; // edx
  signed int v33; // r8d
  unsigned int v34; // r11d
  unsigned int v35; // r10d
  unsigned int v36; // r11d
  int v37; // r10d
  int v38; // r11d
  unsigned int *v39; // r8
  int i; // r9d
  __int64 v41; // rdx
  unsigned int *v42; // rcx
  __int64 v43; // r8
  __m128i v44; // xmm0
  int v45; // ecx
  int v46; // eax
  __int16 *v47; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v48; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v49; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  __m128i *v52[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i *v53[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v54[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v55[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i *v56[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 *v57[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 *v58[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 *v59[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-10h] BYREF
  __int16 *v65[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]

  v1 = (_DWORD *)*((_QWORD *)this + 189);
  v2 = (struct _RECTL *)((char *)this + 1392);
  v3 = 0;
  v5 = 0;
  *((_OWORD *)this + 87) = rclEmpty;
  if ( v1 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 190);
    v7 = 1;
    v50 = v1;
    v5 = 1;
    v49 = v6;
    if ( v6 )
    {
      if ( (*((_DWORD *)this + 9) & 0x10) == 0 )
        goto LABEL_33;
    }
    else
    {
      v8 = 216;
      if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
      {
        v3 = 1;
        v8 = 376;
      }
      if ( dword_1C0103610 >= v8
        && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0
        && (v6 = (__int64 *)Win32AllocateFromPagedLookasideListImpl_0()) != 0LL )
      {
        *v6 = 0LL;
        v6[1] = 0LL;
        v6[2] = 0LL;
        if ( v3 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v6[v8 / 8 - 20], 0LL);
        LOWORD(v47) = *((_WORD *)v6 + 6);
        WORD1(v47) = *((_WORD *)v6 + 7) | 0x8000;
        _InterlockedExchange((volatile __int32 *)v6 + 3, (__int32)v47);
        v1 = v50;
      }
      else
      {
        v6 = (__int64 *)PALLOCMEM2(v8, 875587655LL, 0);
        if ( !v6 )
        {
          EngSetLastError(8u);
          return 0LL;
        }
        *v6 = 0LL;
        v6[1] = 0LL;
        v6[2] = 0LL;
        if ( v3 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v6[v8 / 8 - 20], 0LL);
      }
      *((_DWORD *)v6 + 20) = 120;
      *(__int64 *)((char *)v6 + 84) = 1LL;
      v2 = (struct _RECTL *)((char *)this + 1392);
      v49 = v6;
      *(__int64 *)((char *)v6 + 92) = 0LL;
      *((_DWORD *)v6 + 25) = 0;
      *((_DWORD *)v6 + 26) = 0;
      *((_DWORD *)v6 + 27) = 0x80000000;
      v6[14] = 0x7FFFFFFFLL;
      v6[5] = (__int64)(v6 + 15);
      v6[3] = 216LL;
      *((_DWORD *)v6 + 8) = 0;
      v6[7] = (__int64)(v6 + 6);
      v6[6] = (__int64)(v6 + 6);
    }
    v10 = *((_DWORD *)v6 + 6);
    if ( v10 > 0xD8 )
    {
      if ( v1[6] > 0xD8u )
      {
        v14 = v1[20];
        if ( v10 >= v14 )
        {
          RGNOBJ::vCopy((RGNOBJ *)&v49, (struct RGNOBJ *)&v50);
          *((_QWORD *)this + 190) = v6;
          goto LABEL_33;
        }
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v53, v14);
        v11 = v53;
        if ( !v53[0] )
          goto LABEL_22;
        RGNOBJ::vCopy((RGNOBJ *)v53, (struct RGNOBJ *)&v50);
        v12 = RGNOBJ::bSwap(&v49, v53);
        v13 = v53;
      }
      else
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v56);
        v11 = v56;
        if ( !v56[0] )
          goto LABEL_22;
        RGNOBJ::vCopy((RGNOBJ *)v56, (struct RGNOBJ *)&v50);
        v12 = RGNOBJ::bSwap(&v49, v56);
        v13 = v56;
      }
    }
    else
    {
      if ( v1[6] <= 0xD8u )
      {
        memmove(v6 + 10, v1 + 20, (unsigned int)v1[20] - 80LL);
        v6[5] = (__int64)v6 + v1[10] - (int)v1;
        *((_QWORD *)this + 190) = v6;
        goto LABEL_33;
      }
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v52, v1[20]);
      v11 = v52;
      if ( !v52[0] )
      {
LABEL_22:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)v11);
        return 0LL;
      }
      RGNOBJ::vCopy((RGNOBJ *)v52, (struct RGNOBJ *)&v50);
      v12 = RGNOBJ::bSwap(&v49, v52);
      v13 = v52;
    }
    v15 = v12;
    RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)v13);
    if ( v15 )
    {
      v6 = v49;
      *((_QWORD *)this + 190) = v49;
LABEL_33:
      v16 = *((_QWORD *)this + 28);
      v17 = *((_QWORD *)this + 29);
      v18 = *((_QWORD *)this + 188);
      if ( !(v18 | v17 | v16) )
      {
        if ( *((_QWORD *)this + 191) )
        {
          v65[0] = *((__int16 **)this + 191);
          RGNOBJ::vDeleteRGNOBJ(v65);
          *((_QWORD *)this + 191) = 0LL;
        }
        if ( *((_DWORD *)v6 + 20) > 0xA0u )
          *v2 = (struct _RECTL)rclEmpty;
        else
          *v2 = *(struct _RECTL *)(v6 + 11);
        *((_DWORD *)this + 9) &= ~0x10u;
        goto LABEL_111;
      }
      v66 = *((_QWORD *)this + 28);
      v19 = v16 != 0;
      *(&v66 + (v16 != 0)) = v17;
      if ( v17 )
        ++v19;
      *(&v66 + v19) = v18;
      if ( v18 )
        ++v19;
      v20 = (__int16 *)*((_QWORD *)this + 191);
      v47 = v20;
      if ( !v20 )
      {
        Object = AllocateObject(0xD8uLL, 4u, 0);
        v65[1] = (__int16 *)Object;
        if ( !Object )
          goto LABEL_65;
        *(_QWORD *)(Object + 92) = 0LL;
        *(_DWORD *)(Object + 80) = 120;
        v20 = (__int16 *)Object;
        *(_QWORD *)(Object + 84) = 1LL;
        *(_DWORD *)(Object + 100) = 0;
        *(_DWORD *)(Object + 104) = 0;
        *(_DWORD *)(Object + 108) = 0x80000000;
        *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
        v47 = (__int16 *)Object;
        *(_QWORD *)(Object + 40) = Object + 120;
        *(_QWORD *)(Object + 24) = 216LL;
        *(_DWORD *)(Object + 32) = 0;
        *(_QWORD *)(Object + 56) = Object + 48;
        *(_QWORD *)(Object + 48) = Object + 48;
      }
      if ( v19 != 1 )
      {
        if ( v19 == 2 )
        {
          v60 = v66;
          v64 = v67;
          if ( !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v47, (struct RGNOBJ *)&v60, (struct RGNOBJ *)&v64, 1) )
          {
            v20 = v47;
            v5 = 0;
            goto LABEL_109;
          }
        }
        else
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v59);
          v61 = v66;
          v63 = v67;
          v62 = v68;
          if ( !v59[0]
            || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)v59, (struct RGNOBJ *)&v61, (struct RGNOBJ *)&v63, 1)
            || (v28 = RGNOBJ::iCombine((RGNOBJ *)&v47, (struct RGNOBJ *)v59, (struct RGNOBJ *)&v62, 1), v20 = v47, !v28) )
          {
            v5 = 0;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP(v59);
          if ( !v5 )
            goto LABEL_109;
        }
LABEL_74:
        v20 = v47;
        *((_DWORD *)v47 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
        v29 = *((_DWORD *)this + 356);
        if ( *((_DWORD *)v20 + 21) != 1 )
        {
          v30 = *((unsigned int *)v20 + 22);
          v31 = *((_DWORD *)v20 + 24);
          v32 = *((_DWORD *)v20 + 23);
          v33 = *((_DWORD *)v20 + 25);
          v48.m128i_i64[0] = __PAIR64__(v32, v30);
          v48.m128i_i64[1] = __PAIR64__(v33, v31);
          if ( (int)v30 < v31 && v32 < v33 )
          {
            if ( (int)LongAdd(v30, v29, &v48) < 0
              || (int)LongAdd(v48.m128i_u32[3], v34, (char *)&v48.m128i_u64[1] + 4) < 0
              || (int)LongAdd(v48.m128i_u32[2], v35, &v48.m128i_u64[1]) < 0
              || (int)LongAdd(v48.m128i_u32[1], v36, (char *)v48.m128i_i64 + 4) < 0
              || (((v48.m128i_i32[0] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || (((v48.m128i_i32[3] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || (((v48.m128i_i32[2] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || (((v48.m128i_i32[1] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
            {
              EngSetLastError(0x216u);
              v5 = 0;
              goto LABEL_109;
            }
            v39 = (unsigned int *)(v20 + 52);
            *(__m128i *)(v20 + 44) = v48;
            for ( i = *((_DWORD *)v20 + 21); i; v39 += *v39 + 4 )
            {
              v39[1] += v38;
              --i;
              v39[2] += v38;
              v41 = *v39;
              if ( (_DWORD)v41 )
              {
                v42 = &v39[v41 + 3];
                do
                {
                  *--v42 += v37;
                  LODWORD(v41) = v41 - 1;
                }
                while ( (_DWORD)v41 );
              }
            }
            v39[-*(v39 - 1) - 2] = 0x7FFFFFFF;
            *((_DWORD *)v20 + 27) = 0x80000000;
          }
        }
        if ( *((_DWORD *)v49 + 20) == 160
          && *((_DWORD *)v49 + 22) <= *((_DWORD *)v20 + 22)
          && *((_DWORD *)v49 + 24) >= *((_DWORD *)v20 + 24)
          && *((_DWORD *)v49 + 23) <= *((_DWORD *)v20 + 23)
          && *((_DWORD *)v49 + 25) >= *((_DWORD *)v20 + 25) )
        {
          *((_QWORD *)this + 191) = v20;
          if ( *((_DWORD *)v20 + 20) > 0xA0u )
            *v2 = (struct _RECTL)rclEmpty;
          else
            *v2 = *(struct _RECTL *)(v20 + 44);
          *((_DWORD *)this + 9) &= ~0x10u;
LABEL_108:
          if ( v5 )
          {
LABEL_111:
            v43 = *((_QWORD *)this + 190);
            if ( (*((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)this + 15) & 4) != 0 )
            {
              if ( v43 )
              {
                if ( *(_DWORD *)(v43 + 84) != 1 )
                  v7 = (*(_DWORD *)(*((_QWORD *)this + 190) + 80LL) > 0xA0u) + 2;
                *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v7;
                if ( *(_DWORD *)(v43 + 84) == 1 )
                {
                  *(_OWORD *)(*((_QWORD *)this + 10) + 396LL) = rclEmpty;
                }
                else
                {
                  v45 = *((_DWORD *)this + 356);
                  v48 = *(__m128i *)(v43 + 88);
                  v44 = v48;
                  v48.m128i_i32[2] -= v45;
                  v48.m128i_i32[0] = _mm_cvtsi128_si32(v44) - v45;
                  v46 = *((_DWORD *)this + 357);
                  v48.m128i_i32[1] -= v46;
                  v48.m128i_i32[3] -= v46;
                  *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v48;
                }
              }
              else
              {
                *(_OWORD *)(*((_QWORD *)this + 10) + 396LL) = rclEmpty;
              }
              *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)this + 15) &= ~4u;
            }
            return v5;
          }
LABEL_109:
          *((_QWORD *)this + 191) = 0LL;
          if ( v20 )
            RGNOBJ::vDeleteRGNOBJ(&v47);
          goto LABEL_111;
        }
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v58);
        if ( v58[0] )
        {
          if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v58, (struct RGNOBJ *)&v49, (struct RGNOBJ *)&v47, 1)
            && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v47, (struct RGNOBJ *)v58) )
          {
            v20 = v47;
            *((_QWORD *)this + 191) = v47;
            RGNOBJ::vGetSubRect((RGNOBJ *)&v47, v2);
            *((_DWORD *)this + 9) &= ~0x10u;
LABEL_107:
            RGNMEMOBJTMP::~RGNMEMOBJTMP(v58);
            goto LABEL_108;
          }
          v20 = v47;
        }
        v5 = 0;
        goto LABEL_107;
      }
      v22 = v66;
      v23 = *((_DWORD *)v20 + 6);
      v51 = v66;
      if ( v23 > 0xD8 )
      {
        if ( *(_DWORD *)(v66 + 24) > 0xD8u )
        {
          v26 = *(_DWORD *)(v66 + 80);
          if ( v23 >= v26 )
          {
            RGNOBJ::vCopy((RGNOBJ *)&v47, (struct RGNOBJ *)&v51);
            goto LABEL_74;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v57, v26);
          if ( !v57[0] )
          {
            RGNMEMOBJTMP::~RGNMEMOBJTMP(v57);
            v5 = 0;
            goto LABEL_109;
          }
          RGNOBJ::vCopy((RGNOBJ *)v57, (struct RGNOBJ *)&v51);
          v24 = RGNOBJ::bSwap((__int64 **)&v47, (__m128i **)v57);
          v25 = v57;
        }
        else
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v55);
          if ( !v55[0] )
          {
            RGNMEMOBJTMP::~RGNMEMOBJTMP(v55);
            v5 = 0;
            goto LABEL_109;
          }
          RGNOBJ::vCopy((RGNOBJ *)v55, (struct RGNOBJ *)&v51);
          v24 = RGNOBJ::bSwap((__int64 **)&v47, (__m128i **)v55);
          v25 = v55;
        }
      }
      else
      {
        if ( *(_DWORD *)(v66 + 24) <= 0xD8u )
        {
          memmove(v20 + 40, (const void *)(v66 + 80), *(unsigned int *)(v66 + 80) - 80LL);
          *((_QWORD *)v20 + 5) = (char *)v20 + *(_DWORD *)(v22 + 40) - (int)v22;
          goto LABEL_74;
        }
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v54, *(_DWORD *)(v66 + 80));
        if ( !v54[0] )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP(v54);
          v5 = 0;
          goto LABEL_109;
        }
        RGNOBJ::vCopy((RGNOBJ *)v54, (struct RGNOBJ *)&v51);
        v24 = RGNOBJ::bSwap((__int64 **)&v47, (__m128i **)v54);
        v25 = v54;
      }
      v27 = v24;
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v25);
      if ( v27 )
        goto LABEL_74;
      v20 = v47;
LABEL_65:
      v5 = 0;
      goto LABEL_109;
    }
    return 0LL;
  }
  return v5;
}
