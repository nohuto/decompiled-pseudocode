/*
 * XREFs of MiApplyDynamicFixups @ 0x1407AA734
 * Callers:
 *     MiApplyDynamicRelocations @ 0x1407AA654 (MiApplyDynamicRelocations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiApplyDynamicFixups(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned int *v5; // rax
  __int64 v6; // r10
  __int64 v9; // r11
  __int64 v10; // rbx
  unsigned int *v11; // r9
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int16 *v14; // r8
  unsigned __int16 v15; // ax

  v3 = *(unsigned int *)(a2 + 8) + a2 + 12;
  v4 = a3 - *(_QWORD *)a2;
  v5 = (unsigned int *)(a2 + 12);
  v6 = *(unsigned int *)(a2 + 16);
  v9 = a1 + *(unsigned int *)(a2 + 12);
  v10 = v6;
  v11 = (unsigned int *)(v6 + a2 + 12);
  if ( a2 + 12 >= a2 )
  {
    while ( (unsigned __int64)v5 < v3 && (unsigned __int64)v11 <= v3 && (unsigned int)v6 >= 0xA && (v6 & 1) == 0 )
    {
      v12 = 0;
      v13 = (unsigned __int64)(v10 - 8) >> 1;
      v14 = (unsigned __int16 *)(v5 + 2);
      if ( (_DWORD)v13 )
      {
        do
        {
          v15 = *v14;
          if ( !*v14 && v12 )
            break;
          if ( (v15 & 0xF000) != 0 )
            return 3221225595LL;
          ++v12;
          ++v14;
          *(_QWORD *)(v9 + v15) += v4;
        }
        while ( v12 < (unsigned int)v13 );
      }
      if ( v11 == (unsigned int *)v3 )
        return 0LL;
      v6 = v11[1];
      v5 = v11;
      v11 = (unsigned int *)((char *)v11 + v6);
      v10 = (unsigned int)v6;
      v9 = a1 + *v5;
      if ( (unsigned __int64)v5 <= a2 )
        return 3221225595LL;
    }
  }
  return 3221225595LL;
}
