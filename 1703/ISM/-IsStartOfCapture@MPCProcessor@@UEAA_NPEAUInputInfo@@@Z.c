/*
 * XREFs of ?IsStartOfCapture@MPCProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180048390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::IsStartOfCapture(MPCProcessor *this, struct InputInfo *a2)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)a2 + 176) == 2 )
  {
    result = 1;
    *((_DWORD *)this + 47) = *((_DWORD *)a2 + 325);
  }
  return result;
}
