/*
 * XREFs of RmpSystemApplyPsmPriorityToHost @ 0x1800184B4
 * Callers:
 *     RmpActivityHostApplyExecutionSpeed @ 0x180007320 (RmpActivityHostApplyExecutionSpeed.c)
 * Callees:
 *     ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C79C (-SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATIO.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+38h] [rbp-21h] BYREF
  __int64 v12; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int *v14; // [rsp+70h] [rbp+17h]
  const GUID *v15; // [rsp+78h] [rbp+1Fh]
  __int64 *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  int *v18; // [rsp+90h] [rbp+37h]
  const GUID *v19; // [rsp+98h] [rbp+3Fh]

  v2 = *((_QWORD *)a1 + 5);
  v10 = a2;
  v11 = ModernResourceEnforcer::SetApplicationPriority(
          *(ModernResourceEnforcer **)(v2 + 72),
          a1,
          (enum _PSM_APPLICATION_PRIORITY *)&v10);
  LODWORD(v6) = v11;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v15 = v8;
    v14 = &v11;
    v12 = *((_QWORD *)a1 + 3);
    v16 = &v12;
    v18 = &v10;
    v17 = 8LL;
    v10 = a2;
    v19 = v8;
    TlgWrite(v7, &unk_1800434E6, v6, v8, 5u, &pData);
    LODWORD(v6) = v11;
  }
  return (unsigned int)v6;
}
