/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180003BE0
 * Callers:
 *     DllGetActivationFactory @ 0x180006D00 (DllGetActivationFactory.c)
 * Callees:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800033D0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x180003EF0 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<1>(
        Microsoft::WRL::Details::ModuleBase *this,
        __int64 a2,
        HSTRING a3,
        PVOID *a4)
{
  unsigned int v5; // r14d
  PCWSTR StringRawBuffer; // rbp
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v9)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  char *v10; // rax
  __int64 *v11; // rsi
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v12)(Microsoft::WRL::Details::ModuleBase *__hidden); // rbx
  __int64 *v13; // rdi
  const unsigned __int16 *(*v14)(void); // rbx
  const WCHAR *v15; // r8
  unsigned __int16 *v16; // rax
  signed __int64 v17; // r8
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rbx
  struct _RTL_SRWLOCK *(__fastcall *v21)(Microsoft::WRL::Details::ModuleBase *__hidden); // rsi
  RTL_SRWLOCK *v22; // rsi
  void *v23; // rcx
  volatile signed __int32 *v24; // rbx
  int (*v25)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **); // rbp
  unsigned int (__fastcall *v26)(Windows::System::CMemoryManager *__hidden); // rbp
  signed __int32 v28; // edi
  void (__fastcall *v29)(struct Microsoft::WRL::Details::ModuleBase *); // rbx
  int v30; // eax
  PVOID v31; // rsi
  struct _RTL_SRWLOCK *(__fastcall *v32)(Microsoft::WRL::Details::ModuleBase *__hidden); // rdi
  RTL_SRWLOCK *Lock; // rax
  RTL_SRWLOCK *v34; // rdi
  void *v35; // rcx
  PVOID Ptr; // [rsp+20h] [rbp-78h] BYREF
  int v37; // [rsp+28h] [rbp-70h] BYREF
  BOOL hasEmbedNull; // [rsp+2Ch] [rbp-6Ch] BYREF
  _OWORD v39[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v40; // [rsp+50h] [rbp-48h]

  v5 = 0;
  *a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v39[0] = *(_OWORD *)L"pActivatibleClassId";
    v40 = *(_QWORD *)L"sId";
    v39[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v39);
    return 2147942487LL;
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v9 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 40LL);
    if ( v9 == Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer )
      v10 = (char *)&_pobjectentrymid;
    else
      v10 = (char *)v9(this);
    v11 = (__int64 *)(v10 + 8);
    v12 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 48LL);
    if ( v12 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
      v13 = (__int64 *)&_pobjectentrylast;
    else
      v13 = (__int64 *)v12(this);
    if ( v11 < v13 )
    {
      while ( 1 )
      {
        if ( *v11 )
        {
          v14 = *(const unsigned __int16 *(**)(void))(*v11 + 8);
          if ( v14 == Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic )
            v15 = L"Windows.System.MemoryManager";
          else
            v15 = v14 == Windows::System::CAppMemoryReport::InternalGetRuntimeClassName
                ? L"Windows.System.AppMemoryReport"
                : (const WCHAR *)((__int64 (__fastcall *)(_QWORD))v14)(*(_QWORD *)(*v11 + 8));
          v16 = (unsigned __int16 *)StringRawBuffer;
          v17 = (char *)v15 - (char *)StringRawBuffer;
          do
          {
            v18 = *(unsigned __int16 *)((char *)v16 + v17);
            v19 = *v16 - v18;
            if ( v19 )
              break;
            ++v16;
          }
          while ( v18 );
          if ( !v19 )
            break;
        }
        if ( ++v11 >= v13 )
          goto LABEL_60;
      }
      v20 = *v11;
      *a4 = 0LL;
      v37 = 1;
      Ptr = 0LL;
      if ( **(_QWORD **)(v20 + 24) )
      {
        v21 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        if ( v21 == Microsoft::WRL::Details::ModuleBase::GetLock )
          v22 = &Microsoft::WRL::Details::ModuleBase::moduleLock_;
        else
          v22 = v21(this);
        AcquireSRWLockShared(v22);
        v23 = **(void ***)(v20 + 24);
        if ( v23 )
        {
          Ptr = DecodePointer(v23);
          v24 = (volatile signed __int32 *)Ptr;
          v25 = **(int (***)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **))Ptr;
          if ( v25 == Windows::System::CMemoryManager::QueryInterface )
          {
            *a4 = Ptr;
            v26 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v24 + 8LL);
            if ( v26 == Windows::System::CMemoryManager::AddRef )
            {
              v28 = _InterlockedIncrement(v24 + 9);
              if ( (v24[14] & 4) == 0 && v28 == 2 )
              {
                v29 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                          + 8LL);
                if ( (char *)v29 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
                  _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
                else
                  v29(Microsoft::WRL::Details::ModuleBase::module_);
              }
            }
            else
            {
              v26((Windows::System::CMemoryManager *)v24);
            }
          }
          else
          {
            v5 = ((__int64 (__fastcall *)(PVOID, GUID *, PVOID *))v25)(
                   Ptr,
                   &GUID_00000035_0000_0000_c000_000000000046,
                   a4);
          }
          if ( v22 )
            ReleaseSRWLockShared(v22);
          return v5;
        }
        if ( v22 )
          ReleaseSRWLockShared(v22);
      }
      if ( *(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64))v20 == Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager> )
        v30 = Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
                &v37,
                v20,
                (__int64)&GUID_00000035_0000_0000_c000_000000000046,
                (__int64)&Ptr);
      else
        v30 = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v20)(
                &v37,
                v20,
                &GUID_00000035_0000_0000_c000_000000000046,
                &Ptr);
      if ( v30 < 0 )
      {
        return (unsigned int)v30;
      }
      else
      {
        if ( (v37 & 4) != 0 )
          goto LABEL_45;
        v31 = 0LL;
        v32 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        if ( v32 == Microsoft::WRL::Details::ModuleBase::GetLock )
          Lock = Microsoft::WRL::Details::ModuleBase::GetLock(this);
        else
          Lock = v32(this);
        v34 = Lock;
        AcquireSRWLockExclusive(Lock);
        v35 = **(void ***)(v20 + 24);
        if ( v35 )
        {
          v31 = DecodePointer(v35);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v31 + 8LL))(v31);
        }
        else
        {
          **(_QWORD **)(v20 + 24) = EncodePointer(Ptr);
        }
        if ( v34 )
          ReleaseSRWLockExclusive(v34);
        if ( v31 )
        {
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        }
        else
        {
LABEL_45:
          v31 = Ptr;
        }
        *a4 = v31;
      }
      return v5;
    }
LABEL_60:
    RoOriginateError(2147746065LL, 0LL);
    return 2147746065LL;
  }
}
