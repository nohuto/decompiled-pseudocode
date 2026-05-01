/*
 * XREFs of ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800175D8
 * Callers:
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001754C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x18002D920 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800176D0 (-RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpRsEnforcedThresholdsCheckCreate(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_RS_ENFORCEMENT_CONTEXT **a3)
{
  __int64 v5; // rbx
  int v6; // edi
  bool v8; // zf
  struct _RM_RS_ENFORCEMENT_CONTEXT *Heap; // rax
  struct _RM_RS_ENFORCEMENT_CONTEXT *v10; // rbx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 1824LL);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 1384);
  if ( RmpRsEnforcedThresholdsAreNecessary((struct _RM_RESOURCE_SET *)v5, a1, a2)
    && (!v5 ? (v8 = *((_QWORD *)a1 + 18) == 0LL) : (v8 = *(_QWORD *)(v5 + 144) == 0LL), v8) )
  {
    Heap = (struct _RM_RS_ENFORCEMENT_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38uLL);
    v10 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x38uLL);
      RmpObjectAddRef(a1);
      *(_QWORD *)v10 = a1;
      v6 = TpAllocTimer((char *)v10 + 40, RmpRsEnforcedThresholdsTimerCallback, v10, 0LL);
      if ( v6 >= 0 )
      {
        *a3 = v10;
        v10 = 0LL;
        v6 = 0;
      }
      if ( v10 )
      {
        RmpObjectRelease(*(struct _RM_OBJECT_HEADER **)v10);
        if ( *((_QWORD *)v10 + 5) )
          TpReleaseTimer();
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    *a3 = 0LL;
    return 0;
  }
  return (unsigned int)v6;
}
