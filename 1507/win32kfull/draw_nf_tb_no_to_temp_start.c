/*
 * XREFs of draw_nf_tb_no_to_temp_start @ 0x1C0112340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_nf_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  int v7; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // r10d
  __int64 v13; // r11
  int v14; // r8d
  int v15; // ebp

  if ( a2 )
  {
    v7 = a2;
    v9 = 0LL;
    do
    {
      --v7;
      v10 = **(_QWORD **)(a1 + 24 * v9 + 8);
      v11 = *(_DWORD *)(v10 + 8);
      v12 = (*(_BYTE *)v10 + *(_BYTE *)(a1 + 24 * v9 + 16) - (_BYTE)a4) & 7;
      v13 = a3 + ((__int64)(*(_DWORD *)v10 + *(_DWORD *)(a1 + 24 * v9 + 16) - a4) >> 3);
      v14 = (int)(v11 + v12 + 7) >> 3;
      v15 = (v11 + 7) >> 3;
      if ( v14 > 4 )
        OrAllTableWide[(v12 == 0) | (unsigned __int64)(2 * (unsigned int)(v14 > v15))](
          *(_DWORD *)(v10 + 12),
          v12,
          a5,
          v10 + 16,
          v13,
          (v11 + 7) >> 3,
          v14);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int64, int))OrInitialTableNarrow[(v12 == 0) | (unsigned __int64)(2 * ((v14 > v15) | (unsigned int)(2 * v14)))])(
          *(unsigned int *)(v10 + 12),
          v12,
          a5,
          v10 + 16,
          v13,
          (v11 + 7) >> 3);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( v7 );
  }
}
