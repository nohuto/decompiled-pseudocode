/*
 * XREFs of ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C011EDDC
 * Callers:
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0154CE0 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::QueryActiveContextCount(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // esi
  _QWORD *v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)this;
  if ( v4 )
    DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16));
  v5 = 3 * v3;
  v6 = *((_QWORD *)this + 2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, *(struct DXGFASTMUTEX *const *)(v6 + 8 * v5));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v7 = *((unsigned int *)this + 2);
  v8 = 0;
  v9 = *(_QWORD **)(v6 + 8 * v5 + 8);
  if ( (_DWORD)v7 )
  {
    do
    {
      if ( *v9 )
        ++v8;
      ++v9;
      --v7;
    }
    while ( v7 );
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v8;
}
