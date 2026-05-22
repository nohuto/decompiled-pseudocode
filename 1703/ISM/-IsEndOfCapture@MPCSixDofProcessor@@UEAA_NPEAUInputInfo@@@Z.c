/*
 * XREFs of ?IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180045FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCSixDofProcessor::IsEndOfCapture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  __int64 result; // rax

  if ( (*((_DWORD *)a2 + 330) & *((_DWORD *)a2 + 329)) != 0 )
    return 0LL;
  result = 0LL;
  if ( !*((_BYTE *)a2 + 1351) || *((float *)a2 + 335) <= *((float *)this + 44) )
    return 1LL;
  return result;
}
