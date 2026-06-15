/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0
 * Callers:
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180026630 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ @ 0x180027590 (-IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x1800275A0 (-IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180029A90 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??$make_shared@UNonDefaultSaDeviceReevaluationContext@@@std@@YA?AV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@0@XZ @ 0x1800918AC (--$make_shared@UNonDefaultSaDeviceReevaluationContext@@@std@@YA-AV-$shared_ptr@UNonDefaultSaDevi.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180093308 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?push_back@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@2@@Z @ 0x180093658 (-push_back@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct IStreamGroupProxy *a2,
        struct IAudioStreamInfo *a3)
{
  struct IAudioStreamInfo *v3; // r12
  __int64 (__fastcall *v5)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rbx
  CSaDeviceProxy *v6; // rbx
  bool (__fastcall *v7)(CSaDeviceProxy *__hidden); // rsi
  bool IsLockedToFormat; // al
  bool (__fastcall *v9)(CSaDeviceProxy *__hidden); // rsi
  char v11; // bl
  char v12; // r13
  __int64 (__fastcall *v13)(CSharedStreamGroupProxy *__hidden, struct IAudioStreamInfo *); // rsi
  unsigned int v14; // eax
  unsigned int v15; // r12d
  CSaDeviceProxy *v16; // rsi
  char v17; // al
  char IsLockedToPeriodicity; // al
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  __int64 v23; // r9
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v25; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v26; // [rsp+40h] [rbp-48h]
  CSaDeviceProxy *v28; // [rsp+98h] [rbp+10h] BYREF
  struct IAudioStreamInfo *v29; // [rsp+A0h] [rbp+18h]
  struct _FILETIME pftDueTime; // [rsp+A8h] [rbp+20h] BYREF

  v29 = a3;
  v3 = a3;
  v28 = 0LL;
  v5 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)a2 + 152LL);
  if ( v5 == CBaseStreamGroupProxy::GetConnectedSaDevice )
    CBaseStreamGroupProxy::GetConnectedSaDevice(a2, &v28);
  else
    v5(a2, &v28);
  v6 = v28;
  if ( !v28 )
    goto LABEL_11;
  v7 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v28 + 136LL);
  if ( v7 == CSaDeviceProxy::IsLockedToFormat )
  {
    IsLockedToFormat = CSaDeviceProxy::IsLockedToFormat(v28);
  }
  else
  {
    IsLockedToFormat = v7(v28);
    v6 = v28;
  }
  if ( !IsLockedToFormat )
  {
    v9 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v6 + 120LL);
    if ( !(v9 == CSaDeviceProxy::IsLockedToPeriodicity ? CSaDeviceProxy::IsLockedToPeriodicity(v6) : v9(v6)) )
    {
      v3 = v29;
LABEL_11:
      v11 = 1;
      v12 = 0;
      goto LABEL_12;
    }
  }
  v11 = 1;
  v12 = 1;
  v3 = v29;
LABEL_12:
  v13 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 96LL);
  if ( v13 == CSharedStreamGroupProxy::DestroyStream )
    v14 = CSharedStreamGroupProxy::DestroyStream(a2, v3);
  else
    v14 = v13(a2, v3);
  v15 = v14;
  LODWORD(v29) = v14;
  v16 = v28;
  if ( !v28
    || ((pftDueTime = *(struct _FILETIME *)(*(_QWORD *)v28 + 136LL),
         *(bool (__fastcall **)(CSaDeviceProxy *__hidden))&pftDueTime != CSaDeviceProxy::IsLockedToFormat)
      ? (v17 = (*(__int64 (__fastcall **)(CSaDeviceProxy *))&pftDueTime)(v28), v16 = v28)
      : (CSaDeviceProxy *)(v17 = CSaDeviceProxy::IsLockedToFormat(v28)),
        !v17
     && ((pftDueTime = *(struct _FILETIME *)(*(_QWORD *)v16 + 120LL),
          *(bool (__fastcall **)(CSaDeviceProxy *__hidden))&pftDueTime != CSaDeviceProxy::IsLockedToPeriodicity)
       ? (IsLockedToPeriodicity = (*(__int64 (__fastcall **)(CSaDeviceProxy *))&pftDueTime)(v16), v16 = v28)
       : (CSaDeviceProxy *)(IsLockedToPeriodicity = CSaDeviceProxy::IsLockedToPeriodicity(v16)),
         !IsLockedToPeriodicity)) )
  {
    v11 = 0;
  }
  if ( v12 && !v11 )
  {
    std::make_shared<NonDefaultSaDeviceReevaluationContext>(&v25);
    if ( v25 )
    {
      v20 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 48LL))(a2);
      v23 = -1LL;
      do
        ++v23;
      while ( *(_WORD *)(v20 + 2 * v23) );
      if ( (int)_AllocStringWorker<CTCoAllocPolicy>(v22, v21, v20, v23) >= 0 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            CAudioResourceManager::ReevaluateNonDefaultStatusForSaDevice,
                            (char *)this - 8,
                            0LL);
        if ( ThreadpoolTimer )
        {
          *(_QWORD *)(v25 + 8) = ThreadpoolTimer;
          pftDueTime.dwLowDateTime = -100000000;
          pftDueTime.dwHighDateTime = -1;
          SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
          try
          {
            std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::push_back((char *)this + 80, &v25);
          }
          catch ( std::bad_alloc )
          {
            v15 = (unsigned int)v29;
          }
        }
      }
    }
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    v16 = v28;
  }
  if ( v16 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v15;
}
