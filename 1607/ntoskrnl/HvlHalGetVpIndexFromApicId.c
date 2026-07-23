/*
 * XREFs of HvlHalGetVpIndexFromApicId @ 0x1401BCCB0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetVpIndexFromApicId @ 0x1401BB89C (HvlpGetVpIndexFromApicId.c)
 */

__int64 __fastcall HvlHalGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = HvlpGetVpIndexFromApicId(a1, &v4);
  *a2 = v4;
  return result;
}
