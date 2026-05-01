/*
 * XREFs of ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x1800192C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x18000F018 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::`scalar deleting destructor'(
        ExecutionModel::ExternalResourceSet *this,
        char a2)
{
  struct _RM_OBJECT_HEADER *v4; // rcx
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax

  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  v4 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)this + 176);
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
