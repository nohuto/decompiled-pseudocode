/*
 * XREFs of ?Create@CD2DPencil@@SAJPEAVCD2DResourceManager@@PEAUID2D1PencilStroke@@PEAPEAV1@@Z @ 0x18017DDA4
 * Callers:
 *     ?CreatePencilStroke@CD2DContext@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z @ 0x180175E90 (-CreatePencilStroke@CD2DContext@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18009DB24 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DPencil::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PencilStroke *a2,
        struct CD2DPencil **a3)
{
  unsigned int v3; // edi
  CD2DResource *v7; // rax
  struct CD2DPencil *v8; // rbx

  v3 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         112LL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 2) = &CD2DMesh::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DPencil::`vftable'{for `CMILCOMBase'};
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DPencil *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v8 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1PencilStroke *))(*(_QWORD *)a2 + 8LL))(a2);
    *a3 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v3;
}
