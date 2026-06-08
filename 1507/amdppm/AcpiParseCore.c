/*
 * XREFs of AcpiParseCore @ 0x1C0011050
 * Callers:
 *     AcpiEval_CST @ 0x1C000F75C (AcpiEval_CST.c)
 *     AcpiEval_PCT_PTC @ 0x1C000FA78 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C000FBB8 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C000FE28 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00100A0 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0010424 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C001071C (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C0010970 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C0010ADC (AcpiEval_CPC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8)
{
  unsigned int v8; // edi
  unsigned __int64 v9; // r13
  _WORD *v10; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // r14
  bool v14; // cf
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  unsigned __int8 *v17; // rdx
  __int64 result; // rax
  unsigned __int8 *v19; // rax
  __int64 v20; // rax

  v8 = 0;
  v9 = (unsigned __int64)a3 + a4;
  v10 = a3;
  v12 = a1[24 * a2 - 24] + 1;
  v13 = a1;
  v14 = (unsigned __int64)a3 < v9;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    if ( !v14 )
      return v12 != v16 ? 0xC014000B : 0;
    if ( v16 >= v12 )
      return (a8 & 1) != 0 ? 261 : -1072431093;
    if ( v15 >= a2 )
      break;
    v17 = &v13[24 * v15];
    while ( *v17 != v16 || *((_WORD *)v17 + 1) != *v10 )
    {
      ++v15;
      v17 += 24;
      if ( v15 >= a2 )
        goto LABEL_9;
    }
    v19 = &v13[24 * v15];
    if ( !v19 )
      break;
    result = (*((__int64 (__fastcall **)(_WORD *, __int64, _QWORD))v19 + 2))(
               v10,
               a5 + *((unsigned __int16 *)v19 + 2),
               a6 - (unsigned int)*((unsigned __int16 *)v19 + 2));
    if ( (int)result < 0 )
      return result;
    LOWORD(v20) = v10[1];
    ++v16;
    if ( (unsigned __int16)v20 >= 4u )
      v20 = (unsigned __int16)v20;
    else
      v20 = 4LL;
    v10 = (_WORD *)((char *)v10 + v20 + 4);
    v14 = (unsigned __int64)v10 < v9;
  }
LABEL_9:
  if ( a2 )
  {
    do
    {
      if ( *v13 == v16 )
        break;
      ++v8;
      v13 += 24;
    }
    while ( v8 < a2 );
  }
  return 3222536200LL;
}
