/*
 * XREFs of ??1CEffectCompilationService@@UEAA@XZ @ 0x1800E96C0
 * Callers:
 *     ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x1800E97B0 (--_GCEffectCompilationService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18005273C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x1800F8328 (-Cancel@CEffectCompilationTask@@QEAAXXZ.c)
 */

void __fastcall CEffectCompilationService::~CEffectCompilationService(CEffectCompilationService *this)
{
  bool v1; // zf
  __int64 i; // rbx
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  if ( !v1 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    *((_BYTE *)this + 80) = 1;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    CEffectCompilationTask::Cancel(*(CEffectCompilationTask **)(*((_QWORD *)this + 11) + 8 * i));
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 280LL))(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3));
    CloseHandle(*((HANDLE *)this + 3));
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 2));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
