/*
 * XREFs of ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800401F0
 * Callers:
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180001B50 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18003FFB0 (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180037EC8 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquireAdditionalResources(
        ExecutionModel::ResourceSet *this,
        char a2)
{
  struct IUnknown **v2; // r14
  int *v4; // rdi
  const struct _TlgProvider_t *v6; // rcx
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // r8
  ExecutionModel::ResourceSet *v12; // [rsp+30h] [rbp-78h] BYREF
  int *v13; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int **v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+6Ch] [rbp-3Ch]
  ExecutionModel::ResourceSet **v18; // [rsp+70h] [rbp-38h]
  int v19; // [rsp+78h] [rbp-30h]
  int v20; // [rsp+7Ch] [rbp-2Ch]

  v2 = (struct IUnknown **)((char *)this + 1808);
  v4 = (int *)*((_QWORD *)this + 226);
  if ( v4 )
    v4 -= 342;
  if ( !v4 )
    __fastfail(0x8000FFFF);
  if ( v4[39] <= 0 )
    __fastfail(0x8000FFFF);
  (*(void (__fastcall **)(int *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v6, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v13;
    v18 = &v12;
    v13 = v4;
    v16 = v7 + 7;
    v12 = this;
    v19 = v7 + 7;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v7 + 7), &unk_18005C346, v8, v9, 4u, &pData);
  }
  v10 = (_QWORD *)((char *)this + 200);
  v11 = 3LL;
  do
  {
    *(_QWORD *)((char *)v10 + (char *)v4 - (char *)this) += *v10;
    *v10 = 0LL;
    v10 += 3;
    --v11;
  }
  while ( v11 );
  if ( a2 )
    ExecutionModel::ResourceManager::ResourceSetMemoryLimitChangedNotification(
      *((ExecutionModel::ResourceManager **)this + 3),
      (struct _RM_ACTIVITY_HOST **)v4);
  if ( *v2 )
    ATL::AtlComPtrAssign(v2, 0LL);
  if ( *((_QWORD *)v4 + 227) )
    ATL::AtlComPtrAssign((struct IUnknown **)v4 + 227, 0LL);
  (*(void (__fastcall **)(int *, _QWORD *))(*(_QWORD *)v4 + 16LL))(v4, v10);
}
