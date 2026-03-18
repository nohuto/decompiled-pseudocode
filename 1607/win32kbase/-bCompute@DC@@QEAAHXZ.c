/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002F4A0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002E150 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E400 (-vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C002E420 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0031740 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 */

__int64 __fastcall DC::bCompute(struct _POINTL *this)
{
  _DWORD *v2; // rdi
  struct _POINTL *v3; // r13
  unsigned int v4; // esi
  int v5; // eax
  _DWORD *v6; // rbx
  int v7; // r12d
  unsigned int v8; // r15d
  __int64 Object; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  struct _POINTL v14; // r8
  struct _POINTL v15; // rdx
  struct _POINTL v16; // rcx
  int v17; // edi
  struct _POINTL v18; // rbx
  struct _POINTL v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // ecx
  _QWORD *DeferredContext; // r9
  unsigned int v23; // edi
  int v24; // edi
  int v25; // eax
  struct _ENTRY *Entry; // rax
  __int64 v27; // r15
  unsigned int v28; // edx
  signed int v29; // ecx
  __int64 v30; // r9
  unsigned int v31; // ecx
  __int64 v32; // r13
  unsigned int v33; // edx
  signed int v34; // ecx
  __int64 v35; // r8
  DC *v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  LONG x; // ecx
  LONG y; // eax
  __m128i v41; // xmm0
  PVOID v42; // r12
  int v43; // eax
  unsigned int v44; // edi
  unsigned int v45; // ebx
  __int64 v46; // r13
  unsigned int v47; // edx
  signed int v48; // ecx
  __int64 v49; // r9
  unsigned int v50; // ecx
  __int64 v51; // r15
  unsigned int v52; // edx
  signed int v53; // ecx
  __int64 v54; // r8
  DC *v55; // rdx
  int v57; // [rsp+20h] [rbp-E0h]
  struct _POINTL v58; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD *v59; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v60; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v61[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v62[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v63[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v64[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v65; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v66; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v67; // [rsp+98h] [rbp-68h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v69; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL v71; // [rsp+B8h] [rbp-48h] BYREF
  char v72[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct _POINTL v73; // [rsp+C8h] [rbp-38h] BYREF
  int v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  struct _POINTL v76; // [rsp+E8h] [rbp-18h]
  __int64 v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]

  AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v72, (struct DC *)this);
  v2 = (_DWORD *)this[192];
  v3 = this + 174;
  v4 = 0;
  v5 = 0;
  *(_OWORD *)&this[174].x = rclEmpty;
  if ( !v2 )
    goto LABEL_152;
  v6 = (_DWORD *)this[193];
  v7 = 1;
  v57 = 1;
  v8 = 216;
  v65 = v2;
  v59 = v6;
  if ( v6 )
  {
    if ( (this[4].y & 0x10) == 0 )
      goto LABEL_17;
    goto LABEL_6;
  }
  Object = AllocateObject(0xD8uLL);
  v75 = Object;
  v6 = (_DWORD *)Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(Object + 40) = Object + 120;
    *(_QWORD *)(Object + 24) = 216LL;
    *(_QWORD *)(Object + 32) = 0LL;
    v10 = (_QWORD *)(Object + 48);
    v59 = v6;
    v10[1] = v10;
    *v10 = v10;
LABEL_6:
    v11 = (unsigned int)v2[20];
    v12 = v6[6];
    if ( (v12 >= (unsigned int)v11 || v2[6] <= 0xD8u) && (v12 <= 0xD8 || v2[6] > 0xD8u) )
    {
      memmove(v6 + 20, v2 + 20, v11 - 80);
      *((_QWORD *)v6 + 5) = (char *)v6 + v2[10] - (int)v2;
    }
    else
    {
      v13 = 216;
      if ( (unsigned int)v11 > 0xD8 )
        v13 = v2[20];
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v61, v13);
      if ( !v61[0] )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v61);
        goto LABEL_153;
      }
      RGNOBJ::vCopy((RGNOBJ *)v61, (struct RGNOBJ *)&v65);
      RGNOBJ::vSwap((RGNOBJ *)&v59, (struct RGNOBJ *)v61);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v61);
      v6 = v59;
    }
    this[193] = (struct _POINTL)v6;
LABEL_17:
    v14 = this[28];
    v15 = this[29];
    v16 = this[191];
    if ( !(*(_QWORD *)&v16 | *(_QWORD *)&v15 | *(_QWORD *)&v14) )
    {
      if ( this[194] )
      {
        v66 = this[194];
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v66);
        this[194] = 0LL;
      }
      if ( v6[20] > 0xA0u )
        *(_OWORD *)&v3->x = rclEmpty;
      else
        *(_OWORD *)&v3->x = *(_OWORD *)(v6 + 22);
      this[4].y &= ~0x10u;
      goto LABEL_46;
    }
    v76 = this[28];
    v17 = v14 != 0LL;
    *(&v76 + (v14 != 0LL)) = v15;
    if ( v15 )
      ++v17;
    *(&v76 + v17) = v16;
    if ( v16 )
      ++v17;
    v18 = this[194];
    v58 = v18;
    if ( !*(_QWORD *)&v18 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v73);
      if ( v73 )
        v18 = v73;
      v58 = v18;
      if ( v74 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
      if ( !*(_QWORD *)&v18 )
        goto LABEL_43;
    }
    if ( v17 == 1 )
    {
      v19 = v76;
      v20 = *(unsigned int *)(*(_QWORD *)&v76 + 80LL);
      v21 = *(_DWORD *)(*(_QWORD *)&v18 + 24LL);
      v67 = v76;
      if ( (v21 >= (unsigned int)v20 || *(_DWORD *)(*(_QWORD *)&v76 + 24LL) <= 0xD8u)
        && (v21 <= 0xD8 || *(_DWORD *)(*(_QWORD *)&v76 + 24LL) > 0xD8u) )
      {
        memmove((void *)(*(_QWORD *)&v18 + 80LL), (const void *)(*(_QWORD *)&v76 + 80LL), v20 - 80);
        *(_QWORD *)(*(_QWORD *)&v18 + 40LL) = *(_QWORD *)&v18
                                            + *(_DWORD *)(*(_QWORD *)&v19 + 40LL)
                                            - v19.x
                                            - 104
                                            + 104LL;
      }
      else
      {
        if ( (unsigned int)v20 > 0xD8 )
          v8 = v20;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v62, v8);
        if ( !v62[0] )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v62);
LABEL_43:
          v57 = 0;
          goto LABEL_44;
        }
        RGNOBJ::vCopy((RGNOBJ *)v62, (struct RGNOBJ *)&v67);
        RGNOBJ::vSwap((RGNOBJ *)&v58, (struct RGNOBJ *)v62);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v62);
      }
    }
    else
    {
      if ( v17 != 2 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v63);
        v71 = v76;
        v70 = v77;
        v60.m128i_i64[0] = v78;
        if ( v63[0]
          && (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v63, (struct RGNOBJ *)&v71, (struct RGNOBJ *)&v70, 1)
          && (v25 = RGNOBJ::iCombine((RGNOBJ *)&v58, (struct RGNOBJ *)v63, (struct RGNOBJ *)&v60, 1), v18 = v58, v25) )
        {
          v24 = 1;
        }
        else
        {
          v24 = 0;
          v57 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v63);
        if ( !v24 )
        {
LABEL_44:
          this[194] = 0LL;
          if ( v18 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
LABEL_46:
          DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
          *(struct _POINTL *)v60.m128i_i8 = this[193];
          v23 = (unsigned __int16)this->x | ((unsigned int)this->x >> 8) & 0xFF0000;
          v59 = WPP_MAIN_CB.Dpc.DeferredContext;
          if ( v23 >= 0x10000 )
          {
            if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
            {
              Entry = GdiHandleEntryDirectory::GetEntry(
                        *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                        (unsigned __int16)v23,
                        1);
              DeferredContext = v59;
              if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v23) )
                v23 = (unsigned __int16)v23;
            }
            else
            {
              v23 = (unsigned __int16)v23;
            }
          }
          v27 = DeferredContext[2];
          v28 = *(_DWORD *)(v27 + 2056);
          if ( v23 < v28 + ((*(unsigned __int16 *)(v27 + 2) - 1) << 16) )
          {
            if ( v23 < v28 )
            {
              v29 = 0;
LABEL_87:
              v30 = *(_QWORD *)(v27 + 8LL * v29 + 8);
              if ( v29 )
                v31 = v23 - ((v29 - 1) << 16) - v28;
              else
                v31 = v23;
              v32 = 0LL;
              if ( v31 < *(_DWORD *)(v30 + 20)
                && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v31 >> 8))
                             + 16LL * (unsigned __int8)v31
                             + 8) )
              {
                v32 = *(_QWORD *)v30 + 24LL * v31;
              }
              DeferredContext = v59;
LABEL_95:
              if ( v23 >= 0x10000 )
              {
                if ( *(_DWORD *)DeferredContext > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              (GdiHandleEntryDirectory *)v27,
                                              (unsigned __int16)v23,
                                              1)
                       + 13) == HIWORD(v23) )
                    v23 = (unsigned __int16)v23;
                }
                else
                {
                  v23 = (unsigned __int16)v23;
                }
              }
              v33 = *(_DWORD *)(v27 + 2056);
              if ( v23 >= v33 + ((*(unsigned __int16 *)(v27 + 2) - 1) << 16) )
                goto LABEL_108;
              if ( v23 >= v33 )
              {
                v34 = ((v23 - v33) >> 16) + 1;
                if ( (v23 - v33) >> 16 == -2 )
                  goto LABEL_108;
              }
              else
              {
                v34 = 0;
              }
              v35 = *(_QWORD *)(v27 + 8LL * v34 + 8);
              if ( v34 )
                v23 = v23 - ((v34 - 1) << 16) - v33;
              if ( v23 < *(_DWORD *)(v35 + 20) )
              {
                v36 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                             + 16LL * (unsigned __int8)v23
                             + 8);
                goto LABEL_109;
              }
LABEL_108:
              v36 = 0LL;
LABEL_109:
              if ( v36 != (DC *)this )
                v32 = 0LL;
              if ( (*(_BYTE *)(v32 + 15) & 4) == 0 )
                goto LABEL_151;
              v37 = v60.m128i_i64[0];
              if ( !v60.m128i_i64[0] )
                goto LABEL_117;
              if ( *(_DWORD *)(v60.m128i_i64[0] + 84) != 1 )
                v7 = (*(_DWORD *)(v60.m128i_i64[0] + 80) > 0xA0u) + 2;
              *(_DWORD *)(*(_QWORD *)&this[10] + 392LL) = v7;
              if ( *(_DWORD *)(v37 + 84) == 1 )
              {
LABEL_117:
                v41 = (__m128i)rclEmpty;
              }
              else
              {
                v38 = *(__m128i *)(v37 + 88);
                x = this[178].x;
                v60 = v38;
                v60.m128i_i32[2] = v38.m128i_i32[2] - x;
                v60.m128i_i32[0] = _mm_cvtsi128_si32(v38) - x;
                y = this[178].y;
                v60.m128i_i32[1] = v38.m128i_i32[1] - y;
                v60.m128i_i32[3] = v38.m128i_i32[3] - y;
                v41 = v60;
              }
              *(__m128i *)(*(_QWORD *)&this[10] + 396LL) = v41;
              v42 = WPP_MAIN_CB.Dpc.DeferredContext;
              v43 = (unsigned __int16)this->x;
              v44 = v43 | ((unsigned int)this->x >> 8) & 0xFF0000;
              if ( v44 >= 0x10000 )
              {
                if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                {
                  v45 = (unsigned __int16)v43;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                              (unsigned __int16)v43,
                                              1)
                       + 13) == HIWORD(v44) )
                    v44 = v45;
                }
                else
                {
                  v44 = (unsigned __int16)v43;
                }
              }
              v46 = *((_QWORD *)v42 + 2);
              v47 = *(_DWORD *)(v46 + 2056);
              if ( v44 < v47 + ((*(unsigned __int16 *)(v46 + 2) - 1) << 16) )
              {
                if ( v44 < v47 )
                {
                  v48 = 0;
                  goto LABEL_127;
                }
                v48 = ((v44 - v47) >> 16) + 1;
                if ( (v44 - v47) >> 16 != -2 )
                {
LABEL_127:
                  v49 = *(_QWORD *)(v46 + 8LL * v48 + 8);
                  if ( v48 )
                    v50 = v44 - ((v48 - 1) << 16) - v47;
                  else
                    v50 = v44;
                  v51 = 0LL;
                  if ( v50 < *(_DWORD *)(v49 + 20)
                    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * ((unsigned __int64)v50 >> 8))
                                 + 16LL * (unsigned __int8)v50
                                 + 8) )
                  {
                    v51 = *(_QWORD *)v49 + 24LL * v50;
                  }
LABEL_134:
                  if ( v44 >= 0x10000 )
                  {
                    if ( *(_DWORD *)v42 > 0x10000u )
                    {
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)v42 + 2),
                                                  (unsigned __int16)v44,
                                                  1)
                           + 13) == HIWORD(v44) )
                        v44 = (unsigned __int16)v44;
                    }
                    else
                    {
                      v44 = (unsigned __int16)v44;
                    }
                  }
                  v52 = *(_DWORD *)(v46 + 2056);
                  if ( v44 >= v52 + ((*(unsigned __int16 *)(v46 + 2) - 1) << 16) )
                    goto LABEL_147;
                  if ( v44 >= v52 )
                  {
                    v53 = ((v44 - v52) >> 16) + 1;
                    if ( (v44 - v52) >> 16 == -2 )
                      goto LABEL_147;
                  }
                  else
                  {
                    v53 = 0;
                  }
                  v54 = *(_QWORD *)(v46 + 8LL * v53 + 8);
                  if ( v53 )
                    v44 = v44 - ((v53 - 1) << 16) - v52;
                  if ( v44 < *(_DWORD *)(v54 + 20) )
                  {
                    v55 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * ((unsigned __int64)v44 >> 8))
                                 + 16LL * (unsigned __int8)v44
                                 + 8);
LABEL_148:
                    if ( v55 != (DC *)this )
                      v51 = 0LL;
                    *(_BYTE *)(v51 + 15) &= ~4u;
LABEL_151:
                    v5 = v57;
LABEL_152:
                    v4 = v5;
                    goto LABEL_153;
                  }
LABEL_147:
                  v55 = 0LL;
                  goto LABEL_148;
                }
              }
              v51 = 0LL;
              goto LABEL_134;
            }
            v29 = ((v23 - v28) >> 16) + 1;
            if ( (v23 - v28) >> 16 != -2 )
              goto LABEL_87;
          }
          v32 = 0LL;
          goto LABEL_95;
        }
LABEL_51:
        v18 = v58;
        *(_DWORD *)(*(_QWORD *)&v58 + 28LL) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
        if ( !(unsigned int)RGNOBJ::bOffset((RGNOBJ *)&v58, this + 178) )
          goto LABEL_43;
        if ( v59[20] == 160
          && v59[22] <= *(_DWORD *)(*(_QWORD *)&v18 + 88LL)
          && v59[24] >= *(_DWORD *)(*(_QWORD *)&v18 + 96LL)
          && v59[23] <= *(_DWORD *)(*(_QWORD *)&v18 + 92LL)
          && v59[25] >= *(_DWORD *)(*(_QWORD *)&v18 + 100LL) )
        {
          this[194] = v18;
          if ( *(_DWORD *)(*(_QWORD *)&v18 + 80LL) > 0xA0u )
            *(_OWORD *)&v3->x = rclEmpty;
          else
            *(_OWORD *)&v3->x = *(_OWORD *)(*(_QWORD *)&v18 + 88LL);
          this[4].y &= ~0x10u;
LABEL_79:
          if ( v24 )
            goto LABEL_46;
          goto LABEL_44;
        }
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v64);
        if ( v64[0] )
        {
          if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v64, (struct RGNOBJ *)&v59, (struct RGNOBJ *)&v58, 1)
            && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v58, (struct RGNOBJ *)v64) )
          {
            v18 = v58;
            this[194] = v58;
            RGNOBJ::vGetSubRect((RGNOBJ *)&v58, (struct _RECTL *)&this[174]);
            this[4].y &= ~0x10u;
LABEL_78:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v64);
            goto LABEL_79;
          }
          v18 = v58;
        }
        v24 = 0;
        v57 = 0;
        goto LABEL_78;
      }
      v69 = v76;
      v68 = v77;
      if ( !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v58, (struct RGNOBJ *)&v69, (struct RGNOBJ *)&v68, 1) )
      {
        v18 = v58;
        goto LABEL_43;
      }
    }
    v24 = 1;
    goto LABEL_51;
  }
LABEL_153:
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v72);
  return v4;
}
