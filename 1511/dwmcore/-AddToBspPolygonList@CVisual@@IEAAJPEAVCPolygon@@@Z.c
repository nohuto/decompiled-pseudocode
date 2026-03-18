/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x18011FF88
 * Callers:
 *     ?EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ @ 0x18015B9B0 (-EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v10; // eax
  struct CPolygon *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  if ( !*((_QWORD *)this + 51) )
  {
    v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v3 )
    {
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_DWORD *)(v3 + 16) = 0;
      *(_DWORD *)(v3 + 20) = 0;
      *(_DWORD *)(v3 + 24) = 0;
    }
    *((_QWORD *)this + 51) = v3;
    if ( !v3 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x11CFu);
      return v4;
    }
  }
  v5 = *((_QWORD *)this + 51);
  v6 = *(_DWORD *)(v5 + 24);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x11D2u);
    return v4;
  }
  v4 = 0;
  if ( v7 > *(_DWORD *)(v5 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v5, 8, 1, &v11);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    v4 = v8;
    if ( v8 < 0 )
      goto LABEL_16;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 24)) = v11;
    *(_DWORD *)(v5 + 24) = v7;
  }
  (**(void (__fastcall ***)(struct CPolygon *))v11)(v11);
  return v4;
}
