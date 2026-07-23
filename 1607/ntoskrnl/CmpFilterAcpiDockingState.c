/*
 * XREFs of CmpFilterAcpiDockingState @ 0x14055C414
 * Callers:
 *     CmSetAcpiHwProfile @ 0x14055BF28 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall CmpFilterAcpiDockingState(unsigned __int16 *a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  char v7; // r13
  char v9; // r8
  int v10; // r12d
  __int64 v12; // rdi
  unsigned int v13; // ecx
  SIZE_T v14; // rax
  unsigned int v15; // edx
  int v16; // r14d
  __int64 v17; // rcx
  char v18; // r10
  unsigned int v19; // ebx
  unsigned int v20; // edi
  __int64 v21; // rcx
  int v22; // eax
  char v24; // [rsp+20h] [rbp-38h]
  char v25; // [rsp+24h] [rbp-34h]
  int v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+2Ch] [rbp-2Ch]
  int v28; // [rsp+78h] [rbp+20h]

  v28 = a4;
  v6 = 0LL;
  v7 = 0;
  v27 = 0;
  v9 = 0;
  v24 = 0;
  v10 = a2;
  v25 = 0;
  LOBYTE(a2) = 0;
  v26 = a2;
  if ( a6 && *(_DWORD *)(a6 + 4) )
  {
    do
    {
      v12 = 3 * v6;
      if ( (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == 0 || (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == (*a1 & 3) )
      {
        v13 = *(_DWORD *)(a6 + 24 * v6 + 16);
        if ( v13 == a1[1] )
        {
          v14 = RtlCompareMemory(a1 + 2, *(const void **)(a6 + 24 * v6 + 24), v13);
          v9 = v25;
          a4 = v28;
          if ( *(_DWORD *)(a6 + 24 * v6 + 16) == v14 )
          {
            v15 = 0;
            if ( *(_DWORD *)(a5 + 4) )
            {
              v16 = v26;
              do
              {
                v17 = 32LL * v15;
                if ( *(_DWORD *)(v17 + a5 + 28) == *(_DWORD *)(a6 + 8 * v12 + 8) )
                {
                  *(_DWORD *)(v17 + a5 + 32) |= 2u;
                  v7 = 1;
                }
                if ( v10 == *a1 )
                {
                  v16 = (unsigned __int8)v16;
                  if ( !a3 )
                    v16 = 1;
                }
                if ( *(_DWORD *)(a6 + 8 * v12 + 8) == v28 )
                  v9 = 1;
                ++v15;
              }
              while ( v15 < *(_DWORD *)(a5 + 4) );
              v26 = v16;
              LODWORD(v6) = v27;
              v25 = v9;
            }
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
      v27 = v6;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a6 + 4) );
    LOBYTE(a2) = v26;
    if ( (_BYTE)v26 )
      goto LABEL_20;
  }
  if ( a3 || v7 || v10 != *a1 )
  {
LABEL_20:
    v18 = 0;
  }
  else
  {
    v18 = 1;
    v24 = 1;
    v7 = 1;
  }
  v19 = 0;
  if ( *(_DWORD *)(a5 + 4) )
  {
    v20 = 1;
    do
    {
      v21 = 32LL * v19;
      v22 = *(_DWORD *)(v21 + a5 + 32);
      if ( (_BYTE)a2 )
      {
        if ( (v22 & 2) == 0 )
          goto LABEL_30;
        if ( !v9 )
        {
          *(_DWORD *)(v21 + a5 + 32) = v22 | 8;
          goto LABEL_27;
        }
      }
      else
      {
        if ( (v22 & 4) != 0 && !v7 || (v22 & 1) != 0 || (v22 & 2) != 0 )
          goto LABEL_27;
        if ( !v18 )
        {
LABEL_30:
          if ( *(_DWORD *)(a5 + 4) - v19 != 1 )
          {
            memmove((void *)(a5 + v21 + 8), (const void *)(32LL * v20 + a5 + 8), 32LL * (*(_DWORD *)(a5 + 4) - v19 - 1));
            LOBYTE(a2) = v26;
          }
          --*(_DWORD *)(a5 + 4);
          goto LABEL_28;
        }
      }
      if ( *(_DWORD *)(v21 + a5 + 28) != a4 )
        goto LABEL_30;
LABEL_27:
      ++v19;
      ++v20;
LABEL_28:
      v9 = v25;
      a4 = v28;
      v18 = v24;
    }
    while ( v19 < *(_DWORD *)(a5 + 4) );
  }
  return 0LL;
}
