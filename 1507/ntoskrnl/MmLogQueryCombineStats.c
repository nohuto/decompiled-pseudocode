/*
 * XREFs of MmLogQueryCombineStats @ 0x1406A92D0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

_BYTE *__fastcall MmLogQueryCombineStats(unsigned int *a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  int v4; // eax
  int v5; // ecx
  bool v6; // cc
  _BYTE *result; // rax
  unsigned int v8; // edx
  _BYTE *v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  int v11; // [rsp+3Ch] [rbp-4Ch]
  _BYTE *v12; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+4Ch] [rbp-3Ch]
  _BYTE v15[32]; // [rsp+50h] [rbp-38h] BYREF

  v2 = v15;
  if ( a2 )
    v2 = a2;
  *(_DWORD *)v2 = *(_DWORD *)v2 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v2 + 1) = dword_140355178;
  *((_QWORD *)v2 + 1) = qword_140355160 + qword_140355168;
  *((_QWORD *)v2 + 2) = qword_140355170;
  v4 = dword_14035517C;
  *((_DWORD *)v2 + 6) = dword_14035517C;
  v5 = dword_140355180;
  v6 = v4 <= dword_140355180;
  *((_DWORD *)v2 + 7) = dword_140355180;
  if ( !v6 )
    v4 = v5;
  *((_DWORD *)v2 + 6) = v4;
  result = v15;
  if ( v2 == v15 )
  {
    if ( a1 )
    {
      v12 = v2;
      v14 = 0;
      v8 = *a1;
      v13 = 32;
      return (_BYTE *)EtwpLogKernelEvent((__int64)&v12, v8, 1u, 0x27Cu, 4200450);
    }
    else
    {
      v11 = 0;
      v9 = v2;
      v10 = 32;
      return EtwTraceKernelEvent((int)&v9, 1, 0x20080000u, 0x27Cu, 4200450);
    }
  }
  return result;
}
