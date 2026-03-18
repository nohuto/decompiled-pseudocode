/*
 * XREFs of ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAUPrimitivePropertiesElement@1@@Z @ 0x180107D3C
 * Callers:
 *     ?UpdateD2D1PrimitiveProperty@CPrimitiveColor@@QEAAJPEAVID2DContext@@@Z @ 0x180107FDC (-UpdateD2D1PrimitiveProperty@CPrimitiveColor@@QEAAJPEAVID2DContext@@@Z.c)
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18010BD34 (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::FindOrCreatePrimitiveProperties(
        CPrimitiveColor *this,
        struct ID2DContext *a2,
        struct CPrimitiveColor::PrimitivePropertiesElement **a3)
{
  struct CPrimitiveColor::PrimitivePropertiesElement *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // r9
  struct CPrimitiveColor::PrimitivePropertiesElement **v6; // r15
  struct CPrimitiveColor::PrimitivePropertiesElement **v9; // rdx
  int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // eax
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]
  struct CPrimitiveColor::PrimitivePropertiesElement *v22; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v22 = 0LL;
  v6 = a3;
  if ( *((_DWORD *)this + 16) )
  {
    a3 = (struct CPrimitiveColor::PrimitivePropertiesElement **)*((_QWORD *)this + 5);
    while ( a3[3 * v5] != a2 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)this + 16) )
        goto LABEL_7;
    }
    v9 = &a3[3 * v5];
    if ( v9 )
      goto LABEL_14;
  }
LABEL_7:
  v10 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct CPrimitiveColor::PrimitivePropertiesElement **, struct CPrimitiveColor::PrimitivePropertiesElement **, __int64))(*(_QWORD *)a2 + 248LL))(
          a2,
          &v22,
          a3,
          v5);
  v4 = v10;
  if ( v10 >= 0 )
  {
    v11 = (__int64 *)((char *)this + 40);
    v12 = *((unsigned int *)this + 16);
    v13 = v12 + 1;
    if ( (int)v12 + 1 < (unsigned int)v12 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v4 = -2147024362;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x7Bu);
      goto LABEL_22;
    }
    v4 = 0;
    if ( v13 > *((_DWORD *)this + 15) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 0x18u, 1, &v20);
      v14 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
      v4 = v14;
      if ( v14 < 0 )
        goto LABEL_21;
    }
    else
    {
      v15 = 3 * v12;
      v16 = *v11;
      *(_OWORD *)(v16 + 8 * v15) = v20;
      *(_QWORD *)(v16 + 8 * v15 + 16) = v21;
      *((_DWORD *)this + 16) = v13;
    }
    v17 = *v11;
    v3 = 0LL;
    v9 = (struct CPrimitiveColor::PrimitivePropertiesElement **)(v17 + 24LL * (unsigned int)(*((_DWORD *)this + 16) - 1));
    *v9 = a2;
    *((_BYTE *)v9 + 16) = 1;
    v9[1] = v22;
    v22 = 0LL;
LABEL_14:
    *v6 = (struct CPrimitiveColor::PrimitivePropertiesElement *)v9;
    goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x77u);
LABEL_22:
  v3 = v22;
LABEL_15:
  if ( v3 )
    (*(void (__fastcall **)(struct CPrimitiveColor::PrimitivePropertiesElement *))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
