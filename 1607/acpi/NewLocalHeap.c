/*
 * XREFs of NewLocalHeap @ 0x1C002039C
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall NewLocalHeap(PSLIST_ENTRY *a1)
{
  unsigned int v2; // esi
  PSLIST_ENTRY v3; // rdi
  __int64 v4; // rbx

  ++dword_1C0074994;
  v2 = 0;
  v3 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v3 )
  {
    ++dword_1C0074998;
    v3 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00749B0)(
                         (unsigned int)dword_1C00749A4,
                         (unsigned int)dword_1C00749AC,
                         (unsigned int)dword_1C00749A8);
  }
  *a1 = v3;
  if ( v3 )
  {
    v4 = (unsigned int)gdwCtxtBlkSize;
    memset(v3, 0, (unsigned int)gdwCtxtBlkSize);
    LODWORD(v3->Next) = 1346454856;
    *((_QWORD *)&v3->Next + 1) = (char *)v3 + v4;
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 56);
    v3[3].Next = (PSLIST_ENTRY)((char *)v3 + 40);
    *((_QWORD *)&v3[2].Next + 1) = (char *)v3 + 40;
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(111, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
