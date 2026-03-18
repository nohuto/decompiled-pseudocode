/*
 * XREFs of ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00672B4
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C0066F34 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00AF650 (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsEnabledSetEqual(
        CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v4; // ax
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r9
  struct _STRING v11; // [rsp+20h] [rbp-20h] BYREF
  struct _STRING v12; // [rsp+30h] [rbp-10h] BYREF

  v4 = *((_WORD *)this + 16);
  if ( v4 == *((_WORD *)a2 + 16) )
  {
    v7 = 0;
    if ( !v4 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v12.MaximumLength = 0LL;
      *(_DWORD *)((char *)&v12.Buffer + 2) = 0;
      HIWORD(v12.Buffer) = 0;
      v8 = *((_QWORD *)this + 3);
      v12.Length = 0;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v8 + 8LL * v7 + 6), &v12, a4);
      v11.Length = 0;
      *(_QWORD *)&v11.MaximumLength = 0LL;
      *(_DWORD *)((char *)&v11.Buffer + 2) = 0;
      HIWORD(v11.Buffer) = 0;
      CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v7 + 6), &v11, v9);
      if ( (unsigned int)CCD_SET_STRING_ID::_StringCompare(&v12, &v11) )
        break;
      if ( ++v7 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
