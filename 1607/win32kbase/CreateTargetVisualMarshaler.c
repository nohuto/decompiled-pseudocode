/*
 * XREFs of CreateTargetVisualMarshaler @ 0x1C0077B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CTargetVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0077B84 (-Create@CTargetVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CreateTargetVisualMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CTargetVisualMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CTargetVisualMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CTargetVisualMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
