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

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _RTL_SRWLOCK *v5; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  char v15; // al
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned __int16 v23; // ax
  unsigned __int64 v24; // r10
  unsigned __int8 v25; // r11
  unsigned __int16 v26; // dx
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned __int16 v31; // ax
  __int64 v32; // r10
  unsigned __int64 Value; // rdx
  int v34; // eax
  unsigned __int16 v35; // ax
  unsigned __int64 *v36; // rax
  __int64 v37; // r13
  char v38; // al
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 FirstBlockAddress; // r10
  unsigned __int8 v43; // r11
  char v44; // al
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  char v47; // cl
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int8 v55; // r8
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  int v58; // eax
  unsigned __int16 v59; // ax
  int v60; // [rsp+28h] [rbp-20h]
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 378) == 2 )
    v5 = *(_RTL_SRWLOCK **)(a1 + 368);
  else
    v5 = 0LL;
  if ( !v5 )
    return 0;
  v7 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v7 -= 16LL;
    _m_prefetchw((const void *)v7);
    if ( *(_BYTE *)(v7 + 15) != 5 )
      goto LABEL_11;
    v8 = 16LL * *(unsigned __int8 *)(v7 + 14);
  }
  else
  {
    v8 = *(unsigned __int8 *)(a2 + 16);
  }
  v7 -= v8;
LABEL_11:
  if ( *(char *)(v7 + 15) < 0 )
  {
    if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
      return 0;
    v9 = (unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12;
    v10 = *(_QWORD *)(v7 - v9);
    if ( !v10 )
      return 0;
    RtlpGetReservedBlockSize(*(_QWORD *)(v7 - v9));
    RtlpGetFirstBlockAddress(v11, *(_QWORD *)(v10 + 8));
    ReservedBlockSize = RtlpGetReservedBlockSize(v10);
    if ( (v14 >> 4) / ReservedBlockSize >= *(unsigned __int16 *)(v10 + 40) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v10 + 8);
      *(_WORD *)(a2 + 18) = 8193;
      return 0;
    }
    v15 = *(_BYTE *)(v13 + 15);
    if ( (v15 & 0x3F) == 0 )
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_QWORD *)a2 = v13 + 16;
      RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
      *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v10 + 36) - 16;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v32 + 14);
      goto LABEL_61;
    }
    if ( (v15 & 0x40) != 0 )
    {
      v16 = v15 & 0x3F;
    }
    else
    {
      if ( v15 != 4 )
      {
        v17 = v13 + 16;
LABEL_23:
        *(_QWORD *)a2 = v17;
        *(_WORD *)(a2 + 18) = 1;
        v18 = *(_BYTE *)(v13 + 15);
        if ( v18 == 5 )
        {
          v19 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v18 & 0x40) != 0 )
        {
          v19 = *(unsigned __int16 *)(16LL * (v18 & 0x3F) + v13 + 12);
        }
        else if ( (v18 & 0x3F) == 0x3F )
        {
          if ( v18 < 0 )
          {
            if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
              v20 = 0LL;
            else
              v20 = *(_QWORD *)(v13
                              - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
            v21 = *(unsigned __int16 *)(v20 + 36);
          }
          else
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v22 = *(_DWORD *)(v13 + 8);
              LOWORD(v60) = v22;
              if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
                v60 = *(_DWORD *)(a1 + 136) ^ v22;
              v23 = v60;
            }
            else
            {
              v23 = *(_WORD *)(v13 + 8);
            }
            v21 = v23;
          }
          v19 = *(_QWORD *)(16LL * v21 + v13);
        }
        else
        {
          v19 = v18 & 0x3F;
        }
        RtlpSetHeapWalkEntryOverheadBytes(a2, v19);
        v26 = *(_WORD *)(v10 + 36);
        v27 = *(_BYTE *)(v24 + 15);
        if ( v27 == 5 )
        {
LABEL_42:
          v28 = *(unsigned __int16 *)(v24 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
LABEL_58:
          *(_QWORD *)(a2 + 8) = 16LL * v26 - v28;
LABEL_59:
          *(_BYTE *)(a2 + 17) = *(_BYTE *)(v24 + 14);
LABEL_61:
          *(_WORD *)(a2 + 18) |= 0x8000u;
          return 1;
        }
        if ( (v27 & 0x40) != 0 )
        {
LABEL_44:
          v28 = *(unsigned __int16 *)(v24 + 16LL * (unsigned __int8)(v25 & v27) + 12);
          goto LABEL_58;
        }
        if ( (v25 & (unsigned __int8)v27) != v25 )
        {
LABEL_46:
          v28 = (unsigned __int8)(v25 & v27);
          goto LABEL_58;
        }
        if ( v27 < 0 )
          goto LABEL_48;
        goto LABEL_51;
      }
      v16 = *(unsigned __int8 *)(v13 + 14);
    }
    v17 = v13 + 16 * (v16 + 1);
    goto LABEL_23;
  }
  Value = v5[3].Value;
  if ( ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)(*(_BYTE *)(Value + 138) & (*(_DWORD *)(Value + 124) >> 20))) & 1) == 0 )
    goto LABEL_109;
  if ( *(_DWORD *)(Value + 124) )
  {
    v34 = *(_DWORD *)(v7 + 8);
    LOWORD(v62) = v34;
    if ( (v34 & *(_DWORD *)(Value + 124)) != 0 )
      v62 = *(_DWORD *)(Value + 136) ^ v34;
    v35 = v62;
  }
  else
  {
    v35 = *(_WORD *)(v7 + 8);
  }
  if ( v35 <= 4u )
    goto LABEL_109;
  v36 = *(unsigned __int64 **)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
    goto LABEL_109;
  v37 = *v36;
  if ( !RtlpIsLFHZoneAllocation(v5, *v36) )
    goto LABEL_109;
  v38 = *(_BYTE *)(v7 + 15);
  if ( (v38 & 0x40) != 0 )
  {
    v39 = v38 & 0x3F;
LABEL_73:
    v40 = v7 + 16 * (v39 + 1);
    goto LABEL_77;
  }
  if ( v38 == 4 )
  {
    v39 = *(unsigned __int8 *)(v7 + 14);
    goto LABEL_73;
  }
  v40 = v7 + 16;
LABEL_77:
  v41 = *(_QWORD *)(v37 + 8);
  if ( v41 == v40 )
  {
    FirstBlockAddress = RtlpGetFirstBlockAddress(v37, v41);
    v44 = *(_BYTE *)(FirstBlockAddress + 15);
    if ( (v44 & 0x40) != 0 )
    {
      v45 = (unsigned __int8)(v43 & v44);
    }
    else
    {
      if ( v44 != 4 )
      {
        v46 = FirstBlockAddress + 16;
LABEL_84:
        *(_QWORD *)a2 = v46;
        if ( (v43 & *(_BYTE *)(FirstBlockAddress + 15)) == 0 )
        {
          *(_WORD *)(a2 + 18) = 0;
          RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
          *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v37 + 36) - v53;
          goto LABEL_59;
        }
        *(_WORD *)(a2 + 18) = 1;
        v47 = *(_BYTE *)(FirstBlockAddress + 15);
        if ( v47 == 5 )
        {
          v48 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v47 & 0x40) != 0 )
        {
          v48 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v43 & v47) + FirstBlockAddress + 12);
        }
        else if ( (v43 & (unsigned __int8)v47) == v43 )
        {
          if ( v47 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v51 = *(_DWORD *)(FirstBlockAddress + 8);
              LOWORD(v63) = v51;
              if ( (v51 & *(_DWORD *)(a1 + 124)) != 0 )
                v63 = *(_DWORD *)(a1 + 136) ^ v51;
              v52 = v63;
            }
            else
            {
              v52 = *(_WORD *)(FirstBlockAddress + 8);
            }
            v50 = v52;
          }
          else
          {
            if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4)) )
              v49 = 0LL;
            else
              v49 = *(_QWORD *)(FirstBlockAddress
                              - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
            v50 = *(unsigned __int16 *)(v49 + 36);
          }
          v48 = *(_QWORD *)(16LL * v50 + FirstBlockAddress);
        }
        else
        {
          v48 = (unsigned __int8)(v43 & v47);
        }
        RtlpSetHeapWalkEntryOverheadBytes(a2, v48);
        v26 = *(_WORD *)(v37 + 36);
        v27 = *(_BYTE *)(v24 + 15);
        if ( v27 == 5 )
          goto LABEL_42;
        if ( (v27 & 0x40) != 0 )
          goto LABEL_44;
        if ( (v25 & (unsigned __int8)v27) != v25 )
          goto LABEL_46;
        if ( v27 < 0 )
        {
LABEL_48:
          if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v24 + 8) ^ (v24 >> 4))) )
            v2 = *(_QWORD *)(v24
                           - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v24 + 8) ^ (unsigned int)(v24 >> 4)) >> 12));
          v29 = *(unsigned __int16 *)(v2 + 36);
LABEL_57:
          v28 = *(_QWORD *)(v24 + 16LL * v29);
          goto LABEL_58;
        }
LABEL_51:
        if ( *(_DWORD *)(a1 + 124) )
        {
          v30 = *(_DWORD *)(v24 + 8);
          LOWORD(v61) = v30;
          if ( (v30 & *(_DWORD *)(a1 + 124)) != 0 )
            v61 = *(_DWORD *)(a1 + 136) ^ v30;
          v31 = v61;
        }
        else
        {
          v31 = *(_WORD *)(v24 + 8);
        }
        v29 = v31;
        goto LABEL_57;
      }
      v45 = *(unsigned __int8 *)(FirstBlockAddress + 14);
    }
    v46 = FirstBlockAddress + 16 * (v45 + 1);
    goto LABEL_84;
  }
LABEL_109:
  if ( !RtlpIsLFHZoneAllocation(v5, v7) && v5 != *(_RTL_SRWLOCK **)a2 )
  {
    v54 = v5[3].Value;
    v55 = *(_BYTE *)(v7 + 10);
    if ( ((v55 ^ (unsigned __int8)(*(_BYTE *)(v54 + 138) & (*(_DWORD *)(v54 + 124) >> 20))) & 1) == 0
      || ((v55 ^ (unsigned __int8)(*(_BYTE *)(v54 + 138) & (*(_DWORD *)(v54 + 124) >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
  *(_WORD *)(a2 + 18) = 8193;
  RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
  v57 = v5[3].Value;
  if ( *(_DWORD *)(v57 + 124) )
  {
    v58 = *(_DWORD *)(v7 + 8);
    LOWORD(v64) = v58;
    if ( (v58 & *(_DWORD *)(v57 + 124)) != 0 )
      v64 = *(_DWORD *)(v57 + 136) ^ v58;
    v59 = v64;
  }
  else
  {
    v59 = *(_WORD *)(v7 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v59 - v56;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v7 + 14);
  return 1;
}
