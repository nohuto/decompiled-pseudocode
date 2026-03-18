/*
 * XREFs of ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x180178B54
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801901E0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800A19C0 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD2DBitmap::CreateSubResourceD2DBitmap(CD2DBitmap *this, int a2, struct CD2DBitmap **a3)
{
  int Internal; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+88h] [rbp+28h] BYREF
  __int64 v13; // [rsp+90h] [rbp+30h] BYREF
  __int64 v14; // [rsp+98h] [rbp+38h] BYREF

  v12 = a2;
  v11 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 63) || *((_DWORD *)this + 45) <= 1u )
  {
    v6 = -2147467259;
    v10 = 508;
    goto LABEL_16;
  }
  Internal = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 17))(
               *((_QWORD *)this + 17),
               &GUID_aba496dd_b617_4cb8_a866_bc44d7eb1fa2,
               &v11);
  v6 = Internal;
  if ( Internal < 0 )
  {
    v10 = 520;
  }
  else
  {
    Internal = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *, int *))(*(_QWORD *)v11 + 104LL))(
                 v11,
                 &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
                 &v14,
                 &v12);
    v6 = Internal;
    if ( Internal >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 96LL))(v14, 1LL, &v13);
      v6 = v7;
      if ( v7 >= 0 )
      {
        Internal = CD2DBitmap::CreateInternal(
                     *((struct CD2DResourceManager **)this + 3),
                     *((_QWORD *)this + 16),
                     v13,
                     (__int64)this + 168,
                     (CD2DBitmap *)((char *)this + 216),
                     *((_DWORD *)this + 62),
                     1,
                     *((_BYTE *)this + 33),
                     a3);
        v6 = Internal;
        if ( Internal >= 0 )
          goto LABEL_18;
        v10 = 542;
        goto LABEL_8;
      }
      if ( IsOOM(v7) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      v10 = 529;
LABEL_16:
      v8 = v6;
      goto LABEL_17;
    }
    v10 = 524;
  }
LABEL_8:
  v8 = Internal;
LABEL_17:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v10);
LABEL_18:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
