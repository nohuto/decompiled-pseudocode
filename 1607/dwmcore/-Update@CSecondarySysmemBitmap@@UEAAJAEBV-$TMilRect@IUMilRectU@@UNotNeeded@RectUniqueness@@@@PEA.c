/*
 * XREFs of ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18001F630
 * Callers:
 *     <none>
 * Callees:
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180011F60 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180011FAC (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Update(enum DXGI_FORMAT *this, struct MilRectU *a2, __int64 a3)
{
  enum DXGI_FORMAT v6; // ebp
  __int64 v7; // r14
  int valid; // eax
  unsigned int v9; // ebx
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-38h]
  char v13; // [rsp+60h] [rbp+8h] BYREF

  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds((CSecondaryBitmap *)this)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v9 = -2147024809;
    v12 = 119;
    goto LABEL_15;
  }
  v6 = *((_DWORD *)this + 27);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) != v6 )
  {
    v9 = -2003292288;
    v12 = 124;
LABEL_15:
    v11 = v9;
    goto LABEL_16;
  }
  v7 = *((_DWORD *)this + 26) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * (GetPixelFormatSize(v6) >> 3);
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v13) != DisplayId::None
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3) )
  {
    memset_0((void *)(v7 + *((_QWORD *)this + 15)), 0, *((unsigned int *)this + 32) - v7);
    *((_BYTE *)this + 132) = 1;
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct MilRectU *, _QWORD, _QWORD, __int64))(*(_QWORD *)a3 + 64LL))(
              a3,
              a2,
              *((unsigned int *)this + 26),
              (unsigned int)(*((_DWORD *)this + 32) - v7),
              v7 + *((_QWORD *)this + 15));
    v9 = valid;
    if ( valid < 0 )
    {
      v12 = 148;
LABEL_13:
      v11 = valid;
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
      return v9;
    }
  }
  valid = CSecondaryBitmap::AddValidRect((CSecondaryBitmap *)this, a2);
  v9 = valid;
  if ( valid < 0 )
  {
    v12 = 159;
    goto LABEL_13;
  }
  return v9;
}
