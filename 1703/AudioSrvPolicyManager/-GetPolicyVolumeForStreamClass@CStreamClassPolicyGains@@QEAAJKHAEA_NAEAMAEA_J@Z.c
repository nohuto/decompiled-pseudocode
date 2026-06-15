/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x1800201C4
 * Callers:
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z @ 0x18001B0CC (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     pow @ 0x180021684 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        int a3,
        bool *a4,
        float *a5,
        __int64 *a6)
{
  __int64 v8; // rbp
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rbp
  float v13; // xmm0_4
  float v14; // xmm1_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v17; // [rsp+30h] [rbp-28h]

  v8 = a2;
  lpCriticalSection = this;
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a4 = 0;
  *a5 = 1.0;
  *a6 = 0LL;
  if ( (unsigned int)v8 < 0x15 )
  {
    v10 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&(&this->DebugInfo)[6 * v8] + (a3 != 0 ? 1048LL : 40LL));
    while ( v10 )
    {
      v11 = (_QWORD *)v10[2];
      v10 = (_QWORD *)*v10;
      v12 = *(_QWORD *)(v11[6] + 8LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11) )
      {
        *a4 = 1;
        break;
      }
      v13 = *(float *)v11[6];
      if ( v13 == -INFINITY )
        v14 = 0.0;
      else
        v14 = pow(10.0, v13 / 20.0);
      if ( *a5 > v14 )
        *a5 = v14;
      if ( v12 > *a6 )
        *a6 = v12;
    }
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
