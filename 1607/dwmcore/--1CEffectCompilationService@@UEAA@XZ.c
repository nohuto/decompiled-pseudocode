/*
 * XREFs of ??1CEffectCompilationService@@UEAA@XZ @ 0x18011BB10
 * Callers:
 *     ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x18011BBD0 (--_GCEffectCompilationService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x18012A954 (-Cancel@CEffectCompilationTask@@QEAAXXZ.c)
 */

void __fastcall CEffectCompilationService::~CEffectCompilationService(CEffectCompilationService *this)
{
  bool v1; // zf
  __int64 i; // rdi
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  if ( !v1 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    *((_BYTE *)this + 80) = 1;
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    CEffectCompilationTask::Cancel(*(CEffectCompilationTask **)(*((_QWORD *)this + 11) + 8 * i));
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    CloseHandle(*((HANDLE *)this + 3));
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 88);
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
