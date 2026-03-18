/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1C00D9B58
 * Callers:
 *     rimProcessInput @ 0x1C000FF78 (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     traceFrame @ 0x1C00D9450 (traceFrame.c)
 */

__int64 __fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // ebp
  __int64 v7; // r15
  BOOL v8; // esi
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BOOL8 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rsi
  unsigned int i; // ebp
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rbp
  __int64 j; // rsi
  _QWORD *v21; // rcx

  v4 = 0;
  v7 = a2;
  v8 = *(_BYTE *)(a1 + 776) == 1;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    58,
    (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
  if ( v8 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  v10 = *(_QWORD *)(v7 + 360);
  if ( v10 )
  {
    *(_QWORD *)(a3 + 32) = v10;
    v4 = 1;
  }
  v11 = a4[9];
  if ( v11 )
    *(_QWORD *)(a3 + 72) = a3 + v11 - (_QWORD)a4;
  v12 = a4[11];
  v13 = v8;
  if ( v12 )
  {
    v14 = v12 - (_QWORD)a4;
    v15 = (_QWORD *)(v14 + a3);
    *(_QWORD *)(a3 + 88) = v14 + a3;
    if ( v4 )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v15 += 21 )
      {
        if ( v13 )
          ProbeForWrite(v15, 0xA8uLL, 8u);
        ++i;
        v15[4] = *(_QWORD *)(v7 + 360);
      }
    }
    traceFrame(a3);
  }
  v17 = a4[10];
  if ( v17 )
  {
    v18 = v17 - (_QWORD)a4;
    v19 = (_QWORD *)(v18 + a3);
    *(_QWORD *)(a3 + 80) = v18 + a3;
    for ( j = a4[10]; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 8) )
      {
        if ( v13 )
          ProbeForWrite(v19, 0x18uLL, 8u);
        v19[1] = *(_QWORD *)(j + 8) + a3 - (_QWORD)a4;
      }
      if ( *(_QWORD *)(j + 16) )
      {
        if ( v13 )
          ProbeForWrite(v19, 0x18uLL, 8u);
        v21 = (_QWORD *)(*(_QWORD *)(j + 16) + a3 - (_QWORD)a4);
        v19[2] = v21;
        v19 = v21;
      }
    }
  }
  LOBYTE(v9) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v9,
           4,
           59,
           (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
}
