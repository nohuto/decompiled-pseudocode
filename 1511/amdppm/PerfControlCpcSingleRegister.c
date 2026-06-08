/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C00025B0
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0002948 (PerformanceFromPercentage.c)
 *     ReadIoMemRaw @ 0x1C000447C (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0004588 (WriteIoMemRaw.c)
 */

_UNKNOWN **__fastcall PerfControlCpcSingleRegister(
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
  _BYTE *v13; // rbx
  __int64 IoMemRaw; // rax
  __int64 v15; // r11
  __int64 v16; // r8
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r11
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // r11
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a7 && !a8 )
    return result;
  v13 = *(_BYTE **)(a1 + 96);
  *(_QWORD *)(a1 + 40) = a2;
  IoMemRaw = ReadIoMemRaw(a1 + 104);
  v15 = IoMemRaw;
  v16 = 1LL;
  if ( *(_BYTE *)(a1 + 81) )
  {
    v17 = v13[69];
    if ( a6 )
    {
      if ( v17 >= 0x40u && !v13[70] )
      {
        v15 = 0LL;
        goto LABEL_14;
      }
      v22 = IoMemRaw & ~(((1LL << v17) - 1) << v13[70]);
      v23 = 0LL;
    }
    else
    {
      if ( v17 >= 0x40u && !v13[70] )
      {
        v15 = a2;
        goto LABEL_14;
      }
      v18 = 1LL << v17;
      v19 = v13[70];
      v20 = (v18 - 1) << v19;
      v21 = v20 & (a2 << v19);
      v22 = IoMemRaw & ~v20;
      v23 = v21;
    }
    v15 = v22 | v23;
  }
LABEL_14:
  if ( *(_BYTE *)(a1 + 82) )
  {
    if ( v13[81] < 0x40u || v13[82] )
    {
      v24 = PerformanceFromPercentage(a1, a3);
      v15 = v26 & ~v25 | v25 & (v24 << v13[82]);
    }
    else
    {
      v15 = PerformanceFromPercentage(a1, a3);
    }
    v16 = 1LL;
  }
  if ( *(_BYTE *)(a1 + 83) )
  {
    if ( v13[93] < 0x40u || v13[94] )
    {
      v27 = PerformanceFromPercentage(a1, a4);
      v15 = v29 & ~v28 | v28 & (v27 << v13[94]);
    }
    else
    {
      v15 = PerformanceFromPercentage(a1, a4);
    }
  }
  if ( *(_BYTE *)(a1 + 84) )
  {
    if ( v13[105] < 0x40u || v13[106] )
    {
      v30 = PerformanceFromPercentage(a1, a5);
      v15 = v32 & ~v31 | v31 & (v30 << v13[106]);
    }
    else
    {
      v15 = PerformanceFromPercentage(a1, a5);
    }
  }
  return (_UNKNOWN **)WriteIoMemRaw(a1 + 104, v15, v16);
}
