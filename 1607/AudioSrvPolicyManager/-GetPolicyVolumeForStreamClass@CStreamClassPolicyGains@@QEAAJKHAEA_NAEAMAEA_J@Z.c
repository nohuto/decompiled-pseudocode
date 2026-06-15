/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x1800236CC
 * Callers:
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z @ 0x18001D080 (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     pow_0 @ 0x180024CD2 (pow_0.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
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
  LONG *p_LockCount; // rax
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  _QWORD *p_Type; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  float v15; // xmm0_4
  float v16; // xmm1_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v19; // [rsp+30h] [rbp-28h]

  v8 = a2;
  lpCriticalSection = this;
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a4 = 0;
  *a5 = 1.0;
  *a6 = 0LL;
  p_LockCount = &this[26].LockCount;
  v11 = this + 1;
  if ( a3 )
    v11 = (struct _RTL_CRITICAL_SECTION *)p_LockCount;
  if ( (unsigned int)v8 < 0x15 )
  {
    p_Type = &(&v11->DebugInfo)[6 * v8]->Type;
    while ( p_Type )
    {
      v13 = (_QWORD *)p_Type[2];
      p_Type = (_QWORD *)*p_Type;
      v14 = *(_QWORD *)(v13[6] + 8LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13) )
      {
        *a4 = 1;
        break;
      }
      v15 = *(float *)v13[6];
      if ( v15 == -INFINITY )
        v16 = 0.0;
      else
        v16 = pow_0(10.0, v15 / 20.0);
      if ( *a5 > v16 )
        *a5 = v16;
      if ( v14 > *a6 )
        *a6 = v14;
    }
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
