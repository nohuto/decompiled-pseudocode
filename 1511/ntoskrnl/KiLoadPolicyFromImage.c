/*
 * XREFs of KiLoadPolicyFromImage @ 0x1403AA758
 * Callers:
 *     KiIntersectFeaturesWithPolicy @ 0x1403AA588 (KiIntersectFeaturesWithPolicy.c)
 * Callees:
 *     KeHwPolicyLocateResource @ 0x140767F04 (KeHwPolicyLocateResource.c)
 */

__int64 __fastcall KiLoadPolicyFromImage(int a1, _QWORD *a2, _QWORD *a3)
{
  int v4; // edi
  __int64 result; // rax

  *a2 = 0LL;
  *a3 = 0LL;
  v4 = (int)a2;
  result = KeHwPolicyLocateResource(a1, 101, KeXSavePolicyId, (_DWORD)a2, (__int64)a3);
  if ( (int)result < 0 && KeXSavePolicyId != 1 )
  {
    KeXSavePolicyId = 1LL;
    return KeHwPolicyLocateResource(a1, 101, 1, v4, (__int64)a3);
  }
  return result;
}
