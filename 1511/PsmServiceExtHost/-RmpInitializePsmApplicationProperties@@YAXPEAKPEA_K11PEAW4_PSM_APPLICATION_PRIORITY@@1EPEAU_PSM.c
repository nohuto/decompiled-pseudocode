/*
 * XREFs of ?RmpInitializePsmApplicationProperties@@YAXPEAKPEA_K11PEAW4_PSM_APPLICATION_PRIORITY@@1EPEAU_PSM_APPLICATION_PROPERTIES@@@Z @ 0x180005008
 * Callers:
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18003ADF0 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
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
  memset_0(a8, 0, 0x30uLL);
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
      *((_QWORD *)a8 + 1) = *a2;
  }
  if ( a3 )
  {
    *(_DWORD *)a8 |= 4u;
    if ( a7 )
      *((_QWORD *)a8 + 2) = *a3;
  }
  if ( a4 )
  {
    *(_DWORD *)a8 |= 8u;
    if ( a7 )
      *((_QWORD *)a8 + 3) = *a4;
  }
  if ( a5 )
  {
    *(_DWORD *)a8 |= 0x10u;
    if ( a7 )
      *((_DWORD *)a8 + 8) = *(_DWORD *)a5;
  }
  if ( a6 )
  {
    *(_DWORD *)a8 |= 0x20u;
    if ( a7 )
      *((_QWORD *)a8 + 5) = *a6;
  }
}
