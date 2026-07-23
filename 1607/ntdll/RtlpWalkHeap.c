/*
 * XREFs of RtlpWalkHeap @ 0x18004D474
 * Callers:
 *     RtlpWalkHeapInternal @ 0x18004D354 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpWalkLowFragHeapSegment @ 0x180001070 (RtlpWalkLowFragHeapSegment.c)
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x1800010E0 (RtlpSetHeapWalkEntryOverheadBytes.c)
 *     RtlpWalkLFHBlock @ 0x18004DBC8 (RtlpWalkLFHBlock.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpGetExtraStuffPointerUnsafe @ 0x1800EA2A8 (RtlpGetExtraStuffPointerUnsafe.c)
 *     RtlDebugWalkHeap @ 0x1800FB4C8 (RtlDebugWalkHeap.c)
 */

__int64 __fastcall RtlpWalkHeap(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v6; // r9
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  __int16 v9; // r10
  __int64 v10; // rax
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  char v19; // al
  unsigned __int64 v20; // rax
  int v22; // eax
  unsigned __int16 v23; // ax
  int v24; // eax
  unsigned __int16 v25; // cx
  unsigned __int8 v26; // al
  __int16 v27; // ax
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // eax
  unsigned __int16 v33; // ax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // al
  unsigned __int64 v38; // rax
  char v39; // al
  __int64 v40; // rdx
  unsigned __int8 v41; // r10
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rbx
  int v48; // edx
  int v49; // eax
  unsigned __int16 v50; // r8
  char v51; // cl
  unsigned __int64 v52; // rcx
  char v53; // cl
  __int64 ExtraStuffPointerUnsafe; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // ecx
  int v59; // eax
  unsigned __int16 v60; // ax
  __int64 v61; // rax
  unsigned int v62; // ecx
  int v63; // eax
  unsigned __int16 v64; // ax
  int v65; // eax
  unsigned __int16 v66; // ax
  __int64 v67; // rcx
  int v68; // eax
  unsigned __int16 v69; // ax
  unsigned int v70; // [rsp+20h] [rbp-39h]
  int v71; // [rsp+30h] [rbp-29h]
  int v72; // [rsp+30h] [rbp-29h]
  int v73; // [rsp+30h] [rbp-29h]
  int v74; // [rsp+30h] [rbp-29h]
  int v75; // [rsp+30h] [rbp-29h]
  int v76; // [rsp+30h] [rbp-29h]
  int v77; // [rsp+30h] [rbp-29h]
  int v78; // [rsp+40h] [rbp-19h]
  int v79; // [rsp+50h] [rbp-9h]
  char Fields[6]; // [rsp+58h] [rbp-1h] BYREF
  __int16 v81; // [rsp+5Eh] [rbp+5h]
  __int64 v82; // [rsp+78h] [rbp+1Fh]

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_18014C448)();
  v6 = 1LL;
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0 )
  {
    if ( !(unsigned __int8)RtlDebugWalkHeap(a1, a2, a3, 1LL) )
    {
      v70 = -1073741811;
      goto LABEL_10;
    }
    v6 = 1LL;
  }
  v7 = *(_QWORD **)a2;
  v70 = 0;
  v8 = 4096LL;
  v9 = 2;
  if ( !*(_QWORD *)a2 )
  {
    v8 = a1;
    goto LABEL_70;
  }
  if ( (*(_WORD *)(a2 + 18) & 0x1002) != 0 )
  {
    v27 = *(_WORD *)(a2 + 18) & 2;
    if ( v27 )
    {
      v28 = *(_BYTE *)(a1 + 386) == 2 ? *(_QWORD **)(a1 + 376) : 0LL;
      if ( v7 == v28 )
        goto LABEL_69;
    }
    if ( v3 && v27 )
    {
      v18 = v7[8];
      goto LABEL_27;
    }
    v18 = (unsigned __int64)v7 + *(_QWORD *)(a2 + 8);
    if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
    {
      v29 = *(_QWORD **)(a1 + 288);
      v8 = (unsigned __int64)(v7 - 6);
      while ( v29 != (_QWORD *)(a1 + 288) )
      {
        v7 = v29 - 3;
        if ( v29[3] <= v8 && v8 <= v7[9] )
          goto LABEL_64;
        v29 = (_QWORD *)*v29;
      }
      v7 = 0LL;
    }
LABEL_64:
    if ( !v3 || v18 >= v7[9] )
    {
      v30 = v7[3];
      if ( v30 != a1 + 288 )
        goto LABEL_137;
      if ( *(_BYTE *)(a1 + 386) == 2 )
      {
        v8 = *(_QWORD *)(a1 + 376);
        goto LABEL_70;
      }
      goto LABEL_69;
    }
    goto LABEL_27;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 386) == (_BYTE)v9 )
        v10 = *(_QWORD *)(a1 + 376);
      else
        v10 = 0LL;
      if ( v10 )
      {
        if ( (unsigned __int8)RtlpWalkLFHBlock(a1, a2, 4096LL, v6) && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
          goto LABEL_10;
        v9 = 2;
        v8 = 4096LL;
        v6 = 1LL;
      }
      v12 = *(_QWORD **)a2;
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a2 + 18)) != 0 )
      {
        v13 = (unsigned __int64)(v12 - 2);
        _m_prefetchw((const void *)v13);
        if ( *(_BYTE *)(v13 + 15) == 5 )
          v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
        if ( *(_BYTE *)(v13 + 15) == 4 )
        {
          v47 = *(_QWORD *)(v13 - 48);
          v46 = a1 + 272;
          goto LABEL_105;
        }
        v14 = *(_BYTE *)(v13 + 14);
        if ( v14 )
          v15 = (v13 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v14 << 16) + 0x10000;
        else
          v15 = a1;
        if ( !v15 )
          goto LABEL_128;
        if ( *(_BYTE *)(v13 + 15) != 3 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v16 = *(_DWORD *)(v13 + 8);
            LOWORD(v78) = v16;
            if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
              v78 = *(_DWORD *)(a1 + 136) ^ v16;
            LOWORD(v17) = v78;
          }
          else
          {
            LOWORD(v17) = *(_WORD *)(v13 + 8);
          }
          v17 = (unsigned __int16)v17;
          goto LABEL_26;
        }
      }
      else
      {
        v13 = (unsigned __int64)(v12 - 4);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v24 = *(_DWORD *)(v13 + 8);
          LOWORD(v79) = v24;
          if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
            v79 = *(_DWORD *)(a1 + 136) ^ v24;
          v25 = v79;
        }
        else
        {
          v25 = *(_WORD *)(v13 + 8);
        }
        v26 = *(_BYTE *)(v13 + 14);
        if ( v26 )
          v15 = (v13 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v26 << 16) + 0x10000;
        else
          v15 = a1;
        if ( !v15 )
        {
LABEL_128:
          v70 = -1073741503;
          goto LABEL_10;
        }
        if ( *(_BYTE *)(v13 + 15) != 3 )
        {
          v17 = v25;
LABEL_26:
          v18 = 16 * v17 + v13;
          goto LABEL_27;
        }
      }
      if ( *(_QWORD *)(v13 + 56) + v13 + 64 < *(_QWORD *)(v15 + 72) )
      {
        *(_QWORD *)a2 = *(_QWORD *)(v13 + 48);
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v13 + 56);
        *(_BYTE *)(a2 + 17) = 0;
        *(_WORD *)(a2 + 18) = 4096;
        RtlpSetHeapWalkEntryOverheadBytes(a2, 0LL);
        v18 = 0LL;
        goto LABEL_27;
      }
      v30 = *(_QWORD *)(v15 + 24);
      if ( v30 == a1 + 288 )
LABEL_69:
        v8 = 0LL;
      else
LABEL_137:
        v8 = v30 - 24;
LABEL_70:
      v18 = 0LL;
      if ( v8 )
      {
        if ( *(_BYTE *)(a1 + 386) == (_BYTE)v9 )
          v31 = *(_QWORD *)(a1 + 376);
        else
          v31 = 0LL;
        if ( v8 == v31 )
        {
          RtlpWalkLowFragHeapSegment(a1, a2);
          goto LABEL_10;
        }
        *(_QWORD *)a2 = v8;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v32 = *(_DWORD *)(v8 + 8);
          LOWORD(v72) = v32;
          if ( (v32 & *(_DWORD *)(a1 + 124)) != 0 )
            v72 = *(_DWORD *)(a1 + 136) ^ v32;
          v33 = v72;
        }
        else
        {
          v33 = *(_WORD *)(v8 + 8);
        }
        *(_QWORD *)(a2 + 8) = 16LL * v33;
        *(_WORD *)(a2 + 18) = v9;
        RtlpSetHeapWalkEntryOverheadBytes(a2, 0LL);
        *(_BYTE *)(a2 + 17) = 0;
        *(_DWORD *)(a2 + 24) = (*(_DWORD *)(v8 + 56) - *(_DWORD *)(v8 + 80)) << 12;
        v34 = *(_DWORD *)(v8 + 80) << 12;
        *(_DWORD *)(a2 + 28) = v34;
        if ( ((unsigned __int8)v9 & *(_BYTE *)(v8 + 20)) != 0 )
          *(_DWORD *)(a2 + 28) = v34 + 4096;
        v35 = *(_QWORD *)(v8 + 64);
        if ( ((unsigned __int8)v6 & *(_BYTE *)(v35 + 10)) != 0 )
          v36 = v35 + 16;
        else
          v36 = v35 + 32;
        *(_QWORD *)(a2 + 32) = v36;
        *(_QWORD *)(a2 + 40) = *(_QWORD *)(v8 + 72);
        goto LABEL_27;
      }
      v46 = a1 + 272;
      v47 = *(_QWORD *)(a1 + 272);
LABEL_105:
      if ( v47 == v46 )
      {
        v70 = -2147483622;
        goto LABEL_10;
      }
      v18 = v47 + 48;
LABEL_27:
      if ( !v18 )
        goto LABEL_10;
      v19 = *(_BYTE *)(v18 + 15);
      if ( (v19 & 0x40) != 0 )
      {
        v55 = *(_BYTE *)(v18 + 15) & 0x3F;
      }
      else
      {
        if ( v19 != 4 )
        {
          v20 = v18 + 16;
          goto LABEL_31;
        }
        v55 = *(unsigned __int8 *)(v18 + 14);
      }
      v20 = v18 + 16 * (v6 + v55);
LABEL_31:
      *(_QWORD *)a2 = v20;
      *(_WORD *)(a2 + 18) = v6;
      if ( !(*(_BYTE *)(a1 + 386) == (_BYTE)v9 ? *(_QWORD *)(a1 + 376) : 0LL) )
        break;
      if ( !(unsigned __int8)RtlpWalkLFHBlock(a1, a2, v8, v6) )
      {
        v6 = 1LL;
        v9 = 2;
        break;
      }
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_10;
      v8 = 4096LL;
      v6 = 1LL;
      v9 = 2;
    }
    if ( ((unsigned __int8)(*(_BYTE *)(v18 + 10) ^ *(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20)) & (unsigned __int8)v6) == 0 )
    {
      *(_QWORD *)a2 = v18 + 32;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v22 = *(_DWORD *)(v18 + 8);
        LOWORD(v71) = v22;
        if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
          v71 = *(_DWORD *)(a1 + 136) ^ v22;
        v23 = v71;
      }
      else
      {
        v23 = *(_WORD *)(v18 + 8);
      }
      *(_QWORD *)(a2 + 8) = 16LL * v23 - 32;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v18 + 14);
      *(_WORD *)(a2 + 18) = 0;
      RtlpSetHeapWalkEntryOverheadBytes(a2, 32LL);
      goto LABEL_10;
    }
    v37 = *(_BYTE *)(v18 + 15);
    if ( (v37 & 0x40) != 0 )
    {
      v56 = *(_BYTE *)(v18 + 15) & 0x3F;
    }
    else
    {
      if ( v37 != 4 )
      {
        v38 = v18 + 16;
        goto LABEL_86;
      }
      v56 = *(unsigned __int8 *)(v18 + 14);
    }
    v38 = v18 + 16 * (v6 + v56);
LABEL_86:
    *(_QWORD *)a2 = v38;
    v39 = *(_BYTE *)(v18 + 15);
    if ( v39 == 3 )
    {
      v40 = 0LL;
      *(_QWORD *)a2 = *(_QWORD *)(v18 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v18 + 56);
      *(_WORD *)(a2 + 18) = 4096;
      *(_BYTE *)(a2 + 17) = 0;
      goto LABEL_88;
    }
    if ( v39 == 4 )
      break;
    if ( v39 != (_BYTE)v6 )
    {
      v48 = *(_DWORD *)(a1 + 124);
      if ( v48 )
      {
        v49 = *(_DWORD *)(v18 + 8);
        v48 = *(_DWORD *)(a1 + 124);
        LOWORD(v73) = v49;
        if ( (v49 & v48) != 0 )
          v73 = *(_DWORD *)(a1 + 136) ^ v49;
        v50 = v73;
      }
      else
      {
        v50 = *(_WORD *)(v18 + 8);
      }
      v51 = *(_BYTE *)(v18 + 15);
      if ( v51 == 5 )
      {
        v52 = *(unsigned __int16 *)(v18 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v51 & 0x40) != 0 )
      {
        v52 = *(unsigned __int16 *)(v18 + 16LL * (v51 & 0x3F) + 12);
      }
      else if ( (v51 & 0x3F) == 0x3F )
      {
        if ( v51 >= 0 )
        {
          if ( v48 )
          {
            v59 = *(_DWORD *)(v18 + 8);
            LOWORD(v74) = v59;
            if ( (v59 & *(_DWORD *)(a1 + 124)) != 0 )
              v74 = *(_DWORD *)(a1 + 136) ^ v59;
            v60 = v74;
          }
          else
          {
            v60 = *(_WORD *)(v18 + 8);
          }
          v58 = v60;
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v18 + 8) ^ a1 ^ (v18 >> 4)) )
            v57 = 0LL;
          else
            v57 = *(_QWORD *)(v18
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v18 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v18 >> 4)) >> 12));
          v58 = *(unsigned __int16 *)(v57 + 36);
        }
        v52 = *(_QWORD *)(v18 + 16LL * v58);
      }
      else
      {
        v52 = *(_BYTE *)(v18 + 15) & 0x3F;
      }
      *(_QWORD *)(a2 + 8) = 16LL * v50 - v52;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v18 + 14);
      *(_WORD *)(a2 + 18) = v6;
      v53 = *(_BYTE *)(v18 + 15);
      if ( v53 == 5 )
      {
        v40 = *(unsigned __int16 *)(v18 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v53 & 0x40) != 0 )
      {
        v40 = *(unsigned __int16 *)(16LL * (v53 & 0x3F) + v18 + 12);
      }
      else if ( (v53 & 0x3F) == 0x3F )
      {
        if ( v53 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v63 = *(_DWORD *)(v18 + 8);
            LOWORD(v75) = v63;
            if ( (v63 & *(_DWORD *)(a1 + 124)) != 0 )
              v75 = *(_DWORD *)(a1 + 136) ^ v63;
            v64 = v75;
          }
          else
          {
            v64 = *(_WORD *)(v18 + 8);
          }
          v62 = v64;
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v18 + 8) ^ a1 ^ (v18 >> 4)) )
            v61 = 0LL;
          else
            v61 = *(_QWORD *)(v18
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v18 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v18 >> 4)) >> 12));
          v62 = *(unsigned __int16 *)(v61 + 36);
        }
        v40 = *(_QWORD *)(16LL * v62 + v18);
      }
      else
      {
        v40 = v53 & 0x3F;
      }
      goto LABEL_88;
    }
    *(_WORD *)(a2 + 18) = v6;
    v8 = 4096LL;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v65 = *(_DWORD *)(v18 + 8);
    LOWORD(v76) = v65;
    if ( (v65 & *(_DWORD *)(a1 + 124)) != 0 )
      v76 = *(_DWORD *)(a1 + 136) ^ v65;
    v66 = v76;
  }
  else
  {
    v66 = *(_WORD *)(v18 + 8);
  }
  v67 = *(_QWORD *)(v18 - 16) - v66;
  *(_BYTE *)(a2 + 17) = 64;
  *(_QWORD *)(a2 + 8) = v67;
  *(_WORD *)(a2 + 18) = 16385;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v68 = *(_DWORD *)(v18 + 8);
    LOWORD(v77) = v68;
    if ( (v68 & *(_DWORD *)(a1 + 124)) != 0 )
      v77 = *(_DWORD *)(a1 + 136) ^ v68;
    v69 = v77;
  }
  else
  {
    v69 = *(_WORD *)(v18 + 8);
  }
  v40 = v69;
LABEL_88:
  RtlpSetHeapWalkEntryOverheadBytes(a2, v40);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v42 = *(_DWORD *)(v18 + 8);
    if ( (v42 & *(_DWORD *)(a1 + 124)) != 0 )
      v42 ^= *(_DWORD *)(a1 + 136);
    v43 = HIWORD(v42);
  }
  else
  {
    LOBYTE(v43) = *(_BYTE *)(v18 + 10);
  }
  if ( ((unsigned __int8)v43 & v41) != 0 )
  {
    ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, v18);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(ExtraStuffPointerUnsafe + 8);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *(_WORD *)(a2 + 32) = *(_WORD *)(ExtraStuffPointerUnsafe + 2);
    else
      *(_WORD *)(a2 + 32) = 0;
    *(_WORD *)(a2 + 18) |= 0x10u;
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v18 + 11);
  }
  else
  {
    *(_WORD *)(a2 + 32) = 0;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v44 = *(_DWORD *)(v18 + 8);
    if ( (v44 & *(_DWORD *)(a1 + 124)) != 0 )
      v44 ^= *(_DWORD *)(a1 + 136);
    v45 = HIWORD(v44);
  }
  else
  {
    LOBYTE(v45) = *(_BYTE *)(v18 + 10);
  }
  *(_WORD *)(a2 + 18) |= v45 & 0xE0;
LABEL_10:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v70 != -2147483622 )
  {
    v81 = 4142;
    v82 = a1;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
  }
  return v70;
}
