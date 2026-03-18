/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C013531C
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C0144610 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000580C (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C001D2C0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0144558 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01457C8 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // esi
  DXGPAGINGQUEUE *v26; // rax
  __int64 v27; // rdx

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 6844LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((DXGADAPTER ***)this + 2)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 6845LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = 6846LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x40uLL);
  if ( v19 )
  {
    v21 = 0LL;
    v19[2] = this;
    *v19 = 0LL;
    v19[1] = 0LL;
    *((_DWORD *)v19 + 6) = 0;
    v19[4] = 0LL;
    v19[5] = 0LL;
    v19[6] = 1LL;
    *((_BYTE *)v19 + 56) = 0;
  }
  *a4 = (struct DXGPAGINGQUEUE *)v19;
  if ( !v19 )
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v25 = -1073741801;
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v24);
LABEL_13:
    DXGPAGINGQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
    return (unsigned int)v25;
  }
  v25 = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)v19, a2, a3);
  if ( v25 < 0 )
    goto LABEL_13;
  v26 = *a4;
  v27 = *((_QWORD *)this + 40);
  *(_QWORD *)v26 = v27;
  *((_QWORD *)v26 + 1) = (char *)this + 320;
  if ( *(DXGDEVICE **)(v27 + 8) != (DXGDEVICE *)((char *)this + 320) )
    __fastfail(3u);
  *(_QWORD *)(v27 + 8) = v26;
  *((_QWORD *)this + 40) = v26;
  _InterlockedIncrement64((volatile signed __int64 *)this + 8);
  return (unsigned int)v25;
}
