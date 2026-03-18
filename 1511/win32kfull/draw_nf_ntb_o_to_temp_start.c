/*
 * XREFs of draw_nf_ntb_o_to_temp_start @ 0x1C00C46A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_nf_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rbx
  _DWORD *v12; // rsi
  int v13; // eax
  int v14; // edx
  unsigned int v15; // r10d
  int v16; // r11d
  int v17; // r8d
  __int64 v18; // rax

  if ( a2 )
  {
    v9 = a2;
    v10 = a1;
    v11 = 0LL;
    do
    {
      --v9;
      v12 = **(_DWORD ***)(v10 + 24 * v11 + 8);
      v13 = v12[2];
      v14 = *v12 + *(_DWORD *)(v10 + 24 * v11 + 16) - a4;
      v15 = (*(_BYTE *)v12 + *(_BYTE *)(v10 + 24 * v11 + 16) - (_BYTE)a4) & 7;
      v16 = (v13 + 7) >> 3;
      v17 = (int)(v13 + v15 + 7) >> 3;
      v18 = a3 + (int)(a5 * (*(_DWORD *)(v10 + 24 * v11 + 20) + v12[1] - a7));
      if ( v17 > 4 )
        OrAllTableWide[(v15 == 0) | (unsigned __int64)(2 * (unsigned int)(v17 > v16))](
          v12[3],
          v15,
          a5,
          (int)(v12 + 4),
          v18 + ((__int64)v14 >> 3),
          v16,
          v17);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _DWORD *, __int64, int))OrAllTableNarrow[(v15 == 0) | (unsigned __int64)(2 * ((v17 > v16) | (unsigned int)(2 * v17)))])(
          (unsigned int)v12[3],
          v15,
          a5,
          v12 + 4,
          v18 + ((__int64)v14 >> 3),
          v16);
      v10 = a1;
      v11 = (unsigned int)(v11 + 1);
    }
    while ( v9 );
  }
}
