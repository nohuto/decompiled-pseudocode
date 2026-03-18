/*
 * XREFs of ?SetIntegerProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C002B6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetIntegerProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 3;
  if ( !v5 )
  {
    if ( *((_QWORD *)this + 8) == a3 )
      return result;
    *((_QWORD *)this + 8) = a3;
    goto LABEL_4;
  }
  if ( v5 != 1 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 9) != a3 )
  {
    *((_QWORD *)this + 9) = a3;
LABEL_4:
    *((_DWORD *)this + 4) &= ~0x40u;
    *a4 = 1;
  }
  return result;
}
