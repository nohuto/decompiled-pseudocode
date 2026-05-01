/*
 * XREFs of ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180045324
 * Callers:
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180003F40 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18004511C (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000FAD4 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquireAdditionalResources(
        ExecutionModel::ResourceSet *this,
        int a2)
{
  struct IUnknown **v2; // r14
  struct IUnknown **v4; // rdi
  const struct _TlgProvider_t *v6; // rcx
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  _QWORD *v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+38h] [rbp-39h] BYREF
  struct IUnknown **v13; // [rsp+40h] [rbp-31h] BYREF
  ExecutionModel::ResourceSet *v14; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  struct IUnknown ***v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  ExecutionModel::ResourceSet **v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  int *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]

  v2 = (struct IUnknown **)((char *)this + 1816);
  v4 = (struct IUnknown **)*((_QWORD *)this + 227);
  if ( v4 )
    v4 -= 171;
  if ( !v4 )
    __fastfail(0x8000FFFF);
  if ( *((int *)v4 + 39) <= 0 )
    __fastfail(0x8000FFFF);
  ((void (__fastcall *)(struct IUnknown **))(*v4)[1].lpVtbl)(v4);
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v6, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v13;
    v19 = &v14;
    v22 = &v12;
    v13 = v4;
    v17 = v7 + 7;
    v14 = this;
    v20 = v7 + 7;
    v12 = a2;
    v23 = 4;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v7 + 7), &unk_18006476A, v8, v9, 5u, &pData);
  }
  if ( (a2 & 2) != 0 )
  {
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
    if ( (a2 & 1) != 0 )
      ExecutionModel::ResourceManager::ResourceSetMemoryLimitChangedNotification(
        *((ExecutionModel::ResourceManager **)this + 3),
        (struct ExecutionModel::ResourceSet *)v4);
  }
  if ( *v2 )
    ATL::AtlComPtrAssign(v2, 0LL);
  if ( v4[228] )
    ATL::AtlComPtrAssign(v4 + 228, 0LL);
  ((void (__fastcall *)(struct IUnknown **))(*v4)[2].lpVtbl)(v4);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)this + 32LL))(this, 0LL);
}
