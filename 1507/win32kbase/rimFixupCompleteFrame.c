/*
 * XREFs of rimFixupCompleteFrame @ 0x1C00C8DB0
 * Callers:
 *     rimProcessInput @ 0x1C006F0BC (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     traceFrame @ 0x1C00C8104 (traceFrame.c)
 */

__int64 __fastcall rimFixupCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // ebp
  BOOL v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _BOOL8 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rsi
  unsigned int i; // ebp
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rbp
  __int64 j; // rsi
  _QWORD *v20; // rcx

  v4 = 0;
  v8 = *(_BYTE *)(a1 + 776) == 1;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x36u,
    (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids);
  if ( v8 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  v9 = *(_QWORD *)(a2 + 352);
  if ( v9 )
  {
    *(_QWORD *)(a3 + 32) = v9;
    v4 = 1;
  }
  v10 = a4[9];
  if ( v10 )
    *(_QWORD *)(a3 + 72) = a3 + v10 - (_QWORD)a4;
  v11 = a4[11];
  v12 = v8;
  if ( v11 )
  {
    v13 = v11 - (_QWORD)a4;
    v14 = (_QWORD *)(v13 + a3);
    *(_QWORD *)(a3 + 88) = v13 + a3;
    if ( v4 )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v14 += 21 )
      {
        if ( v12 )
          ProbeForWrite(v14, 0xA8uLL, 8u);
        ++i;
        v14[4] = *(_QWORD *)(a2 + 352);
      }
    }
    traceFrame(a3);
  }
  v16 = a4[10];
  if ( v16 )
  {
    v17 = v16 - (_QWORD)a4;
    v18 = (_QWORD *)(v17 + a3);
    *(_QWORD *)(a3 + 80) = v17 + a3;
    for ( j = a4[10]; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 8) )
      {
        if ( v12 )
          ProbeForWrite(v18, 0x18uLL, 8u);
        v18[1] = *(_QWORD *)(j + 8) + a3 - (_QWORD)a4;
      }
      if ( *(_QWORD *)(j + 16) )
      {
        if ( v12 )
          ProbeForWrite(v18, 0x18uLL, 8u);
        v20 = (_QWORD *)(*(_QWORD *)(j + 16) + a3 - (_QWORD)a4);
        v18[2] = v20;
        v18 = v20;
      }
    }
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x37u,
           (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids);
}
