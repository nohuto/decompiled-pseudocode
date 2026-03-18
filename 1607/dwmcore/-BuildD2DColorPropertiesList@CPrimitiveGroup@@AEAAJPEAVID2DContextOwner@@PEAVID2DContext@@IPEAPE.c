/*
 * XREFs of ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000EAC0
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000EC3C (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18001BCB4 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DColorPropertiesList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        unsigned int a4,
        struct ID2D1PrivateCompositorPrimitiveProperties **a5)
{
  int v6; // edi
  unsigned int v7; // ebp
  struct ID2DContext *v8; // r9
  struct ID2D1PrivateCompositorPrimitiveProperties **v10; // r12
  __int64 i; // rsi
  CPrimitiveColor *v12; // rcx
  struct ID2D1PrivateCompositorPrimitiveProperties *v13; // rbx
  int v14; // eax
  struct CD2DPrimitiveProperties *v15; // r14
  struct CD2DPrimitiveProperties *v17; // [rsp+78h] [rbp+10h] BYREF
  struct ID2DContext *v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v17 = a2;
  v6 = 0;
  v7 = 0;
  v8 = a3;
  if ( a4 )
  {
    v10 = a5;
    for ( i = 0LL; ; ++i )
    {
      v12 = *(CPrimitiveColor **)(i * 8 + *((_QWORD *)this + 36));
      if ( v12 )
        v12 = (CPrimitiveColor *)((char *)v12 - 8);
      v17 = 0LL;
      v13 = 0LL;
      v14 = CPrimitiveColor::FindOrCreatePrimitiveProperties(v12, v8, &v17);
      v15 = v17;
      v6 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB7u);
      }
      else
      {
        v13 = (struct ID2D1PrivateCompositorPrimitiveProperties *)*((_QWORD *)v17 + 13);
        (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v13 + 8LL))(v13);
      }
      if ( v15 )
        (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v6 < 0 )
        break;
      v8 = v18;
      ++v7;
      v10[i] = v13;
      if ( v7 >= a4 )
        return (unsigned int)v6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x402u);
    if ( v13 )
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v6;
}
