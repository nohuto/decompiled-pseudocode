/*
 * XREFs of CreateHostVisualMarshaler @ 0x1C00040C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00040F4 (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CreateHostVisualMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CHostVisualMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CHostVisualMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CHostVisualMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
