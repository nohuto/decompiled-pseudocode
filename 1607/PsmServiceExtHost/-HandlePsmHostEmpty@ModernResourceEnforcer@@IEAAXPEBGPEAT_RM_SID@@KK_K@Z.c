/*
 * XREFs of ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C038
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B990 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ?RemoveApplicationState@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C5EC (-RemoveApplicationState@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017A10 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall ModernResourceEnforcer::HandlePsmHostEmpty(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // r11
  TraceLoggingHProvider v11; // rcx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  unsigned int v14; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  unsigned int *v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  unsigned __int64 *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]

  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(this, 1uLL) )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v18, a3);
    v14 = a4;
    v19 = &v14;
    v21 = &v15;
    v23 = &a6;
    v20 = v10;
    v15 = a5;
    v22 = v10;
    v24 = 8LL;
    TlgWrite(v11, &unk_18003EFA1, v12, v13, 7u, &pData);
  }
  if ( a5 != 6 )
    ModernResourceEnforcer::RemoveApplicationState(this, a2, (union _RM_SID *)a3, a4, a5, a6);
}
