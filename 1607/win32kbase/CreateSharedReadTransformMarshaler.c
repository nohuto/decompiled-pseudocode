/*
 * XREFs of CreateSharedReadTransformMarshaler @ 0x1C0077EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0077F0C (-Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV1.c)
 */

__int64 __fastcall CreateSharedReadTransformMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadTransformMarshaler **a3)
{
  bool v4; // zf
  __int64 result; // rax
  struct DirectComposition::CSharedReadTransformMarshaler *v6; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) == 28 )
  {
    v4 = a2 == 24;
  }
  else
  {
    if ( *((_DWORD *)a1 + 3) == 64 )
    {
      if ( a2 != 65 )
        goto LABEL_5;
      return 3221225485LL;
    }
    v4 = *((_DWORD *)a1 + 3) == 65;
  }
  if ( v4 )
  {
LABEL_5:
    result = DirectComposition::CSharedReadTransformMarshaler::Create(a1, &v6);
    *a3 = v6;
    return result;
  }
  return 3221225485LL;
}
