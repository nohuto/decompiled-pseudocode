/*
 * XREFs of ?CreatePencilStroke@CD2DContext@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z @ 0x180175E90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DPencil@@SAJPEAVCD2DResourceManager@@PEAUID2D1PencilStroke@@PEAPEAV1@@Z @ 0x18017DDA4 (-Create@CD2DPencil@@SAJPEAVCD2DResourceManager@@PEAUID2D1PencilStroke@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreatePencilStroke(
        CD2DContext *this,
        const struct D2D1_PENCIL_POINT *a2,
        struct CD2DPencil **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct ID2D1PencilStroke *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_PENCIL_POINT *, struct ID2D1PencilStroke **))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         a2,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x246u);
  }
  else
  {
    v7 = CD2DPencil::Create(*((struct CD2DResourceManager **)this + 1), v9, a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x247u);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1PencilStroke *))(*(_QWORD *)v9 + 16LL))(v9);
  return v6;
}
