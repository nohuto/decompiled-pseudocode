/*
 * XREFs of RtlpWalkLFHBlock @ 0x180091FA4
 * Callers:
 *     RtlpWalkHeap @ 0x1800916EC (RtlpWalkHeap.c)
 * Callees:
 *     RtlpIsLFHZoneAllocation @ 0x18008654C (RtlpIsLFHZoneAllocation.c)
 *     RtlpGetFirstBlockAddress @ 0x180086688 (RtlpGetFirstBlockAddress.c)
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x1800867AC (RtlpSetHeapWalkEntryOverheadBytes.c)
 *     RtlpGetReservedBlockSize @ 0x1800867D0 (RtlpGetReservedBlockSize.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // r14
  char **v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned __int16 v25; // ax
  unsigned __int64 v26; // r10
  unsigned __int8 v27; // r11
  unsigned __int16 v28; // dx
  char v29; // cl
  unsigned __int64 v30; // rcx
  unsigned int v31; // ecx
  int v32; // eax
  unsigned __int16 v33; // ax
  __int64 v34; // r10
  __int64 v35; // rdx
  int v36; // eax
  unsigned __int16 v37; // ax
  char **v38; // rax
  char *v39; // r13
  char v40; // al
  __int64 v41; // rax
  char **v42; // rax
  __int64 v43; // rdx
  unsigned __int64 FirstBlockAddress; // r10
  unsigned __int8 v45; // r11
  char v46; // al
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  char v49; // cl
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned __int16 v54; // ax
  __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned __int8 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // eax
  unsigned __int16 v61; // ax
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]
  int v65; // [rsp+28h] [rbp-20h]
  int v66; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  if ( *(_BYTE *)(a1 + 378) == 2 )
    v7 = *(_QWORD *)(a1 + 368);
  else
    v7 = 0LL;
  if ( !v7 )
    return 0;
  v9 = *(char ***)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v9 -= 2;
    _m_prefetchw(v9);
    if ( *((_BYTE *)v9 + 15) != 5 )
      goto LABEL_11;
    v10 = 16LL * *((unsigned __int8 *)v9 + 14);
  }
  else
  {
    v10 = *(unsigned __int8 *)(a2 + 16);
  }
  v9 = (char **)((char *)v9 - v10);
LABEL_11:
  if ( *((char *)v9 + 15) < 0 )
  {
    if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *((_WORD *)v9 + 4) ^ ((unsigned __int64)v9 >> 4)) )
      return 0;
    v11 = (unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *((_DWORD *)v9 + 2) ^ (unsigned int)((unsigned __int64)v9 >> 4)) >> 12;
    v12 = *(__int64 *)((char *)v9 - v11);
    if ( !v12 )
      return 0;
    RtlpGetReservedBlockSize(*(__int64 *)((char *)v9 - v11));
    RtlpGetFirstBlockAddress(v13, *(_QWORD *)(v12 + 8));
    ReservedBlockSize = RtlpGetReservedBlockSize(v12);
    if ( (v16 >> 4) / ReservedBlockSize >= *(unsigned __int16 *)(v12 + 40) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v12 + 8);
      *(_WORD *)(a2 + 18) = 8193;
      return 0;
    }
    v17 = *(_BYTE *)(v15 + 15);
    if ( (v17 & 0x3F) == 0 )
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_QWORD *)a2 = v15 + 16;
      RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
      *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v12 + 36) - 16;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v34 + 14);
      goto LABEL_61;
    }
    if ( (v17 & 0x40) != 0 )
    {
      v18 = v17 & 0x3F;
    }
    else
    {
      if ( v17 != 4 )
      {
        v19 = v15 + 16;
LABEL_23:
        *(_QWORD *)a2 = v19;
        *(_WORD *)(a2 + 18) = 1;
        v20 = *(_BYTE *)(v15 + 15);
        if ( v20 == 5 )
        {
          v21 = *(unsigned __int16 *)(v15 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v20 & 0x40) != 0 )
        {
          v21 = *(unsigned __int16 *)(16LL * (v20 & 0x3F) + v15 + 12);
        }
        else if ( (v20 & 0x3F) == 0x3F )
        {
          if ( v20 < 0 )
          {
            if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v15 + 8) ^ (v15 >> 4)) )
              v22 = 0LL;
            else
              v22 = *(_QWORD *)(v15
                              - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v15 + 8) ^ (unsigned int)(v15 >> 4)) >> 12));
            v23 = *(unsigned __int16 *)(v22 + 36);
          }
          else
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v24 = *(_DWORD *)(v15 + 8);
              LOWORD(v62) = v24;
              if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
                v62 = *(_DWORD *)(a1 + 136) ^ v24;
              v25 = v62;
            }
            else
            {
              v25 = *(_WORD *)(v15 + 8);
            }
            v23 = v25;
          }
          v21 = *(_QWORD *)(16LL * v23 + v15);
        }
        else
        {
          v21 = v20 & 0x3F;
        }
        RtlpSetHeapWalkEntryOverheadBytes(a2, v21);
        v28 = *(_WORD *)(v12 + 36);
        v29 = *(_BYTE *)(v26 + 15);
        if ( v29 == 5 )
        {
LABEL_42:
          v30 = *(unsigned __int16 *)(v26 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
LABEL_58:
          *(_QWORD *)(a2 + 8) = 16LL * v28 - v30;
LABEL_59:
          *(_BYTE *)(a2 + 17) = *(_BYTE *)(v26 + 14);
LABEL_61:
          *(_WORD *)(a2 + 18) |= 0x8000u;
          return 1;
        }
        if ( (v29 & 0x40) != 0 )
        {
LABEL_44:
          v30 = *(unsigned __int16 *)(v26 + 16LL * (unsigned __int8)(v27 & v29) + 12);
          goto LABEL_58;
        }
        if ( (v27 & (unsigned __int8)v29) != v27 )
        {
LABEL_46:
          v30 = (unsigned __int8)(v27 & v29);
          goto LABEL_58;
        }
        if ( v29 < 0 )
          goto LABEL_48;
        goto LABEL_51;
      }
      v18 = *(unsigned __int8 *)(v15 + 14);
    }
    v19 = v15 + 16 * (v18 + 1);
    goto LABEL_23;
  }
  v35 = *(_QWORD *)(v7 + 24);
  if ( ((*((_BYTE *)v9 + 10) ^ (unsigned __int8)(*(_BYTE *)(v35 + 138) & (*(_DWORD *)(v35 + 124) >> 20))) & 1) == 0 )
    goto LABEL_109;
  if ( *(_DWORD *)(v35 + 124) )
  {
    v36 = *((_DWORD *)v9 + 2);
    LOWORD(v64) = v36;
    if ( (v36 & *(_DWORD *)(v35 + 124)) != 0 )
      v64 = *(_DWORD *)(v35 + 136) ^ v36;
    v37 = v64;
  }
  else
  {
    v37 = *((_WORD *)v9 + 4);
  }
  if ( v37 <= 4u )
    goto LABEL_109;
  v38 = *(char ***)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
    goto LABEL_109;
  v39 = *v38;
  if ( !RtlpIsLFHZoneAllocation(v7, *v38, a3, a4) )
    goto LABEL_109;
  v40 = *((_BYTE *)v9 + 15);
  if ( (v40 & 0x40) != 0 )
  {
    v41 = v40 & 0x3F;
LABEL_73:
    v42 = &v9[2 * v41 + 2];
    goto LABEL_77;
  }
  if ( v40 == 4 )
  {
    v41 = *((unsigned __int8 *)v9 + 14);
    goto LABEL_73;
  }
  v42 = v9 + 2;
LABEL_77:
  v43 = *((_QWORD *)v39 + 1);
  if ( (char **)v43 == v42 )
  {
    FirstBlockAddress = RtlpGetFirstBlockAddress((__int64)v39, v43);
    v46 = *(_BYTE *)(FirstBlockAddress + 15);
    if ( (v46 & 0x40) != 0 )
    {
      v47 = (unsigned __int8)(v45 & v46);
    }
    else
    {
      if ( v46 != 4 )
      {
        v48 = FirstBlockAddress + 16;
LABEL_84:
        *(_QWORD *)a2 = v48;
        if ( (v45 & *(_BYTE *)(FirstBlockAddress + 15)) == 0 )
        {
          *(_WORD *)(a2 + 18) = 0;
          RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
          *(_QWORD *)(a2 + 8) = 16LL * *((unsigned __int16 *)v39 + 18) - v55;
          goto LABEL_59;
        }
        *(_WORD *)(a2 + 18) = 1;
        v49 = *(_BYTE *)(FirstBlockAddress + 15);
        if ( v49 == 5 )
        {
          v50 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v49 & 0x40) != 0 )
        {
          v50 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v45 & v49) + FirstBlockAddress + 12);
        }
        else if ( (v45 & (unsigned __int8)v49) == v45 )
        {
          if ( v49 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v53 = *(_DWORD *)(FirstBlockAddress + 8);
              LOWORD(v65) = v53;
              if ( (v53 & *(_DWORD *)(a1 + 124)) != 0 )
                v65 = *(_DWORD *)(a1 + 136) ^ v53;
              v54 = v65;
            }
            else
            {
              v54 = *(_WORD *)(FirstBlockAddress + 8);
            }
            v52 = v54;
          }
          else
          {
            if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4)) )
              v51 = 0LL;
            else
              v51 = *(_QWORD *)(FirstBlockAddress
                              - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
            v52 = *(unsigned __int16 *)(v51 + 36);
          }
          v50 = *(_QWORD *)(16LL * v52 + FirstBlockAddress);
        }
        else
        {
          v50 = (unsigned __int8)(v45 & v49);
        }
        RtlpSetHeapWalkEntryOverheadBytes(a2, v50);
        v28 = *((_WORD *)v39 + 18);
        v29 = *(_BYTE *)(v26 + 15);
        if ( v29 == 5 )
          goto LABEL_42;
        if ( (v29 & 0x40) != 0 )
          goto LABEL_44;
        if ( (v27 & (unsigned __int8)v29) != v27 )
          goto LABEL_46;
        if ( v29 < 0 )
        {
LABEL_48:
          if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v26 + 8) ^ (v26 >> 4))) )
            v4 = *(_QWORD *)(v26
                           - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v26 + 8) ^ (unsigned int)(v26 >> 4)) >> 12));
          v31 = *(unsigned __int16 *)(v4 + 36);
LABEL_57:
          v30 = *(_QWORD *)(v26 + 16LL * v31);
          goto LABEL_58;
        }
LABEL_51:
        if ( *(_DWORD *)(a1 + 124) )
        {
          v32 = *(_DWORD *)(v26 + 8);
          LOWORD(v63) = v32;
          if ( (v32 & *(_DWORD *)(a1 + 124)) != 0 )
            v63 = *(_DWORD *)(a1 + 136) ^ v32;
          v33 = v63;
        }
        else
        {
          v33 = *(_WORD *)(v26 + 8);
        }
        v31 = v33;
        goto LABEL_57;
      }
      v47 = *(unsigned __int8 *)(FirstBlockAddress + 14);
    }
    v48 = FirstBlockAddress + 16 * (v47 + 1);
    goto LABEL_84;
  }
LABEL_109:
  if ( !RtlpIsLFHZoneAllocation(v7, (char *)v9, a3, a4) && v7 != *(_QWORD *)a2 )
  {
    v56 = *(_QWORD *)(v7 + 24);
    v57 = *((_BYTE *)v9 + 10);
    if ( ((v57 ^ (unsigned __int8)(*(_BYTE *)(v56 + 138) & (*(_DWORD *)(v56 + 124) >> 20))) & 1) == 0
      || ((v57 ^ (unsigned __int8)(*(_BYTE *)(v56 + 138) & (*(_DWORD *)(v56 + 124) >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
  *(_WORD *)(a2 + 18) = 8193;
  RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
  v59 = *(_QWORD *)(v7 + 24);
  if ( *(_DWORD *)(v59 + 124) )
  {
    v60 = *((_DWORD *)v9 + 2);
    LOWORD(v66) = v60;
    if ( (v60 & *(_DWORD *)(v59 + 124)) != 0 )
      v66 = *(_DWORD *)(v59 + 136) ^ v60;
    v61 = v66;
  }
  else
  {
    v61 = *((_WORD *)v9 + 4);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v61 - v58;
  *(_BYTE *)(a2 + 17) = *((_BYTE *)v9 + 14);
  return 1;
}
