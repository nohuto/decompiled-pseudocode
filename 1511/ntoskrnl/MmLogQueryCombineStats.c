/*
 * XREFs of MmLogQueryCombineStats @ 0x14051A0A0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall MmLogQueryCombineStats(unsigned int *a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  int v4; // eax
  int v5; // ecx
  bool v6; // cc
  __int64 v7; // rdx
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
  *((_DWORD *)v2 + 1) = dword_140301320;
  *((_QWORD *)v2 + 1) = qword_140301308 + qword_140301310;
  *((_QWORD *)v2 + 2) = qword_140301318;
  v4 = dword_140301324;
  *((_DWORD *)v2 + 6) = dword_140301324;
  v5 = dword_140301328;
  v6 = v4 <= dword_140301328;
  *((_DWORD *)v2 + 7) = dword_140301328;
  if ( !v6 )
    v4 = v5;
  *((_DWORD *)v2 + 6) = v4;
  if ( v2 == v14 )
  {
    if ( a1 )
    {
      v13 = 0;
      v11 = v2;
      v7 = *a1;
      v12 = 32;
      EtwpLogKernelEvent((__int64)&v11, v7, 1LL, 0x27Cu, 0x401802u);
    }
    else
    {
      v10 = 0;
      v8 = v2;
      v9 = 32;
      EtwTraceKernelEvent((int)&v8, 1, 0x20080000u, 0x27Cu, 4200450);
    }
  }
}
