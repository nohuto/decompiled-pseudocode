/*
 * XREFs of ?SetRemarshalingFlags@CDesktopTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D8550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CDesktopTargetMarshaler *this)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx

  *((_DWORD *)this + 4) |= 0x40u;
  result = 0LL;
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    *((_DWORD *)this + 4) |= 0x80u;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( v2 || v3 )
    return 1LL;
  return result;
}
