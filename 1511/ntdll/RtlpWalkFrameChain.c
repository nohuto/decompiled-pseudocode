/*
 * XREFs of RtlpWalkFrameChain @ 0x180032E80
 * Callers:
 *     RtlWalkFrameChain @ 0x180032E00 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x180003788 (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x180032E40 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180033E20 (RtlpLookupFunctionEntryForStackWalks.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpSameFunction @ 0x1800A47C4 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x1800A4828 (RtlpTrivialFunction.c)
 *     RtlpUnwindEpilogue @ 0x1800A4880 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext @ 0x1800A8C90 (RtlpCaptureContext.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // ebx
  char *v8; // r15
  unsigned int v9; // edi
  unsigned __int8 v10; // dl
  char *v11; // rcx
  int v12; // edi
  _BYTE *v13; // rdx
  int v14; // esi
  char v15; // cl
  char v16; // cl
  __int64 v17; // rbx
  char v18; // r14
  unsigned int v19; // esi
  _BYTE *v20; // rdi
  __int64 v21; // r8
  _BYTE *v22; // rdx
  char *v23; // rcx
  NTSTATUS VirtualMemory; // eax
  unsigned int *v25; // r13
  unsigned int v26; // r15d
  ULONG_PTR v27; // r9
  _BYTE *v28; // rcx
  char *v29; // r12
  int v30; // ebx
  ULONG_PTR v31; // r14
  unsigned int v32; // esi
  _BYTE *v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // edx
  char v37; // cl
  int v38; // eax
  int v39; // eax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rcx
  unsigned __int8 v42; // r11
  unsigned __int16 v43; // ax
  unsigned int v44; // ebx
  int v45; // r10d
  int v46; // edx
  unsigned int j; // r8d
  unsigned __int16 v48; // ax
  int v49; // edx
  bool v50; // zf
  int v51; // edx
  char v52; // r8
  char *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  char v57; // al
  char v58; // cl
  char *v59; // rdx
  char **v60; // rcx
  char **v61; // r8
  char v62; // r8
  int v63; // ecx
  char v64; // r8
  unsigned __int16 v65; // cx
  unsigned int v66; // ecx
  _DWORD *v67; // rax
  char v68; // al
  char *v69; // rcx
  char *v70; // r9
  _BYTE v72[32]; // [rsp+0h] [rbp-658h] BYREF
  char v73; // [rsp+40h] [rbp-618h] BYREF
  int v74; // [rsp+44h] [rbp-614h]
  char v75; // [rsp+48h] [rbp-610h]
  unsigned int v76; // [rsp+4Ch] [rbp-60Ch]
  char v77; // [rsp+50h] [rbp-608h]
  int v78; // [rsp+54h] [rbp-604h]
  _BYTE *v79; // [rsp+58h] [rbp-600h]
  char *v80; // [rsp+60h] [rbp-5F8h] BYREF
  unsigned __int64 v81; // [rsp+68h] [rbp-5F0h] BYREF
  unsigned int v82; // [rsp+70h] [rbp-5E8h]
  unsigned __int16 v83; // [rsp+74h] [rbp-5E4h]
  NTSTATUS v84; // [rsp+78h] [rbp-5E0h]
  unsigned int i; // [rsp+7Ch] [rbp-5DCh]
  int v86; // [rsp+80h] [rbp-5D8h]
  int v87; // [rsp+84h] [rbp-5D4h]
  int v88; // [rsp+88h] [rbp-5D0h]
  char *v89; // [rsp+90h] [rbp-5C8h]
  unsigned int v90; // [rsp+98h] [rbp-5C0h]
  int v91; // [rsp+9Ch] [rbp-5BCh]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+A0h] [rbp-5B8h]
  unsigned int v93; // [rsp+B8h] [rbp-5A0h]
  int v94; // [rsp+BCh] [rbp-59Ch]
  int v95; // [rsp+C0h] [rbp-598h]
  _BYTE *v96; // [rsp+C8h] [rbp-590h]
  char *v97; // [rsp+D0h] [rbp-588h]
  unsigned int *v98; // [rsp+D8h] [rbp-580h]
  __int64 v99; // [rsp+E0h] [rbp-578h]
  char *v100; // [rsp+E8h] [rbp-570h]
  unsigned int *v101; // [rsp+F8h] [rbp-560h]
  _BYTE *v102; // [rsp+108h] [rbp-550h]
  _BYTE *v103; // [rsp+118h] [rbp-540h]
  _BYTE MemoryInformation[48]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v105[152]; // [rsp+150h] [rbp-508h] BYREF
  char *v106; // [rsp+1E8h] [rbp-470h]
  PVOID BaseAddress; // [rsp+248h] [rbp-410h]
  _QWORD v108[102]; // [rsp+2F0h] [rbp-368h] BYREF

  v4 = a4;
  v82 = a4;
  v5 = a2;
  v93 = a2;
  v6 = a1;
  v99 = a1;
  v7 = 0;
  if ( !RtlpGetStackLimits(&v81, (void **)&v80) )
    return 0LL;
  RtlpCaptureContext(v105);
  v73 = 0;
  v87 = 0;
  MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  v8 = v106;
LABEL_51:
  if ( ((unsigned __int8)v8 & 7) == 0 && (unsigned __int64)v8 >= v81 && v8 < v80 )
  {
    v75 = 1;
    v25 = (unsigned int *)RtlpLookupFunctionEntryForStackWalks(BaseAddress);
    v101 = v25;
    if ( !v25 )
      return v7;
    v26 = 0;
    VirtualMemory = 0;
    v88 = 0;
    v27 = MitigationOptionsMap.Map[1];
    v28 = (_BYTE *)(MitigationOptionsMap.Map[1] + v25[2]);
    v102 = v28;
    if ( !v28[2] && !v28[1] && (*v28 & 0x20) == 0 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddress,
                        MemoryBasicInformation,
                        MemoryInformation,
                        0x30uLL,
                        0LL);
      v88 = VirtualMemory;
      if ( VirtualMemory >= 0 && (MemoryInformation[36] & 0x40) != 0 )
      {
        v88 = -1073741823;
        return v7;
      }
      v27 = MitigationOptionsMap.Map[1];
    }
    if ( VirtualMemory < 0 )
    {
      v8 = v106;
      goto LABEL_46;
    }
    v29 = (char *)BaseAddress;
    v98 = v25;
    v30 = 0;
    v91 = 0;
    v31 = v27 + v25[2];
    v32 = *(_BYTE *)v31 & 7;
    if ( !v73 )
    {
      v30 = 1;
      v91 = 1;
    }
    v94 = 0;
    v9 = (_DWORD)BaseAddress - LODWORD(MitigationOptionsMap.Map[1]) - *v25;
    v10 = *(_BYTE *)(v31 + 3);
    if ( (v10 & 0xF) != 0 )
    {
      if ( v9 >= *(unsigned __int8 *)(v31 + 1) || (*(_BYTE *)v31 & 0x20) != 0 )
      {
        v37 = *(_BYTE *)(v31 + 3);
        v38 = v10;
        v8 = v106;
      }
      else
      {
        for ( i = 0; v26 < *(unsigned __int8 *)(v31 + 2); i = v26 )
        {
          v65 = *(_WORD *)(v31 + 2LL * v26 + 4);
          v83 = v65;
          if ( (HIBYTE(v65) & 0xF) == 3 )
            break;
          v26 += RtlpUnwindOpSlots(v65);
        }
        v66 = *(unsigned __int8 *)(v31 + 2LL * v26 + 4);
        v8 = v106;
        v27 = MitigationOptionsMap.Map[1];
        if ( v9 < v66 )
        {
          v89 = v106;
LABEL_6:
          if ( v30 )
            goto LABEL_20;
          v12 = 0;
          v78 = 0;
          if ( v32 >= 2 )
          {
            v42 = *(_BYTE *)(v31 + 2);
            if ( !v42 )
              goto LABEL_20;
            v43 = *(_WORD *)(v31 + 4);
            v83 = v43;
            if ( (HIBYTE(v43) & 0xF) != 6 )
              goto LABEL_20;
            v44 = (unsigned __int8)v43;
            v45 = (_DWORD)v29 - v27;
            if ( (v43 & 0x1000) != 0 )
            {
              v46 = v25[1] - (unsigned __int8)v43;
              v86 = v46;
              if ( v45 - v46 < (unsigned int)(unsigned __int8)v43 )
              {
                v78 = 1;
              }
              else
              {
LABEL_98:
                for ( j = 1; ; ++j )
                {
                  i = j;
                  if ( j >= v42
                    || (v48 = *(_WORD *)(v31 + 2LL * j + 4), v83 = v48, (HIBYTE(v48) & 0xF) != 6)
                    || (v49 = HIBYTE(v48) >> 4 << 8,
                        v50 = (unsigned __int8)v48 + v49 == 0,
                        v51 = (unsigned __int8)v48 + v49,
                        v86 = v51,
                        v50) )
                  {
                    v27 = MitigationOptionsMap.Map[1];
                    goto LABEL_20;
                  }
                  v46 = v25[1] - v51;
                  v86 = v46;
                  if ( v45 - v46 < v44 )
                    break;
                }
                v78 = 1;
              }
              RtlpUnwindEpilogue(
                MitigationOptionsMap.Map[1],
                v46,
                v45 - v46,
                (_DWORD)v25,
                (__int64)v105,
                0LL,
                (__int64)&v81,
                (__int64)&v80);
              if ( v72 != (_BYTE *)-64LL )
                v73 = 0;
              v8 = v106;
              goto LABEL_44;
            }
            v86 = 0;
            goto LABEL_98;
          }
          v13 = v29;
          v79 = v29;
          v14 = 0;
          v95 = 0;
          v15 = *v29;
          if ( *v29 == 72 )
          {
            if ( v29[1] == -125 && v29[2] == -60 )
            {
              v13 = v29 + 4;
              goto LABEL_137;
            }
            if ( v29[1] == -127 && v29[2] == -60 )
              goto LABEL_155;
          }
          if ( (v15 & 0xFE) == 0x48 && v29[1] == -115 )
          {
            v52 = v29[2];
            v14 = v52 & 7 | (8 * (v15 & 1));
            v95 = v14;
            if ( v14 )
            {
              if ( v14 == (*(_BYTE *)(v31 + 3) & 0xF) )
              {
                v64 = v52 & 0xF8;
                if ( v64 == 96 )
                {
                  v13 = v29 + 4;
                }
                else
                {
                  if ( v64 != -96 )
                    goto LABEL_10;
LABEL_155:
                  v13 = v29 + 7;
                }
LABEL_137:
                v79 = v13;
              }
            }
          }
LABEL_10:
          while ( (*v13 & 0xF8) == 0x58 )
          {
            ++v13;
LABEL_144:
            v79 = v13;
          }
          if ( (*v13 & 0xF0) == 0x40 && (v13[1] & 0xF8) == 0x58 )
          {
            v13 += 2;
            goto LABEL_144;
          }
          if ( *v13 == 0xF2 )
            v79 = ++v13;
          v16 = *v13;
          if ( (unsigned __int8)(*v13 + 62) <= 1u || v16 == -13 && v13[1] == 0xC3 )
          {
LABEL_125:
            v78 = 1;
            goto LABEL_126;
          }
          if ( ((v16 + 23) & 0xFD) != 0 )
          {
            if ( v16 == -1 && v13[1] == 37 )
              goto LABEL_125;
            if ( (v16 & 0xF8) == 0x48 && v13[1] == 0xFF && (v13[2] & 0x38) == 0x20 )
            {
              v12 = 1;
              v78 = 1;
            }
          }
          else
          {
            v96 = &v13[-v27];
            if ( v16 == -21 )
              v39 = (char)v13[1] + 2;
            else
              v39 = *(_DWORD *)(v13 + 1) + 5;
            v40 = (unsigned __int64)&v13[v39 - v27];
            v96 = (_BYTE *)v40;
            v41 = *v25;
            if ( v40 < v41 || v40 >= v25[1] )
            {
              v67 = (_DWORD *)RtlpSameFunction(v25, v27, &v13[v39]);
              if ( !v67 || v40 == *v67 )
              {
                v8 = v106;
                goto LABEL_125;
              }
              v8 = v106;
              v27 = MitigationOptionsMap.Map[1];
            }
            else if ( v40 == v41 && (*(_BYTE *)v31 & 0x20) == 0 )
            {
              v12 = 1;
              v78 = 1;
            }
          }
          if ( !v12 )
          {
LABEL_20:
            v90 = 0;
            while ( 1 )
            {
              LODWORD(v17) = 0;
              v74 = 0;
              v18 = 0;
              v77 = 0;
              v19 = (_DWORD)v29 - *v25 - v27;
              v20 = (_BYTE *)(v27 + v25[2]);
              while ( (unsigned int)v17 < (unsigned __int8)v20[2] )
              {
                v21 = (unsigned __int8)v20[2 * (unsigned int)v17 + 5] >> 4;
                v22 = &v20[2 * (unsigned int)v17];
                if ( v19 >= (unsigned __int8)v22[4] )
                {
                  if ( (v20[2 * (unsigned int)v17 + 5] & 0xF) != 0 )
                  {
                    if ( (v20[2 * (unsigned int)v17 + 5] & 0xF) == 4 )
                    {
                      v17 = (unsigned int)(v17 + 1);
                      v74 = v17;
                      v76 = 8 * *(unsigned __int16 *)&v20[2 * v17 + 4];
                      v23 = &v89[v76];
                      if ( &v81 && ((unsigned __int64)v23 < v81 || v23 > v80 - 8) )
                        goto LABEL_201;
                      *(_QWORD *)&v105[8 * v21 + 120] = *(_QWORD *)v23;
                      v8 = v106;
                      goto LABEL_33;
                    }
                    switch ( v20[2 * (unsigned int)v17 + 5] & 0xF )
                    {
                      case 1:
                        v17 = (unsigned int)(v17 + 1);
                        v74 = v17;
                        v35 = *(unsigned __int16 *)&v20[2 * v17 + 4];
                        v76 = v35;
                        if ( (_DWORD)v21 )
                        {
                          v17 = (unsigned int)(v17 + 1);
                          v74 = v17;
                          v36 = (*(unsigned __int16 *)&v20[2 * v17 + 4] << 16) + v35;
                        }
                        else
                        {
                          v36 = 8 * v35;
                        }
                        v76 = v36;
                        v8 += v36;
                        break;
                      case 2:
                        v8 += (unsigned int)(8 * v21 + 8);
                        break;
                      case 3:
                        v106 = *(char **)&v105[8 * (v20[3] & 0xF) + 120];
                        v8 = &v106[-(v20[3] & 0xF0)];
                        break;
                      case 5:
                        v17 = (unsigned int)(v17 + 2);
                        v74 = v17;
                        v76 = *(unsigned __int16 *)&v20[2 * (unsigned int)(v17 - 1) + 4];
                        v76 += *(unsigned __int16 *)&v20[2 * v17 + 4] << 16;
                        v69 = &v89[v76];
                        if ( &v81 && ((unsigned __int64)v69 < v81 || v69 > v80 - 8) )
                          goto LABEL_201;
                        *(_QWORD *)&v105[8 * v21 + 120] = *(_QWORD *)v69;
                        v8 = v106;
                        goto LABEL_33;
                      case 6:
                        LODWORD(v17) = v17 + 1;
                        v74 = v17;
                        goto LABEL_33;
                      case 7:
                        LODWORD(v17) = v17 + 2;
                        v74 = v17;
                        goto LABEL_33;
                      case 8:
                        v17 = (unsigned int)(v17 + 1);
                        v74 = v17;
                        v76 = 16 * *(unsigned __int16 *)&v20[2 * v17 + 4];
                        v53 = &v89[v76];
                        if ( &v81 && ((unsigned __int64)v53 < v81 || v53 > v80 - 16) )
                          goto LABEL_201;
                        v54 = 2LL * (unsigned int)v21;
                        v108[2 * (unsigned int)v21] = *(_QWORD *)v53;
                        v55 = *((_QWORD *)v53 + 1);
                        goto LABEL_112;
                      case 9:
                        v17 = (unsigned int)(v17 + 2);
                        v74 = v17;
                        v76 = *(unsigned __int16 *)&v20[2 * (unsigned int)(v17 - 1) + 4];
                        v76 += *(unsigned __int16 *)&v20[2 * v17 + 4] << 16;
                        v70 = &v89[v76];
                        if ( &v81 && ((unsigned __int64)v70 < v81 || v70 > v80 - 16) )
                          goto LABEL_201;
                        v54 = 2LL * (unsigned int)v21;
                        v108[2 * (unsigned int)v21] = *(_QWORD *)v70;
                        v55 = *((_QWORD *)v70 + 1);
LABEL_112:
                        v108[v54 + 1] = v55;
                        v8 = v106;
                        goto LABEL_33;
                      case 0xA:
                        v18 = 1;
                        v77 = 1;
                        v59 = v8;
                        v97 = v8;
                        v60 = (char **)(v8 + 24);
                        v100 = v8 + 24;
                        if ( (_DWORD)v21 )
                        {
                          v59 = v8 + 8;
                          v97 = v8 + 8;
                          v60 = (char **)(v8 + 32);
                          v100 = v8 + 32;
                        }
                        if ( &v81 )
                        {
                          if ( (unsigned __int64)v59 < v81 )
                            goto LABEL_201;
                          v61 = (char **)v80;
                          if ( v59 > v80 - 8 )
                            goto LABEL_201;
                        }
                        else
                        {
                          v61 = (char **)v80;
                        }
                        if ( &v81 && ((unsigned __int64)v60 < v81 || v60 > v61 - 1) )
                          goto LABEL_201;
                        BaseAddress = *(PVOID *)v59;
                        v8 = *v60;
                        break;
                      default:
                        RtlRaiseStatus(-1073741569);
                    }
                  }
                  else
                  {
                    if ( &v81 && ((unsigned __int64)v8 < v81 || v8 > v80 - 8) )
                      goto LABEL_201;
                    *(_QWORD *)&v105[8 * v21 + 120] = *(_QWORD *)v8;
                    v8 = v106 + 8;
                  }
                  v106 = v8;
LABEL_33:
                  LODWORD(v17) = v17 + 1;
                  goto LABEL_34;
                }
                LODWORD(v17) = RtlpUnwindOpSlots(*((_WORD *)v22 + 2)) + v17;
                v8 = v106;
LABEL_34:
                v74 = v17;
              }
              if ( (*v20 & 0x20) == 0 )
              {
                if ( !v18 )
                {
                  if ( &v81 )
                  {
                    if ( (unsigned __int64)v8 < v81 )
                    {
LABEL_201:
                      VirtualMemory = -1073741784;
                      goto LABEL_45;
                    }
                    if ( v8 > v80 - 8 )
                    {
                      VirtualMemory = -1073741784;
                      goto LABEL_45;
                    }
                  }
                  BaseAddress = *(PVOID *)v8;
                  v8 += 8;
                  v106 = v8;
                }
                if ( &v73 )
                  v73 = v18;
                v98 = v25;
                if ( v94 )
                {
                  v33 = (_BYTE *)(MitigationOptionsMap.Map[1] + v25[2]);
                  if ( (unsigned int)v29 - *v25 - LODWORD(MitigationOptionsMap.Map[1]) >= (unsigned __int8)v33[1]
                    && ((*v33 >> 3) & (unsigned __int8)v94) != 0 )
                  {
                    v34 = (unsigned __int8)v33[2];
                    i = v34;
                    if ( (v34 & 1) != 0 )
                      i = ++v34;
                    v103 = &v33[2 * v34 + 8];
                  }
                }
                goto LABEL_44;
              }
              v56 = (unsigned __int8)v20[2];
              v74 = v56;
              if ( (v56 & 1) != 0 )
                v74 = ++v56;
              v25 = (unsigned int *)&v20[2 * v56 + 4];
              ++v90;
              v27 = MitigationOptionsMap.Map[1];
              if ( v90 > 0x20 )
                RtlRaiseStatus(-1073741569);
            }
          }
LABEL_126:
          v79 = v29;
          if ( (*v29 & 0xF8) != 0x48 )
            goto LABEL_130;
          v57 = v29[1];
          if ( v57 == -125 )
          {
            v8 += v29[3];
            v29 += 4;
            goto LABEL_129;
          }
          if ( v57 == -127 )
          {
            v63 = (unsigned __int8)v29[3] | (((unsigned __int8)v29[4] | (*(unsigned __int16 *)(v29 + 5) << 8)) << 8);
            goto LABEL_158;
          }
          if ( v57 != -115 )
            goto LABEL_130;
          v68 = v29[2] & 0xF8;
          if ( v68 == 96 )
          {
            v106 = *(char **)&v105[8 * v14 + 120];
            v8 = &v106[v29[3]];
            v29 += 4;
            goto LABEL_129;
          }
          if ( v68 == -96 )
          {
            v63 = (unsigned __int8)v29[3] | (((unsigned __int8)v29[4] | (*(unsigned __int16 *)(v29 + 5) << 8)) << 8);
            v8 = *(char **)&v105[8 * v14 + 120];
            v106 = v8;
LABEL_158:
            v8 += v63;
            v29 += 7;
LABEL_129:
            v79 = v29;
            v106 = v8;
            goto LABEL_130;
          }
          while ( 1 )
          {
LABEL_130:
            v58 = *v29;
            if ( (*v29 & 0xF8) == 0x58 )
            {
              if ( &v81 && ((unsigned __int64)v8 < v81 || v8 > v80 - 8) )
                goto LABEL_201;
              *(_QWORD *)&v105[8 * (v58 & 7) + 120] = *(_QWORD *)v8;
              v8 = v106 + 8;
              ++v29;
            }
            else
            {
              if ( (v58 & 0xF0) != 0x40 || (v62 = v29[1], (v62 & 0xF8) != 0x58) )
              {
                if ( &v81 )
                {
                  if ( (unsigned __int64)v8 < v81 )
                    goto LABEL_201;
                  if ( v8 > v80 - 8 )
                  {
                    VirtualMemory = -1073741784;
                    goto LABEL_45;
                  }
                }
                BaseAddress = *(PVOID *)v8;
                v8 += 8;
                v106 = v8;
                if ( v72 != (_BYTE *)-64LL )
                  v73 = 0;
LABEL_44:
                VirtualMemory = 0;
LABEL_45:
                v4 = v82;
                v84 = VirtualMemory;
                v88 = VirtualMemory;
                v7 = v87;
                v5 = v93;
                v6 = v99;
LABEL_46:
                if ( VirtualMemory < 0 || !BaseAddress )
                  return v7;
                if ( v7 >= v4 )
                {
                  *(_QWORD *)(v6 + 8LL * (v7 - v4)) = BaseAddress;
                  v8 = v106;
                }
                v87 = ++v7;
                if ( v7 >= v5 )
                  return v7;
                goto LABEL_51;
              }
              if ( &v81 )
              {
                if ( (unsigned __int64)v8 < v81 )
                  goto LABEL_201;
                if ( v8 > v80 - 8 )
                {
                  VirtualMemory = -1073741784;
                  goto LABEL_45;
                }
              }
              *(_QWORD *)&v105[8 * (v62 & 7 | (8 * (v58 & 1))) + 120] = *(_QWORD *)v8;
              v8 = v106 + 8;
              v29 += 2;
            }
            v79 = v29;
            v106 = v8;
          }
        }
        v38 = *(unsigned __int8 *)(v31 + 3);
        v37 = *(_BYTE *)(v31 + 3);
      }
      v11 = (char *)(*(_QWORD *)&v105[8 * (v37 & 0xF) + 120] - (int)(v38 & 0xFFFFFFF0));
    }
    else
    {
      v8 = v106;
      v11 = v106;
    }
    v89 = v11;
    goto LABEL_6;
  }
  v75 = 0;
  return v7;
}
