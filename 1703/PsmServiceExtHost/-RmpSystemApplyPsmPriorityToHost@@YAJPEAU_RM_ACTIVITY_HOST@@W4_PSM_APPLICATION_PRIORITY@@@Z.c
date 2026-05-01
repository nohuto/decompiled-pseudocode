/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180002A54
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180002994 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000AD88 (-SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATIO.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v14; // [rsp+70h] [rbp+7h]
  const GUID *v15; // [rsp+78h] [rbp+Fh]
  __int64 *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  int *v18; // [rsp+90h] [rbp+27h]
  const GUID *v19; // [rsp+98h] [rbp+2Fh]

  v2 = *(_QWORD *)(a1 + 40);
  v10 = a2;
  v11 = ModernResourceEnforcer::SetApplicationPriority(
          *(ModernResourceEnforcer **)(v2 + 56),
          (struct _RM_ACTIVITY_HOST *)a1,
          (enum _PSM_APPLICATION_PRIORITY *)&v10);
  LODWORD(v6) = v11;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v15 = v8;
    v14 = &v11;
    v12 = *(_QWORD *)(a1 + 24);
    v16 = &v12;
    v18 = &v10;
    v17 = 8LL;
    v10 = a2;
    v19 = v8;
    TlgWrite(v7, &unk_180044625, v6, v8, 5u, &pData);
    LODWORD(v6) = v11;
  }
  return (unsigned int)v6;
}
