/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18012E0F8
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x18001D788 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InvalidateCache@CLightStack@@AEAAXXZ @ 0x18009BC24 (-InvalidateCache@CLightStack@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x18012DE40 (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z @ 0x180177EE8 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  int v4; // ebx
  struct CHwLightCollectionBuffer **v5; // r13
  const struct LightInfo *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // r8
  char v13; // r9
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // r9
  int v18; // eax
  int v19; // eax
  _QWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+54h] [rbp-ACh]
  _BYTE v26[32]; // [rsp+60h] [rbp-A0h] BYREF
  struct LightInfo *v27[2]; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+94h] [rbp-6Ch]
  _BYTE v30[448]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[144]; // [rsp+260h] [rbp+160h] BYREF
  int v32; // [rsp+2F0h] [rbp+1F0h]

  v4 = 0;
  *a4 = 0LL;
  v5 = a4;
  if ( CLightStack::HasLighting(this) )
  {
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 20, (float *)a3) )
      CLightStack::InvalidateCache(this);
    if ( *((_QWORD *)this + 9) )
      goto LABEL_26;
    v23[0] = v26;
    v8 = (const struct LightInfo *)v30;
    v24 = 3;
    v23[1] = v26;
    v9 = 0;
    v25 = 3LL;
    v27[1] = (struct LightInfo *)v30;
    v10 = 0LL;
    v11 = 0;
    v27[0] = (struct LightInfo *)v30;
    v28 = 3;
    v29 = 3LL;
    if ( *((_DWORD *)this + 6) )
    {
      while ( 1 )
      {
        v12 = 0LL;
        v13 = 1;
        if ( v9 )
        {
          while ( *(_QWORD *)(v23[0] + 8 * v12) != *(_QWORD *)(*(_QWORD *)this + 8 * v10) )
          {
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= v9 )
              goto LABEL_11;
          }
          v13 = 0;
        }
LABEL_11:
        if ( !v13 )
          goto LABEL_22;
        v14 = *(_QWORD *)this;
        v32 = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _BYTE *))(**(_QWORD **)(v14 + 8 * v10) + 120LL))(
                *(_QWORD *)(v14 + 8 * v10),
                a2,
                a3,
                v31);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x74u);
          goto LABEL_31;
        }
        v16 = DynArray<LightInfo,0>::AddMultipleAndSet((__int64)v27, (__int64)v31);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x76u);
          goto LABEL_31;
        }
        v17 = (_QWORD *)(*(_QWORD *)this + 8 * v10);
        v9 = HIDWORD(v25) + 1;
        if ( (unsigned int)(HIDWORD(v25) + 1) >= HIDWORD(v25) )
        {
          if ( v9 <= (unsigned int)v25 )
          {
            *(_QWORD *)(v23[0] + 8LL * HIDWORD(v25)) = *v17;
            HIDWORD(v25) = v9;
            goto LABEL_22;
          }
          v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v23, 8u, 1, v17);
          v4 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
        }
        else
        {
          v4 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x77u);
          goto LABEL_31;
        }
        v9 = HIDWORD(v25);
LABEL_22:
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *((_DWORD *)this + 6) )
        {
          v11 = HIDWORD(v29);
          v8 = v27[0];
          v5 = a4;
          break;
        }
      }
    }
    v19 = CHwLightCollectionBuffer::Create(v8, v11, (struct CHwLightCollectionBuffer **)this + 9);
    v4 = v19;
    if ( v19 >= 0 )
    {
      *((_OWORD *)this + 5) = *(_OWORD *)a3;
      *((_OWORD *)this + 6) = *((_OWORD *)a3 + 1);
      *((_OWORD *)this + 7) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 8) = *((_OWORD *)a3 + 3);
      *((_DWORD *)this + 36) = *((_DWORD *)a3 + 16);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v27);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v23);
LABEL_26:
      *v5 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 9);
      return (unsigned int)v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x7Fu);
LABEL_31:
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v27);
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v23);
  }
  return (unsigned int)v4;
}
