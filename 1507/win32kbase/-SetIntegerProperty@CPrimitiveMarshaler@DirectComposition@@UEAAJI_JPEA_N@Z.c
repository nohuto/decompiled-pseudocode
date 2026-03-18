/*
 * XREFs of ?SetIntegerProperty@CPrimitiveMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D6480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveMarshaler::SetIntegerProperty(
        DirectComposition::CPrimitiveMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  *a4 = 0;
  if ( a2 == 3 )
  {
    if ( *((_DWORD *)this + 34) != a3 )
    {
      *((_DWORD *)this + 4) &= ~0x80u;
      *((_DWORD *)this + 34) = a3;
      *a4 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
