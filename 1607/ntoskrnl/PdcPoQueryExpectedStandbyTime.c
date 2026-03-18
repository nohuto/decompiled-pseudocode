/*
 * XREFs of PdcPoQueryExpectedStandbyTime @ 0x14066FB38
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoQueryExpectedStandbyTime(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = 0LL;
  result = (unsigned int)(PopPdcLastCsEnterReason - 5);
  if ( (unsigned int)result <= 1 || PopPdcLastCsEnterReason == 12 )
  {
    PopAcquirePolicyLock();
    if ( dword_14030338C == -1 || dword_140303388 >= (unsigned int)dword_14030338C )
    {
      if ( ((dword_14030338C + 1) & 0xFFFFFFFE) == 0 )
        v1 = -1LL;
    }
    else
    {
      v1 = (unsigned int)PopIdleScanInterval + (unsigned __int64)(unsigned int)(dword_14030338C - dword_140303388);
    }
    result = PopReleasePolicyLock();
  }
  *a1 = v1;
  return result;
}
