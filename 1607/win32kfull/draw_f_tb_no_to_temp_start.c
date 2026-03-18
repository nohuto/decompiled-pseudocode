/*
 * XREFs of draw_f_tb_no_to_temp_start @ 0x1C00F80B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_f_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbp
  int v7; // r14d
  int v9; // esi
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // r11d
  _BYTE *v13; // r10
  int v14; // ebx
  int v15; // ecx
  char *v16; // r9
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(); // rax
  char *v19; // rcx
  char v20; // al
  __int64 v21; // [rsp+80h] [rbp+18h]

  if ( a2 )
  {
    v21 = a3;
    v6 = 0LL;
    v7 = a2;
    v9 = *(_DWORD *)(a1 + 16) - a4;
    do
    {
      --v7;
      v10 = **(_QWORD **)(a1 + 24 * v6 + 8);
      v11 = *(_DWORD *)(v10 + 8);
      v12 = ((_BYTE)v9 + *(_BYTE *)v10) & 7;
      v13 = (_BYTE *)(a3 + ((__int64)(v9 + *(_DWORD *)v10) >> 3));
      v14 = (v11 + 7) >> 3;
      v15 = (int)(v11 + v12 + 7) >> 3;
      if ( v15 > 4 )
      {
        OrAllTableWide[((((_BYTE)v9 + *(_BYTE *)v10) & 7) == 0) | (unsigned __int64)(2 * (unsigned int)(v15 > v14))](
          *(_DWORD *)(v10 + 12),
          ((_BYTE)v9 + *(_BYTE *)v10) & 7,
          a5,
          v10 + 16,
          (__int64)v13,
          (v11 + 7) >> 3,
          v15);
      }
      else
      {
        v16 = (char *)(v10 + 16);
        v17 = *(int *)(v10 + 12);
        v18 = OrInitialTableNarrow[(v12 == 0) | (unsigned __int64)(2 * ((v15 > v14) | (unsigned int)(2 * v15)))];
        if ( (char *)v18 == (char *)mov_first_1_wide_unrotated )
        {
          v19 = &v16[v17];
          do
          {
            v20 = *v16++;
            *v13 = v20;
            v13 += a5;
          }
          while ( v16 != v19 );
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, char *, _BYTE *, int))v18)(
            (unsigned int)v17,
            v12,
            (unsigned int)a5,
            v16,
            v13,
            v14);
        }
      }
      a3 = v21;
      v6 = (unsigned int)(v6 + 1);
      v9 += a6;
    }
    while ( v7 );
  }
}
