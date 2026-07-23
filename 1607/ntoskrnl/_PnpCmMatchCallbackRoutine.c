/*
 * XREFs of _PnpCmMatchCallbackRoutine @ 0x1406DFD78
 * Callers:
 *     <none>
 * Callees:
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1404E12BC (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall PnpCmMatchCallbackRoutine(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 (__fastcall **v6)(__int64, __int64, _QWORD, _QWORD); // r10
  __int64 v7; // r11

  result = CmMapCmObjectTypeToPnpObjectType(a3);
  if ( (_DWORD)result )
    return (*v6)(v7, v4, (unsigned int)result, *(_QWORD *)(v5 + 8));
  return result;
}
