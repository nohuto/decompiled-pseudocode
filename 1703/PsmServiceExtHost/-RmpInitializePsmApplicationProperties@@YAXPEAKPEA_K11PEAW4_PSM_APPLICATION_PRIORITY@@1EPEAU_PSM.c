/*
 * XREFs of ?RmpInitializePsmApplicationProperties@@YAXPEAKPEA_K11PEAW4_PSM_APPLICATION_PRIORITY@@1EPEAU_PSM_APPLICATION_PROPERTIES@@@Z @ 0x18001B030
 * Callers:
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18002A530 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
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
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

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
    {
      v12 = *a2;
      if ( *a2 == -1LL )
        v12 = 0LL;
      *((_QWORD *)a8 + 1) = v12;
    }
  }
  if ( a3 )
  {
    *(_DWORD *)a8 |= 4u;
    if ( a7 )
    {
      v13 = *a3;
      if ( *a3 == -1LL )
        v13 = 0LL;
      *((_QWORD *)a8 + 2) = v13;
    }
  }
  if ( a4 )
  {
    *(_DWORD *)a8 |= 8u;
    if ( a7 )
    {
      v14 = *a4;
      if ( *a4 == -1LL )
        v14 = 0LL;
      *((_QWORD *)a8 + 3) = v14;
    }
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
