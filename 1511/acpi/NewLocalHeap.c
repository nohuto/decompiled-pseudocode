/*
 * XREFs of NewLocalHeap @ 0x1C0018C98
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     NewObjData @ 0x1C0015090 (NewObjData.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall NewLocalHeap(PSLIST_ENTRY *a1)
{
  unsigned int v2; // esi
  PSLIST_ENTRY v3; // rdi
  __int64 v4; // rbx

  ++dword_1C005A4D4;
  v2 = 0;
  v3 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v3 )
  {
    ++dword_1C005A4D8;
    v3 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C005A4F0)(
                         (unsigned int)dword_1C005A4E4,
                         (unsigned int)dword_1C005A4EC,
                         (unsigned int)dword_1C005A4E8);
  }
  *a1 = v3;
  if ( v3 )
  {
    v4 = (unsigned int)gdwCtxtBlkSize;
    memset(v3, 0, (unsigned int)gdwCtxtBlkSize);
    LODWORD(v3->Next) = 1346454856;
    *((_QWORD *)&v3->Next + 1) = (char *)v3 + v4;
    v3[2].Next = v3 + 3;
  }
  else
  {
    LogError(3221225626LL);
    PrintDebugMessage(111, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
