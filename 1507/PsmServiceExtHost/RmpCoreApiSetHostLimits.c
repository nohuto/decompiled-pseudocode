/*
 * XREFs of RmpCoreApiSetHostLimits @ 0x180042040
 * Callers:
 *     RmCoreRpcSrvSetHostLimits @ 0x18003B450 (RmCoreRpcSrvSetHostLimits.c)
 * Callees:
 *     RmpEnforcementSettingsUpdateLimit @ 0x180004914 (RmpEnforcementSettingsUpdateLimit.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostFindByHandle @ 0x18003BA9C (RmpActivityHostFindByHandle.c)
 *     RmpEnforcementApplyLimits @ 0x180042478 (RmpEnforcementApplyLimits.c)
 */

__int64 __fastcall RmpCoreApiSetHostLimits(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  bool v6; // zf
  __int64 v7; // rax
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  unsigned int *v26; // [rsp+D0h] [rbp-30h]
  const GUID *v27; // [rsp+D8h] [rbp-28h]
  __int64 v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  PVOID *p_P; // [rsp+F0h] [rbp-10h]
  const GUID *v31; // [rsp+F8h] [rbp-8h]

  v17 = a2;
  P = 0LL;
  v16 = a2;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = RmpActivityHostFindByHandle((__int64)&v16, &P);
  v5 = (volatile signed __int32 *)P;
  v14 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(_BYTE *)(a3 + 28) & 0x10) == 0;
    v7 = *(_QWORD *)(a3 + 16);
    v18 = *((_OWORD *)P + 39);
    v19 = *((_OWORD *)P + 40);
    v20 = *((_OWORD *)P + 41);
    v21 = *((_OWORD *)P + 42);
    v22 = *((_QWORD *)P + 86);
    if ( v6 )
      *((_QWORD *)&v20 + 1) = v7;
    else
      *((_QWORD *)&v19 + 1) = v7;
    RmpEnforcementSettingsUpdateLimit((__int64)P, (__int64)&v18);
    v8 = RmpEnforcementApplyLimits(v5, &v18);
    if ( v8 >= 0 )
      v8 = 0;
    v14 = v8;
  }
  if ( v5 )
    RmpObjectRelease(v5);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v9, 1uLL) )
  {
    v25 = 8LL;
    v24 = &v17;
    v26 = &v14;
    v28 = a3 + 16;
    LODWORD(P) = *(_DWORD *)(a3 + 28);
    p_P = &P;
    v27 = v12;
    v29 = 8LL;
    v31 = v12;
    TlgWrite(v10, &unk_18005CCC3, v11, v12, 6u, &pData);
  }
  return v14;
}
