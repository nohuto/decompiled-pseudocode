/*
 * XREFs of RtlpWalkFrameChain @ 0x1800126E0
 * Callers:
 *     RtlWalkFrameChain @ 0x1800126A0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpSameFunction @ 0x180011420 (RtlpSameFunction.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800136F0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x18001552C (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlpTrivialFunction @ 0x180093014 (RtlpTrivialFunction.c)
 *     RtlpUnwindEpilogue @ 0x18009306C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009326C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext @ 0x180095900 (RtlpCaptureContext.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  unsigned __int8 v10; // dl
  unsigned __int64 v11; // rcx
  int v12; // edi
  _BYTE *v13; // rdx
  int v14; // esi
  char v15; // cl
  char v16; // cl
  __int64 v17; // r8
  __int64 v18; // rbx
  char v19; // r14
  unsigned int v20; // esi
  _BYTE *v21; // rdi
  __int64 v22; // r8
  _BYTE *v23; // rdx
  _QWORD *v24; // rcx
  _BYTE *v25; // rdx
  unsigned int v26; // eax
  int VirtualMemory; // eax
  unsigned int *v28; // r13
  unsigned int v29; // r15d
  _BYTE *v30; // rcx
  char *v31; // r12
  int v32; // ebx
  __int64 v33; // r14
  unsigned int v34; // esi
  unsigned int v35; // edx
  unsigned int v36; // edx
  int v37; // eax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rcx
  char v40; // cl
  int v41; // eax
  unsigned __int8 v42; // r11
  __int16 v43; // ax
  unsigned int v44; // ebx
  int v45; // r10d
  int v46; // edx
  unsigned int j; // r8d
  __int16 v48; // ax
  int v49; // edx
  bool v50; // zf
  int v51; // edx
  char v52; // r8
  _QWORD *v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  char **v56; // rdx
  unsigned __int64 *v57; // rcx
  unsigned __int64 v58; // r8
  char v59; // al
  char v60; // cl
  int v61; // ecx
  _DWORD *v62; // rax
  char v63; // r8
  char v64; // r8
  __int64 v65; // rcx
  unsigned int v66; // ecx
  char v67; // al
  _QWORD *v68; // rcx
  _QWORD *v69; // r9
  __int64 v70; // rcx
  _BYTE v72[32]; // [rsp+0h] [rbp-658h] BYREF
  char v73; // [rsp+40h] [rbp-618h] BYREF
  int v74; // [rsp+44h] [rbp-614h]
  char v75; // [rsp+48h] [rbp-610h]
  unsigned int v76; // [rsp+4Ch] [rbp-60Ch]
  char v77; // [rsp+50h] [rbp-608h]
  int v78; // [rsp+54h] [rbp-604h]
  unsigned __int64 v79; // [rsp+58h] [rbp-600h] BYREF
  _BYTE *v80; // [rsp+60h] [rbp-5F8h]
  unsigned __int64 v81; // [rsp+68h] [rbp-5F0h] BYREF
  unsigned int v82; // [rsp+70h] [rbp-5E8h]
  __int16 v83; // [rsp+74h] [rbp-5E4h]
  int v84; // [rsp+78h] [rbp-5E0h]
  unsigned int i; // [rsp+7Ch] [rbp-5DCh]
  int v86; // [rsp+80h] [rbp-5D8h]
  int v87; // [rsp+84h] [rbp-5D4h]
  unsigned __int64 v88; // [rsp+88h] [rbp-5D0h]
  int v89; // [rsp+90h] [rbp-5C8h]
  __int128 v90; // [rsp+98h] [rbp-5C0h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-5B0h]
  unsigned int v92; // [rsp+B0h] [rbp-5A8h]
  int v93; // [rsp+B4h] [rbp-5A4h]
  unsigned int v94; // [rsp+B8h] [rbp-5A0h]
  int v95; // [rsp+BCh] [rbp-59Ch]
  int v96; // [rsp+C0h] [rbp-598h]
  _BYTE *v97; // [rsp+C8h] [rbp-590h]
  unsigned __int64 v98; // [rsp+D0h] [rbp-588h]
  unsigned int *v99; // [rsp+D8h] [rbp-580h]
  __int64 v100; // [rsp+E0h] [rbp-578h]
  unsigned __int64 v101; // [rsp+E8h] [rbp-570h]
  unsigned int *v102; // [rsp+F8h] [rbp-560h]
  _BYTE *v103; // [rsp+108h] [rbp-550h]
  _BYTE *v104; // [rsp+118h] [rbp-540h]
  _BYTE v105[48]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v106[152]; // [rsp+150h] [rbp-508h] BYREF
  unsigned __int64 v107; // [rsp+1E8h] [rbp-470h]
  char *v108; // [rsp+248h] [rbp-410h]
  _QWORD v109[102]; // [rsp+2F0h] [rbp-368h] BYREF

  v4 = a4;
  v82 = a4;
  v5 = a2;
  v94 = a2;
  v6 = a1;
  v100 = a1;
  v7 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v79, &v81) )
    return 0LL;
  RtlpCaptureContext(v106);
  v73 = 0;
  v87 = 0;
  v90 = xmmword_180157330;
  v91 = qword_180157340;
  v8 = v107;
  while ( (v8 & 7) == 0 && v8 >= v79 && v8 < v81 )
  {
    v75 = 1;
    v28 = (unsigned int *)RtlpLookupFunctionEntryForStackWalks(v108, &v90);
    v102 = v28;
    if ( !v28 )
      return v7;
    v29 = 0;
    VirtualMemory = 0;
    v89 = 0;
    v17 = *((_QWORD *)&v90 + 1);
    v30 = (_BYTE *)(*((_QWORD *)&v90 + 1) + v28[2]);
    v103 = v30;
    if ( !v30[2] && !v30[1] && (*v30 & 0x20) == 0 )
    {
      VirtualMemory = ZwQueryVirtualMemory(-1LL, v108, 0LL, v105, 48LL, 0LL);
      v89 = VirtualMemory;
      if ( VirtualMemory >= 0 && (v105[36] & 0x40) != 0 )
      {
        v89 = -1073741823;
        return v7;
      }
      v17 = *((_QWORD *)&v90 + 1);
    }
    if ( VirtualMemory < 0 )
    {
      v8 = v107;
      goto LABEL_53;
    }
    v31 = v108;
    v99 = v28;
    v32 = 0;
    v93 = 0;
    v33 = v17 + v28[2];
    v34 = *(_BYTE *)v33 & 7;
    if ( !v73 )
    {
      v32 = 1;
      v93 = 1;
    }
    v95 = 0;
    v9 = (_DWORD)v108 - DWORD2(v90) - *v28;
    v10 = *(_BYTE *)(v33 + 3);
    if ( (v10 & 0xF) == 0 )
    {
      v8 = v107;
      v11 = v107;
LABEL_5:
      v88 = v11;
      goto LABEL_6;
    }
    if ( v9 >= *(unsigned __int8 *)(v33 + 1) || (*(_BYTE *)v33 & 0x20) != 0 )
    {
      v40 = *(_BYTE *)(v33 + 3);
      v41 = v10;
      v8 = v107;
LABEL_93:
      v11 = *(_QWORD *)&v106[8 * (v40 & 0xF) + 120] - (int)(v41 & 0xFFFFFFF0);
      goto LABEL_5;
    }
    for ( i = 0; v29 < *(unsigned __int8 *)(v33 + 2); i = v29 )
    {
      v65 = *(unsigned __int16 *)(v33 + 2LL * v29 + 4);
      v83 = v65;
      if ( (BYTE1(v65) & 0xF) == 3 )
        break;
      v29 += RtlpUnwindOpSlots(v65);
    }
    v66 = *(unsigned __int8 *)(v33 + 2LL * v29 + 4);
    v8 = v107;
    v17 = *((_QWORD *)&v90 + 1);
    if ( v9 >= v66 )
    {
      v41 = *(unsigned __int8 *)(v33 + 3);
      v40 = *(_BYTE *)(v33 + 3);
      goto LABEL_93;
    }
    v88 = v107;
LABEL_6:
    if ( v32 )
      goto LABEL_21;
    v12 = 0;
    v78 = 0;
    if ( v34 >= 2 )
    {
      v42 = *(_BYTE *)(v33 + 2);
      if ( v42 )
      {
        v43 = *(_WORD *)(v33 + 4);
        v83 = v43;
        if ( (HIBYTE(v43) & 0xF) == 6 )
        {
          v44 = (unsigned __int8)v43;
          v45 = (_DWORD)v31 - v17;
          if ( (v43 & 0x1000) != 0 )
          {
            v46 = v28[1] - (unsigned __int8)v43;
            v86 = v46;
            if ( v45 - v46 < (unsigned int)(unsigned __int8)v43 )
            {
              v78 = 1;
            }
            else
            {
LABEL_99:
              for ( j = 1; ; ++j )
              {
                i = j;
                if ( j >= v42 )
                  goto LABEL_20;
                v48 = *(_WORD *)(v33 + 2LL * j + 4);
                v83 = v48;
                if ( (HIBYTE(v48) & 0xF) != 6 )
                  goto LABEL_20;
                v49 = HIBYTE(v48) >> 4 << 8;
                v50 = (unsigned __int8)v48 + v49 == 0;
                v51 = (unsigned __int8)v48 + v49;
                v86 = v51;
                if ( v50 )
                  goto LABEL_20;
                v46 = v28[1] - v51;
                v86 = v46;
                if ( v45 - v46 < v44 )
                  break;
              }
              v78 = 1;
            }
            RtlpUnwindEpilogue(
              DWORD2(v90),
              v46,
              v45 - v46,
              (_DWORD)v28,
              (__int64)v106,
              0LL,
              (__int64)&v79,
              (__int64)&v81);
            if ( v72 != (_BYTE *)-64LL )
              v73 = 0;
            v8 = v107;
            goto LABEL_51;
          }
          v86 = 0;
          goto LABEL_99;
        }
      }
LABEL_21:
      LODWORD(v18) = 0;
      v92 = 0;
LABEL_22:
      v74 = 0;
      v19 = 0;
      v77 = 0;
      v20 = (_DWORD)v31 - *v28 - v17;
      v21 = (_BYTE *)(v17 + v28[2]);
      while ( 1 )
      {
        if ( (unsigned int)v18 >= (unsigned __int8)v21[2] )
        {
          if ( (*v21 & 0x20) == 0 )
          {
            if ( !v19 )
            {
              if ( &v79 )
              {
                if ( v8 < v79 )
                {
LABEL_201:
                  VirtualMemory = -1073741784;
                  v84 = -1073741784;
                  goto LABEL_52;
                }
                if ( v8 > v81 - 8 )
                {
                  VirtualMemory = -1073741784;
                  v84 = -1073741784;
                  goto LABEL_52;
                }
              }
              v108 = *(char **)v8;
              v8 += 8LL;
              v107 = v8;
            }
            if ( &v73 )
              v73 = v19;
            v99 = v28;
            if ( v95 )
            {
              v25 = (_BYTE *)(*((_QWORD *)&v90 + 1) + v28[2]);
              if ( (unsigned int)v31 - *v28 - DWORD2(v90) >= (unsigned __int8)v25[1]
                && ((*v25 >> 3) & (unsigned __int8)v95) != 0 )
              {
                v26 = (unsigned __int8)v25[2];
                i = v26;
                if ( (v26 & 1) != 0 )
                  i = ++v26;
                v104 = &v25[2 * v26 + 8];
              }
            }
            goto LABEL_51;
          }
          v55 = (unsigned __int8)v21[2];
          v74 = v55;
          if ( (v55 & 1) != 0 )
            v74 = ++v55;
          v28 = (unsigned int *)&v21[2 * v55 + 4];
          ++v92;
          v17 = *((_QWORD *)&v90 + 1);
          LODWORD(v18) = 0;
          if ( v92 > 0x20 )
            RtlRaiseStatus(3221225727LL);
          goto LABEL_22;
        }
        v22 = (unsigned __int8)v21[2 * (unsigned int)v18 + 5] >> 4;
        v23 = &v21[2 * (unsigned int)v18];
        if ( v20 >= (unsigned __int8)v23[4] )
          break;
        LODWORD(v18) = RtlpUnwindOpSlots(*((unsigned __int16 *)v23 + 2)) + v18;
        v8 = v107;
LABEL_33:
        v74 = v18;
      }
      if ( (v21[2 * (unsigned int)v18 + 5] & 0xF) != 0 )
      {
        if ( (v21[2 * (unsigned int)v18 + 5] & 0xF) == 4 )
        {
          v18 = (unsigned int)(v18 + 1);
          v74 = v18;
          v76 = 8 * *(unsigned __int16 *)&v21[2 * v18 + 4];
          v24 = (_QWORD *)(v88 + v76);
          if ( &v79 && ((unsigned __int64)v24 < v79 || (unsigned __int64)v24 > v81 - 8) )
            goto LABEL_201;
          *(_QWORD *)&v106[8 * v22 + 120] = *v24;
          v8 = v107;
          goto LABEL_32;
        }
        switch ( v21[2 * (unsigned int)v18 + 5] & 0xF )
        {
          case 1:
            v18 = (unsigned int)(v18 + 1);
            v74 = v18;
            v35 = *(unsigned __int16 *)&v21[2 * v18 + 4];
            v76 = v35;
            if ( (_DWORD)v22 )
            {
              v18 = (unsigned int)(v18 + 1);
              v74 = v18;
              v36 = (*(unsigned __int16 *)&v21[2 * v18 + 4] << 16) + v35;
            }
            else
            {
              v36 = 8 * v35;
            }
            v76 = v36;
            v8 += v36;
            break;
          case 2:
            v8 += (unsigned int)(8 * v22 + 8);
            break;
          case 3:
            v107 = *(_QWORD *)&v106[8 * (v21[3] & 0xF) + 120];
            v8 = v107 - (v21[3] & 0xF0);
            break;
          case 5:
            v18 = (unsigned int)(v18 + 2);
            v74 = v18;
            v76 = *(unsigned __int16 *)&v21[2 * (unsigned int)(v18 - 1) + 4];
            v76 += *(unsigned __int16 *)&v21[2 * v18 + 4] << 16;
            v68 = (_QWORD *)(v88 + v76);
            if ( v72 != (_BYTE *)-88LL && ((unsigned __int64)v68 < v79 || (unsigned __int64)v68 > v81 - 8) )
              goto LABEL_201;
            *(_QWORD *)&v106[8 * v22 + 120] = *v68;
            v8 = v107;
            goto LABEL_32;
          case 6:
            LODWORD(v18) = v18 + 1;
            v74 = v18;
            goto LABEL_32;
          case 7:
            LODWORD(v18) = v18 + 2;
            v74 = v18;
            goto LABEL_32;
          case 8:
            v18 = (unsigned int)(v18 + 1);
            v74 = v18;
            v76 = 16 * *(unsigned __int16 *)&v21[2 * v18 + 4];
            v53 = (_QWORD *)(v88 + v76);
            if ( &v79 && ((unsigned __int64)v53 < v79 || (unsigned __int64)v53 > v81 - 16) )
              goto LABEL_201;
            v54 = 2LL * (unsigned int)v22;
            v109[v54] = *v53;
            v109[v54 + 1] = v53[1];
            v8 = v107;
            goto LABEL_32;
          case 9:
            v18 = (unsigned int)(v18 + 2);
            v74 = v18;
            v76 = *(unsigned __int16 *)&v21[2 * (unsigned int)(v18 - 1) + 4];
            v76 += *(unsigned __int16 *)&v21[2 * v18 + 4] << 16;
            v69 = (_QWORD *)(v88 + v76);
            if ( v72 != (_BYTE *)-88LL && ((unsigned __int64)v69 < v79 || (unsigned __int64)v69 > v81 - 16) )
              goto LABEL_201;
            v70 = 2LL * (unsigned int)v22;
            v109[v70] = *v69;
            v109[v70 + 1] = v69[1];
            v8 = v107;
            goto LABEL_32;
          case 0xA:
            v19 = 1;
            v77 = 1;
            v56 = (char **)v8;
            v98 = v8;
            v57 = (unsigned __int64 *)(v8 + 24);
            v101 = v8 + 24;
            if ( (_DWORD)v22 )
            {
              v56 = (char **)(v8 + 8);
              v98 = v8 + 8;
              v57 = (unsigned __int64 *)(v8 + 32);
              v101 = v8 + 32;
            }
            if ( &v79 )
            {
              if ( (unsigned __int64)v56 < v79 )
                goto LABEL_201;
              v58 = v81;
              if ( (unsigned __int64)v56 > v81 - 8 )
                goto LABEL_201;
            }
            else
            {
              v58 = v81;
            }
            if ( &v79 && ((unsigned __int64)v57 < v79 || (unsigned __int64)v57 > v58 - 8) )
              goto LABEL_201;
            v108 = *v56;
            v8 = *v57;
            break;
          default:
            RtlRaiseStatus(3221225727LL);
        }
      }
      else
      {
        if ( &v79 && (v8 < v79 || v8 > v81 - 8) )
          goto LABEL_201;
        *(_QWORD *)&v106[8 * v22 + 120] = *(_QWORD *)v8;
        v8 = v107 + 8;
      }
      v107 = v8;
LABEL_32:
      LODWORD(v18) = v18 + 1;
      goto LABEL_33;
    }
    v13 = v31;
    v80 = v31;
    v14 = 0;
    v96 = 0;
    v15 = *v31;
    if ( *v31 == 72 )
    {
      if ( v31[1] == -125 && v31[2] == -60 )
      {
        v13 = v31 + 4;
        v80 = v31 + 4;
        goto LABEL_10;
      }
      if ( v31[1] == -127 && v31[2] == -60 )
      {
        v13 = v31 + 7;
        v80 = v31 + 7;
        goto LABEL_10;
      }
    }
    if ( (v15 & 0xFE) == 0x48 && v31[1] == -115 )
    {
      v52 = v31[2];
      v14 = v52 & 7 | (8 * (v15 & 1));
      v96 = v14;
      if ( v14 && v14 == (*(_BYTE *)(v33 + 3) & 0xF) )
      {
        v63 = v52 & 0xF8;
        if ( v63 != 96 )
        {
          v50 = v63 == -96;
          v17 = *((_QWORD *)&v90 + 1);
          if ( v50 )
          {
            v13 = v31 + 7;
            v80 = v31 + 7;
          }
          goto LABEL_10;
        }
        v13 = v31 + 4;
        v80 = v31 + 4;
      }
      v17 = *((_QWORD *)&v90 + 1);
    }
LABEL_10:
    while ( (*v13 & 0xF8) == 0x58 )
    {
      ++v13;
LABEL_156:
      v80 = v13;
    }
    if ( (*v13 & 0xF0) == 0x40 && (v13[1] & 0xF8) == 0x58 )
    {
      v13 += 2;
      goto LABEL_156;
    }
    if ( *v13 == 0xF2 )
      v80 = ++v13;
    v16 = *v13;
    if ( (unsigned __int8)(*v13 + 62) <= 1u || v16 == -13 && v13[1] == 0xC3 )
    {
LABEL_134:
      v78 = 1;
      goto LABEL_135;
    }
    if ( ((v16 + 23) & 0xFD) != 0 )
    {
      if ( v16 == -1 && v13[1] == 37 )
        goto LABEL_134;
      if ( (v16 & 0xF8) == 0x48 && v13[1] == 0xFF && (v13[2] & 0x38) == 0x20 )
      {
        v12 = 1;
        v78 = 1;
      }
    }
    else
    {
      v97 = &v13[-v17];
      if ( v16 == -21 )
        v37 = (char)v13[1] + 2;
      else
        v37 = *(_DWORD *)(v13 + 1) + 5;
      v38 = (unsigned __int64)&v13[v37 - v17];
      v97 = (_BYTE *)v38;
      v39 = *v28;
      if ( v38 < v39 || v38 >= v28[1] )
      {
        v62 = (_DWORD *)RtlpSameFunction((__int64)v28, *((__int64 *)&v90 + 1), (__int64)&v13[v37]);
        if ( !v62 || v38 == *v62 )
        {
          v8 = v107;
          goto LABEL_134;
        }
        v8 = v107;
      }
      else if ( v38 == v39 && (*(_BYTE *)v33 & 0x20) == 0 )
      {
        v12 = 1;
        v78 = 1;
      }
    }
    if ( !v12 )
    {
LABEL_20:
      v17 = *((_QWORD *)&v90 + 1);
      goto LABEL_21;
    }
LABEL_135:
    v80 = v31;
    if ( (*v31 & 0xF8) != 0x48 )
      goto LABEL_139;
    v59 = v31[1];
    if ( v59 == -125 )
    {
      v8 += v31[3];
      v31 += 4;
LABEL_138:
      v80 = v31;
      v107 = v8;
      goto LABEL_139;
    }
    if ( v59 == -127 )
    {
      v61 = (unsigned __int8)v31[3] | (((unsigned __int8)v31[4] | (*(unsigned __int16 *)(v31 + 5) << 8)) << 8);
LABEL_150:
      v8 += v61;
      v31 += 7;
      goto LABEL_138;
    }
    if ( v59 != -115 )
      goto LABEL_139;
    v67 = v31[2] & 0xF8;
    if ( v67 == 96 )
    {
      v107 = *(_QWORD *)&v106[8 * v14 + 120];
      v8 = v31[3] + v107;
      v31 += 4;
      goto LABEL_138;
    }
    if ( v67 == -96 )
    {
      v61 = (unsigned __int8)v31[3] | (((unsigned __int8)v31[4] | (*(unsigned __int16 *)(v31 + 5) << 8)) << 8);
      v8 = *(_QWORD *)&v106[8 * v14 + 120];
      v107 = v8;
      goto LABEL_150;
    }
LABEL_139:
    while ( 2 )
    {
      v60 = *v31;
      if ( (*v31 & 0xF8) == 0x58 )
      {
        if ( &v79 && (v8 < v79 || v8 > v81 - 8) )
          goto LABEL_201;
        *(_QWORD *)&v106[8 * (v60 & 7) + 120] = *(_QWORD *)v8;
        v8 = v107 + 8;
        ++v31;
LABEL_159:
        v80 = v31;
        v107 = v8;
        continue;
      }
      break;
    }
    if ( (v60 & 0xF0) == 0x40 )
    {
      v64 = v31[1];
      if ( (v64 & 0xF8) == 0x58 )
      {
        if ( &v79 )
        {
          if ( v8 < v79 )
            goto LABEL_201;
          if ( v8 > v81 - 8 )
          {
            VirtualMemory = -1073741784;
            v84 = -1073741784;
            goto LABEL_52;
          }
        }
        *(_QWORD *)&v106[8 * (v64 & 7 | (8 * (v60 & 1))) + 120] = *(_QWORD *)v8;
        v8 = v107 + 8;
        v31 += 2;
        goto LABEL_159;
      }
    }
    if ( &v79 )
    {
      if ( v8 < v79 )
        goto LABEL_201;
      if ( v8 > v81 - 8 )
      {
        VirtualMemory = -1073741784;
        v84 = -1073741784;
        goto LABEL_52;
      }
    }
    v108 = *(char **)v8;
    v8 += 8LL;
    v107 = v8;
    if ( v72 != (_BYTE *)-64LL )
      v73 = 0;
LABEL_51:
    VirtualMemory = 0;
    v84 = 0;
LABEL_52:
    v4 = v82;
    v89 = VirtualMemory;
    v7 = v87;
    v5 = v94;
    v6 = v100;
LABEL_53:
    if ( VirtualMemory >= 0 && v108 )
    {
      if ( v7 >= v4 )
      {
        *(_QWORD *)(v6 + 8LL * (v7 - v4)) = v108;
        v8 = v107;
      }
      v87 = ++v7;
      if ( v7 < v5 )
        continue;
    }
    return v7;
  }
  v75 = 0;
  return v7;
}
