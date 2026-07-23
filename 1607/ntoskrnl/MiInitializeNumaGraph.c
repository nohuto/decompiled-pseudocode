/*
 * XREFs of MiInitializeNumaGraph @ 0x14078F41C
 * Callers:
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 */

void __fastcall MiInitializeNumaGraph(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int *v2; // rdx
  unsigned __int16 v3; // r9
  unsigned int v4; // r8d
  unsigned int j; // r9d
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // r8d
  unsigned int v10; // esi
  unsigned int *v11; // r12
  int v12; // r14d
  _QWORD *v13; // r15
  unsigned int i; // edx
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  unsigned int v18; // ebp
  __int16 *p_Base; // r11
  int v20; // r10d
  __int16 v21; // cx
  __int64 v22; // rdx
  int Base; // [rsp+20h] [rbp-438h] BYREF
  _QWORD v24[127]; // [rsp+28h] [rbp-430h] BYREF

  v1 = 0;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 240) + 192LL);
  if ( v2 )
  {
    v3 = KeNumberNodes;
    v8 = *v2;
    v9 = (unsigned __int16)KeNumberNodes;
    v10 = *v2;
    if ( *v2 > (unsigned __int16)KeNumberNodes )
      v10 = (unsigned __int16)KeNumberNodes;
    v11 = &v2[v8 + 1];
    if ( v10 > 0x40 )
      v10 = 64;
    if ( v10 )
    {
      v12 = 0;
      v13 = v24;
      do
      {
        for ( i = 0; i < v8; v24[v16] = v15 )
        {
          if ( i >= 0x40 )
            break;
          v15 = *((_WORD *)v11 + v12 + i);
          if ( !v15 )
            v15 = 1;
          v16 = 2LL * i;
          LODWORD(v24[v16]) = i++;
        }
        if ( i < v9 )
        {
          v17 = &v24[2 * i];
          do
          {
            if ( i >= 0x40 )
              break;
            *v17 = -1LL;
            *((_DWORD *)v17 - 2) = i++;
            v17 += 2;
          }
          while ( i < v9 );
        }
        *v13 = 0LL;
        qsort(&Base, v3, 0x10uLL, MiNodeCostSort);
        v3 = KeNumberNodes;
        v18 = 0;
        v9 = (unsigned __int16)KeNumberNodes;
        if ( KeNumberNodes )
        {
          p_Base = (__int16 *)&Base;
          v20 = v1 * (unsigned __int16)KeNumberNodes;
          do
          {
            v21 = *p_Base;
            v22 = v20 + v18;
            p_Base += 8;
            ++v18;
            *((_WORD *)qword_1403269E8 + v22) = v21;
          }
          while ( v18 < v9 );
        }
        ++v1;
        v12 += v8;
        v13 += 2;
      }
      while ( v1 < v10 );
    }
  }
  else
  {
    v3 = KeNumberNodes;
  }
  v4 = v3;
  while ( v1 < v4 )
  {
    for ( j = v1; j < v4 + v1; *((_WORD *)qword_1403269E8 + v6) = (v7 % v4) & 0x3F )
    {
      v6 = v1 * (v4 - 1) + j;
      v7 = j++;
    }
    ++v1;
  }
}
