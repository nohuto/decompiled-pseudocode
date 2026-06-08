/*
 * XREFs of AcpiParseCore @ 0x1C0013D8C
 * Callers:
 *     AcpiEval_PSD_TSD @ 0x1C0013644 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CST @ 0x1C001386C (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0013B44 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0013EA4 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0013FE8 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0014148 (AcpiEval_CPC.c)
 *     AcpiEval_PCT_PTC @ 0x1C0014634 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PCCP @ 0x1C001D3D4 (AcpiEval_PCCP.c)
 *     AcpiEval_XPSS @ 0x1C001D6D0 (AcpiEval_XPSS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  unsigned int v8; // edi
  unsigned __int64 v9; // r13
  _WORD *v10; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // r14
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  __int64 result; // rax
  __int64 v19; // rax

  v8 = 0;
  v9 = (unsigned __int64)a3 + a4;
  v10 = a3;
  v12 = a1[24 * a2 - 24] + 1;
  v13 = a1;
  v14 = 0;
  v15 = 0;
  if ( (unsigned __int64)a3 >= v9 )
    return v12 != v15 ? 0xC014000B : 0;
  while ( 1 )
  {
    if ( v15 >= v12 )
      return (a8 & 1) != 0 ? 261 : -1072431093;
    if ( v14 >= a2 )
      break;
    v16 = &v13[24 * v14];
    while ( *v16 != v15 || *((_WORD *)v16 + 1) != *v10 )
    {
      ++v14;
      v16 += 24;
      if ( v14 >= a2 )
        goto LABEL_17;
    }
    v17 = &v13[24 * v14];
    if ( !v17 )
      break;
    result = (*((__int64 (__fastcall **)(_WORD *, __int64, _QWORD))v17 + 2))(
               v10,
               a5 + *((unsigned __int16 *)v17 + 2),
               a6 - (unsigned int)*((unsigned __int16 *)v17 + 2));
    if ( (int)result < 0 )
      return result;
    LOWORD(v19) = v10[1];
    ++v15;
    if ( (unsigned __int16)v19 < 4u )
      v19 = 4LL;
    else
      v19 = (unsigned __int16)v19;
    v10 = (_WORD *)((char *)v10 + v19 + 4);
    if ( (unsigned __int64)v10 >= v9 )
      return v12 != v15 ? 0xC014000B : 0;
  }
LABEL_17:
  if ( a2 )
  {
    do
    {
      if ( *v13 == v15 )
        break;
      ++v8;
      v13 += 24;
    }
    while ( v8 < a2 );
  }
  return 3222536200LL;
}
