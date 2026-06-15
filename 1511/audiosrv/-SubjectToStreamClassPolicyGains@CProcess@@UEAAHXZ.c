/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180028EE0
 * Callers:
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800053CC (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 110) )
  {
    if ( *((_DWORD *)this + 107) )
      v2 = *((_DWORD *)this + 108);
    else
      v2 = *((_DWORD *)this + 74);
    if ( v2 )
      return 1LL;
  }
  return result;
}
