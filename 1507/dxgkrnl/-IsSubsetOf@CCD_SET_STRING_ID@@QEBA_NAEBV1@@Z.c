/*
 * XREFs of ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C006737C
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C0066F34 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00AF650 (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSubsetOf(
        CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v4; // ax
  unsigned int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  struct _STRING v12; // [rsp+20h] [rbp-20h] BYREF
  struct _STRING v13; // [rsp+30h] [rbp-10h] BYREF

  v4 = *((_WORD *)this + 16);
  if ( v4 <= *((_WORD *)a2 + 16) )
  {
    v7 = 0;
    v8 = 0;
    if ( !v4 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v13.MaximumLength = 0LL;
      *(_DWORD *)((char *)&v13.Buffer + 2) = 0;
      HIWORD(v13.Buffer) = 0;
      v9 = *((_QWORD *)this + 3);
      v13.Length = 0;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v9 + 8LL * v8 + 6), &v13, a4);
      while ( v7 < *((unsigned __int16 *)a2 + 16) )
      {
        *(_QWORD *)&v12.MaximumLength = 0LL;
        *(_DWORD *)((char *)&v12.Buffer + 2) = 0;
        HIWORD(v12.Buffer) = 0;
        v10 = *((_QWORD *)a2 + 3);
        v12.Length = 0;
        CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(v10 + 8LL * v7 + 6), &v12, a4);
        if ( !(unsigned int)CCD_SET_STRING_ID::_StringCompare(&v13, &v12) )
          break;
        ++v7;
      }
      if ( v7 >= *((unsigned __int16 *)a2 + 16) )
        break;
      if ( ++v8 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
