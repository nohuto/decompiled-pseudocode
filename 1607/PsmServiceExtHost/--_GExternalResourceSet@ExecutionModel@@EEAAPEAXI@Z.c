/*
 * XREFs of ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x1800042B0
 * Callers:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x180011624 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::`scalar deleting destructor'(
        ExecutionModel::ExternalResourceSet *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax

  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 176);
  if ( v4 )
    RmpObjectRelease(v4);
  if ( *((_QWORD *)this + 177) )
    TpReleaseTimer();
  v5 = (__int64 **)((char *)this + 1384);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v8 = (__int64 *)v6[1];
    v9 = *v6;
    *v8 = *v6;
    *(_QWORD *)(v9 + 8) = v8;
    operator delete(v6);
  }
  *((_QWORD *)this + 175) = 0LL;
  ExecutionModel::BaseResourceSet::~BaseResourceSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
