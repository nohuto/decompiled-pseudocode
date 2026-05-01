/*
 * XREFs of ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DC2C
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001F120 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180022E94 (-CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned __int64 v9; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  const GUID *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  const struct _TlgProvider_t *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]
  unsigned __int64 v22; // [rsp+D8h] [rbp+6Fh] BYREF

  v22 = a2;
  *((_QWORD *)this + 24) += a2;
  v2 = *((_QWORD *)this + 23);
  if ( (*(_BYTE *)(v2 + 1344) & 4) == 0 )
  {
    v3 = (unsigned __int64 *)(v2 + 248);
    v4 = *v3;
    if ( a2 < *v3 )
      v4 = a2;
    v5 = (ExecutionModel::ResourceManager *)((char *)this + 200);
    v10 = v4;
    v9 = a2 - v4;
    *v3 -= v4;
    *(_QWORD *)v5 += v9;
    if ( (unsigned int)dword_180071060 > 4 )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
      {
        v13 = 8LL;
        v12 = (__int64 *)&v22;
        v14 = (__int64 *)&v10;
        v16 = (__int64 *)&v9;
        v15 = 8LL;
        v17 = 8LL;
        v18 = v8;
        v19 = 8LL;
        v20 = v6;
        v21 = 8LL;
        TlgWrite(v6, &unk_180062416, v7, v8, 7u, &pData);
      }
    }
  }
}
