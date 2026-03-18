/*
 * XREFs of RegRSAccess @ 0x1C0022ADC
 * Callers:
 *     AMLIRegEventHandler @ 0x1C00228D4 (AMLIRegEventHandler.c)
 * Callees:
 *     FindRSAccess @ 0x1C001E300 (FindRSAccess.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall RegRSAccess(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 RSAccess; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v12; // edi
  unsigned int v13; // edx
  int v14; // ecx

  v4 = 0;
  if ( a1 < 2 )
  {
    v12 = -1072431088;
    LogError(3222536208LL);
    AcpiDiagTraceAmlError(0LL, 3222536208LL);
    v14 = 170;
    goto LABEL_17;
  }
  RSAccess = FindRSAccess(a1);
  if ( !RSAccess )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x526C6D41u);
    RSAccess = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      v13 = 0;
      v14 = 169;
LABEL_18:
      PrintDebugMessage(v14, v13, 0, 0, 0LL);
      return v12;
    }
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)RSAccess = gpRSAccessHead;
    *(_DWORD *)(RSAccess + 8) = a1;
    gpRSAccessHead = RSAccess;
  }
  if ( a4 )
  {
    if ( *(_QWORD *)(RSAccess + 32) && a2 )
    {
      v12 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, 3222536206LL);
      v14 = 171;
LABEL_17:
      v13 = a1;
      goto LABEL_18;
    }
    *(_QWORD *)(RSAccess + 32) = a2;
    *(_QWORD *)(RSAccess + 40) = a3;
  }
  else
  {
    if ( *(_QWORD *)(RSAccess + 16) && a2 )
    {
      v12 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, 3222536206LL);
      v14 = 168;
      goto LABEL_17;
    }
    *(_QWORD *)(RSAccess + 16) = a2;
    *(_QWORD *)(RSAccess + 24) = a3;
  }
  return v4;
}
