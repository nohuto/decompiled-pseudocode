/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180046264
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180046134 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostQueryGpuInterferenceCounter @ 0x180047008 (RmpActivityHostQueryGpuInterferenceCounter.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  TraceLoggingHProvider v5; // rcx
  int v6; // edx
  const GUID *v7; // r8
  const GUID *v8; // r9
  TraceLoggingHProvider hProvider; // [rsp+30h] [rbp-29h] BYREF
  struct _RM_ACTIVITY_HOST *v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _RM_ACTIVITY_HOST **v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  char *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  TraceLoggingHProvider *p_hProvider; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  result = RmpActivityHostQueryGpuInterferenceCounter(a1, &hProvider);
  if ( (int)result >= 0 )
  {
    v5 = hProvider;
    if ( (unsigned __int64)hProvider <= *((_QWORD *)a1 + 93) )
    {
      *a2 = 0;
    }
    else
    {
      if ( (unsigned int)dword_180071060 > 4 )
      {
        if ( TlgKeywordOn(hProvider, 1uLL) )
        {
          v14 = 0;
          v17 = 0;
          v20 = 0;
          v12 = &v10;
          p_hProvider = &hProvider;
          v10 = a1;
          v13 = v6 + 7;
          v15 = (char *)a1 + 744;
          v16 = v6 + 7;
          v19 = v6 + 7;
          TlgWrite((TraceLoggingHProvider)(unsigned int)(v6 + 7), &unk_180064999, v7, v8, 5u, &pData);
          v5 = hProvider;
        }
      }
      *a2 = 1;
      *((_QWORD *)a1 + 93) = v5;
    }
    return 0LL;
  }
  return result;
}
