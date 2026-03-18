/*
 * XREFs of MiInitializeNumaGraph @ 0x1407C4618
 * Callers:
 *     MiCreatePfnDatabase @ 0x1407C444C (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 */

void __fastcall MiInitializeNumaGraph(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int *v2; // rdx
  unsigned __int16 v3; // r10
  unsigned int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // ebp
  unsigned int *v7; // r12
  int v8; // r14d
  _QWORD *v9; // r15
  unsigned int v10; // edx
  _QWORD *v11; // r8
  unsigned __int16 v12; // ax
  unsigned int v13; // esi
  __int16 *v14; // r11
  int v15; // r8d
  __int16 v16; // cx
  __int64 v17; // rdx
  unsigned int i; // r9d
  __int64 v19; // rcx
  unsigned int v20; // eax
  _QWORD *v21; // rcx
  char Base[8]; // [rsp+20h] [rbp-438h] BYREF
  _OWORD v23[63]; // [rsp+28h] [rbp-430h] BYREF

  v1 = 0;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 240) + 192LL);
  if ( v2 )
  {
    v3 = KeNumberNodes;
    v4 = *v2;
    v5 = (unsigned __int16)KeNumberNodes;
    v6 = *v2;
    if ( *v2 > (unsigned __int16)KeNumberNodes )
      v6 = (unsigned __int16)KeNumberNodes;
    v7 = &v2[v4 + 1];
    if ( v6 > 0x40 )
      v6 = 64;
    if ( v6 )
    {
      v8 = 0;
      v9 = v23;
      do
      {
        v10 = 0;
        if ( v4 )
        {
          v11 = v23;
          do
          {
            if ( v10 >= 0x40 )
              break;
            v12 = *((_WORD *)v7 + v8 + v10);
            if ( !v12 )
              v12 = 1;
            *((_DWORD *)v11 - 2) = v10++;
            *v11 = v12;
            v11 += 2;
          }
          while ( v10 < v4 );
        }
        if ( v10 < v5 )
        {
          v21 = &v23[v10];
          do
          {
            if ( v10 >= 0x40 )
              break;
            *v21 = -1LL;
            *((_DWORD *)v21 - 2) = v10++;
            v21 += 2;
          }
          while ( v10 < v5 );
        }
        *v9 = 0LL;
        qsort(Base, v3, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiNodeCostSort);
        v3 = KeNumberNodes;
        v13 = 0;
        v5 = (unsigned __int16)KeNumberNodes;
        if ( KeNumberNodes )
        {
          v14 = (__int16 *)Base;
          v15 = v1 * (unsigned __int16)KeNumberNodes;
          do
          {
            v16 = *v14;
            v17 = v15 + v13;
            v14 += 8;
            ++v13;
            *((_WORD *)qword_14034EB68 + v17) = v16;
          }
          while ( v13 < v5 );
        }
        ++v1;
        v8 += v4;
        v9 += 2;
      }
      while ( v1 < v6 );
    }
  }
  else
  {
    v3 = KeNumberNodes;
  }
  while ( v1 < v3 )
  {
    for ( i = v1; i < v3 + v1; *((_WORD *)qword_14034EB68 + v19) = (v20 % v3) & 0x3F )
    {
      v19 = v1 * (v3 - 1) + i;
      v20 = i++;
    }
    ++v1;
  }
}
