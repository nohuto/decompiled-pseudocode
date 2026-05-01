/*
 * XREFs of RmpCoreApiSetHostLimits @ 0x180046C70
 * Callers:
 *     RmCoreRpcSrvSetHostLimits @ 0x180040820 (RmCoreRpcSrvSetHostLimits.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x1800051F4 (RmpResourceLimitsAreLegal.c)
 *     RmpEnforcementSettingsUpdateLimit @ 0x180019220 (RmpEnforcementSettingsUpdateLimit.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpEnforcementApplyLimits @ 0x1800400B4 (RmpEnforcementApplyLimits.c)
 *     RmpActivityHostFindByHandle @ 0x180040E20 (RmpActivityHostFindByHandle.c)
 */

__int64 __fastcall RmpCoreApiSetHostLimits(__int64 a1, __int64 a2, __int64 a3)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  volatile signed __int32 *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  __int64 *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  PVOID *p_P; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]

  v17 = a2;
  v16 = a2;
  P = 0LL;
  v18 = 132LL;
  v14 = 4LL;
  if ( RmpResourceLimitsAreLegal(a3, &v18, &v14) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v5 = RmpActivityHostFindByHandle((__int64)&v16, &P);
    v6 = (volatile signed __int32 *)P;
    LODWORD(v14) = v5;
    if ( v5 >= 0 )
    {
      v7 = (*(_BYTE *)(a3 + 48) & 0x10) == 0;
      v8 = *(_QWORD *)(a3 + 24);
      v19 = *((_OWORD *)P + 39);
      v20 = *((_OWORD *)P + 40);
      v21 = *((_OWORD *)P + 41);
      v22 = *((_OWORD *)P + 42);
      v23 = *((_OWORD *)P + 43);
      if ( v7 )
        *((_QWORD *)&v21 + 1) = v8;
      else
        *((_QWORD *)&v20 + 1) = v8;
      RmpEnforcementSettingsUpdateLimit((__int64)P, (__int64 *)&v19);
      v9 = RmpEnforcementApplyLimits((__int64)v6, (__int64)&v19);
      if ( v9 >= 0 )
        v9 = 0;
      LODWORD(v14) = v9;
    }
    if ( v6 )
      RmpObjectRelease(v6);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    LODWORD(v14) = -1073741583;
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v4, 1uLL) )
  {
    v26 = 8LL;
    v25 = &v17;
    v27 = &v14;
    v29 = a3 + 24;
    LODWORD(P) = *(_DWORD *)(a3 + 48);
    p_P = &P;
    v28 = 4LL;
    v30 = 8LL;
    v32 = 4LL;
    TlgWrite(v10, &unk_180064B11, v11, v12, 6u, &pData);
  }
  return (unsigned int)v14;
}
