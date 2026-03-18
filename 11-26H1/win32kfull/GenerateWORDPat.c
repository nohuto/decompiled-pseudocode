/*
 * XREFs of GenerateWORDPat @ 0x1401E808C
 * Callers:
 *     ComputeHTCell @ 0x14017EDFC (ComputeHTCell.c)
 *     Generate_HTSC_WORD @ 0x1401E7DF4 (Generate_HTSC_WORD.c)
 * Callees:
 *     ExpandHTPatX @ 0x14028FDE4 (ExpandHTPatX.c)
 */

__int64 __fastcall GenerateWORDPat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned __int64 v13; // rdx
  unsigned __int8 *v14; // r14
  int v15; // r11d
  unsigned __int8 **v16; // r13
  unsigned __int8 *v17; // r10
  unsigned int v18; // r9d
  unsigned __int8 *v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  unsigned __int8 v22; // al
  char *v23; // rdi
  unsigned int v24; // edx
  char v25; // r8
  int v26; // ecx
  unsigned int v27; // r10d
  int v28; // eax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-58h]
  _QWORD v31[3]; // [rsp+38h] [rbp-40h] BYREF

  v7 = a5;
  v8 = 0;
  if ( !a5 )
    return 0LL;
  if ( a5 > a6 )
    return 0LL;
  v10 = a7;
  if ( !a7 )
    return 0LL;
  v31[2] = a1;
  v11 = a7 * a5;
  v31[0] = a3;
  v12 = a6 - a5;
  v31[1] = a2;
  if ( a7 * (unsigned __int64)a5 > 0xFFFFFFFF )
    return 0LL;
  v13 = 8LL * v11;
  if ( v13 > 0xFFFFFFFF )
    return 0LL;
  v14 = (unsigned __int8 *)EngAllocMem(1u, v13, 0x32355448u);
  if ( !v14 )
    return 0LL;
  v15 = 3 * v12;
  v30 = 3 * v12;
  v16 = (unsigned __int8 **)v31;
  while ( 1 )
  {
    v17 = *v16;
    v18 = v10;
    v19 = v14;
    v20 = v8;
    do
    {
      v21 = v7;
      --v18;
      do
      {
        v22 = *v17++;
        *((_DWORD *)v19 + 1) = v20;
        v20 += 3;
        *v19 = v22;
        v19 += 8;
        --v21;
      }
      while ( v21 );
      v7 = a5;
      v20 += v15;
    }
    while ( v18 );
    v23 = (char *)v14;
    qsort(v14, v11, 8uLL, SCDataCompare);
    v10 = a7;
    LOWORD(v24) = 0;
    v25 = 0;
    v26 = a7 * a5;
    v27 = v14[8 * v11 - 8];
    if ( v11 )
    {
      do
      {
        v28 = (unsigned __int8)*v23;
        --v26;
        if ( (_BYTE)v28 != v25 )
        {
          v25 = *v23;
          v24 = ((v27 >> 1) + 4095 * v28) / v27;
        }
        v29 = *((unsigned int *)v23 + 1);
        v23 += 8;
        a4[v29] = v24;
      }
      while ( v26 );
      v7 = a5;
    }
    ++v8;
    ++v16;
    if ( v8 >= 3 )
      break;
    v15 = v30;
  }
  ExpandHTPatX(a4);
  EngFreeMem(v14);
  return 1LL;
}
