/*
 * XREFs of CmpInitSecurityCache @ 0x1404ADEE4
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x140445994 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitSecurityCache(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 3048) = -1;
  *(_QWORD *)(a1 + 3056) = 0LL;
  *(_QWORD *)(a1 + 3040) = 0LL;
  v1 = (_QWORD *)(a1 + 3064);
  result = 64LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}
