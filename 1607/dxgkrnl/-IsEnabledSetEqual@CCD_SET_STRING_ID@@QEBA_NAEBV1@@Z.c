/*
 * XREFs of ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C008E2C8
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B4880 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C008DDE4 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00D8C14 (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsEnabledSetEqual(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int16 v2; // ax
  unsigned int v5; // edi
  __int64 v6; // rax
  struct _STRING v8; // [rsp+20h] [rbp-20h] BYREF
  struct _STRING v9; // [rsp+30h] [rbp-10h] BYREF

  v2 = *((_WORD *)this + 16);
  if ( v2 == *((_WORD *)a2 + 16) )
  {
    v5 = 0;
    if ( !v2 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v9.MaximumLength = 0LL;
      *(_DWORD *)((char *)&v9.Buffer + 2) = 0;
      HIWORD(v9.Buffer) = 0;
      v6 = *((_QWORD *)this + 3);
      v9.Length = 0;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v6 + 8LL * v5 + 6), &v9);
      v8.Length = 0;
      *(_QWORD *)&v8.MaximumLength = 0LL;
      *(_DWORD *)((char *)&v8.Buffer + 2) = 0;
      HIWORD(v8.Buffer) = 0;
      CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v5 + 6), &v8);
      if ( (unsigned int)CCD_SET_STRING_ID::_StringCompare(&v9, &v8) )
        break;
      if ( ++v5 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
