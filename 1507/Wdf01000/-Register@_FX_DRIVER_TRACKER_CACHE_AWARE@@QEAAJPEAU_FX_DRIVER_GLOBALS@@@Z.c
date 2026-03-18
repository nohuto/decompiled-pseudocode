/*
 * XREFs of ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0021F98
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x1C0021EB4 (FxRegisterBugCheckCallback.c)
 * Callees:
 *     WdmlibProcgrpInitialize @ 0x1C00D3144 (WdmlibProcgrpInitialize.c)
 */

__int64 __fastcall _FX_DRIVER_TRACKER_CACHE_AWARE::Register(
        _FX_DRIVER_TRACKER_CACHE_AWARE *this,
        _FX_DRIVER_GLOBALS *__formal)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *SystemRoutineAddress)(__int64); // rax
  unsigned int v6; // eax
  unsigned int m_Number; // eax
  __int64 (*v8)(void); // rax
  unsigned int v9; // ebp
  POOL_TYPE v10; // ecx
  SIZE_T v11; // rdx
  unsigned __int64 PoolWithTag; // rax
  void *v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // rcx
  PVOID v17; // rax
  __int64 (*v18)(void); // rax
  char *v19; // rax
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( this->m_PoolToFree )
    return v2;
  WdmlibProcgrpInitialize();
  RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCountEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64))MmGetSystemRoutineAddress(&funcName);
  if ( SystemRoutineAddress )
  {
    v6 = SystemRoutineAddress(0xFFFFLL);
LABEL_5:
    this->m_Number = v6;
    goto LABEL_6;
  }
  RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCount");
  v18 = (__int64 (*)(void))MmGetSystemRoutineAddress(&funcName);
  if ( v18 )
  {
    v6 = v18();
    goto LABEL_5;
  }
  if ( (FxLibraryGlobals.OsVersionInfo.dwMajorVersion != 5 || !FxLibraryGlobals.OsVersionInfo.dwMinorVersion)
    && (FxLibraryGlobals.OsVersionInfo.dwMajorVersion != 6 || FxLibraryGlobals.OsVersionInfo.dwMinorVersion) )
  {
    return (unsigned int)-1073741637;
  }
  v19 = *(char **)&KeNumberProcessors;
  this->m_Number = *v19;
LABEL_6:
  m_Number = this->m_Number;
  if ( m_Number > 0x100 )
    return (unsigned int)-1073741637;
  if ( m_Number > 1 )
  {
    RtlInitUnicodeString(&funcName, L"KeGetRecommendedSharedDataAlignment");
    v8 = (__int64 (*)(void))MmGetSystemRoutineAddress(&funcName);
    if ( v8 )
    {
      v9 = v8();
      goto LABEL_10;
    }
    return (unsigned int)-1073741637;
  }
  v9 = 8;
LABEL_10:
  v10 = ExDefaultNonPagedPoolType;
  v11 = v9 * this->m_Number;
  this->m_EntrySize = v9;
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(v10, v11, 0x72447846u);
  v13 = (void *)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  if ( this->m_Number > 1 )
  {
    v14 = v9 - 1;
    if ( (v14 & PoolWithTag) != 0 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      v17 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v9 * (this->m_Number + 1), 0x72447846u);
      v13 = v17;
      if ( v17 )
      {
        PoolWithTag = ~v14 & ((unsigned __int64)v17 + v14);
        goto LABEL_13;
      }
      return (unsigned int)-1073741670;
    }
  }
LABEL_13:
  v15 = 0;
  this->m_PoolToFree = v13;
  for ( this->m_DriverUsage = (_FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY *)PoolWithTag;
        v15 < this->m_Number;
        *(_FX_DRIVER_GLOBALS *volatile *)((char *)&this->m_DriverUsage->FxDriverGlobals + v16) = 0LL )
  {
    v16 = v15 * this->m_EntrySize;
    ++v15;
  }
  return v2;
}
