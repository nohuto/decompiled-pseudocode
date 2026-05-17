/*
 * XREFs of PssNtWalkSnapshot @ 0x180007FF0
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180008280 (PssNtValidateDescriptor.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall PssNtWalkSnapshot(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  int v13; // edx
  int v14; // eax
  __int16 v15; // ax
  int v16; // ebp
  _QWORD v17[5]; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result < 0 )
    return result;
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      v16 = a2 - 2;
      if ( v16 )
      {
        if ( v16 != 1 )
          return 3221225475LL;
        if ( !a4 || a5 == 136 )
          return PsspWalkInfoClass_PSS_WALK_THREADS(a1, a3, a4);
      }
      else if ( !a4 || a5 == 72 )
      {
        return PsspWalkInfoClass_PSS_WALK_HANDLES(a1, a3, a4);
      }
    }
    else if ( !a4 || a5 == 80 )
    {
      return PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(a1, a3, a4);
    }
    return 3221225476LL;
  }
  if ( a4 && a5 != 80 )
    return 3221225476LL;
  v10 = *(_QWORD *)(a1 + 920);
  if ( !v10 )
    return 3221226021LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !*a3 )
  {
    v17[0] = 0LL;
    result = ZwMapViewOfSection(v10, -1LL, a3, 0LL, 0LL, 0LL, v17, 1, 0, 2);
    if ( (int)result < 0 )
      return result;
    a3[1] = 0LL;
  }
  v11 = *((unsigned int *)a3 + 2);
  if ( v11 >= *(unsigned int *)(a1 + 916) )
    return 2147483674LL;
  if ( !a4 )
    return 261LL;
  v12 = v11 + *a3;
  memset(a4, 0, 0x50uLL);
  v13 = 72;
  *a4 = *(_QWORD *)v12;
  a4[1] = *(_QWORD *)(v12 + 8);
  *((_DWORD *)a4 + 4) = *(_DWORD *)(v12 + 16);
  a4[3] = *(_QWORD *)(v12 + 24);
  *((_DWORD *)a4 + 8) = *(_DWORD *)(v12 + 32);
  *((_DWORD *)a4 + 9) = *(_DWORD *)(v12 + 36);
  *((_DWORD *)a4 + 10) = *(_DWORD *)(v12 + 40);
  *((_DWORD *)a4 + 11) = *(_DWORD *)(v12 + 48);
  *((_DWORD *)a4 + 12) = *(_DWORD *)(v12 + 52);
  a4[7] = *(_QWORD *)(v12 + 56);
  *((_DWORD *)a4 + 16) = *(_DWORD *)(v12 + 64);
  if ( (*(_DWORD *)(a1 + 8) & 0x1000) != 0 && v11 + 76 <= *(unsigned int *)(a1 + 916) )
  {
    v14 = *(_DWORD *)(v12 + 40);
    if ( v14 == 0x1000000 || v14 == 0x40000 )
    {
      v15 = *(_WORD *)(v12 + 72);
      *((_WORD *)a4 + 34) = v15;
      if ( v15 )
        a4[9] = v12 + 74;
      v13 = *((unsigned __int16 *)a4 + 34) + 74;
    }
  }
  a3[1] = v11 + ((v13 + 7) & 0xFFFFFFF8);
  return 0LL;
}
