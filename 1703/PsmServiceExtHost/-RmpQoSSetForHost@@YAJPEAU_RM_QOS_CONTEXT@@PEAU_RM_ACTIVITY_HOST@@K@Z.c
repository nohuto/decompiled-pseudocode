/*
 * XREFs of ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800011C0
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000101C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180001114 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpQoSRundown@@YAXPEAU_RM_QOS_CONTEXT@@@Z @ 0x180037514 (-RmpQoSRundown@@YAXPEAU_RM_QOS_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpSystemSetActivityHostQoS@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800012D0 (-RmpSystemSetActivityHostQoS@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpQoSSetForHost(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  unsigned int v5; // edx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  bool v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  __int64 v12; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  __int64 *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  bool *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  if ( a3 )
    v5 = *((unsigned __int8 *)a1 + 32);
  else
    v5 = 0;
  v11 = RmpSystemSetActivityHostQoS(a2, v5);
  v6 = (const struct _TlgProvider_t *)(unsigned int)v11;
  if ( v11 < 0 )
  {
    if ( !a3 )
      *((_BYTE *)a2 + 724) &= ~8u;
  }
  else
  {
    *((_BYTE *)a2 + 724) &= ~8u;
    *((_BYTE *)a2 + 724) |= 8 * (a3 & 1);
    v6 = 0LL;
    v11 = 0;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v6, 0x11uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v11;
    v12 = *((_QWORD *)a2 + 3);
    v10 = a3 != 0;
    v22 = 0;
    v17 = &v12;
    v20 = &v10;
    v15 = 4;
    v18 = 8;
    v21 = 1;
    TlgWrite(v6, &unk_180044106, v7, v8, 5u, &pData);
    LODWORD(v6) = v11;
  }
  return (unsigned int)v6;
}
