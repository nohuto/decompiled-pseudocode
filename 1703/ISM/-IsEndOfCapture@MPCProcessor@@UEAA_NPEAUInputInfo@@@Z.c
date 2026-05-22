/*
 * XREFs of ?IsEndOfCapture@MPCProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1800483B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::IsEndOfCapture(MPCProcessor *this, struct InputInfo *a2)
{
  char v2; // r8

  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)a2 + 176) - 3) <= 1 )
    return *((_DWORD *)a2 + 325) == *((_DWORD *)this + 47);
  return v2;
}
