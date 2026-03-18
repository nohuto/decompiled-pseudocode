/*
 * XREFs of ?SetIntegerProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C0017D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetIntegerProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        int a2,
        int a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
  {
    *((_DWORD *)this + 10) = a3;
    goto LABEL_4;
  }
  if ( a2 == 2 )
  {
    *((_DWORD *)this + 15) = a3;
LABEL_4:
    *a4 = 1;
    return result;
  }
  return 3221225485LL;
}
