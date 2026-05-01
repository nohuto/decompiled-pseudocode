/*
 * XREFs of ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18000DD38
 * Callers:
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DC20 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x18003C330 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ?IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x18000E820 (-IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostComputeCommitThresholds @ 0x1800204F8 (RmpActivityHostComputeCommitThresholds.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     RmpActivityHostQueryRawCommit @ 0x180047154 (RmpActivityHostQueryRawCommit.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::HasMemoryForFGSharing(
        ExecutionModel::ResourceSet *this,
        unsigned __int64 a2,
        char a3)
{
  bool (__fastcall *v5)(ExecutionModel::ResourceSet *__hidden); // rdi
  bool IsReleased; // al
  unsigned int v7; // edi
  const struct _TlgProvider_t *v8; // rcx
  __int64 v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-31h] BYREF
  __int64 v20; // [rsp+58h] [rbp-29h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  __int64 *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  unsigned __int64 *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  unsigned __int64 *v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]
  unsigned __int64 v29; // [rsp+F0h] [rbp+6Fh] BYREF

  v29 = a2;
  v5 = *(bool (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*((_QWORD *)this + 171) + 72LL);
  if ( v5 == ExecutionModel::ResourceSet::IsReleased )
    IsReleased = ExecutionModel::ResourceSet::IsReleased((ExecutionModel::ResourceSet *)((char *)this + 1368));
  else
    IsReleased = v5((ExecutionModel::ResourceSet *)((char *)this + 1368));
  v7 = 0;
  if ( IsReleased )
  {
    return (unsigned int)-2147220216;
  }
  else
  {
    v8 = (const struct _TlgProvider_t *)(*((_QWORD *)this + 183) - *((_QWORD *)this + 231));
    if ( (unsigned __int64)v8 < v29 )
    {
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v8, 9uLL) )
      {
        v18 = v10;
        v23 = &v18;
        v25 = &v29;
        v24 = 8LL;
        v26 = 8LL;
        TlgWrite((TraceLoggingHProvider)&v29, &unk_180064559, v11, v12, 4u, &pData);
      }
      return (unsigned int)-2147220992;
    }
    if ( a3 )
    {
      v13 = *((_QWORD *)this + 175);
      RmpActivityHostQueryRawCommit(v13, &v18, &v21);
      v14 = v18;
      if ( *(_DWORD *)(v13 + 40) != 1 )
        v14 = v21 + v18;
      v15 = *((_QWORD *)this + 175);
      v20 = v14;
      RmpActivityHostComputeCommitThresholds(v15, v14, 0, 0, (__int64)&v19, 0LL, 0LL);
      if ( v19 )
      {
        if ( v20 + v29 > v19 )
        {
          if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)(v20 + v29), 9uLL) )
          {
            v24 = 8LL;
            v25 = (unsigned __int64 *)&v20;
            v23 = (__int64 *)&v19;
            v27 = &v29;
            v26 = 8LL;
            v28 = 8LL;
            TlgWrite((TraceLoggingHProvider)&v29, &unk_180064475, v16, v17, 5u, &pData);
          }
          return (unsigned int)-2147220992;
        }
      }
    }
  }
  return v7;
}
