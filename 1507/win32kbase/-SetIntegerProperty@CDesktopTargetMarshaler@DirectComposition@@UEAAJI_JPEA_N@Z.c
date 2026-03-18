/*
 * XREFs of ?SetIntegerProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00839B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetIntegerProperty(
        DirectComposition::CDesktopTargetMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
  {
    *((_QWORD *)this + 5) = a3;
    goto LABEL_4;
  }
  if ( a2 == 1 )
  {
    *((_DWORD *)this + 12) = a3;
LABEL_4:
    *((_DWORD *)this + 4) |= 0x40u;
    *a4 = 1;
    return result;
  }
  return 3221225485LL;
}
