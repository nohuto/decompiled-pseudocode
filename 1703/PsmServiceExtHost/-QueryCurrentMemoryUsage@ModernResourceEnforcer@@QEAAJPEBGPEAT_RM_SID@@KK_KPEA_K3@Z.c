/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x18000AE30
 * Callers:
 *     ?RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180006C34 (-RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
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
  unsigned int v22; // [rsp+40h] [rbp-81h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  unsigned int *v26; // [rsp+80h] [rbp-41h]
  __int64 v27; // [rsp+88h] [rbp-39h]
  unsigned __int64 *v28; // [rsp+90h] [rbp-31h]
  __int64 v29; // [rsp+98h] [rbp-29h]

  v8 = a7;
  v9 = a8;
  v14 = 0;
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *, _QWORD))this
            + 13))(
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
    if ( (unsigned int)dword_18004D030 <= 4 )
      return result;
    if ( TlgKeywordOn((TraceLoggingHProvider)(unsigned int)result, 1uLL) )
    {
      v27 = 4LL;
      v26 = &v22;
      v28 = &a6;
      v29 = 8LL;
      TlgWrite(v17, &unk_18003F557, v18, v19, 4u, &pData);
      return v22;
    }
    return (unsigned int)v17;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *))this
            + 22))(
             a3,
             a4,
             a2,
             a5,
             a6,
             &v23);
  v22 = result;
  if ( (int)result < 0 )
  {
    if ( (unsigned int)dword_18004D030 <= 4 )
      return result;
    if ( TlgKeywordOn((TraceLoggingHProvider)(unsigned int)result, 1uLL) )
    {
      v27 = 4LL;
      v26 = &v22;
      v28 = &a6;
      v29 = 8LL;
      TlgWrite(v17, &unk_18003F59F, v20, v21, 4u, &pData);
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
