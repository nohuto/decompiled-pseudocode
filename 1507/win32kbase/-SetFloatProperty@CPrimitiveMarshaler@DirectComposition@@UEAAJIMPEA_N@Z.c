/*
 * XREFs of ?SetFloatProperty@CPrimitiveMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D6430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveMarshaler::SetFloatProperty(
        DirectComposition::CPrimitiveMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 == 2 )
  {
    if ( *((float *)this + 32) == a3 )
      return result;
    *((float *)this + 32) = a3;
    goto LABEL_8;
  }
  if ( a2 != 8 )
    return 3221225485LL;
  if ( *((float *)this + 33) != a3 )
  {
    *((float *)this + 33) = a3;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x80u;
    *a4 = 1;
  }
  return result;
}
