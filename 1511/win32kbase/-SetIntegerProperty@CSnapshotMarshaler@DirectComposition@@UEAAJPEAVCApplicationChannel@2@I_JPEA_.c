/*
 * XREFs of ?SetIntegerProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D8600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetIntegerProperty(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 == 1 && a4 )
    {
      if ( *((_DWORD *)this + 13) != a4 )
      {
        *((_DWORD *)this + 13) = a4;
LABEL_10:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 12) != a4 )
  {
    *((_DWORD *)this + 12) = a4;
    goto LABEL_10;
  }
  return v5;
}
