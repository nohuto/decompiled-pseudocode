/*
 * XREFs of DerefOf @ 0x1C001EF00
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C001ECD0 (ReadObject.c)
 *     GetBaseData @ 0x1C001ED48 (GetBaseData.c)
 *     GetBaseObject @ 0x1C001EDC0 (GetBaseObject.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 BaseData; // rbx
  __int16 v6; // ax
  _QWORD *BaseObject; // rax

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"R");
  if ( !(_DWORD)result )
  {
    BaseData = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(BaseData + 2);
    if ( v6 == 128 )
    {
      BaseObject = (_QWORD *)GetBaseObject(*(_QWORD *)(BaseData + 16));
      BaseData = (__int64)(BaseObject + 8);
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
