/*
 * XREFs of ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x18001A900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DWMInputTarget::IsSameByLuid(DWMInputTarget *this, void *a2)
{
  int v3; // eax
  char v4; // dl
  int v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+44h] [rbp+1Ch]

  v3 = NtQueryCompositionInputSinkLuid(a2, &v6);
  v4 = 0;
  if ( v3 >= 0 && v7 == *((_DWORD *)this + 33) )
    return v6 == *((_DWORD *)this + 32);
  return v4;
}
