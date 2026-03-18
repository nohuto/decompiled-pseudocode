/*
 * XREFs of ObjTypeSizeOf @ 0x1C0029E70
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseData @ 0x1C001ED48 (GetBaseData.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

__int64 __fastcall ObjTypeSizeOf(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 BaseData; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  const void *ObjectTypeName; // rax

  v3 = 0;
  BaseData = GetBaseData(*(_QWORD *)(a2 + 80));
  *(_WORD *)(*(_QWORD *)(v5 + 88) + 2LL) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) == 142 )
  {
    v6 = *(unsigned __int16 *)(BaseData + 2);
  }
  else
  {
    switch ( *(_WORD *)(BaseData + 2) )
    {
      case 2:
        *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = (unsigned int)(*(_DWORD *)(BaseData + 24) - 1);
        return v3;
      case 3:
        v6 = *(unsigned int *)(BaseData + 24);
        break;
      case 4:
        v6 = **(unsigned int **)(BaseData + 32);
        break;
      default:
        LogError(-1072431096);
        AcpiDiagTraceAmlError(a1, -1072431096);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(BaseData + 2));
        PrintDebugMessage(176, ObjectTypeName, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431096;
    }
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v6;
  return v3;
}
