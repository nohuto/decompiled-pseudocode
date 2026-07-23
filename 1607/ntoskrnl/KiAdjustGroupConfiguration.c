/*
 * XREFs of KiAdjustGroupConfiguration @ 0x1401D2F34
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

char __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r11
  unsigned __int16 v4; // r12
  unsigned __int16 v5; // r14
  int v6; // r15d
  __int64 v7; // rcx
  int *v8; // rdi
  unsigned __int16 v9; // dx
  __int64 *v10; // r10
  __int64 *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int16 v14; // r8
  __int64 v15; // rcx
  unsigned __int16 v16; // r9
  unsigned __int8 v17; // bl
  int v18; // edi
  unsigned int v19; // edi
  __int64 v20; // rcx
  int *v21; // rdi
  __int64 *v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int16 v28; // cx
  __int64 v29; // rbx
  _QWORD *v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r11
  __int64 *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  char v36; // r15
  unsigned __int16 i; // bx
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned __int16 v40; // dx
  __int64 v41; // r8
  unsigned __int16 v42; // cx
  unsigned int v43; // r9d
  __int64 *v44; // rdx
  __int64 v45; // rcx
  _DWORD v47[20]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD Src[20]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v49[64]; // [rsp+C8h] [rbp-40h] BYREF

  memset(v47, 0, sizeof(v47));
  LOBYTE(v2) = *(_BYTE *)(a1 + 173);
  if ( (v2 & 8) == 0 && !*(_QWORD *)(a1 + 136) )
  {
    v3 = *(_WORD *)(a1 + 144);
    v4 = KiActiveGroups;
    if ( v3 >= (unsigned __int16)KiActiveGroups )
    {
      v5 = KiMaximumGroups;
      v6 = KiMaximumGroupSize;
      if ( KiMaximumGroups )
      {
        v7 = (unsigned __int16)KiMaximumGroups;
        v8 = v47;
        LOBYTE(v2) = KiMaximumGroupSize;
        while ( v7 )
        {
          *v8++ = v6;
          --v7;
        }
      }
      v9 = KeNumberNodes;
      v10 = KeNodeBlock;
      if ( KeNumberNodes )
      {
        v11 = KeNodeBlock;
        v12 = (unsigned __int16)KeNumberNodes;
        do
        {
          v13 = *v11;
          LOBYTE(v2) = *(_BYTE *)(*v11 + 173);
          if ( (v2 & 2) != 0 )
          {
            LODWORD(v2) = *(unsigned __int8 *)(v13 + 172);
            v47[*(unsigned __int16 *)(v13 + 144)] -= v2;
          }
          ++v11;
          --v12;
        }
        while ( v12 );
      }
      v14 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v15 = KeNodeBlock[v14];
          LOBYTE(v2) = *(_BYTE *)(v15 + 173) & 0xA;
          if ( (_BYTE)v2 == 2 && !*(_QWORD *)(v15 + 136) )
          {
            v16 = *(_WORD *)(v15 + 144);
            if ( v16 < v4 )
            {
              LOBYTE(v2) = *(_BYTE *)(v15 + 172);
              v17 = *(_BYTE *)(a1 + 172);
              if ( (unsigned __int8)v2 <= v17 )
              {
                LODWORD(v2) = (unsigned __int8)v2;
                v18 = v17;
              }
              else
              {
                v18 = (unsigned __int8)v2;
                v16 = v3;
                LODWORD(v2) = v17;
              }
              v19 = v18 - v2;
              LOBYTE(v2) = v16;
              if ( v47[v16] >= v19 )
                break;
            }
          }
          if ( ++v14 >= v9 )
            goto LABEL_22;
        }
        LOWORD(v2) = *(_WORD *)(v15 + 144);
        *(_WORD *)(v15 + 144) = v3;
        *(_BYTE *)(v15 + 173) &= ~4u;
        *(_BYTE *)(a1 + 173) |= 4u;
        *(_WORD *)(a1 + 144) = v2;
      }
      else
      {
LABEL_22:
        if ( v5 )
        {
          v20 = v5;
          v21 = Src;
          LOBYTE(v2) = v6;
          while ( v20 )
          {
            *v21++ = v6;
            --v20;
          }
        }
        if ( v9 )
        {
          v22 = KeNodeBlock;
          v23 = v9;
          do
          {
            v24 = *v22;
            LOBYTE(v2) = *(_BYTE *)(*v22 + 173);
            if ( (v2 & 2) != 0 && ((v2 & 8) != 0 || *(_QWORD *)(v24 + 136)) )
            {
              LODWORD(v2) = *(unsigned __int8 *)(v24 + 172);
              Src[*(unsigned __int16 *)(v24 + 144)] -= v2;
            }
            ++v22;
            --v23;
          }
          while ( v23 );
        }
        LOWORD(v25) = 0;
        if ( v9 )
        {
          v26 = v9;
          do
          {
            v27 = *v10;
            LOBYTE(v2) = *(_BYTE *)(*v10 + 173) & 0xA;
            if ( (_BYTE)v2 == 2 && !*(_QWORD *)(v27 + 136) )
            {
              v2 = (unsigned __int16)v25;
              LOWORD(v25) = v25 + 1;
              v49[v2] = v27;
            }
            ++v10;
            --v26;
          }
          while ( v26 );
        }
        if ( (unsigned __int16)v25 - 1 > 0 )
        {
          v28 = 1;
          do
          {
            if ( v28 < (unsigned __int16)v25 )
            {
              v29 = (unsigned __int16)(v28 - 1);
              v30 = &v49[v28];
              v31 = (unsigned __int16)(v25 - v28);
              do
              {
                v32 = v49[v29];
                if ( *(_BYTE *)(v32 + 172) < *(_BYTE *)(*v30 + 172LL) )
                {
                  v49[v29] = *v30;
                  *v30 = v32;
                }
                ++v30;
                --v31;
              }
              while ( v31 );
            }
            LODWORD(v2) = v28++;
          }
          while ( (int)v2 < (unsigned __int16)v25 - 1 );
        }
        if ( (_WORD)v25 )
        {
          v33 = v49;
          v34 = (unsigned __int16)v25;
          do
          {
            v35 = *v33++;
            LOWORD(v2) = *(_WORD *)(v35 + 144);
            *(_WORD *)(v35 + 146) = v2;
            --v34;
          }
          while ( v34 );
        }
        v36 = 0;
        for ( i = 0; i < v4; ++i )
        {
          if ( v5 )
            memmove(v47, Src, 4LL * v5);
          v38 = *(unsigned __int8 *)(a1 + 172);
          v39 = v47[i];
          if ( v39 < v38 )
          {
            LOBYTE(v2) = 1;
          }
          else
          {
            *(_WORD *)(a1 + 144) = i;
            v47[i] = v39 - v38;
            v40 = 0;
            if ( (_WORD)v25 )
            {
              while ( 1 )
              {
                v41 = v49[v40];
                if ( v41 == a1 )
                {
                  LOBYTE(v2) = 1;
                }
                else
                {
                  v42 = 0;
                  if ( v5 )
                  {
                    while ( 1 )
                    {
                      v43 = v47[v42];
                      if ( v43 >= *(unsigned __int8 *)(v41 + 172) )
                        break;
                      LOBYTE(v2) = 1;
                      if ( ++v42 >= v5 )
                        goto LABEL_63;
                    }
                    *(_WORD *)(v41 + 144) = v42;
                    v47[v42] = v43 - *(unsigned __int8 *)(v41 + 172);
                  }
                  LOBYTE(v2) = 1;
LABEL_63:
                  if ( v42 == v5 )
                    goto LABEL_69;
                }
                if ( ++v40 >= (unsigned __int16)v25 )
                  goto LABEL_69;
              }
            }
            LOBYTE(v2) = 1;
LABEL_69:
            if ( v40 == (_WORD)v25 )
            {
              v36 = 1;
              break;
            }
          }
        }
        if ( (_WORD)v25 )
        {
          v44 = v49;
          v25 = (unsigned __int16)v25;
          do
          {
            v45 = *v44;
            if ( v36 )
            {
              LOBYTE(v2) = (*(_BYTE *)(v45 + 173) ^ (4 * (*(_WORD *)(v45 + 144) < v4))) & 4;
              *(_BYTE *)(v45 + 173) ^= v2;
            }
            else
            {
              LOWORD(v2) = *(_WORD *)(v45 + 146);
              *(_WORD *)(v45 + 144) = v2;
            }
            ++v44;
            *(_WORD *)(v45 + 146) = 0;
            --v25;
          }
          while ( v25 );
        }
      }
    }
  }
  return v2;
}
