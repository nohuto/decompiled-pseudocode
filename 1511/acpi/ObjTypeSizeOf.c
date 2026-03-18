/*
 * XREFs of ObjTypeSizeOf @ 0x1C0022FD0
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseData @ 0x1C000D310 (GetBaseData.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ObjTypeSizeOf(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 BaseData; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  int ObjectTypeName; // eax

  v2 = 0;
  BaseData = GetBaseData(*(_QWORD *)(a2 + 80));
  *(_WORD *)(*(_QWORD *)(v4 + 88) + 2LL) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 56) + 8LL) == 142 )
  {
    v5 = *(unsigned __int16 *)(BaseData + 2);
  }
  else
  {
    switch ( *(_WORD *)(BaseData + 2) )
    {
      case 2:
        *(_QWORD *)(*(_QWORD *)(v4 + 88) + 16LL) = (unsigned int)(*(_DWORD *)(BaseData + 24) - 1);
        return v2;
      case 3:
        v5 = *(unsigned int *)(BaseData + 24);
        break;
      case 4:
        v5 = **(unsigned int **)(BaseData + 32);
        break;
      default:
        LogError(3222536200LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseData + 2));
        PrintDebugMessage(176, ObjectTypeName, 0, 0, 0LL);
        return (unsigned int)-1072431096;
    }
  }
  *(_QWORD *)(*(_QWORD *)(v4 + 88) + 16LL) = v5;
  return v2;
}
