/*
 * XREFs of ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18010C004
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180016000 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180016050 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  __int64 v5; // rax
  char v7; // r14
  int v8; // eax
  int v9; // esi
  int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  __int64 v14; // rdi
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0LL;
  v5 = *(_QWORD *)a3;
  *a4 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v5 + 240))(
         a3,
         *((_QWORD *)this + 65),
         *((_QWORD *)this + 66),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = 811;
LABEL_5:
    v10 = v8;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v17);
    v14 = v18;
    goto LABEL_11;
  }
  v8 = CD2DResource::AddResourceNotifier((CD2DResource *)(v18 + 16), (CPrimitiveGroup *)((char *)this + 40));
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = 813;
    goto LABEL_5;
  }
  v11 = *((_DWORD *)this + 28);
  v7 = 1;
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_20:
    v17 = 816;
    v10 = v13;
    goto LABEL_21;
  }
  v9 = 0;
  if ( v12 > *((_DWORD *)this + 27) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 8u, 1, &v18);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_20;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = v18;
    *((_DWORD *)this + 28) = v12;
  }
  v14 = 0LL;
  *a4 = (struct CD2DCommandList *)v18;
  v18 = 0LL;
LABEL_11:
  if ( v9 < 0 && v7 )
  {
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v14 + 16), (CPrimitiveGroup *)((char *)this + 40));
    v14 = v18;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v9;
}
