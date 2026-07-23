/*
 * XREFs of RtlpWalkHeap @ 0x1800DAD88
 * Callers:
 *     RtlpWalkHeapInternal @ 0x1800DB648 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     RtlpGetExtraStuffPointerUnsafe @ 0x1800D9148 (RtlpGetExtraStuffPointerUnsafe.c)
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x1800DA620 (RtlpSetHeapWalkEntryOverheadBytes.c)
 *     RtlDebugWalkHeap @ 0x1800ED858 (RtlDebugWalkHeap.c)
 *     RtlpWalkLFHBlock @ 0x1800F0BF0 (RtlpWalkLFHBlock.c)
 *     RtlpWalkLowFragHeapSegment @ 0x1800F11CC (RtlpWalkLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpWalkHeap(char *BaseAddress, __int64 a2, char a3)
{
  __int64 v7; // r9
  char *v8; // rcx
  unsigned __int64 v9; // r8
  __int16 v10; // r10
  __int16 v11; // ax
  char *v12; // rdx
  unsigned __int64 v13; // rbx
  char *v14; // rax
  char *v15; // r8
  __int64 v16; // rax
  char *v17; // rbx
  char *v18; // rbx
  char *v19; // rbx
  char *v20; // rax
  unsigned __int8 v21; // al
  char *v22; // rdx
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
  char *v76; // [rsp+78h] [rbp+1Fh]

  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(char *, __int64))qword_180143CD8)(BaseAddress, a2);
  v7 = 1LL;
  if ( (((*((_DWORD *)BaseAddress + 28) & 0x61000000) != 0) & !_bittest((const signed __int32 *)BaseAddress + 28, 0x1Cu)) != 0 )
  {
    if ( !(unsigned __int8)RtlDebugWalkHeap(BaseAddress) )
    {
      v70[0] = -1073741811;
      goto LABEL_196;
    }
    v7 = 1LL;
  }
  v8 = *(char **)a2;
  v70[0] = 0;
  v9 = 4096LL;
  v10 = 2;
  if ( !v8 )
  {
    v9 = (unsigned __int64)BaseAddress;
    goto LABEL_67;
  }
  if ( (*(_WORD *)(a2 + 18) & 0x1002) == 0 )
    goto LABEL_30;
  v11 = *(_WORD *)(a2 + 18) & 2;
  if ( !v11 || (BaseAddress[378] != 2 ? (v12 = 0LL) : (v12 = (char *)*((_QWORD *)BaseAddress + 46)), v8 != v12) )
  {
    if ( a3 && v11 )
    {
      v13 = *((_QWORD *)v8 + 8);
      goto LABEL_89;
    }
    v13 = (unsigned __int64)&v8[*(_QWORD *)(a2 + 8)];
    if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
    {
      v14 = (char *)*((_QWORD *)BaseAddress + 36);
      v9 = (unsigned __int64)(v8 - 48);
      while ( v14 != BaseAddress + 288 )
      {
        v8 = v14 - 24;
        if ( *((_QWORD *)v14 + 3) <= v9 && v9 <= *((_QWORD *)v8 + 9) )
          goto LABEL_25;
        v14 = *(char **)v14;
      }
      v8 = 0LL;
    }
LABEL_25:
    if ( a3 && v13 < *((_QWORD *)v8 + 9) )
      goto LABEL_89;
    v15 = (char *)*((_QWORD *)v8 + 3);
    if ( v15 != BaseAddress + 288 )
      goto LABEL_65;
    if ( BaseAddress[378] == 2 )
    {
      v9 = *((_QWORD *)BaseAddress + 46);
      goto LABEL_67;
    }
  }
LABEL_66:
  v9 = 0LL;
LABEL_67:
  v13 = 0LL;
  if ( v9 )
  {
    if ( BaseAddress[378] == (_BYTE)v10 )
      v28 = *((_QWORD *)BaseAddress + 46);
    else
      v28 = 0LL;
    if ( v9 == v28 )
    {
      RtlpWalkLowFragHeapSegment(BaseAddress, a2, v70, v7);
      goto LABEL_196;
    }
    *(_QWORD *)a2 = v9;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v29 = *(_DWORD *)(v9 + 8);
      v71 = v29;
      if ( (v29 & *((_DWORD *)BaseAddress + 31)) != 0 )
        v71 = *((_DWORD *)BaseAddress + 34) ^ v29;
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
LABEL_89:
      if ( !v13 )
        goto LABEL_196;
      v34 = *(_BYTE *)(v13 + 15);
      if ( (v34 & 0x40) != 0 )
        break;
      if ( v34 == 4 )
      {
        v35 = *(unsigned __int8 *)(v13 + 14);
        goto LABEL_92;
      }
      v36 = v13 + 16;
LABEL_96:
      *(_QWORD *)a2 = v36;
      *(_WORD *)(a2 + 18) = v7;
      if ( BaseAddress[378] == (_BYTE)v10 )
        v37 = *((_QWORD *)BaseAddress + 46);
      else
        v37 = 0LL;
      if ( !v37 )
        goto LABEL_104;
      if ( !(unsigned __int8)RtlpWalkLFHBlock(BaseAddress, a2, v9) )
      {
        v7 = 1LL;
        v10 = 2;
LABEL_104:
        if ( ((unsigned __int8)(*(_BYTE *)(v13 + 10) ^ BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 20)) & (unsigned __int8)v7) == 0 )
        {
          *(_QWORD *)a2 = v13 + 32;
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v68 = *(_DWORD *)(v13 + 8);
            v71 = v68;
            if ( (v68 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v71 = *((_DWORD *)BaseAddress + 34) ^ v68;
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
          goto LABEL_196;
        }
        v38 = *(_BYTE *)(v13 + 15);
        if ( (v38 & 0x40) != 0 )
        {
          v39 = *(_BYTE *)(v13 + 15) & 0x3F;
          goto LABEL_107;
        }
        if ( v38 == 4 )
        {
          v39 = *(unsigned __int8 *)(v13 + 14);
LABEL_107:
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
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v57 = *(_DWORD *)(v13 + 8);
            v71 = v57;
            if ( (v57 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v71 = *((_DWORD *)BaseAddress + 34) ^ v57;
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
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v60 = *(_DWORD *)(v13 + 8);
            v71 = v60;
            if ( (v60 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v71 = *((_DWORD *)BaseAddress + 34) ^ v60;
            v61 = v71;
          }
          else
          {
            v61 = *(_WORD *)(v13 + 8);
          }
          v52 = v61;
          goto LABEL_170;
        }
        if ( v41 == 3 )
        {
          v52 = 0LL;
          *(_QWORD *)a2 = *(_QWORD *)(v13 + 48);
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(v13 + 56);
          *(_WORD *)(a2 + 18) = 4096;
          *(_BYTE *)(a2 + 17) = 0;
LABEL_170:
          RtlpSetHeapWalkEntryOverheadBytes(a2, v52);
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v63 = *(_DWORD *)(v13 + 8);
            if ( (v63 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v63 ^= *((_DWORD *)BaseAddress + 34);
            v64 = HIWORD(v63);
          }
          else
          {
            LOBYTE(v64) = *(_BYTE *)(v13 + 10);
          }
          if ( ((unsigned __int8)v64 & v62) != 0 )
          {
            ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe((__int64)BaseAddress, v13);
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
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v66 = *(_DWORD *)(v13 + 8);
            if ( (v66 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v66 ^= *((_DWORD *)BaseAddress + 34);
            v67 = HIWORD(v66);
          }
          else
          {
            LOBYTE(v67) = *(_BYTE *)(v13 + 10);
          }
          *(_WORD *)(a2 + 18) |= v67 & 0xE0;
          goto LABEL_196;
        }
        if ( v41 != (_BYTE)v7 )
        {
          v42 = *((_DWORD *)BaseAddress + 31);
          if ( v42 )
          {
            v43 = *(_DWORD *)(v13 + 8);
            v42 = *((_DWORD *)BaseAddress + 31);
            v71 = v43;
            if ( (v43 & v42) != 0 )
              v71 = *((_DWORD *)BaseAddress + 34) ^ v43;
            v44 = v71;
          }
          else
          {
            v44 = *(_WORD *)(v13 + 8);
          }
          v45 = *(_BYTE *)(v13 + 15);
          if ( v45 == 5 )
          {
            v46 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
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
                if ( (v49 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v71 = *((_DWORD *)BaseAddress + 34) ^ v49;
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
              if ( *(_WORD *)(v13 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)BaseAddress ^ (v13 >> 4)) )
                v47 = 0LL;
              else
                v47 = *(_QWORD *)(v13
                                - ((unsigned __int64)(*(_DWORD *)(v13 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(v13 >> 4)) >> 12));
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
            v52 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
          }
          else if ( (v51 & 0x40) != 0 )
          {
            v52 = *(unsigned __int16 *)(16LL * (v51 & 0x3F) + v13 + 12);
          }
          else if ( (v51 & 0x3F) == 0x3F )
          {
            if ( v51 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v55 = *(_DWORD *)(v13 + 8);
                v71 = v55;
                if ( (v55 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v71 = *((_DWORD *)BaseAddress + 34) ^ v55;
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
              if ( *(_WORD *)(v13 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)BaseAddress ^ (v13 >> 4)) )
                v53 = 0LL;
              else
                v53 = *(_QWORD *)(v13
                                - ((unsigned __int64)(*(_DWORD *)(v13 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(v13 >> 4)) >> 12));
              v54 = *(unsigned __int16 *)(v53 + 36);
            }
            v52 = *(_QWORD *)(16LL * v54 + v13);
          }
          else
          {
            v52 = v51 & 0x3F;
          }
          goto LABEL_170;
        }
        *(_WORD *)(a2 + 18) = v7;
        v9 = 4096LL;
        goto LABEL_30;
      }
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_196;
      v9 = 4096LL;
      v7 = 1LL;
      v10 = 2;
LABEL_30:
      if ( BaseAddress[378] == (_BYTE)v10 )
        v16 = *((_QWORD *)BaseAddress + 46);
      else
        v16 = 0LL;
      if ( v16 )
      {
        if ( (unsigned __int8)RtlpWalkLFHBlock(BaseAddress, a2, 4096LL) && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
          goto LABEL_196;
        v10 = 2;
        v9 = 4096LL;
        v7 = 1LL;
      }
      v17 = *(char **)a2;
      if ( ((unsigned __int8)v7 & *(_BYTE *)(a2 + 18)) != 0 )
      {
        v18 = v17 - 16;
        _m_prefetchw(v18);
        if ( v18[15] == 5 )
          v18 -= 16 * (unsigned __int8)v18[14];
        if ( v18[15] == 4 )
        {
          v19 = (char *)*((_QWORD *)v18 - 6);
          v20 = BaseAddress + 272;
          goto LABEL_69;
        }
        v21 = v18[14];
        if ( v21 )
          v22 = (char *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v21 << 16) + 0x10000);
        else
          v22 = BaseAddress;
        if ( !v22 )
        {
LABEL_195:
          v70[0] = -1073741503;
          goto LABEL_196;
        }
        if ( v18[15] == 3 )
          goto LABEL_63;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v23 = *((_DWORD *)v18 + 2);
          v73 = v23;
          if ( (v23 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v73 = *((_DWORD *)BaseAddress + 34) ^ v23;
          LOWORD(v24) = v73;
        }
        else
        {
          LOWORD(v24) = *((_WORD *)v18 + 4);
        }
        v24 = (unsigned __int16)v24;
LABEL_88:
        v13 = (unsigned __int64)&v18[16 * v24];
      }
      else
      {
        v18 = v17 - 32;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v25 = *((_DWORD *)v18 + 2);
          v72 = v25;
          if ( (v25 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v72 = *((_DWORD *)BaseAddress + 34) ^ v25;
          v26 = v72;
        }
        else
        {
          v26 = *((_WORD *)v18 + 4);
        }
        v27 = v18[14];
        if ( v27 )
          v22 = (char *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v27 << 16) + 0x10000);
        else
          v22 = BaseAddress;
        if ( !v22 )
          goto LABEL_195;
        if ( v18[15] != 3 )
        {
          v24 = v26;
          goto LABEL_88;
        }
LABEL_63:
        if ( (unsigned __int64)&v18[*((_QWORD *)v18 + 7) + 64] >= *((_QWORD *)v22 + 9) )
        {
          v15 = (char *)*((_QWORD *)v22 + 3);
          if ( v15 == BaseAddress + 288 )
            goto LABEL_66;
LABEL_65:
          v9 = (unsigned __int64)(v15 - 24);
          goto LABEL_67;
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
LABEL_92:
    v36 = v13 + 16 * (v7 + v35);
    goto LABEL_96;
  }
  v20 = BaseAddress + 272;
  v19 = (char *)*((_QWORD *)BaseAddress + 34);
LABEL_69:
  if ( v19 != v20 )
  {
    v13 = (unsigned __int64)(v19 + 48);
    goto LABEL_89;
  }
  v70[0] = -2147483622;
LABEL_196:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v70[0] != -2147483622 )
  {
    v75 = 4142;
    v76 = BaseAddress;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
  }
  return v70[0];
}
