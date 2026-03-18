/*
 * XREFs of GetClassPtr @ 0x1C00720F0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     _GetClassInfoEx @ 0x1C009F0A0 (_GetClassInfoEx.c)
 *     _GetWOWClass @ 0x1C01DEF5C (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C007215C (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int16 v5; // r10
  __int64 v6; // r11
  unsigned __int16 v7; // r10
  __int64 v8; // r8
  unsigned __int16 v9; // r10
  __int64 v10; // r11

  v3 = a2 + 312;
  result = InnerGetClassPtr(a1, a2 + 312, a3);
  if ( !result )
  {
    result = InnerGetClassPtr(v5, v6 + 320, 0LL);
    if ( !result )
    {
      result = InnerGetClassPtr(v7, v3, hModClient);
      if ( !result )
        return InnerGetClassPtr(v9, v10 + 320, v8);
    }
  }
  return result;
}
