/*
 * XREFs of ?GetD2DPencil@CPencil@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PencilStroke@@@Z @ 0x18014DD98
 * Callers:
 *     ?Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D9D0 (-Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z @ 0x18014DAB0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPE.c)
 */

__int64 __fastcall CPencil::GetD2DPencil(CPencil *this, struct ID2DContext *a2, struct ID2D1PencilStroke **a3)
{
  int v3; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct CD2DPencil *v9; // rbx
  struct ID2D1PencilStroke *v10; // rax
  struct CD2DPencil *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 8);
  v12 = 0LL;
  *a3 = 0LL;
  v6 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((v3 & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v6;
  if ( (v6 & 6) == 2 )
  {
    v8 = CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::FindOrCreateResourceNoRef(
           (CPencil *)((char *)this + 112),
           a2,
           &v12);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v9 = v12;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v12 + 13) + 8LL))(*((_QWORD *)v12 + 13));
      v10 = (struct ID2D1PencilStroke *)*((_QWORD *)v9 + 13);
      v7 = 0;
      *a3 = v10;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x102u);
  }
  else
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xFFu);
  }
  if ( *a3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    *a3 = 0LL;
  }
LABEL_8:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v7;
}
