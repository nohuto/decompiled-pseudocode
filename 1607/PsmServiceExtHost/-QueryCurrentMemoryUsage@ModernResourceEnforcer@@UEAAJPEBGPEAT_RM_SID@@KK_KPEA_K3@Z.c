/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x18000C890
 * Callers:
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryCurrentMemoryUsage(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 *v8; // rdi
  unsigned __int64 *v9; // rsi
  unsigned int v14; // ebx
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned int v22; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-51h] BYREF
  unsigned int *v26; // [rsp+80h] [rbp-31h]
  __int64 v27; // [rsp+88h] [rbp-29h]
  unsigned __int64 *v28; // [rsp+90h] [rbp-21h]
  __int64 v29; // [rsp+98h] [rbp-19h]

  v8 = a7;
  v9 = a8;
  v14 = 0;
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *, _QWORD))this
            + 14))(
             a3,
             a4,
             a2,
             a5,
             a6,
             &v24,
             0LL);
  v22 = result;
  if ( (int)result < 0 )
  {
    if ( (unsigned int)dword_18004C030 <= 4 )
      return result;
    if ( TlgKeywordOn((TraceLoggingHProvider)(unsigned int)result, 1uLL) )
    {
      v27 = 4LL;
      v26 = &v22;
      v28 = &a6;
      v29 = 8LL;
      TlgWrite(v17, &unk_18003EF59, v18, v19, 4u, &pData);
      return v22;
    }
    return (unsigned int)v17;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *))this
            + 23))(
             a3,
             a4,
             a2,
             a5,
             a6,
             &v23);
  v22 = result;
  if ( (int)result < 0 )
  {
    if ( (unsigned int)dword_18004C030 <= 4 )
      return result;
    if ( TlgKeywordOn((TraceLoggingHProvider)(unsigned int)result, 1uLL) )
    {
      v27 = 4LL;
      v26 = &v22;
      v28 = &a6;
      v29 = 8LL;
      TlgWrite(v17, &unk_18003EF12, v20, v21, 4u, &pData);
      return v22;
    }
    return (unsigned int)v17;
  }
  v16 = v23 << 12;
  if ( !is_mul_ok(v23, 0x1000uLL) )
  {
    v16 = -1LL;
    v14 = -1073741675;
  }
  *v8 = v24;
  result = v14;
  *v9 = v16;
  return result;
}
