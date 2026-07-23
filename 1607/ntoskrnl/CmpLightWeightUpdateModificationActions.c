/*
 * XREFs of CmpLightWeightUpdateModificationActions @ 0x14060F964
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x14060EBD4 (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 */

char *__fastcall CmpLightWeightUpdateModificationActions(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  char *result; // rax
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = (_QWORD *)(a2 + 200);
  while ( 1 )
  {
    result = CmListGetNextElement(v2, &v6, 32);
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 17) == 1 || *((_DWORD *)result + 17) == 3 || *((_DWORD *)result + 17) == 10)
      && *((_QWORD *)result + 7) == v4 )
    {
      *((_QWORD *)result + 13) = v5;
    }
  }
  return result;
}
