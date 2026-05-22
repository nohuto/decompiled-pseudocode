/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005EE00
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // r12
  unsigned int v4; // r14d
  __int64 v5; // rdx
  int PointersFromInput; // eax
  __int64 v7; // rcx
  unsigned int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  char v11; // cl
  unsigned __int8 v12; // r13
  unsigned int v13; // r15d
  unsigned int v14; // r10d
  char *v15; // r15
  __int16 v16; // r11
  struct Pointer *v17; // r13
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // edx
  _DWORD *v21; // rax
  __int64 v22; // rax
  char v23; // bl
  int v24; // r9d
  __int16 v25; // r12
  _WORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int16 v29; // ax
  __int16 v30; // ax
  unsigned int v31; // r10d
  char v32; // dl
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  _DWORD *v38; // rcx
  __int64 v39; // rcx
  char v40; // bl
  char v41; // di
  int v42; // r9d
  __int64 v43; // rcx
  __int16 v44; // r9
  __int128 v45; // xmm1
  __int64 v46; // rdx
  __int128 v47; // xmm0
  char *v48; // rdx
  char v49; // r9
  __int64 v50; // r10
  __int64 v51; // rcx
  __int16 v52; // dx
  int v53; // r8d
  int v54; // eax
  char v55; // al
  __int64 v56; // r9
  _OWORD *v57; // rcx
  struct Pointer **v58; // rax
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  struct Pointer *v69; // rax
  __int64 v71; // r8
  __int64 v72; // rcx
  __int16 v73; // ax
  __int64 v74; // rcx
  unsigned __int8 v75; // r10
  unsigned int v76; // ecx
  unsigned int j; // r9d
  __int64 v78; // r8
  int v79; // eax
  __int16 v80; // ax
  __int64 v81; // rcx
  unsigned __int8 v82; // r10
  unsigned int v83; // r8d
  unsigned int i; // r9d
  __int64 v85; // rdx
  int v86; // eax
  unsigned __int8 v87; // [rsp+31h] [rbp-317h]
  char v88; // [rsp+32h] [rbp-316h]
  char v89; // [rsp+33h] [rbp-315h]
  unsigned int v90; // [rsp+34h] [rbp-314h]
  unsigned int v91; // [rsp+38h] [rbp-310h] BYREF
  __int64 v92; // [rsp+40h] [rbp-308h]
  struct InputInfo *v93; // [rsp+50h] [rbp-2F8h]
  struct Pointer *v94[74]; // [rsp+60h] [rbp-2E8h] BYREF
  struct Pointer *v95[10]; // [rsp+2B0h] [rbp-98h] BYREF
  _QWORD v96[2]; // [rsp+300h] [rbp-48h]
  int v97; // [rsp+310h] [rbp-38h]

  v93 = a2;
  v2 = a2;
  v4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return v4;
  memset(v94, 0, 0x248uLL);
  v89 = 0;
  v91 = 0;
  PointersFromInput = GetPointersFromInput(v2, v5, v95, &v91);
  v8 = 0;
  v4 = PointersFromInput;
  if ( PointersFromInput >= 0 )
  {
    if ( *((_BYTE *)v2 + 697) )
    {
      if ( v91 == 1 && !*((_BYTE *)this + 712) )
      {
        LODWORD(v94[2]) = *((_DWORD *)this + 30);
        HIDWORD(v94[0]) = *((_DWORD *)v2 + 2);
        LODWORD(v94[0]) = 327760;
        *(_WORD *)((char *)&v94[2] + 5) = 0;
        HIBYTE(v94[2]) = 1;
        LOWORD(v94[3]) = *(_WORD *)v95[0];
        WORD1(v94[3]) = 5;
        WORD2(v94[3]) = *((_WORD *)v95[0] + 6);
        HIWORD(v94[3]) = *((_WORD *)v95[0] + 8);
        LOWORD(v94[4]) = *((_WORD *)v95[0] + 10);
        v10 = *((_QWORD *)this + 3);
        WORD1(v94[4]) = *((_WORD *)v95[0] + 12);
        (*(void (__fastcall **)(__int64, struct Pointer **))(*(_QWORD *)v10 + 24LL))(v10, v94);
        ++*((_DWORD *)this + 30);
        return v4;
      }
      LOBYTE(PointersFromInput) = -1;
      v4 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v9 = 135;
      goto LABEL_5;
    }
    v11 = 0;
    v12 = 0;
    v88 = 0;
    v13 = 0;
    v87 = 0;
    v14 = 0;
    v90 = 0;
    LODWORD(v92) = 0;
    if ( v91 )
    {
      v15 = (char *)this + 36;
      while ( 1 )
      {
        v16 = 0;
        v17 = v95[v14];
        if ( (*(_BYTE *)v2 & 2) != 0 && (*((_BYTE *)v2 + 540) & 0x10) == 0 )
          *((_DWORD *)v17 + 1) &= ~2u;
        if ( (*((_BYTE *)v17 + 4) & 1) != 0 && !*((_BYTE *)this + 32) )
        {
          v16 = 8;
          v88 = v11 + 1;
        }
        v18 = *((_DWORD *)v17 + 1) & 2;
        v19 = (unsigned __int8)(v87 + 1);
        if ( !v18 )
          v19 = v87;
        v20 = *(_DWORD *)v17;
        v87 = v19;
        if ( *(_DWORD *)v17 == *((_DWORD *)this + 29) )
        {
LABEL_26:
          if ( v18 )
          {
            v16 |= 1u;
          }
          else if ( *((_BYTE *)this + 32) )
          {
            goto LABEL_78;
          }
          v25 = *((_WORD *)this + 62);
          v4 = 0;
          v31 = 0;
          v32 = 0;
          *((_WORD *)this + 62) = v25 + 1;
          v33 = *(_DWORD *)v17;
          v34 = *((_DWORD *)this + 29);
          if ( *(_DWORD *)v17 == v34 )
          {
            v40 = 87;
            v41 = 87;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v42 = 133;
LABEL_89:
              Template_qqq(v19, &MinInput_Warning_CheckResult, 0, v42, v40);
            }
LABEL_90:
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 221, v41);
            goto LABEL_92;
          }
          LODWORD(v35) = 0;
          v19 = (__int64)this + 36;
          while ( *(_DWORD *)v19 != v33 )
          {
            if ( !v32 && *(_DWORD *)v19 == v34 )
            {
              v31 = v35;
              v32 = 1;
            }
            LODWORD(v35) = v35 + 1;
            v19 += 8LL;
            if ( (unsigned int)v35 >= 0xA )
            {
              if ( v32 )
              {
                v35 = v31;
                *(_DWORD *)&v15[8 * v31] = v33;
                goto LABEL_66;
              }
              v40 = 5;
              v41 = 5;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v42 = 163;
                goto LABEL_89;
              }
              goto LABEL_90;
            }
          }
          v35 = (unsigned int)v35;
LABEL_66:
          v14 = v92;
          v8 = 0;
          *(_WORD *)&v15[8 * v35 + 4] = v25;
        }
        else
        {
          v19 = 0LL;
          v21 = (_DWORD *)((char *)this + 36);
          while ( *v21 != v20 )
          {
            v19 = (unsigned int)(v19 + 1);
            v21 += 2;
            if ( (unsigned int)v19 >= 0xA )
              goto LABEL_26;
          }
          v4 = 0;
          v92 = 0LL;
          if ( v20 == *((_DWORD *)this + 29) )
          {
            v23 = 87;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v24 = 96;
LABEL_82:
              Template_qqq(v19, &MinInput_Warning_CheckResult, 0, v24, v23);
            }
LABEL_83:
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 230, v23);
LABEL_92:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v22 = 0LL;
          v19 = (__int64)this + 36;
          while ( *(_DWORD *)v19 != v20 )
          {
            v22 = (unsigned int)(v22 + 1);
            v19 += 8LL;
            if ( (unsigned int)v22 >= 0xA )
            {
              v23 = 5;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v24 = 113;
                goto LABEL_82;
              }
              goto LABEL_83;
            }
          }
          v25 = *(_WORD *)&v15[8 * v22 + 4];
          if ( !*((_BYTE *)this + 712) || !*((_BYTE *)this + 151) )
          {
LABEL_39:
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 234, 255);
            goto LABEL_92;
          }
          v19 = 0LL;
          v26 = (_WORD *)((char *)this + 152);
          while ( v25 != *v26 )
          {
            ++v8;
            ++v19;
            v26 += 28;
            if ( v8 >= *((unsigned __int8 *)this + 151) )
              goto LABEL_39;
          }
          if ( *((_BYTE *)this + 32) )
          {
            if ( (*((_BYTE *)this + 56 * v19 + 154) & 4) != 0 )
              goto LABEL_39;
          }
          else if ( (*((_BYTE *)this + 56 * v19 + 154) & 8) == 0 )
          {
            goto LABEL_39;
          }
          v27 = v8;
          v8 = 0;
          v28 = 56 * v27;
          if ( v18 )
          {
            v29 = 1;
            if ( (*((_BYTE *)this + v28 + 154) & 3) != 0 )
              v29 = 2;
            v16 |= v29;
          }
          else
          {
            v30 = *(_WORD *)((char *)this + v28 + 154);
            if ( (v30 & 1) != 0 || (v30 & 2) != 0 )
              v16 |= 4u;
          }
          if ( (*((_BYTE *)v17 + 4) & 4) != 0 )
          {
            v89 = 1;
            v16 |= 0x2000u;
          }
          *(_WORD *)((char *)this + v28 + 170) = 1;
        }
        v36 = 7LL * v90++;
        LOWORD(v94[v36 + 3]) = v25;
        WORD1(v94[v36 + 3]) = v16;
        WORD2(v94[v36 + 3]) = *((_WORD *)v17 + 6);
        HIWORD(v94[v36 + 3]) = *((_WORD *)v17 + 8);
        LOWORD(v94[v36 + 4]) = *((_WORD *)v17 + 10);
        WORD1(v94[v36 + 4]) = *((_WORD *)v17 + 12);
        if ( (*((_BYTE *)v17 + 4) & 1) == 0 || *((_BYTE *)this + 32) && (*((_BYTE *)v17 + 4) & 2) == 0 )
        {
          v4 = 0;
          v37 = 0;
          v38 = (_DWORD *)((char *)this + 36);
          while ( *v38 != *(_DWORD *)v17 )
          {
            ++v37;
            v38 += 2;
            if ( v37 >= 0xA )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                Template_qqq((__int64)v38, &MinInput_Warning_CheckResult, 0, 193, 5);
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                  Template_qqq(v39, &MinInput_Warning_CheckResult, 0, 284, 5);
              }
              goto LABEL_92;
            }
          }
          *(_DWORD *)&v15[8 * v37] = *((_DWORD *)this + 29);
        }
        v2 = v93;
LABEL_78:
        LODWORD(v92) = ++v14;
        if ( v14 >= v91 )
        {
          v12 = v87;
          v13 = v90;
          break;
        }
        v11 = v88;
      }
    }
    if ( *((_BYTE *)this + 712) && *((_BYTE *)this + 151) )
    {
      do
      {
        v43 = 56LL * v8;
        v44 = *(_WORD *)((char *)this + v43 + 154);
        if ( (v44 & 0xB) != 0 && *(_WORD *)((char *)this + v43 + 170) != 1 )
        {
          v45 = *(_OWORD *)((char *)this + v43 + 168);
          v46 = 7LL * v13;
          *(_OWORD *)&v94[v46 + 3] = *(_OWORD *)((char *)this + v43 + 152);
          v47 = *(_OWORD *)((char *)this + v43 + 184);
          *(_OWORD *)&v94[v46 + 5] = v45;
          *(_QWORD *)&v45 = *(_QWORD *)((char *)this + v43 + 200);
          *(_OWORD *)&v94[v46 + 7] = v47;
          v94[v46 + 9] = (struct Pointer *)v45;
          if ( (v44 & 3) != 0 )
            WORD1(v94[7 * v13 + 3]) = 4;
          else
            WORD1(v94[7 * v13 + 3]) = 0;
          ++v13;
          v48 = (char *)this + 36;
          v49 = 0;
          LOBYTE(v90) = v13;
          v50 = 10LL;
          do
          {
            if ( *((_WORD *)v48 + 2) == *(_WORD *)((char *)this + v43 + 152) )
            {
              v49 = 1;
              *(_DWORD *)v48 = *((_DWORD *)this + 29);
            }
            v48 += 8;
            --v50;
          }
          while ( v50 );
          if ( !v49 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              Template_qqq(v43, &MinInput_Warning_CheckResult, 0, 219, 5);
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                Template_qqq(v51, &MinInput_Warning_CheckResult, 0, 329, 5);
            }
            goto LABEL_92;
          }
          v4 = 0;
        }
        ++v8;
      }
      while ( v8 < *((unsigned __int8 *)this + 151) );
    }
    v52 = 0;
    v53 = *((_DWORD *)this + 30);
    HIDWORD(v94[0]) = *((_DWORD *)v2 + 2);
    HIBYTE(v94[2]) = v13;
    v54 = (unsigned __int16)(v13 - 1);
    v7 = (unsigned int)(56 * v54);
    LODWORD(v94[2]) = v53;
    BYTE5(v94[2]) = v88;
    BYTE6(v94[2]) = v12;
    LOWORD(v7) = 56 * v54 + 80;
    LODWORD(v94[0]) = (unsigned __int16)v7;
    if ( !*((_BYTE *)this + 712) )
    {
      *((_BYTE *)this + 712) = 1;
      if ( v12 )
      {
        v52 = 1;
        WORD1(v94[0]) = 1;
      }
      else
      {
        if ( !v88 )
        {
          if ( !*((_BYTE *)this + 32) )
          {
            LOBYTE(PointersFromInput) = -1;
            v4 = -2147418113;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v4;
            v9 = 369;
            goto LABEL_5;
          }
          *((_BYTE *)this + 712) = 0;
          v55 = 1;
          goto LABEL_118;
        }
        v52 = 257;
        WORD1(v94[0]) = 257;
      }
LABEL_117:
      v55 = 0;
LABEL_118:
      v56 = 4LL;
LABEL_119:
      if ( *((_BYTE *)v2 + 700) )
      {
        v52 |= 0x4000u;
        WORD1(v94[0]) = v52;
      }
      if ( *((_BYTE *)v2 + 698) )
      {
        v52 |= 0x200u;
        WORD1(v94[0]) = v52;
      }
      if ( v89 )
      {
        v52 |= 0x8000u;
        WORD1(v94[0]) = v52;
      }
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
        WORD1(v94[0]) = v52 | 0x1000;
      if ( !v55 )
      {
        v57 = (_OWORD *)((char *)this + 128);
        v58 = v94;
        do
        {
          v59 = *((_OWORD *)v58 + 1);
          *v57 = *(_OWORD *)v58;
          v60 = *((_OWORD *)v58 + 2);
          v57[1] = v59;
          v61 = *((_OWORD *)v58 + 3);
          v57[2] = v60;
          v62 = *((_OWORD *)v58 + 4);
          v57[3] = v61;
          v63 = *((_OWORD *)v58 + 5);
          v57[4] = v62;
          v64 = *((_OWORD *)v58 + 6);
          v57[5] = v63;
          v65 = *((_OWORD *)v58 + 7);
          v58 += 16;
          v57[6] = v64;
          v57 += 8;
          *(v57 - 1) = v65;
          --v56;
        }
        while ( v56 );
        v66 = *((_OWORD *)v58 + 1);
        *v57 = *(_OWORD *)v58;
        v67 = *((_OWORD *)v58 + 2);
        v57[1] = v66;
        v68 = *((_OWORD *)v58 + 3);
        v69 = v58[8];
        v57[2] = v67;
        v57[3] = v68;
        *((_QWORD *)v57 + 8) = v69;
        (*(void (__fastcall **)(_QWORD, struct Pointer **))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v94);
      }
      return v4;
    }
    if ( *((_BYTE *)this + 32) || (*((_WORD *)this + 65) & 0x100) == 0 )
    {
      if ( v12 )
        goto LABEL_117;
      if ( v88 )
      {
        v81 = *((_QWORD *)this + 3);
        WORD1(v94[0]) = 4;
        (*(void (__fastcall **)(__int64, struct Pointer **))(*(_QWORD *)v81 + 24LL))(v81, v94);
        v82 = HIBYTE(v94[2]);
        v83 = 0;
        for ( i = 0; i < v82; ++i )
        {
          v85 = 7LL * v83;
          if ( (BYTE2(v94[7 * i + 3]) & 8) != 0 )
          {
            WORD1(v94[7 * v83++ + 3]) = WORD1(v94[7 * i + 3]) & 0xFFFB;
            LOWORD(v94[v85 + 3]) = v94[7 * i + 3];
            WORD2(v94[v85 + 3]) = WORD2(v94[7 * i + 3]);
            HIWORD(v94[v85 + 3]) = HIWORD(v94[7 * i + 3]);
            LOWORD(v94[v85 + 4]) = v94[7 * i + 4];
            WORD1(v94[v85 + 4]) = WORD1(v94[7 * i + 4]);
            v82 = HIBYTE(v94[2]);
          }
        }
        v86 = *((_DWORD *)this + 30) + 1;
        HIBYTE(v94[2]) = v83;
        *((_DWORD *)this + 30) = v86;
        LODWORD(v94[2]) = v86;
        WORD1(v94[0]) = WORD1(v94[0]) & 0xFEFA | 0x101;
        v52 = WORD1(v94[0]);
        v80 = v83 - 1;
        goto LABEL_149;
      }
      v56 = 4LL;
      v52 = 4;
      WORD1(v94[0]) = 4;
    }
    else
    {
      if ( v12 )
      {
        v71 = 0LL;
        v96[0] = 0LL;
        v96[1] = 0LL;
        v97 = 0;
        if ( (_BYTE)v90 )
        {
          do
          {
            v72 = (unsigned int)v71;
            v71 = (unsigned int)(v71 + 1);
            v73 = WORD1(v94[7 * v72 + 3]);
            *((_WORD *)v96 + v72) = v73;
            WORD1(v94[7 * v72 + 3]) = v73 & 0xFFFE;
          }
          while ( (unsigned int)v71 < HIBYTE(v94[2]) );
          v52 = WORD1(v94[0]);
        }
        v74 = *((_QWORD *)this + 3);
        BYTE6(v94[2]) = 0;
        WORD1(v94[0]) = v52 | 0x104;
        (*(void (__fastcall **)(__int64, struct Pointer **, __int64))(*(_QWORD *)v74 + 24LL))(v74, v94, v71);
        v75 = HIBYTE(v94[2]);
        v76 = 0;
        for ( j = 0; j < v75; ++j )
        {
          v78 = 7LL * v76;
          if ( (BYTE2(v94[7 * j + 3]) & 8) != 0 )
          {
            ++v76;
            WORD1(v94[v78 + 3]) = *((_WORD *)v96 + j);
            LOWORD(v94[v78 + 3]) = v94[7 * j + 3];
            WORD2(v94[v78 + 3]) = WORD2(v94[7 * j + 3]);
            HIWORD(v94[v78 + 3]) = HIWORD(v94[7 * j + 3]);
            LOWORD(v94[v78 + 4]) = v94[7 * j + 4];
            WORD1(v94[v78 + 4]) = WORD1(v94[7 * j + 4]);
            v75 = HIBYTE(v94[2]);
          }
        }
        v79 = *((_DWORD *)this + 30) + 1;
        HIBYTE(v94[2]) = v76;
        *((_DWORD *)this + 30) = v79;
        LODWORD(v94[2]) = v79;
        BYTE6(v94[2]) = v12;
        WORD1(v94[0]) = WORD1(v94[0]) & 0xFEFA | 1;
        v52 = WORD1(v94[0]);
        v80 = v76 - 1;
LABEL_149:
        LOWORD(v94[0]) = 56 * v80 + 80;
        goto LABEL_117;
      }
      v56 = 4LL;
      if ( v88 )
      {
        v52 = 256;
        WORD1(v94[0]) = 256;
LABEL_154:
        v55 = 0;
        goto LABEL_119;
      }
      v52 = 260;
      WORD1(v94[0]) = 260;
    }
    *((_BYTE *)this + 712) = 0;
    *((_DWORD *)this + 30) = v53 + 1;
    *((_WORD *)this + 62) = 0;
    goto LABEL_154;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 129;
LABEL_5:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v9, PointersFromInput);
  }
  return v4;
}
