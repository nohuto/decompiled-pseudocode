/*
 * XREFs of ?EnsureDXGISurface@CD3DTexture@@AEAAJXZ @ 0x180084784
 * Callers:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084824 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::EnsureDXGISurface(CD3DTexture *this)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  __int64 (__fastcall *v4)(_QWORD, GUID *, char *); // rbx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v3 = 0;
  v8 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DTexture *))(v1 + 24))(this) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x285u);
    goto LABEL_5;
  }
  if ( *((_QWORD *)this + 27) )
    goto LABEL_5;
  v4 = (__int64 (__fastcall *)(_QWORD, GUID *, char *))***((_QWORD ***)this + 16);
  if ( *((_DWORD *)this + 37) == 1 )
  {
    v5 = v4(*((_QWORD *)this + 16), &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, (char *)this + 216);
    v3 = v5;
    if ( v5 >= 0 )
      goto LABEL_5;
    v7 = 653;
    goto LABEL_14;
  }
  v5 = v4(*((_QWORD *)this + 16), &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (char *)&v8);
  v3 = v5;
  if ( v5 < 0 )
  {
    v7 = 664;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v7);
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 96LL))(
         v8,
         *((unsigned int *)this + 45),
         &v9);
  v3 = v5;
  if ( v5 < 0 )
  {
    v7 = 667;
    goto LABEL_14;
  }
  *((_QWORD *)this + 27) = v9;
LABEL_5:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v3;
}
