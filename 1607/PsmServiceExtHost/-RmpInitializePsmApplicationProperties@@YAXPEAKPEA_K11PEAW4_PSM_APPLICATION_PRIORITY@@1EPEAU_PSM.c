/*
 * XREFs of ?RmpInitializePsmApplicationProperties@@YAXPEAKPEA_K11PEAW4_PSM_APPLICATION_PRIORITY@@1EPEAU_PSM_APPLICATION_PROPERTIES@@@Z @ 0x180029C44
 * Callers:
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180029A30 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpCommitValueToEnforcerValue @ 0x18002A06C (RmpCommitValueToEnforcerValue.c)
 */

void __fastcall RmpInitializePsmApplicationProperties(
        unsigned int *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        enum _PSM_APPLICATION_PRIORITY *a5,
        unsigned __int64 *a6,
        char a7,
        struct _PSM_APPLICATION_PROPERTIES *a8)
{
  char v12; // r10

  memset_0(a8, 0, 0x30uLL);
  v12 = a7;
  if ( a1 )
  {
    *(_DWORD *)a8 |= 1u;
    if ( a7 )
      *((_DWORD *)a8 + 1) = *a1;
  }
  if ( a2 )
  {
    *(_DWORD *)a8 |= 2u;
    if ( a7 )
      *((_QWORD *)a8 + 1) = RmpCommitValueToEnforcerValue(*a2);
  }
  if ( a3 )
  {
    *(_DWORD *)a8 |= 4u;
    if ( v12 )
      *((_QWORD *)a8 + 2) = RmpCommitValueToEnforcerValue(*a3);
  }
  if ( a4 )
  {
    *(_DWORD *)a8 |= 8u;
    if ( v12 )
      *((_QWORD *)a8 + 3) = RmpCommitValueToEnforcerValue(*a4);
  }
  if ( a5 )
  {
    *(_DWORD *)a8 |= 0x10u;
    if ( v12 )
      *((_DWORD *)a8 + 8) = *(_DWORD *)a5;
  }
  if ( a6 )
  {
    *(_DWORD *)a8 |= 0x20u;
    if ( v12 )
      *((_QWORD *)a8 + 5) = *a6;
  }
}
