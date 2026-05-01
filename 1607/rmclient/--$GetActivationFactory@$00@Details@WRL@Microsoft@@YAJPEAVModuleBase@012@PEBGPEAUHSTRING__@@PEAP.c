/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800031D0
 * Callers:
 *     DllGetActivationFactory @ 0x180004890 (DllGetActivationFactory.c)
 * Callees:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001F20 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x1800035E0 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     __security_check_cookie @ 0x180006040 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000830C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<1>(
        Microsoft::WRL::Details::ModuleBase *this,
        __int64 a2,
        HSTRING a3,
        PVOID *a4)
{
  unsigned int v5; // ebp
  PCWSTR StringRawBuffer; // r14
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v9)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  char *v10; // rax
  __int64 *v11; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v12)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  __int64 *v13; // rdi
  const unsigned __int16 *(*v14)(void); // rax
  const WCHAR *v15; // rax
  unsigned __int16 *v16; // rcx
  signed __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 result; // rax
  __int64 v21; // rdi
  struct _RTL_SRWLOCK *(__fastcall *v22)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *v23; // rbx
  void *v24; // rcx
  volatile int *v25; // rdx
  char *v26; // r10
  int (*v27)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **); // rax
  void (*v28)(void); // rax
  unsigned int v29; // eax
  __int64 v30; // r10
  PVOID v31; // rbx
  struct _RTL_SRWLOCK *(__fastcall *v32)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *v33; // rax
  RTL_SRWLOCK *v34; // rsi
  void *v35; // rcx
  int v36; // [rsp+30h] [rbp-88h] BYREF
  PVOID Ptr; // [rsp+38h] [rbp-80h] BYREF
  BOOL hasEmbedNull; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v39[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v40; // [rsp+68h] [rbp-50h]

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
    if ( v11 >= v13 )
    {
LABEL_22:
      RoOriginateError(2147746065LL, 0LL);
      return 2147746065LL;
    }
    else
    {
      while ( 1 )
      {
        if ( *v11 )
        {
          v14 = *(const unsigned __int16 *(**)(void))(*v11 + 8);
          if ( v14 == Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic )
            v15 = L"Windows.System.MemoryManager";
          else
            v15 = v14 == Windows::System::CProcessMemoryReport::InternalGetRuntimeClassName
                ? L"Windows.System.ProcessMemoryReport"
                : (const WCHAR *)((__int64 (__fastcall *)(const unsigned __int16 *(*)(void), const unsigned __int16 *(*)(void)))v14)(
                                   Windows::System::CProcessMemoryReport::InternalGetRuntimeClassName,
                                   Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic);
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
          goto LABEL_22;
      }
      v21 = *v11;
      v36 = 1;
      *a4 = 0LL;
      Ptr = 0LL;
      if ( **(_QWORD **)(v21 + 24) )
      {
        v22 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        if ( v22 == Microsoft::WRL::Details::ModuleBase::GetLock )
          v23 = &Microsoft::WRL::Details::ModuleBase::moduleLock_;
        else
          v23 = v22(this);
        AcquireSRWLockShared(v23);
        v24 = **(void ***)(v21 + 24);
        if ( v24 )
        {
          Ptr = DecodePointer(v24);
          v26 = (char *)Ptr;
          v27 = **(int (***)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **))Ptr;
          if ( v27 == Windows::System::CMemoryManager::QueryInterface )
          {
            *a4 = Ptr;
            v28 = *(void (**)(void))(*(_QWORD *)v26 + 8LL);
            if ( (char *)v28 != (char *)Windows::System::CMemoryManager::AddRef )
            {
LABEL_35:
              v28();
              goto LABEL_37;
            }
            v29 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v26 + 36), v25);
            if ( (*(_BYTE *)(v30 + 56) & 4) == 0 && v29 == 2 )
            {
              v28 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
              if ( (char *)v28 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
              {
                _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
                goto LABEL_37;
              }
              goto LABEL_35;
            }
          }
          else
          {
            v5 = ((__int64 (__fastcall *)(PVOID, GUID *, PVOID *))v27)(
                   Ptr,
                   &GUID_00000035_0000_0000_c000_000000000046,
                   a4);
          }
LABEL_37:
          if ( v23 )
          {
            ReleaseSRWLockShared(v23);
            return v5;
          }
          return v5;
        }
        if ( v23 )
          ReleaseSRWLockShared(v23);
      }
      if ( *(__int64 (__fastcall **)(_BYTE *, __int64, const struct _GUID *, _QWORD *))v21 == Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager> )
        result = Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
                   &v36,
                   v21,
                   &GUID_00000035_0000_0000_c000_000000000046,
                   &Ptr);
      else
        result = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v21)(
                   &v36,
                   v21,
                   &GUID_00000035_0000_0000_c000_000000000046,
                   &Ptr);
      if ( (int)result >= 0 )
      {
        if ( (v36 & 4) == 0 )
        {
          v31 = 0LL;
          v32 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
          v33 = v32 == Microsoft::WRL::Details::ModuleBase::GetLock
              ? Microsoft::WRL::Details::ModuleBase::GetLock(this)
              : v32(this);
          v34 = v33;
          AcquireSRWLockExclusive(v33);
          v35 = **(void ***)(v21 + 24);
          if ( v35 )
          {
            v31 = DecodePointer(v35);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v31 + 8LL))(v31);
          }
          else
          {
            **(_QWORD **)(v21 + 24) = EncodePointer(Ptr);
          }
          if ( v34 )
            ReleaseSRWLockExclusive(v34);
          if ( v31 )
          {
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
            result = 0LL;
            *a4 = v31;
            return result;
          }
        }
        *a4 = Ptr;
        return v5;
      }
    }
  }
  return result;
}
