/*
 * XREFs of ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180012580
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180012328 (-LogPendingEnd@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x180015BF0 (-OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::OnAcquired(RmpRpsResourceSetCallback **this)
{
  UCHAR v2; // dl
  RmpRpsResourceSetCallback *v3; // rcx
  RmpRpsResourceSetCallback *v4; // rdx
  __int64 (__fastcall *v5)(RmpRpsResourceSetCallback *__hidden, void *); // rax
  int v6; // eax
  unsigned int v7; // edi
  void (*v8)(void); // rax
  ExecutionModel::ResourceSet *v10; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(
    &v10,
    (ExecutionModel::ResourceSet *)this);
  if ( (*((_BYTE *)this + 1412) & 1) != 0 )
    __fastfail(0x8000FFFF);
  v3 = this[224];
  if ( !v3
    || ((v4 = this[225],
         v5 = *(__int64 (__fastcall **)(RmpRpsResourceSetCallback *__hidden, void *))(*(_QWORD *)v3 + 32LL),
         v5 != RmpRpsResourceSetCallback::OnAcquired)
      ? (v6 = v5(v3, v4))
      : (v6 = RmpRpsResourceSetCallback::OnAcquired(v3, v4)),
        v7 = v6,
        v6 >= 0) )
  {
    *((_DWORD *)this + 353) |= 1u;
    v7 = 0;
  }
  ExecutionModel::ResourceSet::LogPendingEnd((ExecutionModel::ResourceSet *)this, v2);
  if ( v10 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v8 == (char *)ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v10);
    else
      v8();
  }
  return v7;
}
