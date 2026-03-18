/*
 * XREFs of PushAccFieldObj @ 0x1C0019C90
 * Callers:
 *     AccFieldUnit @ 0x1C0014F20 (AccFieldUnit.c)
 *     WriteFieldObj @ 0x1C001AB70 (WriteFieldObj.c)
 *     WriteFieldLoop @ 0x1C001AF10 (WriteFieldLoop.c)
 *     ReadFieldObj @ 0x1C001C410 (ReadFieldObj.c)
 *     PreserveWriteObj @ 0x1C005D970 (PreserveWriteObj.c)
 * Callees:
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 */

__int64 __fastcall PushAccFieldObj(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  unsigned int v7; // r8d
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r8

  v7 = 128;
  if ( a4[5] )
    v7 = a4[7] + 128;
  v11 = HeapAlloc(a1 + 440, 1297237576, v7);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v11;
    *(_DWORD *)v11 = 1330004801;
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = a3;
    *(_QWORD *)(v11 + 40) = a5;
    *(_QWORD *)(v11 + 48) = a5 + a6;
    v13 = a4[3] & 0xF;
    v14 = 1;
    if ( (unsigned int)(v13 - 1) <= 3 )
      v14 = 1 << (v13 - 1);
    v15 = 8 * v14;
    *(_DWORD *)(v12 + 56) = v14;
    v16 = 8 * v14 + a4[2] + a4[1] - 1;
    if ( v15 == 8 )
      v17 = v16 >> 3;
    else
      v17 = v16 / v15;
    *(_DWORD *)(v12 + 60) = v17;
    v18 = 8 * *(_DWORD *)(v12 + 56);
    if ( v18 >= 0x40 )
      v19 = 0LL;
    else
      v19 = 1LL << v18;
    *(_QWORD *)(v12 + 64) = v19 - 1;
    *(_DWORD *)(v12 + 72) = 8 * *(_DWORD *)(v12 + 56) - a4[1];
    *(_DWORD *)(v12 + 76) = a4[1];
    memmove((void *)(v12 + 96), a4, (unsigned int)(a4[7] + 32));
    return 0LL;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return 3222536194LL;
  }
}
