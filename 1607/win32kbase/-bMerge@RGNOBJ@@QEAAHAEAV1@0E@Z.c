/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C002D9C0
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C001EAC8 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001EC8C (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00BF090 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ULongAdd @ 0x1C0053900 (ULongAdd.c)
 *     memcmp @ 0x1C0089C20 (memcmp.c)
 *     ULongMult @ 0x1C00BC1B4 (ULongMult.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  RGNOBJ *v4; // r14
  unsigned int *v5; // rdi
  unsigned __int8 v6; // si
  int *v7; // r12
  int *v8; // rbp
  ULONG v9; // ecx
  unsigned int *v10; // rbx
  ULONG v11; // r10d
  signed int v12; // ecx
  int *v13; // r9
  signed int v14; // r13d
  int *v15; // r10
  _DWORD *v16; // r15
  __int64 v17; // rax
  int v18; // r11d
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // eax
  signed int v22; // ecx
  signed int v23; // ecx
  signed int v24; // edx
  signed int v25; // ecx
  ULONG pulResult[6]; // [rsp+20h] [rbp-58h] BYREF

  v4 = this;
  v5 = 0LL;
  v6 = a4;
  v7 = (int *)(*(_QWORD *)a2 + 104LL);
  v8 = (int *)(*(_QWORD *)a3 + 104LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000;
  while ( 2 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)v4 + 80LL);
    v10 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
    if ( 4 * (*v7 + *v8) + 16 > *(_DWORD *)(*(_QWORD *)v4 + 24LL) - v9 )
    {
      if ( ULongMult(v9, 2u, pulResult) < 0
        || ULongAdd(pulResult[0], v11, pulResult) < 0
        || !(unsigned int)RGNOBJ::bExpand(v4, pulResult[0]) )
      {
        return 0LL;
      }
      v10 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
      if ( v5 )
        v5 = &v10[-*(v10 - 1) - 4];
    }
    v12 = v8[1];
    v13 = v7 + 3;
    v14 = v8[2];
    v15 = v8 + 3;
    if ( v7[1] > v12 )
      v12 = v7[1];
    v16 = v10 + 3;
    LOBYTE(v17) = 1;
    if ( v7[2] < v14 )
      v14 = v7[2];
    v10[2] = v14;
    v10[1] = v12;
    v18 = *v7;
    v19 = *v8;
    *v10 = 0;
    while ( v18 )
    {
      v20 = *v13;
      if ( v19 && v20 >= *v15 )
      {
        v17 = (unsigned __int8)v17;
        if ( v20 > *v15 )
        {
          v20 = *v15;
          goto LABEL_24;
        }
        LOBYTE(v17) = byte_1C0103370[(unsigned __int8)v17];
        ++v13;
        --v18;
LABEL_25:
        ++v15;
        --v19;
        goto LABEL_26;
      }
      ++v13;
      --v18;
      LOBYTE(v17) = byte_1C0103370[(unsigned __int8)v17 + 32];
LABEL_26:
      if ( (v6 & (unsigned __int8)v17) != 0 )
      {
        ++*v10;
        *v16++ = v20;
        v6 ^= 0xFu;
      }
    }
    if ( v19 )
    {
      v20 = *v15;
      v17 = (unsigned __int8)v17;
LABEL_24:
      LOBYTE(v17) = byte_1C0103370[v17 + 16];
      goto LABEL_25;
    }
    v4 = this;
    v10[*v10 + 3] = *v10;
    if ( v5 && *v5 == *v10 && !memcmp(v5 + 3, v10 + 3, 4LL * *v5) )
    {
      v21 = v10[2];
      v10 = v5;
      v5[2] = v21;
    }
    else if ( v5 != v10 )
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = &v10[*v10 + 4];
      *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v10 + 16;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    }
    if ( v10[2] != 0x7FFFFFFF )
    {
      if ( *v10 )
      {
        v22 = v10[3];
        if ( v22 < *(_DWORD *)(*(_QWORD *)this + 88LL) )
          *(_DWORD *)(*(_QWORD *)this + 88LL) = v22;
        v23 = v10[1];
        if ( v23 < *(_DWORD *)(*(_QWORD *)this + 92LL) )
          *(_DWORD *)(*(_QWORD *)this + 92LL) = v23;
        v24 = v10[*v10 + 2];
        if ( v24 > *(_DWORD *)(*(_QWORD *)this + 96LL) )
          *(_DWORD *)(*(_QWORD *)this + 96LL) = v24;
        v25 = v10[2];
        if ( v25 > *(_DWORD *)(*(_QWORD *)this + 100LL) )
          *(_DWORD *)(*(_QWORD *)this + 100LL) = v25;
      }
      if ( v14 == v7[2] )
        v7 = (int *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
      if ( v14 == v8[2] )
        v8 = (int *)((char *)v8 + (unsigned int)(4 * *v8 + 16));
      if ( (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a2 + 40LL)
        || (unsigned __int64)v8 >= *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
      {
        return 0LL;
      }
      v6 = a4;
      v5 = v10;
      continue;
    }
    return 1LL;
  }
}
