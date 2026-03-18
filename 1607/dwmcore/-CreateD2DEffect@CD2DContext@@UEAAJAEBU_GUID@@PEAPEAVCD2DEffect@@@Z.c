/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1800030E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180021348 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct ID2D1Effect *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 5) + 504LL))(
         *((_QWORD *)this + 5),
         a2,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x9BFu);
  }
  else
  {
    v7 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 1), v9, a3);
    v6 = v7;
    if ( v7 >= 0 )
      goto LABEL_3;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x9C0u);
  }
  *a3 = 0LL;
LABEL_3:
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v9 + 16LL))(v9);
  return v6;
}
