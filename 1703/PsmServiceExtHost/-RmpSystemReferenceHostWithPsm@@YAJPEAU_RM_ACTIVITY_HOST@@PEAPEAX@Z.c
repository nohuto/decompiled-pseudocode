/*
 * XREFs of ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x180004978
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016320 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemReferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void **a2)
{
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp-78h] BYREF
  struct _RM_ACTIVITY_HOST *v12; // [rsp+48h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-48h]
  int v15; // [rsp+78h] [rbp-40h]
  int v16; // [rsp+7Ch] [rbp-3Ch]
  struct _RM_ACTIVITY_HOST **v17; // [rsp+80h] [rbp-38h]
  int v18; // [rsp+88h] [rbp-30h]
  int v19; // [rsp+8Ch] [rbp-2Ch]

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v9 = *(_QWORD *)(v6 + 24);
    v16 = 0;
    v19 = 0;
    v11 = v9;
    v14 = &v11;
    v17 = &v12;
    v15 = v5 + 7;
    v12 = a1;
    v18 = v5 + 7;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v5 + 7), &unk_1800442D0, v7, v8, 4u, &pData);
  }
  return (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void **))(v4 + 216))(
           (char *)a1 + 528,
           *((unsigned int *)a1 + 149),
           (char *)a1 + 64,
           *((unsigned int *)a1 + 150),
           *((_QWORD *)a1 + 3),
           a2);
}
