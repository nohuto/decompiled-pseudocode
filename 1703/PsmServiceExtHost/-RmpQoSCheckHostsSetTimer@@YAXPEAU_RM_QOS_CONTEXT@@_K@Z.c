/*
 * XREFs of ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180001114
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000101C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800010D0 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x1800011AC (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800011C0 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpQoSCheckHostsSetTimer(struct _RM_QOS_CONTEXT *a1, unsigned __int64 a2)
{
  struct _RM_QOS_CONTEXT *i; // rbx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // r9
  char *v10; // rdi
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v21; // [rsp+60h] [rbp-28h]
  int v22; // [rsp+68h] [rbp-20h]
  int v23; // [rsp+6Ch] [rbp-1Ch]

  for ( i = a1; ; a1 = i )
  {
    v4 = RmpQoSGetEarliestHostInfo(a1);
    if ( !v4 || *((_QWORD *)v4 + 25) > a2 )
      break;
    v10 = (char *)v4 - 672;
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 0x400000000011uLL) )
    {
      v14 = *((_QWORD *)v10 + 3);
      v23 = 0;
      v18 = v14;
      v21 = &v18;
      v22 = 8;
      TlgWrite(v11, &unk_1800440D6, v12, v13, 3u, &pData);
    }
    *((_DWORD *)v10 + 204) |= 0x10u;
    RmpQoSSetForHost(i, (struct _RM_ACTIVITY_HOST *)v10, 0);
    v15 = v10 + 840;
    v16 = *((_QWORD *)v10 + 105);
    v17 = (_QWORD *)*((_QWORD *)v10 + 106);
    if ( *(char **)(v16 + 8) != v10 + 840 || (_QWORD *)*v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *v15 = 0LL;
    *((_QWORD *)v10 + 106) = 0LL;
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v10);
  }
  v6 = RmpQoSGetEarliestHostInfo(i);
  v7 = *((_QWORD *)i + 2);
  if ( v6 )
  {
    v8 = &v19;
    v9 = *((unsigned int *)i + 7);
    v19 = *((_QWORD *)v6 + 25);
  }
  else
  {
    v9 = 0LL;
    v8 = 0LL;
  }
  TpSetTimer(v7, v8, 0LL, v9);
}
