/*
 * XREFs of ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x180144C1C
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  __int64 v4; // rax
  char v7; // si
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  struct ID2DContextOwner *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-48h]
  struct ID2DContextOwner *v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  v4 = *(_QWORD *)a3;
  *a4 = 0LL;
  v16 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct ID2DContextOwner **))(v4 + 248))(
         a3,
         *((_QWORD *)this + 75),
         *((_QWORD *)this + 76),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 843;
    goto LABEL_14;
  }
  v8 = CD2DResource::AddResourceNotifier(
         (struct ID2DContextOwner *)((char *)v16 + 16),
         (CPrimitiveGroup *)((char *)this + 112));
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 845;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v15);
    goto LABEL_15;
  }
  v7 = 1;
  v10 = *((_DWORD *)this + 48);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_9:
    if ( v9 >= 0 )
      goto LABEL_10;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x350u);
LABEL_15:
    v13 = v16;
    goto LABEL_16;
  }
  v9 = 0;
  if ( v11 > *((_DWORD *)this + 47) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 168, 8u, 1, &v16);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    goto LABEL_9;
  }
  *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * *((unsigned int *)this + 48)) = v16;
  *((_DWORD *)this + 48) = v11;
LABEL_10:
  v13 = 0LL;
  *a4 = v16;
  v16 = 0LL;
LABEL_16:
  if ( v9 < 0 && v7 )
  {
    CD2DResource::RemoveResourceNotifier(
      (struct ID2DContextOwner *)((char *)v13 + 16),
      (CPrimitiveGroup *)((char *)this + 112));
    v13 = v16;
  }
  if ( v13 )
    (*(void (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v9;
}
