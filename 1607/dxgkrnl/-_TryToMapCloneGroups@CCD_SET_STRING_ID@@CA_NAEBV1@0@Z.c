/*
 * XREFs of ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C01AB870
 * Callers:
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01AB0C4 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C008DDE4 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C01AADE8 (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::_TryToMapCloneGroups(
        const struct CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2)
{
  int v2; // esi
  unsigned int v5; // ebx
  int v6; // r15d
  int PathByMonitorId; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax
  struct _STRING v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = -1;
  v5 = 0;
  v6 = -1;
  if ( !*((_WORD *)this + 16) )
    return 1;
  while ( !*(_WORD *)(*((_QWORD *)this + 3) + 8LL * v5 + 4) )
  {
    v12.Length = 0;
    *(_QWORD *)&v12.MaximumLength = 0LL;
    *(_DWORD *)((char *)&v12.Buffer + 2) = 0;
    HIWORD(v12.Buffer) = 0;
    CCD_SET_STRING_ID::QueryMonitorId(this, v5, &v12);
    PathByMonitorId = CCD_SET_STRING_ID::FindPathByMonitorId(a2, &v12, &v13);
    if ( PathByMonitorId < 0 )
    {
      if ( PathByMonitorId != -1073741275 )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v11);
      }
      return 0;
    }
    v9 = *((_QWORD *)a2 + 3);
    if ( v2 == *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v5 + 2) )
    {
      if ( v6 != *(unsigned __int16 *)(v9 + 8LL * v13 + 2) )
        return 0;
    }
    else
    {
      v2 = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v5 + 2);
      v6 = *(unsigned __int16 *)(v9 + 8LL * v13 + 2);
    }
    if ( ++v5 >= *((unsigned __int16 *)this + 16) )
      return 1;
  }
  return 0;
}
