/*
 * XREFs of HeapFree @ 0x1C001B8A0
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     ParseLoad @ 0x1C0006330 (ParseLoad.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ParseFieldList @ 0x1C0015620 (ParseFieldList.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     ParseRelease @ 0x1C001B120 (ParseRelease.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     WriteCookAccess @ 0x1C001FC00 (WriteCookAccess.c)
 *     FindNSObjMainNoLock @ 0x1C00210AC (FindNSObjMainNoLock.c)
 *     ProcessIncDec @ 0x1C00279C0 (ProcessIncDec.c)
 *     Simulator_Free_Arguments @ 0x1C0059D00 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C005BF90 (FreeObjOwner.c)
 *     FreeObjectHandle @ 0x1C005CBAC (FreeObjectHandle.c)
 *     LoadFieldUnitDDB @ 0x1C005CBE0 (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C005D1D0 (ProcessSleep.c)
 *     PreserveWriteObj @ 0x1C005D970 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C005DA7C (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C005FC50 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C0060230 (ProcessWait.c)
 *     ParseFieldConnection @ 0x1C00614D8 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C0061780 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C00618A0 (ParseUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall HeapFree(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // r9
  unsigned int *v3; // rax
  unsigned int *i; // rdx
  __int64 **v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // r10
  unsigned int *v8; // rax
  unsigned int *v9; // r10
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  _QWORD *v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rax

  v1 = (unsigned int *)(a1 - 16);
  *(_DWORD *)(a1 - 16) = 0;
  byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v2 = *((_QWORD *)v1 + 1);
  v3 = *(unsigned int **)(v2 + 40);
  for ( i = (unsigned int *)(v2 + 40); v3 != i; v3 = *(unsigned int **)v3 )
  {
    if ( v1 + 4 < v3 )
      break;
  }
  v5 = (__int64 **)*((_QWORD *)v3 + 1);
  v6 = (__int64 *)(v1 + 4);
  if ( *v5 != (__int64 *)v3 )
    __fastfail(3u);
  *v6 = (__int64)v3;
  *((_QWORD *)v1 + 3) = v5;
  *v5 = v6;
  *((_QWORD *)v3 + 1) = v6;
  v7 = *v6 - 16;
  if ( (unsigned int *)*v6 != i )
  {
    v16 = v1[1];
    if ( (unsigned int *)v7 == (unsigned int *)((char *)v1 + v16) )
    {
      v17 = *(_DWORD *)(v7 + 4) + v16;
      v18 = (_QWORD *)*v6;
      v1[1] = v17;
      v19 = *v18;
      v20 = (_QWORD *)v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
    }
  }
  v8 = (unsigned int *)*((_QWORD *)v1 + 3);
  v9 = v8 - 4;
  if ( v8 != i )
  {
    v13 = v9[1];
    if ( v1 == (unsigned int *)((char *)v9 + v13) )
    {
      v9[1] = v1[1] + v13;
      v14 = (__int64 *)*v6;
      v15 = (__int64 **)*((_QWORD *)v1 + 3);
      if ( *(__int64 **)(*v6 + 8) != v6 || *v15 != v6 )
        __fastfail(3u);
      *v15 = v14;
      v1 = v9;
      v14[1] = (__int64)v15;
    }
  }
  if ( *(_QWORD *)(v2 + 32) <= (unsigned __int64)v1 + v1[1] )
  {
    *(_QWORD *)(v2 + 32) = v1;
    v10 = v1 + 4;
    v11 = *v10;
    v12 = (_QWORD *)v10[1];
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
}
