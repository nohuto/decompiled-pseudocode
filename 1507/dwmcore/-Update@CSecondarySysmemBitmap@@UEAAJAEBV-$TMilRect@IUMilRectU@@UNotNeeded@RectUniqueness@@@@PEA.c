/*
 * XREFs of ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180153250
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180150320 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1801516DC (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Update(CSecondaryBitmap *this, struct tagRECT *a2, __int64 a3)
{
  int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  int valid; // eax
  int v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-38h]
  struct tagRECT v13; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF

  v13 = *a2;
  if ( !CSecondaryBitmap::RectInBounds(this, (unsigned int *)&v13)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v7 = -2147024809;
    v12 = 119;
    goto LABEL_14;
  }
  v6 = *((_DWORD *)this + 27);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) != v6 )
  {
    v7 = -2003292288;
    v12 = 124;
LABEL_14:
    v10 = v7;
    goto LABEL_15;
  }
  v8 = *((_DWORD *)this + 26) * a2->top + a2->left * (GetPixelFormatSize(v6) >> 3);
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v14) != DisplayId::None
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3) )
  {
    memset_0((void *)(v8 + *((_QWORD *)this + 15)), 0, *((unsigned int *)this + 32) - v8);
    *((_BYTE *)this + 132) = 1;
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD, __int64))(*(_QWORD *)a3 + 64LL))(
              a3,
              a2,
              *((unsigned int *)this + 26),
              (unsigned int)(*((_DWORD *)this + 32) - v8),
              v8 + *((_QWORD *)this + 15));
    v7 = valid;
    if ( valid < 0 )
    {
      v12 = 148;
LABEL_9:
      v10 = valid;
LABEL_15:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v12);
      return v7;
    }
  }
  valid = CSecondaryBitmap::AddValidRect((const struct FastRegion::Internal::CRgnData **)this, a2);
  v7 = valid;
  if ( valid < 0 )
  {
    v12 = 159;
    goto LABEL_9;
  }
  return v7;
}
