/*
 * XREFs of ?AddOcclusionInformation@CNineGridBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18013F830
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::AddOcclusionInformation(
        CNineGridBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  if ( !*((_BYTE *)this + 168) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CNineGridBrush *))(*(_QWORD *)this + 176LL))(this) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct COcclusionContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 16) + 112LL))(
             *((_QWORD *)this + 16),
             a2,
             a3);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x58u);
    }
  }
  return v3;
}
