/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x18000F580
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000C2B4 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 113) )
  {
    if ( *((_DWORD *)this + 110) )
      v2 = *((_DWORD *)this + 111);
    else
      v2 = *((_DWORD *)this + 74);
    if ( v2 )
      return 1LL;
  }
  return result;
}
