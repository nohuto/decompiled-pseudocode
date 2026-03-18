/*
 * XREFs of draw_f_ntb_o_to_temp_start @ 0x1C02D4FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_f_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // edi
  _DWORD *v12; // r10
  int v13; // eax
  int v14; // ecx
  int v15; // r13d
  int v16; // r8d
  __int64 v17; // rax

  if ( a2 )
  {
    v7 = 0LL;
    v8 = *(_DWORD *)(a1 + 16) - a4;
    v9 = *(_DWORD *)(a1 + 20) - a7;
    v10 = a2;
    do
    {
      --v10;
      v12 = **(_DWORD ***)(a1 + 24 * v7 + 8);
      v13 = v12[2];
      v14 = v8 + *v12;
      v15 = (v13 + 7) >> 3;
      v16 = (v13 + (((unsigned __int8)v8 + *(_BYTE *)v12) & 7) + 7) >> 3;
      v17 = a3 + (int)(a5 * (v9 + v12[1]));
      if ( v16 > 4 )
        OrAllTableWide[((((_BYTE)v8 + *(_BYTE *)v12) & 7) == 0) | (unsigned __int64)(2 * (unsigned int)(v16 > v15))](
          v12[3],
          ((_BYTE)v8 + *(_BYTE *)v12) & 7,
          a5,
          (int)(v12 + 4),
          v17 + ((__int64)v14 >> 3),
          v15,
          v16);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _DWORD *, __int64, int))OrAllTableNarrow[((((_BYTE)v8
                                                                                                + *(_BYTE *)v12) & 7) == 0) | (unsigned __int64)(2 * ((v16 > v15) | (unsigned int)(2 * v16)))])(
          (unsigned int)v12[3],
          ((_BYTE)v8 + *(_BYTE *)v12) & 7,
          a5,
          v12 + 4,
          v17 + ((__int64)v14 >> 3),
          v15);
      v8 += a6;
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v10 );
  }
}
