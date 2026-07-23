/*
 * XREFs of MmLogQueryCombineStats @ 0x140664594
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall MmLogQueryCombineStats(unsigned int *a1, _BYTE *a2)
{
  _BYTE *v2; // r10
  int v4; // eax
  int v5; // ecx
  bool v6; // cc
  LONGLONG v7; // r8
  _BYTE *v8; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+38h] [rbp-50h]
  int v10; // [rsp+3Ch] [rbp-4Ch]
  _BYTE *v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+4Ch] [rbp-3Ch]
  _BYTE v14[32]; // [rsp+50h] [rbp-38h] BYREF

  v2 = v14;
  if ( a2 )
    v2 = a2;
  *(_DWORD *)v2 = *(_DWORD *)v2 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v2 + 1) = dword_140324DD8;
  *((_QWORD *)v2 + 1) = qword_140324DC0 + qword_140324DC8;
  *((_QWORD *)v2 + 2) = qword_140324DD0;
  v4 = dword_140324DDC;
  *((_DWORD *)v2 + 6) = dword_140324DDC;
  v5 = dword_140324DE0;
  v6 = v4 <= dword_140324DE0;
  *((_DWORD *)v2 + 7) = dword_140324DE0;
  if ( !v6 )
    v4 = v5;
  *((_DWORD *)v2 + 6) = v4;
  if ( v2 == v14 )
  {
    if ( a1 )
    {
      v7 = *a1;
      v8 = v2;
      v10 = 0;
      v9 = 32;
      EtwpLogKernelEvent((__int64)&v8, EtwpHostSiloState, v7, 1u, 0x27Cu, 0x401802u);
    }
    else
    {
      v13 = 0;
      v11 = v2;
      v12 = 32;
      EtwTraceKernelEvent((int)&v11, 1, 0x20080000u, 636, 4200450);
    }
  }
}
