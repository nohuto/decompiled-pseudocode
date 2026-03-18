/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0027140 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C10 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003FF10 (-vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0049F18 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     LongAdd @ 0x1C00B1230 (LongAdd.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00B3D94 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  _DWORD *v2; // rdi
  struct _RECTL *v3; // r12
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 v6; // rbx
  int v7; // r13d
  unsigned int v8; // r15d
  int v9; // r12d
  unsigned int v10; // eax
  RGNMEMOBJTMP *v11; // rcx
  int v12; // eax
  RGNMEMOBJTMP *v13; // rcx
  unsigned int v14; // edx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rbx
  __int64 Object; // rax
  __int64 v22; // rdi
  unsigned int v23; // eax
  int v24; // eax
  RGNMEMOBJTMP *v25; // rcx
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
  __m128i v47; // xmm0
  __int64 v49; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v50; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD *v51; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v52; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v53[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v54[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v55[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v56[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v57[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v58[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v59[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v60[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v61[2]; // [rsp+C8h] [rbp-38h] BYREF
  char v62[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v64; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v68[3]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  __int64 v71; // [rsp+130h] [rbp+30h]

  AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v62, this);
  v2 = (_DWORD *)*((_QWORD *)this + 192);
  v3 = (struct _RECTL *)((char *)this + 1392);
  v4 = 0;
  v5 = 0;
  *((_OWORD *)this + 87) = rclEmpty;
  if ( !v2 )
  {
LABEL_120:
    v4 = v5;
    goto LABEL_121;
  }
  v6 = *((_QWORD *)this + 193);
  v7 = 1;
  v52 = v2;
  v5 = 1;
  v51 = (_DWORD *)v6;
  if ( v6 )
  {
    if ( (*((_DWORD *)this + 9) & 0x10) == 0 )
      goto LABEL_34;
  }
  else
  {
    v8 = 216;
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
    {
      v9 = 1;
      v8 = 376;
    }
    else
    {
      v9 = 0;
    }
    if ( dword_1C0100A00 >= v8
      && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0
      && (v6 = Win32AllocateFromPagedLookasideListImpl_0()) != 0 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      if ( v9 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v6 - 160), 0LL);
      LOWORD(v49) = *(_WORD *)(v6 + 12);
      WORD1(v49) = *(_WORD *)(v6 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v6 + 12), v49);
      v2 = v52;
    }
    else
    {
      v6 = PALLOCMEM2(v8);
      if ( !v6 )
      {
        EngSetLastError(8u);
        goto LABEL_121;
      }
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      if ( v9 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v6 - 160), 0LL);
    }
    *(_DWORD *)(v6 + 80) = 120;
    *(_QWORD *)(v6 + 84) = 1LL;
    v3 = (struct _RECTL *)((char *)this + 1392);
    *(_QWORD *)(v6 + 92) = 0LL;
    *(_DWORD *)(v6 + 100) = 0;
    v5 = 1;
    *(_DWORD *)(v6 + 104) = 0;
    *(_DWORD *)(v6 + 108) = 0x80000000;
    *(_QWORD *)(v6 + 112) = 0x7FFFFFFFLL;
    v51 = (_DWORD *)v6;
    *(_QWORD *)(v6 + 40) = v6 + 120;
    *(_QWORD *)(v6 + 24) = 216LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 56) = v6 + 48;
    *(_QWORD *)(v6 + 48) = v6 + 48;
  }
  v10 = *(_DWORD *)(v6 + 24);
  if ( v10 > 0xD8 )
  {
    if ( v2[6] > 0xD8u )
    {
      v14 = v2[20];
      if ( v10 >= v14 )
      {
        RGNOBJ::vCopy((RGNOBJ *)&v51, (struct RGNOBJ *)&v52);
        goto LABEL_33;
      }
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v56, v14);
      v11 = (RGNMEMOBJTMP *)v56;
      if ( !v56[0] )
        goto LABEL_22;
      RGNOBJ::vCopy((RGNOBJ *)v56, (struct RGNOBJ *)&v52);
      v12 = RGNOBJ::bSwap((RGNOBJ *)&v51, (struct RGNOBJ *)v56);
      v13 = (RGNMEMOBJTMP *)v56;
    }
    else
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v57);
      v11 = (RGNMEMOBJTMP *)v57;
      if ( !v57[0] )
      {
LABEL_22:
        RGNMEMOBJTMP::~RGNMEMOBJTMP(v11);
        goto LABEL_121;
      }
      RGNOBJ::vCopy((RGNOBJ *)v57, (struct RGNOBJ *)&v52);
      v12 = RGNOBJ::bSwap((RGNOBJ *)&v51, (struct RGNOBJ *)v57);
      v13 = (RGNMEMOBJTMP *)v57;
    }
  }
  else
  {
    if ( v2[6] <= 0xD8u )
    {
      memmove((void *)(v6 + 80), v2 + 20, (unsigned int)v2[20] - 80LL);
      *(_QWORD *)(v6 + 40) = v2[10] - (int)v2 - 104 + v6 + 104;
LABEL_33:
      *((_QWORD *)this + 193) = v6;
LABEL_34:
      v16 = *((_QWORD *)this + 28);
      v17 = *((_QWORD *)this + 29);
      v18 = *((_QWORD *)this + 191);
      if ( !(v18 | v17 | v16) )
      {
        if ( *((_QWORD *)this + 194) )
        {
          v68[0] = *((_QWORD *)this + 194);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v68);
          *((_QWORD *)this + 194) = 0LL;
        }
        if ( *(_DWORD *)(v6 + 80) > 0xA0u )
          *v3 = (struct _RECTL)rclEmpty;
        else
          *v3 = *(struct _RECTL *)(v6 + 88);
        *((_DWORD *)this + 9) &= ~0x10u;
        goto LABEL_112;
      }
      v69 = *((_QWORD *)this + 28);
      v19 = v16 != 0;
      *(&v69 + (v16 != 0)) = v17;
      if ( v17 )
        ++v19;
      *(&v69 + v19) = v18;
      if ( v18 )
        ++v19;
      v20 = *((_QWORD *)this + 194);
      v49 = v20;
      if ( !v20 )
      {
        Object = AllocateObject(0xD8uLL);
        v68[1] = Object;
        if ( !Object )
          goto LABEL_66;
        *(_DWORD *)(Object + 80) = 120;
        *(_QWORD *)(Object + 84) = 1LL;
        v20 = Object;
        *(_QWORD *)(Object + 92) = 0LL;
        *(_DWORD *)(Object + 100) = 0;
        *(_DWORD *)(Object + 104) = 0;
        *(_DWORD *)(Object + 108) = 0x80000000;
        *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
        v49 = Object;
        *(_QWORD *)(Object + 40) = Object + 120;
        *(_QWORD *)(Object + 24) = 216LL;
        *(_QWORD *)(Object + 32) = 0LL;
        *(_QWORD *)(Object + 56) = Object + 48;
        *(_QWORD *)(Object + 48) = Object + 48;
      }
      if ( v19 != 1 )
      {
        if ( v19 == 2 )
        {
          v64 = v69;
          v63 = v70;
          if ( !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)&v64, (struct RGNOBJ *)&v63, 1) )
          {
            v20 = v49;
            v5 = 0;
            goto LABEL_110;
          }
        }
        else
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v61);
          v67 = v69;
          v66 = v70;
          v65 = v71;
          if ( !v61[0]
            || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)v61, (struct RGNOBJ *)&v67, (struct RGNOBJ *)&v66, 1)
            || (v28 = RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)v61, (struct RGNOBJ *)&v65, 1), v20 = v49, !v28) )
          {
            v5 = 0;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v61);
          if ( !v5 )
            goto LABEL_110;
        }
LABEL_75:
        v20 = v49;
        *(_DWORD *)(v49 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
        v29 = *((_DWORD *)this + 356);
        if ( *(_DWORD *)(v20 + 84) != 1 )
        {
          v30 = *(unsigned int *)(v20 + 88);
          v31 = *(_DWORD *)(v20 + 96);
          v32 = *(_DWORD *)(v20 + 92);
          v33 = *(_DWORD *)(v20 + 100);
          v50.m128i_i64[0] = __PAIR64__(v32, v30);
          v50.m128i_i64[1] = __PAIR64__(v33, v31);
          if ( (int)v30 < v31 && v32 < v33 )
          {
            if ( (int)LongAdd(v30, v29, &v50) < 0
              || (int)LongAdd(v50.m128i_u32[3], v34, (char *)&v50.m128i_u64[1] + 4) < 0
              || (int)LongAdd(v50.m128i_u32[2], v35, &v50.m128i_u64[1]) < 0
              || (int)LongAdd(v50.m128i_u32[1], v36, (char *)v50.m128i_i64 + 4) < 0
              || (((v50.m128i_i32[0] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || (((v50.m128i_i32[3] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || (((v50.m128i_i32[2] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || (((v50.m128i_i32[1] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
            {
              EngSetLastError(0x216u);
              v5 = 0;
              goto LABEL_110;
            }
            v39 = (unsigned int *)(v20 + 104);
            *(__m128i *)(v20 + 88) = v50;
            for ( i = *(_DWORD *)(v20 + 84); i; v39 += *v39 + 4 )
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
            *(_DWORD *)(v20 + 108) = 0x80000000;
          }
        }
        if ( v51[20] == 160
          && v51[22] <= *(_DWORD *)(v20 + 88)
          && v51[24] >= *(_DWORD *)(v20 + 96)
          && v51[23] <= *(_DWORD *)(v20 + 92)
          && v51[25] >= *(_DWORD *)(v20 + 100) )
        {
          *((_QWORD *)this + 194) = v20;
          if ( *(_DWORD *)(v20 + 80) > 0xA0u )
            *v3 = (struct _RECTL)rclEmpty;
          else
            *v3 = *(struct _RECTL *)(v20 + 88);
          *((_DWORD *)this + 9) &= ~0x10u;
LABEL_109:
          if ( v5 )
          {
LABEL_112:
            v43 = *((_QWORD *)this + 193);
            if ( (*(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)this + 15) & 4) != 0 )
            {
              if ( !v43 )
                goto LABEL_118;
              if ( *(_DWORD *)(v43 + 84) != 1 )
                v7 = (*(_DWORD *)(*((_QWORD *)this + 193) + 80LL) > 0xA0u) + 2;
              *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v7;
              if ( *(_DWORD *)(v43 + 84) == 1 )
              {
LABEL_118:
                v47 = (__m128i)rclEmpty;
              }
              else
              {
                v45 = *((_DWORD *)this + 356);
                v50 = *(__m128i *)(v43 + 88);
                v44 = v50;
                v50.m128i_i32[2] -= v45;
                v50.m128i_i32[0] = _mm_cvtsi128_si32(v44) - v45;
                v46 = *((_DWORD *)this + 357);
                v50.m128i_i32[1] -= v46;
                v50.m128i_i32[3] -= v46;
                v47 = v50;
              }
              *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v47;
              *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)this + 15) &= ~4u;
            }
            goto LABEL_120;
          }
LABEL_110:
          *((_QWORD *)this + 194) = 0LL;
          if ( v20 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
          goto LABEL_112;
        }
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v60);
        if ( v60[0] )
        {
          if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v60, (struct RGNOBJ *)&v51, (struct RGNOBJ *)&v49, 1)
            && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v49, (struct RGNOBJ *)v60) )
          {
            v20 = v49;
            *((_QWORD *)this + 194) = v49;
            RGNOBJ::vGetSubRect((RGNOBJ *)&v49, v3);
            *((_DWORD *)this + 9) &= ~0x10u;
LABEL_108:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v60);
            goto LABEL_109;
          }
          v20 = v49;
        }
        v5 = 0;
        goto LABEL_108;
      }
      v22 = v69;
      v23 = *(_DWORD *)(v20 + 24);
      v53[0] = v69;
      if ( v23 > 0xD8 )
      {
        if ( *(_DWORD *)(v69 + 24) > 0xD8u )
        {
          v26 = *(_DWORD *)(v69 + 80);
          if ( v23 >= v26 )
          {
            RGNOBJ::vCopy((RGNOBJ *)&v49, (struct RGNOBJ *)v53);
            goto LABEL_75;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v58, v26);
          if ( !v58[0] )
          {
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v58);
            v5 = 0;
            goto LABEL_110;
          }
          RGNOBJ::vCopy((RGNOBJ *)v58, (struct RGNOBJ *)v53);
          v24 = RGNOBJ::bSwap((RGNOBJ *)&v49, (struct RGNOBJ *)v58);
          v25 = (RGNMEMOBJTMP *)v58;
        }
        else
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v59);
          if ( !v59[0] )
          {
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v59);
            v5 = 0;
            goto LABEL_110;
          }
          RGNOBJ::vCopy((RGNOBJ *)v59, (struct RGNOBJ *)v53);
          v24 = RGNOBJ::bSwap((RGNOBJ *)&v49, (struct RGNOBJ *)v59);
          v25 = (RGNMEMOBJTMP *)v59;
        }
      }
      else
      {
        if ( *(_DWORD *)(v69 + 24) <= 0xD8u )
        {
          memmove((void *)(v20 + 80), (const void *)(v69 + 80), *(unsigned int *)(v69 + 80) - 80LL);
          *(_QWORD *)(v20 + 40) = v20 + *(_DWORD *)(v22 + 40) - (int)v22 - 104 + 104LL;
          goto LABEL_75;
        }
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v55, *(_DWORD *)(v69 + 80));
        if ( !v55[0] )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v55);
          v5 = 0;
          goto LABEL_110;
        }
        RGNOBJ::vCopy((RGNOBJ *)v55, (struct RGNOBJ *)v53);
        v24 = RGNOBJ::bSwap((RGNOBJ *)&v49, (struct RGNOBJ *)v55);
        v25 = (RGNMEMOBJTMP *)v55;
      }
      v27 = v24;
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v25);
      if ( v27 )
        goto LABEL_75;
      v20 = v49;
LABEL_66:
      v5 = 0;
      goto LABEL_110;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v54, v2[20]);
    v11 = (RGNMEMOBJTMP *)v54;
    if ( !v54[0] )
      goto LABEL_22;
    RGNOBJ::vCopy((RGNOBJ *)v54, (struct RGNOBJ *)&v52);
    v12 = RGNOBJ::bSwap((RGNOBJ *)&v51, (struct RGNOBJ *)v54);
    v13 = (RGNMEMOBJTMP *)v54;
  }
  v15 = v12;
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v13);
  if ( v15 )
  {
    v6 = (__int64)v51;
    goto LABEL_33;
  }
LABEL_121:
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v62);
  return v4;
}
