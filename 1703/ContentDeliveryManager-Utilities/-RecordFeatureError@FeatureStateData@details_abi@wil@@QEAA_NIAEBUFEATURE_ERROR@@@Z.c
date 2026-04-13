/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1800094DC
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180009FF0 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007F78 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18000846C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180008C28 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        RTL_SRWLOCK *this,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  char *v4; // rdi
  char *v7; // rsi
  void *v8; // rbx
  char *v9; // r14
  bool v10; // di
  HANDLE ProcessHeap; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  void *v15; // [rsp+40h] [rbp-C0h] BYREF
  char *v16; // [rsp+48h] [rbp-B8h]
  char *v17; // [rsp+50h] [rbp-B0h]
  void *v18; // [rsp+58h] [rbp-A8h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A0h] BYREF
  char v20[256]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[8]; // [rsp+170h] [rbp+70h] BYREF

  v4 = v20;
  v15 = v20;
  v7 = v20;
  v8 = 0LL;
  v16 = v20;
  v13 = 0LL;
  v9 = (char *)v21;
  v17 = (char *)v21;
  v18 = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v13, v20, 0x100uLL) )
  {
    if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&v15, v13)
      || (v4 = (char *)v15,
          v9 = v17,
          !wil::details_abi::SerializedFailure::Serialize(a3, &v13, (char *)v15, v17 - (_BYTE *)v15)) )
    {
      v8 = v18;
      v10 = 0;
      goto LABEL_9;
    }
    v8 = v18;
    v7 = v16;
  }
  if ( &v4[v13] <= v9 )
    v7 = &v4[v13];
  wil::srwlock::lock_exclusive(this, &SRWLock);
  v14 = a2;
  v10 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&this[17],
          &v14,
          4uLL,
          v4,
          v7 - v4,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_9:
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  return v10;
}
