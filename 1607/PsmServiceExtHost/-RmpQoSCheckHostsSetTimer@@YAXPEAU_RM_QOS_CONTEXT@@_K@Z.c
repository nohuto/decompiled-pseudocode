/*
 * XREFs of ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800014A0
 * Callers:
 *     RmpQoSEnableDisableForHost @ 0x180001414 (RmpQoSEnableDisableForHost.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x18000153C (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035118 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
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
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]
  int v20; // [rsp+6Ch] [rbp-1Ch]

  for ( i = a1; ; a1 = i )
  {
    v4 = RmpQoSGetEarliestHostInfo(a1);
    if ( !v4 || *((_QWORD *)v4 + 25) > a2 )
      break;
    v10 = (char *)v4 - 672;
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 0x400000000011uLL) )
    {
      v14 = *((_QWORD *)v10 + 3);
      v20 = 0;
      v15 = v14;
      v18 = &v15;
      v19 = 8;
      TlgWrite(v11, &unk_180042497, v12, v13, 3u, &pData);
    }
    RmpQoSDisableForHostOnTimerExpiry(i, (struct _RM_ACTIVITY_HOST *)v10);
  }
  v6 = RmpQoSGetEarliestHostInfo(i);
  v7 = *((_QWORD *)i + 2);
  if ( v6 )
  {
    v8 = &v16;
    v9 = *((unsigned int *)i + 7);
    v16 = *((_QWORD *)v6 + 25);
  }
  else
  {
    v9 = 0LL;
    v8 = 0LL;
  }
  TpSetTimer(v7, v8, 0LL, v9);
}
