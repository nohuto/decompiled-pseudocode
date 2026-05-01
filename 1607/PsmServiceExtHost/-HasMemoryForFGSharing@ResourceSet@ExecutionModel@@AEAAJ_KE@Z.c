/*
 * XREFs of ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18003571C
 * Callers:
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x18002C118 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x1800353A0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 * Callees:
 *     RmpCommitValuesSubtract @ 0x180007034 (RmpCommitValuesSubtract.c)
 *     RmpActivityHostComputeCommitLimit @ 0x180008040 (RmpActivityHostComputeCommitLimit.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpActivityHostQueryRawTypeSpecificCommit @ 0x18002F4C4 (RmpActivityHostQueryRawTypeSpecificCommit.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::HasMemoryForFGSharing(
        ExecutionModel::ResourceSet *this,
        unsigned __int64 a2,
        char a3)
{
  const struct _TlgProvider_t *v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10
  TraceLoggingHProvider v9; // rcx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  unsigned __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  unsigned __int64 *v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+8Ch] [rbp+23h]
  unsigned __int64 *v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+98h] [rbp+2Fh]
  int v28; // [rsp+9Ch] [rbp+33h]
  unsigned __int64 v29; // [rsp+D8h] [rbp+6Fh] BYREF

  v29 = a2;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 72LL))((char *)this + 1368) )
  {
    v6 = -2147220216;
  }
  else
  {
    RmpCommitValuesSubtract(*((_QWORD *)this + 186), *((_QWORD *)this + 231), &v16);
    if ( v16 >= v29 )
    {
      if ( !a3 )
        return 0;
      if ( (int)RmpActivityHostQueryRawTypeSpecificCommit(*((_QWORD *)this + 175), &v17) < 0 )
        return 0;
      v18 = RmpActivityHostComputeCommitLimit(*((_QWORD **)this + 175));
      if ( (int)RmpCommitValuesSubtract(v18, v17, &v16) >= 0 && (int)RmpCommitValuesSubtract(v16, v29, &v16) >= 0 )
        return 0;
    }
    else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 9uLL) )
    {
      RmpCommitValuesSubtract(v8, v7, &v16);
      v22 = 0;
      v25 = 0;
      v20 = &v16;
      v23 = &v29;
      v21 = 8;
      v24 = 8;
      TlgWrite(v9, &unk_180042EB9, v10, v11, 4u, &pData);
    }
    v6 = -2147220992;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 9uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v18;
    v23 = &v17;
    v26 = &v29;
    v21 = 8;
    v24 = 8;
    v27 = 8;
    TlgWrite(v12, &unk_180042E51, v13, v14, 5u, &pData);
  }
  return v6;
}
