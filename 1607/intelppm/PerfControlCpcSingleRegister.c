/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C0004C10
 * Callers:
 *     <none>
 * Callees:
 *     WriteIoMemRaw @ 0x1C00013FC (WriteIoMemRaw.c)
 *     ReadIoMemRaw @ 0x1C0001480 (ReadIoMemRaw.c)
 *     PerformanceFromPercentage @ 0x1C0001540 (PerformanceFromPercentage.c)
 */

char __fastcall PerfControlCpcSingleRegister(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  _UNKNOWN **v8; // rax
  _BYTE *v13; // rbx
  unsigned __int64 IoMemRaw; // rax
  unsigned __int64 v15; // r11
  unsigned __int8 v16; // cl
  __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // r11
  unsigned __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // r11
  unsigned __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // r11
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v8 = &retaddr;
  if ( !a7 && !a8 )
    return (char)v8;
  v13 = *(_BYTE **)(a1 + 104);
  *(_QWORD *)(a1 + 48) = a2;
  IoMemRaw = ReadIoMemRaw(a1 + 112);
  v15 = IoMemRaw;
  if ( *(_BYTE *)(a1 + 93) )
  {
    v16 = v13[69];
    if ( a6 )
    {
      if ( v16 >= 0x40u && !v13[70] )
      {
        v15 = 0LL;
        goto LABEL_14;
      }
      v21 = IoMemRaw & ~(((1LL << v16) - 1) << v13[70]);
      v22 = 0LL;
    }
    else
    {
      if ( v16 >= 0x40u && !v13[70] )
      {
        v15 = a2;
        goto LABEL_14;
      }
      v17 = 1LL << v16;
      v18 = v13[70];
      v19 = (v17 - 1) << v18;
      v20 = v19 & (a2 << v18);
      v21 = IoMemRaw & ~v19;
      v22 = v20;
    }
    v15 = v21 | v22;
  }
LABEL_14:
  if ( *(_BYTE *)(a1 + 94) )
  {
    if ( v13[81] < 0x40u || v13[82] )
    {
      v23 = PerformanceFromPercentage(a1, a3);
      v15 = v25 & ~v24 | v24 & (v23 << v13[82]);
    }
    else
    {
      v15 = PerformanceFromPercentage(a1, a3);
    }
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    if ( v13[93] < 0x40u || v13[94] )
    {
      v26 = PerformanceFromPercentage(a1, a4);
      v15 = v28 & ~v27 | v27 & (v26 << v13[94]);
    }
    else
    {
      v15 = PerformanceFromPercentage(a1, a4);
    }
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( v13[105] < 0x40u || v13[106] )
    {
      v29 = PerformanceFromPercentage(a1, a5);
      v15 = v31 & ~v30 | v30 & (v29 << v13[106]);
    }
    else
    {
      v15 = PerformanceFromPercentage(a1, a5);
    }
  }
  LOBYTE(v8) = WriteIoMemRaw(a1 + 112, v15);
  return (char)v8;
}
