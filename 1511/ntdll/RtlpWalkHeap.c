/*
 * XREFs of RtlpWalkHeap @ 0x1800916EC
 * Callers:
 *     RtlpWalkHeapInternal @ 0x18004FCE4 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x1800867AC (RtlpSetHeapWalkEntryOverheadBytes.c)
 *     RtlpWalkLFHBlock @ 0x180091FA4 (RtlpWalkLFHBlock.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     RtlpGetExtraStuffPointerUnsafe @ 0x1800E102C (RtlpGetExtraStuffPointerUnsafe.c)
 *     RtlDebugWalkHeap @ 0x1800EFFE4 (RtlDebugWalkHeap.c)
 *     RtlpWalkLowFragHeapSegment @ 0x1800F27F0 (RtlpWalkLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpWalkHeap(unsigned __int64 a1, __int64 a2, char a3)
{
  __int64 v7; // r9
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r8
  __int16 v10; // r10
  __int16 v11; // ax
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rbx
  int *v18; // rbx
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  unsigned __int16 v26; // cx
  unsigned __int8 v27; // al
  __int64 v28; // rax
  int v29; // eax
  unsigned __int16 v30; // ax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  char v41; // al
  int v42; // edx
  int v43; // eax
  unsigned __int16 v44; // r8
  char v45; // cl
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // ecx
  int v49; // eax
  unsigned __int16 v50; // ax
  char v51; // cl
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // ecx
  int v55; // eax
  unsigned __int16 v56; // ax
  int v57; // eax
  unsigned __int16 v58; // ax
  __int64 v59; // rcx
  int v60; // eax
  unsigned __int16 v61; // ax
  unsigned __int8 v62; // r10
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 ExtraStuffPointerUnsafe; // rax
  unsigned int v66; // eax
  unsigned int v67; // eax
  int v68; // eax
  unsigned __int16 v69; // ax
  unsigned int v70[4]; // [rsp+20h] [rbp-39h] BYREF
  int v71; // [rsp+30h] [rbp-29h]
  int v72; // [rsp+40h] [rbp-19h]
  int v73; // [rsp+50h] [rbp-9h]
  char Fields[6]; // [rsp+58h] [rbp-1h] BYREF
  __int16 v75; // [rsp+5Eh] [rbp+5h]
  unsigned __int64 v76; // [rsp+78h] [rbp+1Fh]

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64, __int64))qword_1801420F8)(a1, a2);
  v7 = 1LL;
  if ( (*(_DWORD *)(a1 + 112) & 0x61000000) != 0 && (*(_DWORD *)(a1 + 112) & 0x10000000) == 0 )
  {
    if ( !(unsigned __int8)RtlDebugWalkHeap((PVOID)a1) )
    {
      v70[0] = -1073741811;
      goto LABEL_197;
    }
    v7 = 1LL;
  }
  v8 = *(_QWORD **)a2;
  v70[0] = 0;
  v9 = 4096LL;
  v10 = 2;
  if ( !v8 )
  {
    v9 = a1;
    goto LABEL_68;
  }
  if ( (*(_WORD *)(a2 + 18) & 0x1002) == 0 )
    goto LABEL_31;
  v11 = *(_WORD *)(a2 + 18) & 2;
  if ( !v11 || (*(_BYTE *)(a1 + 378) != 2 ? (v12 = 0LL) : (v12 = *(_QWORD **)(a1 + 368)), v8 != v12) )
  {
    if ( a3 && v11 )
    {
      v13 = v8[8];
      goto LABEL_90;
    }
    v13 = (unsigned __int64)v8 + *(_QWORD *)(a2 + 8);
    if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
    {
      v14 = *(_QWORD **)(a1 + 288);
      v9 = (unsigned __int64)(v8 - 6);
      while ( v14 != (_QWORD *)(a1 + 288) )
      {
        v8 = v14 - 3;
        if ( v14[3] <= v9 && v9 <= v8[9] )
          goto LABEL_26;
        v14 = (_QWORD *)*v14;
      }
      v8 = 0LL;
    }
LABEL_26:
    if ( a3 && v13 < v8[9] )
      goto LABEL_90;
    v15 = v8[3];
    if ( v15 != a1 + 288 )
      goto LABEL_66;
    if ( *(_BYTE *)(a1 + 378) == 2 )
    {
      v9 = *(_QWORD *)(a1 + 368);
      goto LABEL_68;
    }
  }
LABEL_67:
  v9 = 0LL;
LABEL_68:
  v13 = 0LL;
  if ( v9 )
  {
    if ( *(_BYTE *)(a1 + 378) == (_BYTE)v10 )
      v28 = *(_QWORD *)(a1 + 368);
    else
      v28 = 0LL;
    if ( v9 == v28 )
    {
      RtlpWalkLowFragHeapSegment(a1, a2, v70, v7);
      goto LABEL_197;
    }
    *(_QWORD *)a2 = v9;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v29 = *(_DWORD *)(v9 + 8);
      v71 = v29;
      if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
        v71 = *(_DWORD *)(a1 + 136) ^ v29;
      v30 = v71;
    }
    else
    {
      v30 = *(_WORD *)(v9 + 8);
    }
    *(_QWORD *)(a2 + 8) = 16LL * v30;
    *(_WORD *)(a2 + 18) = v10;
    RtlpSetHeapWalkEntryOverheadBytes(a2, 0LL);
    *(_BYTE *)(a2 + 17) = 0;
    *(_DWORD *)(a2 + 24) = (*(_DWORD *)(v9 + 56) - *(_DWORD *)(v9 + 80)) << 12;
    v31 = *(_DWORD *)(v9 + 80) << 12;
    *(_DWORD *)(a2 + 28) = v31;
    if ( ((unsigned __int8)v10 & *(_BYTE *)(v9 + 20)) != 0 )
      *(_DWORD *)(a2 + 28) = v31 + 4096;
    v32 = *(_QWORD *)(v9 + 64);
    if ( ((unsigned __int8)v7 & *(_BYTE *)(v32 + 10)) != 0 )
      v33 = v32 + 16;
    else
      v33 = v32 + 32;
    *(_QWORD *)(a2 + 32) = v33;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v9 + 72);
    while ( 1 )
    {
LABEL_90:
      if ( !v13 )
        goto LABEL_197;
      v34 = *(_BYTE *)(v13 + 15);
      if ( (v34 & 0x40) != 0 )
        break;
      if ( v34 == 4 )
      {
        v35 = *(unsigned __int8 *)(v13 + 14);
        goto LABEL_93;
      }
      v36 = v13 + 16;
LABEL_97:
      *(_QWORD *)a2 = v36;
      *(_WORD *)(a2 + 18) = v7;
      if ( *(_BYTE *)(a1 + 378) == (_BYTE)v10 )
        v37 = *(_QWORD *)(a1 + 368);
      else
        v37 = 0LL;
      if ( !v37 )
        goto LABEL_105;
      if ( !(unsigned __int8)RtlpWalkLFHBlock(a1, a2, v9) )
      {
        v7 = 1LL;
        v10 = 2;
LABEL_105:
        if ( ((unsigned __int8)(*(_BYTE *)(v13 + 10) ^ *(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20)) & (unsigned __int8)v7) == 0 )
        {
          *(_QWORD *)a2 = v13 + 32;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v68 = *(_DWORD *)(v13 + 8);
            v71 = v68;
            if ( (v68 & *(_DWORD *)(a1 + 124)) != 0 )
              v71 = *(_DWORD *)(a1 + 136) ^ v68;
            v69 = v71;
          }
          else
          {
            v69 = *(_WORD *)(v13 + 8);
          }
          *(_QWORD *)(a2 + 8) = 16LL * v69 - 32;
          *(_BYTE *)(a2 + 17) = *(_BYTE *)(v13 + 14);
          *(_WORD *)(a2 + 18) = 0;
          RtlpSetHeapWalkEntryOverheadBytes(a2, 32LL);
          goto LABEL_197;
        }
        v38 = *(_BYTE *)(v13 + 15);
        if ( (v38 & 0x40) != 0 )
        {
          v39 = *(_BYTE *)(v13 + 15) & 0x3F;
          goto LABEL_108;
        }
        if ( v38 == 4 )
        {
          v39 = *(unsigned __int8 *)(v13 + 14);
LABEL_108:
          v40 = v13 + 16 * (v7 + v39);
        }
        else
        {
          v40 = v13 + 16;
        }
        *(_QWORD *)a2 = v40;
        v41 = *(_BYTE *)(v13 + 15);
        if ( v41 == 4 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v57 = *(_DWORD *)(v13 + 8);
            v71 = v57;
            if ( (v57 & *(_DWORD *)(a1 + 124)) != 0 )
              v71 = *(_DWORD *)(a1 + 136) ^ v57;
            v58 = v71;
          }
          else
          {
            v58 = *(_WORD *)(v13 + 8);
          }
          v59 = *(_QWORD *)(v13 - 16) - v58;
          *(_BYTE *)(a2 + 17) = 64;
          *(_QWORD *)(a2 + 8) = v59;
          *(_WORD *)(a2 + 18) = 16385;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v60 = *(_DWORD *)(v13 + 8);
            v71 = v60;
            if ( (v60 & *(_DWORD *)(a1 + 124)) != 0 )
              v71 = *(_DWORD *)(a1 + 136) ^ v60;
            v61 = v71;
          }
          else
          {
            v61 = *(_WORD *)(v13 + 8);
          }
          v52 = v61;
          goto LABEL_171;
        }
        if ( v41 == 3 )
        {
          v52 = 0LL;
          *(_QWORD *)a2 = *(_QWORD *)(v13 + 48);
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(v13 + 56);
          *(_WORD *)(a2 + 18) = 4096;
          *(_BYTE *)(a2 + 17) = 0;
LABEL_171:
          RtlpSetHeapWalkEntryOverheadBytes(a2, v52);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v63 = *(_DWORD *)(v13 + 8);
            if ( (v63 & *(_DWORD *)(a1 + 124)) != 0 )
              v63 ^= *(_DWORD *)(a1 + 136);
            v64 = HIWORD(v63);
          }
          else
          {
            LOBYTE(v64) = *(_BYTE *)(v13 + 10);
          }
          if ( ((unsigned __int8)v64 & v62) != 0 )
          {
            ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, v13);
            *(_QWORD *)(a2 + 24) = *(_QWORD *)(ExtraStuffPointerUnsafe + 8);
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
              *(_WORD *)(a2 + 32) = *(_WORD *)(ExtraStuffPointerUnsafe + 2);
            else
              *(_WORD *)(a2 + 32) = 0;
            *(_WORD *)(a2 + 18) |= 0x10u;
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v13 + 11);
          }
          else
          {
            *(_WORD *)(a2 + 32) = 0;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            v66 = *(_DWORD *)(v13 + 8);
            if ( (v66 & *(_DWORD *)(a1 + 124)) != 0 )
              v66 ^= *(_DWORD *)(a1 + 136);
            v67 = HIWORD(v66);
          }
          else
          {
            LOBYTE(v67) = *(_BYTE *)(v13 + 10);
          }
          *(_WORD *)(a2 + 18) |= v67 & 0xE0;
          goto LABEL_197;
        }
        if ( v41 != (_BYTE)v7 )
        {
          v42 = *(_DWORD *)(a1 + 124);
          if ( v42 )
          {
            v43 = *(_DWORD *)(v13 + 8);
            v42 = *(_DWORD *)(a1 + 124);
            v71 = v43;
            if ( (v43 & v42) != 0 )
              v71 = *(_DWORD *)(a1 + 136) ^ v43;
            v44 = v71;
          }
          else
          {
            v44 = *(_WORD *)(v13 + 8);
          }
          v45 = *(_BYTE *)(v13 + 15);
          if ( v45 == 5 )
          {
            v46 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v45 & 0x40) != 0 )
          {
            v46 = *(unsigned __int16 *)(v13 + 16LL * (v45 & 0x3F) + 12);
          }
          else if ( (v45 & 0x3F) == 0x3F )
          {
            if ( v45 >= 0 )
            {
              if ( v42 )
              {
                v49 = *(_DWORD *)(v13 + 8);
                v71 = v49;
                if ( (v49 & *(_DWORD *)(a1 + 124)) != 0 )
                  v71 = *(_DWORD *)(a1 + 136) ^ v49;
                v50 = v71;
              }
              else
              {
                v50 = *(_WORD *)(v13 + 8);
              }
              v48 = v50;
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
                v47 = 0LL;
              else
                v47 = *(_QWORD *)(v13
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
              v48 = *(unsigned __int16 *)(v47 + 36);
            }
            v46 = *(_QWORD *)(v13 + 16LL * v48);
          }
          else
          {
            v46 = *(_BYTE *)(v13 + 15) & 0x3F;
          }
          *(_QWORD *)(a2 + 8) = 16LL * v44 - v46;
          *(_BYTE *)(a2 + 17) = *(_BYTE *)(v13 + 14);
          *(_WORD *)(a2 + 18) = v7;
          v51 = *(_BYTE *)(v13 + 15);
          if ( v51 == 5 )
          {
            v52 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v51 & 0x40) != 0 )
          {
            v52 = *(unsigned __int16 *)(16LL * (v51 & 0x3F) + v13 + 12);
          }
          else if ( (v51 & 0x3F) == 0x3F )
          {
            if ( v51 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v55 = *(_DWORD *)(v13 + 8);
                v71 = v55;
                if ( (v55 & *(_DWORD *)(a1 + 124)) != 0 )
                  v71 = *(_DWORD *)(a1 + 136) ^ v55;
                v56 = v71;
              }
              else
              {
                v56 = *(_WORD *)(v13 + 8);
              }
              v54 = v56;
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
                v53 = 0LL;
              else
                v53 = *(_QWORD *)(v13
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
              v54 = *(unsigned __int16 *)(v53 + 36);
            }
            v52 = *(_QWORD *)(16LL * v54 + v13);
          }
          else
          {
            v52 = v51 & 0x3F;
          }
          goto LABEL_171;
        }
        *(_WORD *)(a2 + 18) = v7;
        v9 = 4096LL;
        goto LABEL_31;
      }
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_197;
      v9 = 4096LL;
      v7 = 1LL;
      v10 = 2;
LABEL_31:
      if ( *(_BYTE *)(a1 + 378) == (_BYTE)v10 )
        v16 = *(_QWORD *)(a1 + 368);
      else
        v16 = 0LL;
      if ( v16 )
      {
        if ( (unsigned __int8)RtlpWalkLFHBlock(a1, a2, 4096LL) && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
          goto LABEL_197;
        v10 = 2;
        v9 = 4096LL;
        v7 = 1LL;
      }
      v17 = *(_QWORD **)a2;
      if ( ((unsigned __int8)v7 & *(_BYTE *)(a2 + 18)) != 0 )
      {
        v18 = (int *)(v17 - 2);
        _m_prefetchw(v18);
        if ( *((_BYTE *)v18 + 15) == 5 )
          v18 -= 4 * *((unsigned __int8 *)v18 + 14);
        if ( *((_BYTE *)v18 + 15) == 4 )
        {
          v19 = *((_QWORD *)v18 - 6);
          v20 = a1 + 272;
          goto LABEL_70;
        }
        v21 = *((_BYTE *)v18 + 14);
        if ( v21 )
          v22 = ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v21 << 16) + 0x10000;
        else
          v22 = a1;
        if ( !v22 )
        {
LABEL_196:
          v70[0] = -1073741503;
          goto LABEL_197;
        }
        if ( *((_BYTE *)v18 + 15) == 3 )
          goto LABEL_64;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v23 = v18[2];
          v73 = v23;
          if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
            v73 = *(_DWORD *)(a1 + 136) ^ v23;
          LOWORD(v24) = v73;
        }
        else
        {
          LOWORD(v24) = *((_WORD *)v18 + 4);
        }
        v24 = (unsigned __int16)v24;
LABEL_89:
        v13 = (unsigned __int64)&v18[4 * v24];
      }
      else
      {
        v18 = (int *)(v17 - 4);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v25 = v18[2];
          v72 = v25;
          if ( (v25 & *(_DWORD *)(a1 + 124)) != 0 )
            v72 = *(_DWORD *)(a1 + 136) ^ v25;
          v26 = v72;
        }
        else
        {
          v26 = *((_WORD *)v18 + 4);
        }
        v27 = *((_BYTE *)v18 + 14);
        if ( v27 )
          v22 = ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v27 << 16) + 0x10000;
        else
          v22 = a1;
        if ( !v22 )
          goto LABEL_196;
        if ( *((_BYTE *)v18 + 15) != 3 )
        {
          v24 = v26;
          goto LABEL_89;
        }
LABEL_64:
        if ( (unsigned __int64)v18 + *((_QWORD *)v18 + 7) + 64 >= *(_QWORD *)(v22 + 72) )
        {
          v15 = *(_QWORD *)(v22 + 24);
          if ( v15 == a1 + 288 )
            goto LABEL_67;
LABEL_66:
          v9 = v15 - 24;
          goto LABEL_68;
        }
        *(_QWORD *)a2 = *((_QWORD *)v18 + 6);
        *(_QWORD *)(a2 + 8) = *((_QWORD *)v18 + 7);
        *(_BYTE *)(a2 + 17) = 0;
        *(_WORD *)(a2 + 18) = 4096;
        RtlpSetHeapWalkEntryOverheadBytes(a2, 0LL);
        v13 = 0LL;
      }
    }
    v35 = *(_BYTE *)(v13 + 15) & 0x3F;
LABEL_93:
    v36 = v13 + 16 * (v7 + v35);
    goto LABEL_97;
  }
  v20 = a1 + 272;
  v19 = *(_QWORD *)(a1 + 272);
LABEL_70:
  if ( v19 != v20 )
  {
    v13 = v19 + 48;
    goto LABEL_90;
  }
  v70[0] = -2147483622;
LABEL_197:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v70[0] != -2147483622 )
  {
    v75 = 4142;
    v76 = a1;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
  }
  return v70[0];
}
