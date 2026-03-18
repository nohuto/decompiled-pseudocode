/*
 * XREFs of DerefOf @ 0x1C0016C80
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0015AAC (GetBaseObject.c)
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 *     GetBaseData @ 0x1C0016D70 (GetBaseData.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 BaseData; // rbx
  __int16 v6; // ax
  __int64 BaseObject; // rax

  result = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"R");
  if ( !(_DWORD)result )
  {
    BaseData = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(BaseData + 2);
    if ( v6 == 128 )
    {
      BaseObject = GetBaseObject(*(_QWORD *)(BaseData + 16));
      BaseData = BaseObject + 56;
      DereferenceObjectEx(BaseObject);
    }
    else if ( v6 == 129 )
    {
      BaseData = GetBaseData(*(_QWORD *)(BaseData + 16));
    }
    return ReadObject(a1, BaseData, *(_QWORD *)(a2 + 88));
  }
  return result;
}
