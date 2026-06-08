/*
 * XREFs of PerfControlCpcSingleRegisterHidden @ 0x1C0002DD0
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0003158 (PerformanceFromPercentage.c)
 *     WriteIoMemRawHidden @ 0x1C0005F2C (WriteIoMemRawHidden.c)
 */

_UNKNOWN **__fastcall PerfControlCpcSingleRegisterHidden(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  _UNKNOWN **result; // rax
  __int64 v10; // r11
  _BYTE *v11; // rdi
  unsigned __int8 v12; // cl
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // r11
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a7 && !a8 )
    return result;
  v10 = 0LL;
  v11 = *(_BYTE **)(a1 + 104);
  *(_QWORD *)(a1 + 48) = a2;
  if ( *(_BYTE *)(a1 + 93) )
  {
    v12 = v11[69];
    if ( a6 )
    {
      if ( v12 >= 0x40u && !v11[70] )
        goto LABEL_12;
    }
    else
    {
      if ( v12 >= 0x40u && !v11[70] )
      {
        v10 = a2;
        goto LABEL_12;
      }
      v10 = a2;
    }
    v10 = (((1LL << v12) - 1) << v11[70]) & (v10 << v11[70]);
  }
LABEL_12:
  if ( *(_BYTE *)(a1 + 94) )
  {
    if ( v11[81] < 0x40u || v11[82] )
    {
      v13 = PerformanceFromPercentage(a1, a3);
      v10 = v15 & ~v14 | v14 & (v13 << v11[82]);
    }
    else
    {
      v10 = PerformanceFromPercentage(a1, a3);
    }
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    if ( v11[93] < 0x40u || v11[94] )
    {
      v16 = PerformanceFromPercentage(a1, a4);
      v10 = v18 & ~v17 | v17 & (v16 << v11[94]);
    }
    else
    {
      v10 = PerformanceFromPercentage(a1, a4);
    }
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( v11[105] < 0x40u || v11[106] )
    {
      v19 = PerformanceFromPercentage(a1, a5);
      v10 = v21 & ~v20 | v20 & (v19 << v11[106]);
    }
    else
    {
      v10 = PerformanceFromPercentage(a1, a5);
    }
  }
  return (_UNKNOWN **)WriteIoMemRawHidden(*(unsigned int *)(*(_QWORD *)a1 + 68LL), a1 + 112, *(_QWORD *)(a1 + 128), v10);
}
