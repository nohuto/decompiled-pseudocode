/*
 * XREFs of ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0124954
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0158D5C (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0158FC4 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
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
