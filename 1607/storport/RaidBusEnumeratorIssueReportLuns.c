/*
 * XREFs of RaidBusEnumeratorIssueReportLuns @ 0x1C00128A0
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0012704 (RaidBusEnumeratorGetLunListFromTarget.c)
 * Callees:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0012A78 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0013498 (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C00135C0 (RaidBusEnumeratorAllocateReportLunsResources.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueReportLuns(
        __int64 a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned __int8 **a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  unsigned __int8 *v12; // r8
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+10h]

  v14 = a2;
  v5 = a1 + 64;
  result = RaidBusEnumeratorAllocateReportLunsResources(a1, (unsigned int)*a4, a1 + 64);
  v10 = 0;
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorBuildReportLuns(a1, v14, v5, (unsigned int)*a4);
    v11 = v13;
    result = RaidBusEnumeratorIssueSynchronousRequest(a1, a3, v5, v13, (char)&v13);
    if ( (int)result >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)a1 + 402LL) == 1 )
        v12 = *(unsigned __int8 **)(v11 + 64);
      else
        v12 = *(unsigned __int8 **)(v11 + 24);
      if ( (unsigned int)*a4 < (unsigned __int64)(v12[3] | ((v12[2] | ((v12[1] | (*v12 << 8)) << 8)) << 8)) + 8 )
      {
        v10 = -1073741789;
        *a4 = (v12[3] | ((v12[2] | ((v12[1] | (*v12 << 8)) << 8)) << 8)) + 8;
      }
      result = v10;
      *a5 = v12;
    }
    else if ( (_DWORD)result == -1073741789 )
    {
      return 3221225486LL;
    }
  }
  return result;
}
