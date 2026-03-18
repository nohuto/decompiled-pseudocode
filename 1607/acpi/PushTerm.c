/*
 * XREFs of PushTerm @ 0x1C0018668
 * Callers:
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     ParseArg @ 0x1C001DCAC (ParseArg.c)
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 * Callees:
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall PushTerm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rax
  unsigned int v16; // edi
  int v17; // ecx

  v8 = 0;
  v10 = HeapAlloc(a1 + 440, 1297237576LL, 96LL);
  v11 = v10;
  if ( !v10 )
  {
    v16 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    v17 = 153;
    goto LABEL_12;
  }
  *(_QWORD *)(v10 + 8) = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v10;
  *(_QWORD *)(v10 + 24) = ParseTerm;
  *(_DWORD *)v10 = 1297237332;
  *(_QWORD *)(v10 + 32) = a2;
  *(_QWORD *)(v10 + 48) = a3;
  *(_QWORD *)(v10 + 56) = a4;
  *(_QWORD *)(v10 + 88) = a5;
  v12 = *(_QWORD *)(a4 + 16);
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v12 + v13) );
  }
  else
  {
    LODWORD(v13) = 0;
  }
  *(_DWORD *)(v11 + 76) = v13;
  if ( (_DWORD)v13 )
  {
    v14 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1413563464LL, (unsigned int)(40 * v13));
    *(_QWORD *)(v11 + 80) = v14;
    if ( v14 )
    {
      memset(v14, 0, 40LL * *(unsigned int *)(v11 + 76));
      return v8;
    }
    v16 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v17 = 154;
LABEL_12:
    PrintDebugMessage(v17, 0, 0, 0, 0LL);
    return v16;
  }
  return v8;
}
