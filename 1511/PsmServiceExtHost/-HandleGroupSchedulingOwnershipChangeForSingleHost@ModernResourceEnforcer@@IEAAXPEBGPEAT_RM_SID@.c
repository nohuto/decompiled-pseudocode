/*
 * XREFs of ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180035EFC
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 * Callees:
 *     ?LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180016050 (-LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY.c)
 *     ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180019D70 (-LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORI.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800360C0 (-FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@.c)
 */

void __fastcall ModernResourceEnforcer::HandleGroupSchedulingOwnershipChangeForSingleHost(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        void *a7,
        bool a8)
{
  void *v9; // r14
  struct EnforcerApplicationState *ApplicationState; // rax
  __int64 (__fastcall *v14)(void *, _QWORD, unsigned __int64, int *); // rbx
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // ebx
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-4Dh] BYREF
  void *v22; // [rsp+68h] [rbp-49h]
  ModernResourceEnforcer *v23; // [rsp+70h] [rbp-41h]
  int v24; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v25; // [rsp+7Ch] [rbp-35h]

  v9 = a7;
  v23 = this;
  v22 = a7;
  ApplicationState = ModernResourceEnforcer::FindApplicationState(this, a2, a3, a4, a5, a6);
  if ( a8 )
  {
    memset_0(&v24, 0, 0x30uLL);
    v14 = (__int64 (__fastcall *)(void *, _QWORD, unsigned __int64, int *))*((_QWORD *)this + 14);
    v24 |= 1u;
    v15 = v14(a7, a5, a6, &v24);
    v16 = v20;
    v17 = v15;
    if ( v15 >= 0 )
      v16 = v25;
    v20 = v16;
    LogQueryApplicationProperties(v15, a2, a3, a4, a5, a6, &v20, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v17 >= 0 && v16 != -1 )
    {
      v9 = v22;
      v18 = -1;
      v21 = -1;
      goto LABEL_10;
    }
  }
  else if ( *(char *)ApplicationState < 0 && *((_WORD *)ApplicationState + 1) != 0xFFFF )
  {
    v18 = *((unsigned __int16 *)ApplicationState + 1);
    v21 = v18;
LABEL_10:
    memset_0(&v24, 0, 0x30uLL);
    v24 |= 1u;
    v25 = v18;
    v19 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, int *))v23 + 13))(v9, a5, a6, &v24);
    if ( v19 < 0 )
      LogSetApplicationProperties(v19, a2, a3, a4, a5, a6, &v21, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
}
