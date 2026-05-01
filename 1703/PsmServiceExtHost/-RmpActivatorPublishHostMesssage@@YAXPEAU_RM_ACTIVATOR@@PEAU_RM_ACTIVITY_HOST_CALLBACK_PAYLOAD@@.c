/*
 * XREFs of ?RmpActivatorPublishHostMesssage@@YAXPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST_CALLBACK_PAYLOAD@@@Z @ 0x18001AC00
 * Callers:
 *     ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18001AB0C (-RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x18001AC9C (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpActivatorPublishHostMesssage(
        struct _RM_ACTIVATOR *a1,
        struct _RM_ACTIVITY_HOST_CALLBACK_PAYLOAD *a2)
{
  __int64 v4; // r9
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  int v13; // [rsp+38h] [rbp-51h] BYREF
  __int128 v14; // [rsp+40h] [rbp-49h]
  __int128 v15; // [rsp+50h] [rbp-39h]
  __int128 v16; // [rsp+60h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  int *v18; // [rsp+90h] [rbp+7h]
  const GUID *v19; // [rsp+98h] [rbp+Fh]
  int *v20; // [rsp+A0h] [rbp+17h]
  const GUID *v21; // [rsp+A8h] [rbp+1Fh]
  struct _RM_ACTIVITY_HOST_CALLBACK_PAYLOAD *v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]

  memset_0(&v13, 0, 0x38uLL);
  v4 = *((_QWORD *)a1 + 4);
  v5 = *((_OWORD *)a2 + 1);
  v14 = *(_OWORD *)a2;
  v13 = 1;
  v6 = *((_OWORD *)a2 + 2);
  v15 = v5;
  v16 = v6;
  v11 = RmpWnfPublishMessageToClientStateName((char *)a1 + 24, &v13, 56LL, v4);
  if ( v11 < 0 && (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v7, 0x400000000001uLL) )
    {
      v19 = v9;
      v18 = &v11;
      v12 = *((_DWORD *)a2 + 6);
      v20 = &v12;
      v21 = v9;
      v22 = a2;
      v23 = 8LL;
      TlgWrite(v8, &unk_1800413FE, v9, v10, 5u, &pData);
    }
  }
}
