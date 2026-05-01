/*
 * XREFs of ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x18003F11C
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x18003F1B0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::~ExternalResourceSet(ExecutionModel::ExternalResourceSet *this)
{
  volatile signed __int32 *v2; // rcx
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax

  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  *((_QWORD *)this + 171) = &ExecutionModel::ExternalResourceSet::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 184);
  if ( v2 )
    RmpObjectRelease(v2);
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 1424));
  v3 = (__int64 **)((char *)this + 1400);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 177) = 0LL;
  ExecutionModel::BaseResourceSet::~BaseResourceSet((void **)this);
}
