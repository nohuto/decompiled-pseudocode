/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180020300
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180017D78 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009AD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18000FD8C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     WPP_SF__guid_d @ 0x1800205E8 (WPP_SF__guid_d.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
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
  __int64 v8; // rdi
  unsigned int v10; // r14d
  __int64 v11; // r8
  int *v12; // r12
  __int64 *v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rdi
  HANDLE ProcessHeap; // rax
  int *v17; // rax
  __int64 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rax
  ATL::CAtlException *v24; // rbx
  ATL::CAtlException *v25; // rbx
  ATL::CAtlException *v26; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v27; // [rsp+48h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-38h] BYREF
  char v29; // [rsp+58h] [rbp-30h]
  int *v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]

  v8 = a2;
  v10 = 0;
  lpCriticalSection = this;
  v29 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = a6;
  *a6 = 0;
  v13 = (__int64 *)((char *)&this[1] + 48 * v8 + (a3 != 0 ? 0x3F0 : 0));
  v14 = (__int64 *)*v13;
  if ( a5 )
  {
    do
    {
      if ( !v14 )
        goto LABEL_37;
      v18 = v14;
      v19 = (volatile signed __int32 *)v14[2];
      v14 = (__int64 *)*v14;
    }
    while ( a4 != *((const struct DuckingDescriptor **)v19 + 6) );
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, v11, v19 + 4, *((_DWORD *)v19 + 9) - 1);
    }
    if ( _InterlockedExchangeAdd(v19 + 9, 0xFFFFFFFF) == 1 )
    {
      v10 = 0;
      try
      {
        v20 = *v18;
        if ( v18 == (__int64 *)*v13 )
          *v13 = v20;
        else
          *(_QWORD *)v18[1] = v20;
        v21 = (_QWORD *)v18[1];
        if ( v18 == (__int64 *)v13[1] )
          v13[1] = (__int64)v21;
        else
          *(_QWORD *)(*v18 + 8) = v21;
        *v18 = v13[4];
        v13[4] = (__int64)v18;
        if ( v13[2]-- == 1 )
          ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v13);
      }
      catch ( ATL::CAtlException *v27 )
      {
        v25 = v27;
        if ( *(_DWORD *)v27 == -1073741571 )
          o__resetstkoflw_0();
        v31 = *(_DWORD *)v25;
        v10 = v31;
        if ( v31 < 0 )
          goto LABEL_37;
        v12 = a6;
      }
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 8LL))(v19, 1LL);
      }
      *v12 = 1;
    }
  }
  else
  {
    do
    {
      if ( !v14 )
      {
        ProcessHeap = GetProcessHeap();
        v17 = (int *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
        a6 = v17;
        if ( v17 )
        {
          v17[2] = 1;
          *(_QWORD *)v17 = &CGainStage::`vftable';
          *((_OWORD *)v17 + 1) = StreamClassVolumePolicyGuid;
          *((_BYTE *)v17 + 32) = 0;
          v17[9] = 1;
          *((_QWORD *)v17 + 5) = 0LL;
          *(_QWORD *)v17 = &CPBMStreamClassVolumeGainStage::`vftable';
          *((_QWORD *)v17 + 6) = a4;
        }
        v30 = v17;
        if ( v17 )
        {
          *v12 = 1;
          v10 = 0;
          try
          {
            ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(v13, &v30);
          }
          catch ( ATL::CAtlException *v26 )
          {
            v24 = v26;
            if ( *(_DWORD *)v26 == -1073741571 )
              o__resetstkoflw_0();
            v31 = *(_DWORD *)v24;
            v10 = v31;
            goto LABEL_37;
          }
        }
        else
        {
          v10 = -2147024882;
        }
        goto LABEL_37;
      }
      v15 = v14[2];
      v14 = (__int64 *)*v14;
    }
    while ( a4 != *(const struct DuckingDescriptor **)(v15 + 48) );
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, v11, v15 + 16, *(_DWORD *)(v15 + 36) + 1);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 36));
  }
LABEL_37:
  if ( v29 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
