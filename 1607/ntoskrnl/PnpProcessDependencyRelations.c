/*
 * XREFs of PnpProcessDependencyRelations @ 0x1404C4960
 * Callers:
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x1400097B8 (PipIsDevNodeDNStarted.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F41C4 (PnpReleaseDependencyRelationsLock.c)
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 *     PiGetDependentList @ 0x1404C4D38 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14062AD1C (PiEnumerateDependentListEntry.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        PUNICODE_STRING a5,
        ULONG_PTR a6)
{
  __int64 v6; // rbx
  int v10; // edi
  _QWORD **DependentList; // rsi
  _QWORD *v12; // rbx
  ULONG_PTR BugCheckParameter3; // rbp
  UNICODE_STRING *DestinationString; // r14
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+70h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  PnpAcquireDependencyRelationsLock(0);
  DependentList = (_QWORD **)PiGetDependentList(v6);
  v12 = *DependentList;
  if ( *DependentList != DependentList )
  {
    BugCheckParameter3 = a6;
    DestinationString = a5;
    while ( 1 )
    {
      PiEnumerateDependentListEntry(v12, &v18, &v19);
      v12 = (_QWORD *)*v12;
      if ( v18 )
        break;
LABEL_12:
      if ( v12 == DependentList )
        goto LABEL_2;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
    v17 = *(_DWORD *)(v16 + 300);
    if ( v17 < 782 || v17 > 783 )
    {
      if ( !PipIsDevNodeDNStarted(v16) )
        goto LABEL_11;
    }
    else if ( ((*(_DWORD *)(v16 + 304) - 786) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_11;
    }
    v10 = PnpProcessRelation(v16, a2, a3, a4, DestinationString, BugCheckParameter3);
LABEL_11:
    if ( v10 < 0 )
      goto LABEL_2;
    goto LABEL_12;
  }
LABEL_2:
  PnpReleaseDependencyRelationsLock();
  return (unsigned int)v10;
}
