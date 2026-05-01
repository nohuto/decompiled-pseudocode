/*
 * XREFs of ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x1800353A0
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800354F0 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800355BC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 * Callees:
 *     RmpCommitValuesAdd @ 0x180007008 (RmpCommitValuesAdd.c)
 *     RmpCommitValuesSubtract @ 0x180007034 (RmpCommitValuesSubtract.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18003571C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireMemoryForFGSharing(
        ExecutionModel::ResourceSet *this,
        unsigned __int64 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  unsigned int v4; // r9d
  int v5; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int HasMemoryForFGSharing; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int *p_HasMemoryForFGSharing; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  __int64 *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  unsigned __int64 *v22; // [rsp+90h] [rbp+37h]
  int v23; // [rsp+98h] [rbp+3Fh]
  int v24; // [rsp+9Ch] [rbp+43h]

  v13 = a2;
  HasMemoryForFGSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing(this, a2, 0);
  v4 = HasMemoryForFGSharing;
  if ( HasMemoryForFGSharing >= 0 )
  {
    RmpCommitValuesAdd(*((_QWORD *)this + 231), v13, (_QWORD *)this + 231);
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 88LL))((char *)this + 1368)
      && (v5 = RmpActivityHostComputeAndApplyEnforcementSettings(*((struct _RM_ACTIVITY_HOST **)this + 175)), v5 < 0) )
    {
      v6 = *((_QWORD *)this + 231);
      HasMemoryForFGSharing = v5 | 0x10000000;
      RmpCommitValuesSubtract(v6, v13, (_QWORD *)this + 231);
    }
    else
    {
      v4 = 0;
      HasMemoryForFGSharing = 0;
    }
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v3, 1uLL) )
  {
    v18 = 0;
    p_HasMemoryForFGSharing = &HasMemoryForFGSharing;
    v7 = *((_QWORD *)this + 171);
    v17 = 4;
    v8 = (*(__int64 (__fastcall **)(char *))(v7 + 64))((char *)this + 1368);
    v21 = 0;
    v24 = 0;
    v14 = v8;
    v19 = &v14;
    v22 = &v13;
    v20 = 8;
    v23 = 8;
    TlgWrite((TraceLoggingHProvider)8, &unk_180042B0A, v9, v10, 5u, &pData);
    return (unsigned int)HasMemoryForFGSharing;
  }
  return v4;
}
