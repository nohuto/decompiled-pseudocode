/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18000FA08
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000F5E8 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x1800143B0 (-OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, char a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // xmm1_8
  ExecutionModel::BaseResourceSet *v8; // rcx
  UCHAR v9; // dl
  RmpRpsResourceSetCallback *v10; // rcx
  void *v11; // rdx
  __int64 (__fastcall *v12)(RmpRpsResourceSetCallback *__hidden, void *); // rax
  unsigned int v13; // [rsp+20h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  char v16; // [rsp+80h] [rbp+8h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF

  LODWORD(v14) = -1;
  *((_QWORD *)&v14 + 1) = 0LL;
  WORD2(v15) = 0;
  v4 = (_QWORD *)(*((_QWORD *)this + 173) + 128LL);
  LODWORD(v15) = 101;
  v5 = *v4;
  v6 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  v4[1] = 0LL;
  v7 = *((_QWORD *)this + 195);
  v8 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)this + 23);
  v13 = *((_DWORD *)this + 2);
  v14 = *(_OWORD *)((char *)this + 1544);
  v15 = v7;
  ExecutionModel::BaseResourceSet::RecursiveVisit(
    v8,
    1,
    1u,
    (unsigned int *)&v14,
    v13,
    1,
    &v17,
    &v16,
    0LL,
    (__int64)this);
  *((_DWORD *)this + 338) = 2;
  if ( (a2 & 1) != 0 )
  {
    v10 = (RmpRpsResourceSetCallback *)*((_QWORD *)this + 223);
    if ( v10 )
    {
      v11 = (void *)*((_QWORD *)this + 224);
      v12 = *(__int64 (__fastcall **)(RmpRpsResourceSetCallback *__hidden, void *))(*(_QWORD *)v10 + 32LL);
      if ( v12 == RmpRpsResourceSetCallback::OnAcquired )
        RmpRpsResourceSetCallback::OnAcquired(v10, v11);
      else
        v12(v10, v11);
    }
    *((_DWORD *)this + 351) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this, v9);
  }
}
