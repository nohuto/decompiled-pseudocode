/*
 * XREFs of ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C0061DC8
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C005F190 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A2778 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C0061980 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00C2F28 (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSubsetOf(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  unsigned __int16 v2; // ax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  struct _STRING v10; // [rsp+20h] [rbp-20h] BYREF
  struct _STRING v11; // [rsp+30h] [rbp-10h] BYREF

  v2 = *((_WORD *)this + 16);
  if ( v2 <= *((_WORD *)a2 + 16) )
  {
    v5 = 0;
    v6 = 0;
    if ( !v2 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v11.MaximumLength = 0LL;
      *(_DWORD *)((char *)&v11.Buffer + 2) = 0;
      HIWORD(v11.Buffer) = 0;
      v7 = *((_QWORD *)this + 3);
      v11.Length = 0;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v7 + 8LL * v6 + 6), &v11);
      while ( v5 < *((unsigned __int16 *)a2 + 16) )
      {
        *(_QWORD *)&v10.MaximumLength = 0LL;
        *(_DWORD *)((char *)&v10.Buffer + 2) = 0;
        HIWORD(v10.Buffer) = 0;
        v8 = *((_QWORD *)a2 + 3);
        v10.Length = 0;
        CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(v8 + 8LL * v5 + 6), &v10);
        if ( !(unsigned int)CCD_SET_STRING_ID::_StringCompare(&v11, &v10) )
          break;
        ++v5;
      }
      if ( v5 >= *((unsigned __int16 *)a2 + 16) )
        break;
      if ( ++v6 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
