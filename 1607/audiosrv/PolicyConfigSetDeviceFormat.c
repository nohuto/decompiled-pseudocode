/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x180070370
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, const WCHAR *a2, __int64 a3, _WORD *a4)
{
  unsigned __int16 v7; // ax
  int v8; // eax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v12; // [rsp+30h] [rbp-89h] BYREF
  __int64 v13; // [rsp+38h] [rbp-81h] BYREF
  GUID v14; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-49h] BYREF
  int *v17; // [rsp+80h] [rbp-39h]
  int v18; // [rsp+88h] [rbp-31h]
  int v19; // [rsp+8Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-29h] BYREF
  _WORD *v21; // [rsp+A0h] [rbp-19h]
  int v22; // [rsp+A8h] [rbp-11h]
  int v23; // [rsp+ACh] [rbp-Dh]
  _WORD *v24; // [rsp+B0h] [rbp-9h]
  int v25; // [rsp+B8h] [rbp-1h]
  int v26; // [rsp+BCh] [rbp+3h]
  _WORD *v27; // [rsp+C0h] [rbp+7h]
  int v28; // [rsp+C8h] [rbp+Fh]
  int v29; // [rsp+CCh] [rbp+13h]
  GUID *v30; // [rsp+D0h] [rbp+17h]
  int v31; // [rsp+D8h] [rbp+1Fh]
  int v32; // [rsp+DCh] [rbp+23h]

  v13 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v13) >= 0 )
  {
    v14 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v7 = a4 ? *a4 : 0;
    v14.Data1 = v7;
    if ( dword_1800CA040 > 4u )
    {
      TlgCreateWsz(&pDesc, a2);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
      v19 = 0;
      v12 = v8;
      v18 = 4;
      v17 = &v12;
      TlgCreateWsz(&v20, L"WFEX");
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v24 = a4 + 2;
      v27 = a4 + 4;
      v30 = &v14;
      v21 = a4 + 1;
      v22 = 2;
      v25 = 4;
      v28 = 4;
      v31 = 16;
      TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8164, v9, v10, 9u, &pData);
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64, _WORD *))(*(_QWORD *)g_PolicyConfig + 48LL))(
           g_PolicyConfig,
           a2,
           a3,
           a4);
}
