/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180023830
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180019EAC (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18001070C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     WPP_SF__guid_d @ 0x180023B10 (WPP_SF__guid_d.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        char a3,
        const struct DuckingDescriptor *a4,
        int a5,
        int *a6)
{
  __int64 v8; // rsi
  unsigned int v10; // r14d
  __int64 v11; // r8
  int *v12; // r12
  LONG *p_LockCount; // rax
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  __int64 *v15; // rbx
  __int64 *v16; // rcx
  __int64 v17; // rdi
  HANDLE ProcessHeap; // rax
  int *v19; // rax
  __int64 *v20; // rdi
  volatile signed __int32 *v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rax
  ATL::CAtlException *v26; // rbx
  ATL::CAtlException *v27; // rbx
  ATL::CAtlException *v28; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v29; // [rsp+48h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-38h] BYREF
  char v31; // [rsp+58h] [rbp-30h]
  int *v32; // [rsp+90h] [rbp+8h] BYREF
  int v33; // [rsp+A0h] [rbp+18h]

  v8 = a2;
  v10 = 0;
  lpCriticalSection = this;
  v31 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = a6;
  *a6 = 0;
  p_LockCount = &this[26].LockCount;
  v14 = this + 1;
  if ( a3 )
    v14 = (struct _RTL_CRITICAL_SECTION *)p_LockCount;
  v15 = (__int64 *)((char *)v14 + 48 * v8);
  v16 = (__int64 *)*v15;
  if ( a5 )
  {
    do
    {
      if ( !v16 )
        goto LABEL_39;
      v20 = v16;
      v21 = (volatile signed __int32 *)v16[2];
      v16 = (__int64 *)*v16;
    }
    while ( a4 != *((const struct DuckingDescriptor **)v21 + 6) );
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, v11, v21 + 4, *((_DWORD *)v21 + 9) - 1);
    }
    if ( _InterlockedExchangeAdd(v21 + 9, 0xFFFFFFFF) == 1 )
    {
      v10 = 0;
      try
      {
        v22 = *v20;
        if ( v20 == (__int64 *)*v15 )
          *v15 = v22;
        else
          *(_QWORD *)v20[1] = v22;
        v23 = (_QWORD *)v20[1];
        if ( v20 == (__int64 *)v15[1] )
          v15[1] = (__int64)v23;
        else
          *(_QWORD *)(*v20 + 8) = v23;
        *v20 = v15[4];
        v15[4] = (__int64)v20;
        if ( v15[2]-- == 1 )
          ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v15);
      }
      catch ( ATL::CAtlException *v29 )
      {
        v27 = v29;
        if ( *(_DWORD *)v29 == -1073741571 )
          _resetstkoflw();
        v33 = *(_DWORD *)v27;
        v10 = v33;
        if ( v33 < 0 )
          goto LABEL_39;
        v12 = a6;
      }
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 8LL))(v21, 1LL);
      }
      *v12 = 1;
    }
  }
  else
  {
    do
    {
      if ( !v16 )
      {
        ProcessHeap = GetProcessHeap();
        v19 = (int *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
        a6 = v19;
        if ( v19 )
        {
          v19[2] = 1;
          *(_QWORD *)v19 = &CGainStage::`vftable';
          *((_OWORD *)v19 + 1) = StreamClassVolumePolicyGuid;
          *((_BYTE *)v19 + 32) = 0;
          v19[9] = 1;
          *((_QWORD *)v19 + 5) = 0LL;
          *(_QWORD *)v19 = &CPBMStreamClassVolumeGainStage::`vftable';
          *((_QWORD *)v19 + 6) = a4;
        }
        v32 = v19;
        if ( v19 )
        {
          *v12 = 1;
          v10 = 0;
          try
          {
            ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(v15, &v32);
          }
          catch ( ATL::CAtlException *v28 )
          {
            v26 = v28;
            if ( *(_DWORD *)v28 == -1073741571 )
              _resetstkoflw();
            v33 = *(_DWORD *)v26;
            v10 = v33;
            goto LABEL_39;
          }
        }
        else
        {
          v10 = -2147024882;
        }
        goto LABEL_39;
      }
      v17 = v16[2];
      v16 = (__int64 *)*v16;
    }
    while ( a4 != *(const struct DuckingDescriptor **)(v17 + 48) );
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, v11, v17 + 16, *(_DWORD *)(v17 + 36) + 1);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 36));
  }
LABEL_39:
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
