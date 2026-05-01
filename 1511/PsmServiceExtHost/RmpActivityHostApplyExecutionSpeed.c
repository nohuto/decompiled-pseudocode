/*
 * XREFs of RmpActivityHostApplyExecutionSpeed @ 0x180004E7C
 * Callers:
 *     RmpActivityHostComputeAndApplyExecutionSpeed @ 0x180004D90 (RmpActivityHostComputeAndApplyExecutionSpeed.c)
 * Callees:
 *     ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180004F68 (-SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATIO.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  BOOL v7; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-15h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  __int64 *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  BOOL *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v7 = a2 <= 0;
  v8 = ModernResourceEnforcer::SetApplicationPriority(
         *((ModernResourceEnforcer **)RmSvcGlobals + 10),
         a1,
         (enum _PSM_APPLICATION_PRIORITY *)&v7);
  LODWORD(v3) = v8;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v8, 1uLL) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v11 = &v8;
    v9 = *((_QWORD *)a1 + 3);
    v14 = &v9;
    v17 = &v7;
    v12 = (int)v5;
    v15 = 8;
    v18 = (int)v5;
    TlgWrite(v3, &unk_180064E6F, v4, v5, 5u, &pData);
    LODWORD(v3) = v8;
  }
  return (unsigned int)v3;
}
