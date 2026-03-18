/*
 * XREFs of KiShuffleAssignedNodes @ 0x1407FACEC
 * Callers:
 *     KiPerformGroupConfiguration @ 0x1407E3360 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiShuffleAssignedNodes(__int64 *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // bx
  char v10; // r10
  __int64 *v11; // r13
  __int64 v12; // rsi
  unsigned __int16 v13; // r10
  __int64 *v14; // r13
  __int64 v15; // r15
  unsigned __int16 v16; // r9
  int v17; // ecx
  unsigned __int16 v18; // dx
  int v19; // eax
  unsigned int v20; // edi
  unsigned __int16 v21; // r8
  __int64 v22; // rdx
  unsigned __int16 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned __int16 v26; // r8
  __int64 v27; // rdx
  unsigned __int16 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // r9d
  int v34; // eax
  int v35; // r9d
  unsigned __int16 v36; // [rsp+0h] [rbp-78h]
  __int16 v37; // [rsp+2h] [rbp-76h]
  unsigned __int16 v38; // [rsp+4h] [rbp-74h]
  unsigned __int16 v39; // [rsp+6h] [rbp-72h]
  unsigned __int16 v40; // [rsp+8h] [rbp-70h]
  unsigned int v41; // [rsp+10h] [rbp-68h]
  int v42; // [rsp+14h] [rbp-64h]
  _DWORD *v43; // [rsp+18h] [rbp-60h]
  __int64 *v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  __int64 v46; // [rsp+30h] [rbp-48h]
  __int64 *v47; // [rsp+38h] [rbp-40h]
  char v48; // [rsp+88h] [rbp+10h]

  LODWORD(result) = 0;
  v43 = KeNodeDistance;
  v7 = a3;
  v36 = KeNumberNodes;
  v8 = 64;
  v42 = 0;
  do
  {
    v48 = 0;
    v9 = 0;
    v39 = 0;
    v10 = 0;
    if ( a2 )
    {
      v11 = a1;
      v47 = a1;
      while ( 1 )
      {
        v12 = *v11;
        v45 = *v11;
        if ( (*(_BYTE *)(*v11 + 173) & 2) == 0 )
          goto LABEL_46;
        v37 = 64;
        v13 = 0;
        v41 = 0;
        v14 = a1;
        v38 = 0;
        v44 = a1;
        do
        {
          v15 = *v14;
          v46 = *v14;
          if ( (*(_BYTE *)(*v14 + 173) & 2) != 0 && v9 != v13 )
          {
            v16 = *(_WORD *)(v12 + 144);
            v40 = *(_WORD *)(v15 + 144);
            if ( v16 != v40 )
            {
              if ( v9 >= v13 )
              {
                v19 = *(unsigned __int8 *)(v12 + 172);
                v18 = *(_WORD *)(v12 + 144);
                v17 = *(unsigned __int8 *)(v15 + 172);
              }
              else
              {
                v17 = *(unsigned __int8 *)(v12 + 172);
                v18 = *(_WORD *)(v15 + 144);
                v19 = *(unsigned __int8 *)(v15 + 172);
              }
              if ( *(_DWORD *)(v7 + 4LL * v18) >= (unsigned int)(v17 - v19) )
              {
                v20 = 0;
                v21 = 0;
                do
                {
                  if ( v21 != v9 )
                  {
                    v22 = a1[v21];
                    if ( *(_WORD *)(v22 + 144) == v16 && (*(_BYTE *)(v22 + 173) & 2) != 0 )
                      v20 += v43[*(unsigned __int16 *)(v22 + 146)
                               + v36 * (unsigned __int64)*(unsigned __int16 *)(v12 + 146)]
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v16) - 1);
                  }
                  ++v21;
                }
                while ( v21 < a2 );
                v23 = 0;
                do
                {
                  if ( v23 != v38 )
                  {
                    v24 = a1[v23];
                    if ( *(_WORD *)(v24 + 144) == v40 && (*(_BYTE *)(v24 + 173) & 2) != 0 )
                      v20 += v43[*(unsigned __int16 *)(v24 + 146)
                               + v36 * (unsigned __int64)*(unsigned __int16 *)(v46 + 146)]
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v40) - 1);
                  }
                  ++v23;
                }
                while ( v23 < a2 );
                v25 = 0;
                v26 = 0;
                do
                {
                  if ( v26 != v38 )
                  {
                    v27 = a1[v26];
                    if ( *(_WORD *)(v27 + 144) == *(_WORD *)(v46 + 144) && (*(_BYTE *)(v27 + 173) & 2) != 0 )
                      v25 += v43[*(unsigned __int16 *)(v27 + 146)
                               + v36 * (unsigned __int64)*(unsigned __int16 *)(v45 + 146)]
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * *(unsigned __int16 *)(v46 + 144)) - 1);
                  }
                  ++v26;
                }
                while ( v26 < a2 );
                v9 = v39;
                v28 = 0;
                do
                {
                  if ( v28 != v39 )
                  {
                    v29 = a1[v28];
                    if ( *(_WORD *)(v29 + 144) == *(_WORD *)(v45 + 144) && (*(_BYTE *)(v29 + 173) & 2) != 0 )
                      v25 += v43[*(unsigned __int16 *)(v29 + 146)
                               + v36 * (unsigned __int64)*(unsigned __int16 *)(v46 + 146)]
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * *(unsigned __int16 *)(v45 + 144)) - 1);
                  }
                  ++v28;
                }
                while ( v28 < a2 );
                v13 = v38;
                v12 = v45;
                v14 = v44;
                if ( v25 < v20 && v41 < v20 - v25 )
                {
                  v8 = v38;
                  v41 = v20 - v25;
                  v7 = a3;
                  v37 = v38;
                  goto LABEL_42;
                }
                v7 = a3;
              }
              v8 = v37;
            }
          }
LABEL_42:
          ++v14;
          ++v13;
          v44 = v14;
          v38 = v13;
        }
        while ( v13 < a2 );
        v11 = v47;
        if ( v8 == 64 )
        {
          v10 = v48;
          v8 = 64;
        }
        else
        {
          v30 = *(unsigned __int16 *)(v12 + 144);
          v10 = 1;
          v48 = 1;
          v31 = a1[v8];
          v32 = *(unsigned __int16 *)(v31 + 144);
          *(_WORD *)(v12 + 144) = v32;
          *(_WORD *)(v31 + 144) = v30;
          LODWORD(v31) = *(unsigned __int8 *)(v31 + 172);
          v33 = *(unsigned __int8 *)(v12 + 172);
          v34 = v31 - v33;
          v35 = v33 - v31;
          *(_DWORD *)(v7 + 4 * v30) += v34;
          v8 = 64;
          *(_DWORD *)(v7 + 4 * v32) += v35;
        }
LABEL_46:
        ++v9;
        ++v11;
        v39 = v9;
        v47 = v11;
        if ( v9 >= a2 )
        {
          LODWORD(result) = v42;
          break;
        }
      }
    }
    result = (unsigned int)(result + 1);
    v42 = result;
  }
  while ( v10 && (unsigned int)result < 0xA );
  return result;
}
