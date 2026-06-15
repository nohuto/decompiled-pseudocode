/*
 * XREFs of PolicyConfigSetProcessingPeriod @ 0x180070540
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetProcessingPeriod(__int64 a1, const WCHAR *a2, __int64 a3)
{
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v8 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v8) >= 0
    && dword_1800CA040 > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v13 = 0;
    v11 = a3;
    v12 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8131, v5, v6, 4u, &pData);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64))(*(_QWORD *)g_PolicyConfig + 64LL))(
           g_PolicyConfig,
           a2,
           a3);
}
