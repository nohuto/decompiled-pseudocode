/*
 * XREFs of ?SetIntegerProperty@CSnapshotMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D6670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetIntegerProperty(
        DirectComposition::CSnapshotMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d
  int v5; // edx

  v4 = 0;
  *a4 = 0;
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 == 1 && a3 )
    {
      if ( *((_DWORD *)this + 13) != a3 )
      {
        *((_DWORD *)this + 13) = a3;
LABEL_10:
        *a4 = 1;
        return v4;
      }
      return v4;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 12) != a3 )
  {
    *((_DWORD *)this + 12) = a3;
    goto LABEL_10;
  }
  return v4;
}
