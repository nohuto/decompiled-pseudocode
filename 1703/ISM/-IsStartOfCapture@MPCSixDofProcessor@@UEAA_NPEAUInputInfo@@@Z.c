/*
 * XREFs of ?IsStartOfCapture@MPCSixDofProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180045FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::IsStartOfCapture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  bool result; // al

  if ( (*((_DWORD *)a2 + 330) & *((_DWORD *)a2 + 329)) != 0 )
    return 1;
  result = 0;
  if ( *((_BYTE *)a2 + 1351) )
  {
    if ( *((float *)a2 + 335) > *((float *)this + 44) )
      return 1;
  }
  return result;
}
