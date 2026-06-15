/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180007F40
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180007380 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ @ 0x18000B840 (-IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x18000B850 (-IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18000BDC0 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??$make_shared@UNonDefaultSaDeviceReevaluationContext@@@std@@YA?AV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@0@XZ @ 0x18008F13C (--$make_shared@UNonDefaultSaDeviceReevaluationContext@@@std@@YA-AV-$shared_ptr@UNonDefaultSaDevi.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180090B98 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?push_back@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@2@@Z @ 0x180090EE8 (-push_back@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct IStreamGroupProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 (__fastcall *v5)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rbx
  CSaDeviceProxy *v6; // rbx
  bool (__fastcall *v7)(CSaDeviceProxy *__hidden); // rsi
  bool IsLockedToFormat; // al
  bool (__fastcall *v9)(CSaDeviceProxy *__hidden); // rsi
  bool IsLockedToPeriodicity; // al
  bool v11; // r13
  __int64 (__fastcall *v12)(CSharedStreamGroupProxy *, struct IAudioStreamInfo *); // rbx
  unsigned int v13; // eax
  unsigned int v14; // r15d
  CSaDeviceProxy *v15; // rbx
  bool (__fastcall *v16)(CSaDeviceProxy *__hidden); // rsi
  bool v17; // al
  bool (__fastcall *v18)(CSaDeviceProxy *__hidden); // rsi
  bool v19; // al
  bool v20; // al
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  __int64 v25; // r9
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v27; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v28; // [rsp+40h] [rbp-48h]
  unsigned int v30; // [rsp+98h] [rbp+10h]
  CSaDeviceProxy *v32; // [rsp+A0h] [rbp+18h] BYREF
  struct _FILETIME pftDueTime; // [rsp+A8h] [rbp+20h] BYREF

  v32 = 0LL;
  v5 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)a2 + 176LL);
  if ( v5 == CBaseStreamGroupProxy::GetConnectedSaDevice )
    CBaseStreamGroupProxy::GetConnectedSaDevice(a2, &v32);
  else
    v5(a2, &v32);
  v6 = v32;
  v11 = 0;
  if ( v32 )
  {
    v7 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v32 + 136LL);
    if ( v7 == CSaDeviceProxy::IsLockedToFormat )
    {
      IsLockedToFormat = CSaDeviceProxy::IsLockedToFormat(v32);
    }
    else
    {
      IsLockedToFormat = v7(v32);
      v6 = v32;
    }
    if ( IsLockedToFormat
      || ((v9 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v6 + 120LL),
           v9 != CSaDeviceProxy::IsLockedToPeriodicity)
        ? (IsLockedToPeriodicity = v9(v6))
        : (IsLockedToPeriodicity = CSaDeviceProxy::IsLockedToPeriodicity(v6)),
          IsLockedToPeriodicity) )
    {
      v11 = 1;
    }
  }
  v12 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 96LL);
  if ( v12 == CSharedStreamGroupProxy::DestroyStream )
    v13 = CSharedStreamGroupProxy::DestroyStream(a2, a3);
  else
    v13 = v12(a2, a3);
  v14 = v13;
  v30 = v13;
  v15 = v32;
  v20 = 0;
  if ( v32 )
  {
    v16 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v32 + 136LL);
    if ( v16 == CSaDeviceProxy::IsLockedToFormat )
    {
      v17 = CSaDeviceProxy::IsLockedToFormat(v32);
    }
    else
    {
      v17 = v16(v32);
      v15 = v32;
    }
    if ( v17
      || ((v18 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v15 + 120LL),
           v18 != CSaDeviceProxy::IsLockedToPeriodicity)
        ? (v19 = v18(v15), v15 = v32)
        : (CSaDeviceProxy *)(v19 = CSaDeviceProxy::IsLockedToPeriodicity(v15)),
          v19) )
    {
      v20 = 1;
    }
  }
  if ( v11 && !v20 )
  {
    std::make_shared<NonDefaultSaDeviceReevaluationContext>(&v27);
    if ( v27 )
    {
      v22 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 48LL))(a2);
      v25 = -1LL;
      do
        ++v25;
      while ( *(_WORD *)(v22 + 2 * v25) );
      if ( (int)_AllocStringWorker<CTCoAllocPolicy>(v24, v23, v22, v25) >= 0 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            CAudioResourceManager::ReevaluateNonDefaultStatusForSaDevice,
                            (char *)this - 8,
                            0LL);
        if ( ThreadpoolTimer )
        {
          *(_QWORD *)(v27 + 8) = ThreadpoolTimer;
          pftDueTime = (struct _FILETIME)-100000000LL;
          SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
          try
          {
            std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::push_back((char *)this + 80, &v27);
          }
          catch ( std::bad_alloc )
          {
            v14 = v30;
          }
        }
      }
    }
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    v15 = v32;
  }
  if ( v15 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v14;
}
