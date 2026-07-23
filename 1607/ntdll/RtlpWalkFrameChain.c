/*
 * XREFs of RtlpWalkFrameChain @ 0x1800326C0
 * Callers:
 *     RtlWalkFrameChain @ 0x180032640 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x180032680 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180033690 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpSameFunction @ 0x180078BD4 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088E54 (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpTrivialFunction @ 0x1800A5B7C (RtlpTrivialFunction.c)
 *     RtlpUnwindEpilogue @ 0x1800A5BD4 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext @ 0x1800AA0D0 (RtlpCaptureContext.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // ebx
  char *v8; // r15
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  char *v12; // rcx
  int v13; // edi
  _BYTE *v14; // rdx
  int v15; // esi
  char v16; // cl
  char v17; // cl
  __int64 v18; // rbx
  char v19; // r14
  unsigned int v20; // esi
  _BYTE *v21; // rdi
  __int64 v22; // r8
  _BYTE *v23; // rdx
  char *v24; // rcx
  NTSTATUS VirtualMemory; // eax
  unsigned int *v26; // r13
  unsigned __int64 *v27; // r9
  _BYTE *v28; // rcx
  char *v29; // r12
  int v30; // ebx
  char *v31; // r14
  unsigned int v32; // esi
  _BYTE *v33; // rdx
  unsigned int v34; // eax
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
  char *v52; // rdx
  __int64 v53; // rcx
  char v54; // r8
  int v55; // eax
  _DWORD *v56; // rax
  char v57; // al
  char v58; // cl
  int v59; // ecx
  char *v60; // rdx
  char **v61; // rcx
  char **v62; // r8
  char v63; // r8
  char v64; // r8
  __int64 v65; // r15
  __int64 v66; // rcx
  unsigned int v67; // ecx
  char v68; // al
  char *v69; // rcx
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
  char *v81; // [rsp+68h] [rbp-5F0h] BYREF
  __int16 v82; // [rsp+70h] [rbp-5E8h]
  unsigned int i; // [rsp+74h] [rbp-5E4h]
  NTSTATUS v84; // [rsp+78h] [rbp-5E0h]
  unsigned int v85; // [rsp+7Ch] [rbp-5DCh]
  int v86; // [rsp+80h] [rbp-5D8h]
  int v87; // [rsp+84h] [rbp-5D4h]
  int v88; // [rsp+88h] [rbp-5D0h]
  char *v89; // [rsp+90h] [rbp-5C8h]
  int v90; // [rsp+98h] [rbp-5C0h]
  unsigned int v91; // [rsp+9Ch] [rbp-5BCh]
  __int128 v92; // [rsp+A0h] [rbp-5B8h]
  __int64 v93; // [rsp+B0h] [rbp-5A8h]
  int v94; // [rsp+B8h] [rbp-5A0h]
  int v95; // [rsp+BCh] [rbp-59Ch]
  unsigned int v96; // [rsp+C0h] [rbp-598h]
  unsigned __int64 v97; // [rsp+C8h] [rbp-590h]
  char *v98; // [rsp+D0h] [rbp-588h]
  char *v99; // [rsp+D8h] [rbp-580h]
  unsigned int *v100; // [rsp+E0h] [rbp-578h]
  __int64 v101; // [rsp+E8h] [rbp-570h]
  _BYTE *v102; // [rsp+F8h] [rbp-560h]
  _BYTE *v103; // [rsp+100h] [rbp-558h]
  unsigned int *v104; // [rsp+118h] [rbp-540h]
  _BYTE MemoryInformation[48]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v106[152]; // [rsp+150h] [rbp-508h] BYREF
  char *v107; // [rsp+1E8h] [rbp-470h]
  PVOID BaseAddress; // [rsp+248h] [rbp-410h]
  _QWORD v109[102]; // [rsp+2F0h] [rbp-368h] BYREF

  v4 = a4;
  v85 = a4;
  v5 = a2;
  v96 = a2;
  v6 = a1;
  v101 = a1;
  v7 = 0;
  if ( !RtlpGetStackLimits(&v79, (void **)&v81) )
    return 0LL;
  RtlpCaptureContext(v106);
  v73 = 0;
  v88 = 0;
  v92 = xmmword_180163430;
  v93 = qword_180163440;
  v8 = v107;
LABEL_54:
  if ( ((unsigned __int8)v8 & 7) == 0 && (unsigned __int64)v8 >= v79 && v8 < v81 )
  {
    v75 = 1;
    v26 = (unsigned int *)RtlpLookupFunctionEntryForStackWalks(BaseAddress);
    v104 = v26;
    if ( !v26 )
      return v7;
    HIDWORD(v9) = 0;
    VirtualMemory = 0;
    v87 = 0;
    v27 = (unsigned __int64 *)*((_QWORD *)&v92 + 1);
    v28 = (_BYTE *)(*((_QWORD *)&v92 + 1) + v26[2]);
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
      v87 = VirtualMemory;
      if ( VirtualMemory >= 0 && (MemoryInformation[36] & 0x40) != 0 )
      {
        v87 = -1073741823;
        return v7;
      }
      HIDWORD(v9) = 0;
      v27 = (unsigned __int64 *)*((_QWORD *)&v92 + 1);
    }
    if ( VirtualMemory < 0 )
    {
      v8 = v107;
      goto LABEL_49;
    }
    v29 = (char *)BaseAddress;
    v100 = v26;
    v30 = 0;
    v90 = 0;
    v31 = (char *)v27 + v26[2];
    v32 = *v31 & 7;
    if ( !v73 )
    {
      v30 = 1;
      v90 = 1;
    }
    LODWORD(v9) = 0;
    v95 = 0;
    v10 = (_DWORD)BaseAddress - DWORD2(v92) - *v26;
    v11 = (unsigned __int8)v31[3];
    if ( (v11 & 0xF) != 0 )
    {
      if ( v10 >= (unsigned __int8)v31[1] || (*v31 & 0x20) != 0 )
      {
        v40 = v31[3];
        v41 = (unsigned __int8)v11;
        v8 = v107;
      }
      else
      {
        v65 = 0LL;
        for ( i = 0; (unsigned int)v65 < (unsigned __int8)v31[2]; i = v65 )
        {
          v66 = *(unsigned __int16 *)&v31[2 * v65 + 4];
          v82 = v66;
          if ( (BYTE1(v66) & 0xF) == 3 )
            break;
          v65 = (unsigned int)RtlpUnwindOpSlots(v66, v11, v9, v27) + (unsigned int)v65;
        }
        v67 = (unsigned __int8)v31[2 * v65 + 4];
        v8 = v107;
        v27 = (unsigned __int64 *)*((_QWORD *)&v92 + 1);
        if ( v10 < v67 )
        {
          v89 = v107;
LABEL_6:
          if ( v30 )
            goto LABEL_20;
          v13 = 0;
          v78 = 0;
          if ( v32 >= 2 )
          {
            v42 = v31[2];
            if ( !v42 )
              goto LABEL_20;
            v43 = *((_WORD *)v31 + 2);
            v82 = v43;
            if ( (HIBYTE(v43) & 0xF) != 6 )
              goto LABEL_20;
            v44 = (unsigned __int8)v43;
            v45 = (_DWORD)v29 - (_DWORD)v27;
            if ( (v43 & 0x1000) != 0 )
            {
              v46 = v26[1] - (unsigned __int8)v43;
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
                    || (v48 = *(_WORD *)&v31[2 * j + 4], v82 = v48, (HIBYTE(v48) & 0xF) != 6)
                    || (v49 = HIBYTE(v48) >> 4 << 8,
                        v50 = (unsigned __int8)v48 + v49 == 0,
                        v51 = (unsigned __int8)v48 + v49,
                        v86 = v51,
                        v50) )
                  {
                    v27 = (unsigned __int64 *)*((_QWORD *)&v92 + 1);
                    goto LABEL_20;
                  }
                  v46 = v26[1] - v51;
                  v86 = v46;
                  if ( v45 - v46 < v44 )
                    break;
                }
                v78 = 1;
              }
              RtlpUnwindEpilogue(
                DWORD2(v92),
                v46,
                v45 - v46,
                (_DWORD)v26,
                (__int64)v106,
                0LL,
                (__int64)&v79,
                (__int64)&v81);
              if ( v72 != (_BYTE *)-64LL )
                v73 = 0;
              v8 = v107;
              goto LABEL_47;
            }
            v86 = 0;
            goto LABEL_98;
          }
          v14 = v29;
          v80 = v29;
          v15 = 0;
          v94 = 0;
          v16 = *v29;
          if ( *v29 == 72 )
          {
            if ( v29[1] == -125 && v29[2] == -60 )
            {
              v14 = v29 + 4;
              goto LABEL_136;
            }
            if ( v29[1] == -127 && v29[2] == -60 )
              goto LABEL_138;
          }
          if ( (v16 & 0xFE) == 0x48 && v29[1] == -115 )
          {
            v54 = v29[2];
            v15 = v54 & 7 | (8 * (v16 & 1));
            v94 = v15;
            if ( v15 )
            {
              if ( v15 == (v31[3] & 0xF) )
              {
                v63 = v54 & 0xF8;
                if ( v63 == 96 )
                {
                  v14 = v29 + 4;
                }
                else
                {
                  if ( v63 != -96 )
                    goto LABEL_10;
LABEL_138:
                  v14 = v29 + 7;
                }
LABEL_136:
                v80 = v14;
              }
            }
          }
LABEL_10:
          while ( (*v14 & 0xF8) == 0x58 )
          {
            ++v14;
LABEL_143:
            v80 = v14;
          }
          if ( (*v14 & 0xF0) == 0x40 && (v14[1] & 0xF8) == 0x58 )
          {
            v14 += 2;
            goto LABEL_143;
          }
          if ( *v14 == 0xF2 )
            v80 = ++v14;
          v17 = *v14;
          if ( (unsigned __int8)(*v14 + 62) <= 1u || v17 == -13 && v14[1] == 0xC3 )
          {
LABEL_124:
            v78 = 1;
            goto LABEL_125;
          }
          if ( ((v17 + 23) & 0xFD) != 0 )
          {
            if ( v17 == -1 && v14[1] == 37 )
              goto LABEL_124;
            if ( (v17 & 0xF8) == 0x48 && v14[1] == 0xFF && (v14[2] & 0x38) == 0x20 )
            {
              v13 = 1;
              v78 = 1;
            }
          }
          else
          {
            v97 = v14 - (_BYTE *)v27;
            if ( v17 == -21 )
              v37 = (char)v14[1] + 2;
            else
              v37 = *(_DWORD *)(v14 + 1) + 5;
            v38 = v37 + v14 - (_BYTE *)v27;
            v97 = v38;
            v39 = *v26;
            if ( v38 < v39 || v38 >= v26[1] )
            {
              v56 = (_DWORD *)RtlpSameFunction(v26, v27, &v14[v37]);
              if ( !v56 || v38 == *v56 )
              {
                v8 = v107;
                goto LABEL_124;
              }
              v8 = v107;
              v27 = (unsigned __int64 *)*((_QWORD *)&v92 + 1);
            }
            else if ( v38 == v39 && (*v31 & 0x20) == 0 )
            {
              v13 = 1;
              v78 = 1;
            }
          }
          if ( !v13 )
          {
LABEL_20:
            v91 = 0;
            while ( 1 )
            {
              LODWORD(v18) = 0;
              v74 = 0;
              v19 = 0;
              v77 = 0;
              v20 = (_DWORD)v29 - *v26 - (_DWORD)v27;
              v21 = (char *)v27 + v26[2];
              while ( (unsigned int)v18 < (unsigned __int8)v21[2] )
              {
                v22 = (unsigned __int8)v21[2 * (unsigned int)v18 + 5] >> 4;
                v23 = &v21[2 * (unsigned int)v18];
                if ( v20 >= (unsigned __int8)v23[4] )
                {
                  if ( (v21[2 * (unsigned int)v18 + 5] & 0xF) != 0 )
                  {
                    if ( (v21[2 * (unsigned int)v18 + 5] & 0xF) == 4 )
                    {
                      v18 = (unsigned int)(v18 + 1);
                      v74 = v18;
                      v76 = 8 * *(unsigned __int16 *)&v21[2 * v18 + 4];
                      v24 = &v89[v76];
                      if ( v72 != (_BYTE *)-88LL && ((unsigned __int64)v24 < v79 || v24 > v81 - 8) )
                        goto LABEL_199;
                      *(_QWORD *)&v106[8 * v22 + 120] = *(_QWORD *)v24;
                      v8 = v107;
                      goto LABEL_33;
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
                        v107 = *(char **)&v106[8 * (v21[3] & 0xF) + 120];
                        v8 = &v107[-(v21[3] & 0xF0)];
                        break;
                      case 5:
                        v18 = (unsigned int)(v18 + 2);
                        v74 = v18;
                        v76 = *(unsigned __int16 *)&v21[2 * (unsigned int)(v18 - 1) + 4];
                        v76 += *(unsigned __int16 *)&v21[2 * v18 + 4] << 16;
                        v69 = &v89[v76];
                        if ( v72 != (_BYTE *)-88LL && ((unsigned __int64)v69 < v79 || v69 > v81 - 8) )
                          goto LABEL_199;
                        *(_QWORD *)&v106[8 * v22 + 120] = *(_QWORD *)v69;
                        v8 = v107;
                        goto LABEL_33;
                      case 6:
                        LODWORD(v18) = v18 + 1;
                        v74 = v18;
                        goto LABEL_33;
                      case 7:
                        LODWORD(v18) = v18 + 2;
                        v74 = v18;
                        goto LABEL_33;
                      case 8:
                        v18 = (unsigned int)(v18 + 1);
                        v74 = v18;
                        v76 = 16 * *(unsigned __int16 *)&v21[2 * v18 + 4];
                        v52 = &v89[v76];
                        if ( v72 != (_BYTE *)-88LL && ((unsigned __int64)v52 < v79 || v52 > v81 - 16) )
                          goto LABEL_199;
                        v53 = 2LL * (unsigned int)v22;
                        v109[v53] = *(_QWORD *)v52;
                        v109[v53 + 1] = *((_QWORD *)v52 + 1);
                        v8 = v107;
                        goto LABEL_33;
                      case 9:
                        v18 = (unsigned int)(v18 + 2);
                        v74 = v18;
                        v76 = *(unsigned __int16 *)&v21[2 * (unsigned int)(v18 - 1) + 4];
                        v76 += *(unsigned __int16 *)&v21[2 * v18 + 4] << 16;
                        v27 = (unsigned __int64 *)&v89[v76];
                        if ( v72 != (_BYTE *)-88LL && ((unsigned __int64)v27 < v79 || v27 > (unsigned __int64 *)v81 - 2) )
                          goto LABEL_199;
                        v70 = 2LL * (unsigned int)v22;
                        v109[v70] = *v27;
                        v109[v70 + 1] = v27[1];
                        v8 = v107;
                        goto LABEL_33;
                      case 0xA:
                        v19 = 1;
                        v77 = 1;
                        v60 = v8;
                        v98 = v8;
                        v61 = (char **)(v8 + 24);
                        v99 = v8 + 24;
                        if ( (_DWORD)v22 )
                        {
                          v60 = v8 + 8;
                          v98 = v8 + 8;
                          v61 = (char **)(v8 + 32);
                          v99 = v8 + 32;
                        }
                        v27 = &v79;
                        if ( &v79 )
                        {
                          if ( (unsigned __int64)v60 < v79 )
                            goto LABEL_199;
                          v62 = (char **)v81;
                          if ( v60 > v81 - 8 )
                            goto LABEL_199;
                        }
                        else
                        {
                          v62 = (char **)v81;
                        }
                        if ( &v79 && ((unsigned __int64)v61 < v79 || v61 > v62 - 1) )
                          goto LABEL_199;
                        BaseAddress = *(PVOID *)v60;
                        v8 = *v61;
                        break;
                      default:
                        RtlRaiseStatus(-1073741569);
                    }
                  }
                  else
                  {
                    if ( &v79 && ((unsigned __int64)v8 < v79 || v8 > v81 - 8) )
                      goto LABEL_199;
                    *(_QWORD *)&v106[8 * v22 + 120] = *(_QWORD *)v8;
                    v8 = v107 + 8;
                  }
                  v107 = v8;
LABEL_33:
                  LODWORD(v18) = v18 + 1;
                  goto LABEL_34;
                }
                LODWORD(v18) = RtlpUnwindOpSlots(*((unsigned __int16 *)v23 + 2), v23, v22, v27) + v18;
                v8 = v107;
LABEL_34:
                v74 = v18;
              }
              if ( (*v21 & 0x20) == 0 )
              {
                if ( !v19 )
                {
                  if ( &v79 )
                  {
                    if ( (unsigned __int64)v8 < v79 )
                    {
LABEL_199:
                      VirtualMemory = -1073741784;
                      goto LABEL_48;
                    }
                    if ( v8 > v81 - 8 )
                    {
                      VirtualMemory = -1073741784;
                      goto LABEL_48;
                    }
                  }
                  BaseAddress = *(PVOID *)v8;
                  v8 += 8;
                  v107 = v8;
                }
                if ( &v73 )
                  v73 = v19;
                v100 = v26;
                if ( v95 )
                {
                  v33 = (_BYTE *)(*((_QWORD *)&v92 + 1) + v26[2]);
                  if ( (unsigned int)v29 - *v26 - DWORD2(v92) >= (unsigned __int8)v33[1]
                    && ((*v33 >> 3) & (unsigned __int8)v95) != 0 )
                  {
                    v34 = (unsigned __int8)v33[2];
                    i = v34;
                    if ( (v34 & 1) != 0 )
                      i = ++v34;
                    v103 = &v33[2 * v34 + 8];
                  }
                }
                goto LABEL_47;
              }
              v55 = (unsigned __int8)v21[2];
              v74 = v55;
              if ( (v55 & 1) != 0 )
                v74 = ++v55;
              v26 = (unsigned int *)&v21[2 * v55 + 4];
              ++v91;
              v27 = (unsigned __int64 *)*((_QWORD *)&v92 + 1);
              if ( v91 > 0x20 )
                RtlRaiseStatus(-1073741569);
            }
          }
LABEL_125:
          v80 = v29;
          if ( (*v29 & 0xF8) != 0x48 )
            goto LABEL_129;
          v57 = v29[1];
          if ( v57 == -125 )
          {
            v8 += v29[3];
            v29 += 4;
            goto LABEL_128;
          }
          if ( v57 == -127 )
          {
            v59 = (unsigned __int8)v29[3] | (((unsigned __int8)v29[4] | (*(unsigned __int16 *)(v29 + 5) << 8)) << 8);
            goto LABEL_141;
          }
          if ( v57 != -115 )
            goto LABEL_129;
          v68 = v29[2] & 0xF8;
          if ( v68 == 96 )
          {
            v107 = *(char **)&v106[8 * v15 + 120];
            v8 = &v107[v29[3]];
            v29 += 4;
            goto LABEL_128;
          }
          if ( v68 == -96 )
          {
            v59 = (unsigned __int8)v29[3] | (((unsigned __int8)v29[4] | (*(unsigned __int16 *)(v29 + 5) << 8)) << 8);
            v8 = *(char **)&v106[8 * v15 + 120];
            v107 = v8;
LABEL_141:
            v8 += v59;
            v29 += 7;
LABEL_128:
            v80 = v29;
            v107 = v8;
            goto LABEL_129;
          }
          while ( 1 )
          {
LABEL_129:
            v58 = *v29;
            if ( (*v29 & 0xF8) == 0x58 )
            {
              if ( &v79 && ((unsigned __int64)v8 < v79 || v8 > v81 - 8) )
                goto LABEL_199;
              *(_QWORD *)&v106[8 * (v58 & 7) + 120] = *(_QWORD *)v8;
              v8 = v107 + 8;
              ++v29;
            }
            else
            {
              if ( (v58 & 0xF0) != 0x40 || (v64 = v29[1], (v64 & 0xF8) != 0x58) )
              {
                if ( &v79 )
                {
                  if ( (unsigned __int64)v8 < v79 )
                    goto LABEL_199;
                  if ( v8 > v81 - 8 )
                  {
                    VirtualMemory = -1073741784;
                    goto LABEL_48;
                  }
                }
                BaseAddress = *(PVOID *)v8;
                v8 += 8;
                v107 = v8;
                if ( v72 != (_BYTE *)-64LL )
                  v73 = 0;
LABEL_47:
                VirtualMemory = 0;
LABEL_48:
                v4 = v85;
                v84 = VirtualMemory;
                v87 = VirtualMemory;
                v7 = v88;
                v5 = v96;
                v6 = v101;
LABEL_49:
                if ( VirtualMemory < 0 || !BaseAddress )
                  return v7;
                if ( v7 >= v4 )
                {
                  *(_QWORD *)(v6 + 8LL * (v7 - v4)) = BaseAddress;
                  v8 = v107;
                }
                v88 = ++v7;
                if ( v7 >= v5 )
                  return v7;
                goto LABEL_54;
              }
              if ( &v79 )
              {
                if ( (unsigned __int64)v8 < v79 )
                  goto LABEL_199;
                if ( v8 > v81 - 8 )
                {
                  VirtualMemory = -1073741784;
                  goto LABEL_48;
                }
              }
              *(_QWORD *)&v106[8 * (v64 & 7 | (8 * (v58 & 1))) + 120] = *(_QWORD *)v8;
              v8 = v107 + 8;
              v29 += 2;
            }
            v80 = v29;
            v107 = v8;
          }
        }
        v41 = (unsigned __int8)v31[3];
        v40 = v31[3];
      }
      v12 = (char *)(*(_QWORD *)&v106[8 * (v40 & 0xF) + 120] - (int)(v41 & 0xFFFFFFF0));
    }
    else
    {
      v8 = v107;
      v12 = v107;
    }
    v89 = v12;
    goto LABEL_6;
  }
  v75 = 0;
  return v7;
}
