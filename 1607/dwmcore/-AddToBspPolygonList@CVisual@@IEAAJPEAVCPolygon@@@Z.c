/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180137F30
 * Callers:
 *     ?EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ @ 0x18018DF90 (-EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18004FD80 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180138CB4 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 BspPolygonList; // rbx
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  struct CPolygon *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( BspPolygonList )
  {
LABEL_8:
    v6 = *(_DWORD *)(BspPolygonList + 24);
    v7 = v6 + 1;
    if ( v6 + 1 >= v6 )
    {
      v5 = 0;
      if ( v7 <= *(_DWORD *)(BspPolygonList + 20) )
      {
        *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * *(unsigned int *)(BspPolygonList + 24)) = v10;
        *(_DWORD *)(BspPolygonList + 24) = v7;
LABEL_15:
        (**(void (__fastcall ***)(struct CPolygon *))v10)(v10);
        return v5;
      }
      v8 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8u, 1, &v10);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1356u);
      return v5;
    }
    goto LABEL_15;
  }
  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  BspPolygonList = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 24) = 0;
  }
  else
  {
    BspPolygonList = 0LL;
  }
  if ( BspPolygonList )
  {
    CVisual::SetBspPolygonList(this, BspPolygonList);
    goto LABEL_8;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1352u);
  return v5;
}
