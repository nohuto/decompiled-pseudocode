/*
 * XREFs of GetFieldUnitRegionObj @ 0x1C001643C
 * Callers:
 *     AccessFieldData @ 0x1C0013530 (AccessFieldData.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C001643C (GetFieldUnitRegionObj.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C003FE90 (InternalRawAccessOpRegionHandler.c)
 * Callees:
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     GetFieldUnitRegionObj @ 0x1C001643C (GetFieldUnitRegionObj.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, __int64 *a2)
{
  int FieldUnitRegionObj; // esi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  __int64 ObjectPath; // rax
  __int64 *v9; // rdx
  void *v10; // rdi

  FieldUnitRegionObj = 0;
  v4 = *a1;
  v5 = *(unsigned __int16 *)(*a1 + 58) - 130;
  if ( v5 && (v6 = v5 - 1) != 0 )
  {
    if ( v6 == 1 )
    {
      FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 88) + 8LL) + 88LL), a2);
    }
    else
    {
      LogError(3222536195LL);
      PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 58), 0, 0, 0LL);
      FieldUnitRegionObj = -1072431101;
    }
  }
  else
  {
    *a2 = **(_QWORD **)(v4 + 88);
  }
  if ( *a2 && *(_WORD *)(*a2 + 58) != 10 )
  {
    LogError(3222536195LL);
    ObjectPath = GetObjectPath(*a2);
    v9 = qword_1C00254F0;
    v10 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v9) = ObjectPath;
    PrintDebugMessage(55, (_DWORD)v9, *(unsigned __int16 *)(*a2 + 58), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( !v10 )
      goto LABEL_18;
    ExFreePoolWithTag(v10, 0);
  }
  if ( FieldUnitRegionObj < 0 || !*a2 )
  {
LABEL_18:
    *a2 = 0LL;
    return (unsigned int)FieldUnitRegionObj;
  }
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*a2 + 104));
  return (unsigned int)FieldUnitRegionObj;
}
