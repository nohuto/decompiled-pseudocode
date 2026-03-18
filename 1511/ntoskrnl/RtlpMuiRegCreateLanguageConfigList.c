/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x1405391B4
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x140538DB4 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x140539050 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     sub_14013A824 @ 0x14013A824 (sub_14013A824.c)
 */

_QWORD *__fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  unsigned int v1; // ebx
  _QWORD *result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  if ( a1 < 1 )
    v1 = 4;
  result = sub_14013A824(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    result[1] = result + 2;
    *((_WORD *)result + 2) = 0;
    *((_WORD *)result + 3) = v1;
  }
  return result;
}
