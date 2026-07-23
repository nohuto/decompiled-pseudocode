/*
 * XREFs of RtlpWalkLFHBlock @ 0x18004DBC8
 * Callers:
 *     RtlpWalkHeap @ 0x18004D474 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x180001008 (RtlpGetFirstBlockAddress.c)
 *     RtlpGetReservedBlockSize @ 0x180001058 (RtlpGetReservedBlockSize.c)
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x1800010E0 (RtlpSetHeapWalkEntryOverheadBytes.c)
 *     RtlpIsLFHZoneAllocation @ 0x180001200 (RtlpIsLFHZoneAllocation.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _RTL_SRWLOCK *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  char v14; // al
  __int64 v15; // r10
  unsigned __int64 Value; // rdx
  int v18; // eax
  unsigned __int16 v19; // ax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned __int16 v26; // ax
  __int64 v27; // r13
  char v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 FirstBlockAddress; // r10
  unsigned __int8 v32; // r11
  char v33; // al
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned __int16 v44; // ax
  unsigned __int8 v45; // r11
  unsigned __int16 v46; // dx
  char v47; // cl
  int v48; // eax
  unsigned __int16 v49; // ax
  unsigned __int64 v50; // rcx
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rax
  char v54; // cl
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  unsigned int v57; // ecx
  int v58; // eax
  unsigned __int16 v59; // ax
  int v60; // [rsp+28h] [rbp-20h]
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v5 = *(_RTL_SRWLOCK **)(a1 + 376);
  else
    v5 = 0LL;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)a2;
  if ( !*(_WORD *)(a2 + 18) )
  {
    v7 = *(unsigned __int8 *)(a2 + 16);
LABEL_6:
    v6 -= v7;
    goto LABEL_7;
  }
  v6 -= 16LL;
  _m_prefetchw((const void *)v6);
  if ( *(_BYTE *)(v6 + 15) == 5 )
  {
    v7 = 16LL * *(unsigned __int8 *)(v6 + 14);
    goto LABEL_6;
  }
LABEL_7:
  if ( *(char *)(v6 + 15) >= 0 )
  {
    Value = v5[3].Value;
    if ( ((*(_BYTE *)(v6 + 10) ^ (unsigned __int8)(*(_BYTE *)(Value + 138) & (*(_DWORD *)(Value + 124) >> 20))) & 1) == 0 )
      goto LABEL_22;
    if ( *(_DWORD *)(Value + 124) )
    {
      v18 = *(_DWORD *)(v6 + 8);
      LOWORD(v60) = v18;
      if ( (v18 & *(_DWORD *)(Value + 124)) != 0 )
        v60 = *(_DWORD *)(Value + 136) ^ v18;
      v19 = v60;
    }
    else
    {
      v19 = *(_WORD *)(v6 + 8);
    }
    if ( v19 <= 4u )
      goto LABEL_22;
    v20 = *(unsigned __int64 **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
      goto LABEL_22;
    v27 = *v20;
    if ( !RtlpIsLFHZoneAllocation(v5, *v20) )
      goto LABEL_22;
    v28 = *(_BYTE *)(v6 + 15);
    if ( (v28 & 0x40) != 0 )
    {
      v52 = v28 & 0x3F;
    }
    else
    {
      if ( v28 != 4 )
      {
        v29 = v6 + 16;
        goto LABEL_39;
      }
      v52 = *(unsigned __int8 *)(v6 + 14);
    }
    v29 = v6 + 16 * (v52 + 1);
LABEL_39:
    v30 = *(_QWORD *)(v27 + 8);
    if ( v30 == v29 )
    {
      FirstBlockAddress = RtlpGetFirstBlockAddress(v27, v30);
      v33 = *(_BYTE *)(FirstBlockAddress + 15);
      if ( (v33 & 0x40) != 0 )
      {
        v53 = (unsigned __int8)(v32 & v33);
      }
      else
      {
        if ( v33 != 4 )
        {
          v34 = FirstBlockAddress + 16;
          goto LABEL_43;
        }
        v53 = *(unsigned __int8 *)(FirstBlockAddress + 14);
      }
      v34 = FirstBlockAddress + 16 * (v53 + 1);
LABEL_43:
      *(_QWORD *)a2 = v34;
      if ( (v32 & *(_BYTE *)(FirstBlockAddress + 15)) == 0 )
      {
        *(_WORD *)(a2 + 18) = 0;
        RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
        *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v27 + 36) - v36;
LABEL_45:
        *(_BYTE *)(a2 + 17) = *(_BYTE *)(v35 + 14);
        goto LABEL_13;
      }
      *(_WORD *)(a2 + 18) = 1;
      v54 = *(_BYTE *)(FirstBlockAddress + 15);
      if ( v54 == 5 )
      {
        v55 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v54 & 0x40) != 0 )
      {
        v55 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v32 & v54) + FirstBlockAddress + 12);
      }
      else if ( (v32 & (unsigned __int8)v54) == v32 )
      {
        if ( v54 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v58 = *(_DWORD *)(FirstBlockAddress + 8);
            LOWORD(v64) = v58;
            if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
              v64 = *(_DWORD *)(a1 + 136) ^ v58;
            v59 = v64;
          }
          else
          {
            v59 = *(_WORD *)(FirstBlockAddress + 8);
          }
          v57 = v59;
        }
        else
        {
          if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4)) )
            v56 = 0LL;
          else
            v56 = *(_QWORD *)(FirstBlockAddress
                            - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
          v57 = *(unsigned __int16 *)(v56 + 36);
        }
        v55 = *(_QWORD *)(16LL * v57 + FirstBlockAddress);
      }
      else
      {
        v55 = (unsigned __int8)(v32 & v54);
      }
      RtlpSetHeapWalkEntryOverheadBytes(a2, v55);
      v46 = *(_WORD *)(v27 + 36);
      v47 = *(_BYTE *)(v35 + 15);
      if ( v47 != 5 )
      {
        if ( (v47 & 0x40) == 0 )
        {
          if ( (v45 & (unsigned __int8)v47) == v45 )
          {
            if ( v47 >= 0 )
              goto LABEL_75;
            goto LABEL_82;
          }
          goto LABEL_81;
        }
        goto LABEL_80;
      }
LABEL_79:
      v50 = *(unsigned __int16 *)(v35 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
LABEL_88:
      *(_QWORD *)(a2 + 8) = 16LL * v46 - v50;
      goto LABEL_45;
    }
LABEL_22:
    if ( RtlpIsLFHZoneAllocation(v5, v6)
      || v5 == *(_RTL_SRWLOCK **)a2
      || (v21 = v5[3].Value,
          v22 = *(_BYTE *)(v6 + 10),
          ((v22 ^ (unsigned __int8)(*(_BYTE *)(v21 + 138) & (*(_DWORD *)(v21 + 124) >> 20))) & 1) != 0)
      && ((v22 ^ (unsigned __int8)(*(_BYTE *)(v21 + 138) & (*(_DWORD *)(v21 + 124) >> 17))) & 8) != 0 )
    {
      *(_WORD *)(a2 + 18) = 8193;
      RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
      v24 = v5[3].Value;
      if ( *(_DWORD *)(v24 + 124) )
      {
        v25 = *(_DWORD *)(v6 + 8);
        LOWORD(v61) = v25;
        if ( (v25 & *(_DWORD *)(v24 + 124)) != 0 )
          v61 = *(_DWORD *)(v24 + 136) ^ v25;
        v26 = v61;
      }
      else
      {
        v26 = *(_WORD *)(v6 + 8);
      }
      *(_QWORD *)(a2 + 8) = 16LL * v26 - v23;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v6 + 14);
      return 1;
    }
    return 0;
  }
  if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4))) )
  {
    v8 = (unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12;
    v9 = *(_QWORD *)(v6 - v8);
    if ( v9 )
    {
      RtlpGetReservedBlockSize(*(_QWORD *)(v6 - v8));
      RtlpGetFirstBlockAddress(v10, *(_QWORD *)(v9 + 8));
      ReservedBlockSize = RtlpGetReservedBlockSize(v9);
      if ( (v13 >> 4) / ReservedBlockSize < *(unsigned __int16 *)(v9 + 40) )
      {
        v14 = *(_BYTE *)(v12 + 15);
        if ( (v14 & 0x3F) == 0 )
        {
          *(_WORD *)(a2 + 18) = 0;
          *(_QWORD *)a2 = v12 + 16;
          RtlpSetHeapWalkEntryOverheadBytes(a2, 16LL);
          *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v9 + 36) - 16;
          *(_BYTE *)(a2 + 17) = *(_BYTE *)(v15 + 14);
LABEL_13:
          *(_WORD *)(a2 + 18) |= 0x8000u;
          return 1;
        }
        if ( (v14 & 0x40) != 0 )
        {
          v37 = v14 & 0x3F;
        }
        else
        {
          if ( v14 != 4 )
          {
            v38 = v12 + 16;
LABEL_53:
            *(_QWORD *)a2 = v38;
            *(_WORD *)(a2 + 18) = 1;
            v39 = *(_BYTE *)(v12 + 15);
            if ( v39 == 5 )
            {
              v40 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v39 & 0x40) != 0 )
            {
              v40 = *(unsigned __int16 *)(16LL * (v39 & 0x3F) + v12 + 12);
            }
            else if ( (v39 & 0x3F) == 0x3F )
            {
              if ( v39 < 0 )
              {
                if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
                  v41 = 0LL;
                else
                  v41 = *(_QWORD *)(v12
                                  - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
                v42 = *(unsigned __int16 *)(v41 + 36);
              }
              else
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v43 = *(_DWORD *)(v12 + 8);
                  LOWORD(v62) = v43;
                  if ( (v43 & *(_DWORD *)(a1 + 124)) != 0 )
                    v62 = *(_DWORD *)(a1 + 136) ^ v43;
                  v44 = v62;
                }
                else
                {
                  v44 = *(_WORD *)(v12 + 8);
                }
                v42 = v44;
              }
              v40 = *(_QWORD *)(16LL * v42 + v12);
            }
            else
            {
              v40 = v39 & 0x3F;
            }
            RtlpSetHeapWalkEntryOverheadBytes(a2, v40);
            v46 = *(_WORD *)(v9 + 36);
            v47 = *(_BYTE *)(v35 + 15);
            if ( v47 != 5 )
            {
              if ( (v47 & 0x40) == 0 )
              {
                if ( (v45 & (unsigned __int8)v47) == v45 )
                {
                  if ( (v47 & 0x80) == 0 )
                  {
LABEL_75:
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v48 = *(_DWORD *)(v35 + 8);
                      LOWORD(v63) = v48;
                      if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
                        v63 = *(_DWORD *)(a1 + 136) ^ v48;
                      v49 = v63;
                    }
                    else
                    {
                      v49 = *(_WORD *)(v35 + 8);
                    }
                    v51 = v49;
LABEL_87:
                    v50 = *(_QWORD *)(v35 + 16LL * v51);
                    goto LABEL_88;
                  }
LABEL_82:
                  if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v35 + 8) ^ (v35 >> 4))) )
                    v2 = *(_QWORD *)(v35
                                   - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v35 + 8) ^ (unsigned int)(v35 >> 4)) >> 12));
                  v51 = *(unsigned __int16 *)(v2 + 36);
                  goto LABEL_87;
                }
LABEL_81:
                v50 = (unsigned __int8)(v45 & v47);
                goto LABEL_88;
              }
LABEL_80:
              v50 = *(unsigned __int16 *)(v35 + 16LL * (unsigned __int8)(v45 & v47) + 12);
              goto LABEL_88;
            }
            goto LABEL_79;
          }
          v37 = *(unsigned __int8 *)(v12 + 14);
        }
        v38 = v12 + 16 * (v37 + 1);
        goto LABEL_53;
      }
      *(_QWORD *)a2 = *(_QWORD *)(v9 + 8);
      *(_WORD *)(a2 + 18) = 8193;
    }
  }
  return 0;
}
