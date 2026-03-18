/*
 * XREFs of draw_f_tb_no_to_temp_start @ 0x1C02D0EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_f_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 v6; // rsi
  int v8; // ebx
  int v9; // edi
  _DWORD *v11; // r14
  int v12; // eax
  int v13; // ecx
  int v14; // ebp
  int v15; // r8d

  if ( a2 )
  {
    v6 = 0LL;
    v8 = *(_DWORD *)(a1 + 16) - a4;
    v9 = a2;
    do
    {
      --v9;
      v11 = **(_DWORD ***)(a1 + 24 * v6 + 8);
      v12 = v11[2];
      v13 = v8 + *v11;
      v14 = (v12 + 7) >> 3;
      v15 = (v12 + (((unsigned __int8)v8 + *(_BYTE *)v11) & 7) + 7) >> 3;
      if ( v15 > 4 )
        OrAllTableWide[((((_BYTE)v8 + *(_BYTE *)v11) & 7) == 0) | (unsigned __int64)(2 * (unsigned int)(v15 > v14))](
          v11[3],
          ((_BYTE)v8 + *(_BYTE *)v11) & 7,
          a5,
          (int)(v11 + 4),
          a3 + ((__int64)v13 >> 3),
          (v12 + 7) >> 3,
          v15);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _DWORD *, __int64, int))OrInitialTableNarrow[((((_BYTE)v8 + *(_BYTE *)v11) & 7) == 0) | (unsigned __int64)(2 * ((v15 > v14) | (unsigned int)(2 * v15)))])(
          (unsigned int)v11[3],
          ((_BYTE)v8 + *(_BYTE *)v11) & 7,
          a5,
          v11 + 4,
          a3 + ((__int64)v13 >> 3),
          (v12 + 7) >> 3);
      v8 += a6;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v9 );
  }
}
