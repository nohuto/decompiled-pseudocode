/*
 * XREFs of ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x18006CBA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180015F10 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180050EB8 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18006CF24 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CResourceTable::CreateEmptyResource(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3,
        const struct MILCMD_CHANNEL_CREATERESOURCE *a4,
        struct CResource **a5)
{
  int v5; // edx
  CBoundsBitmap *v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // r13
  int v9; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edi
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(CBitmapOfDeviceBitmaps *); // rbx
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+70h] [rbp+8h]
  CBitmapOfDeviceBitmaps *v27; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((_DWORD *)a4 + 2);
  v6 = 0LL;
  v7 = *((_DWORD *)a4 + 1);
  v8 = 0LL;
  v9 = 0;
  v27 = 0LL;
  v24 = v5;
  if ( !v5 || !v7 )
  {
    v23 = 400;
    goto LABEL_38;
  }
  if ( v7 < *((_DWORD *)this + 7) )
  {
LABEL_4:
    v12 = *((_QWORD *)this + 5);
    v13 = v7 * *((_DWORD *)this + 6);
    if ( !*(_DWORD *)(v13 + v12) )
    {
      *(_DWORD *)(v13 + v12) = v5;
      goto LABEL_6;
    }
    v23 = 428;
LABEL_38:
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v23);
    v14 = -2147024809;
LABEL_39:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2Du);
    goto LABEL_21;
  }
  v22 = HANDLE_TABLE::ResizeToFit((CResourceTable *)((char *)this + 16), v7);
  v9 = v22;
  if ( v22 >= 0 )
  {
    v5 = v24;
    goto LABEL_4;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x19Du);
LABEL_6:
  if ( v9 >= 0 )
  {
    v8 = *((_QWORD *)this + 5) + v7 * *((_DWORD *)this + 6);
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  v14 = v9;
  if ( v9 < 0 )
    goto LABEL_39;
  v15 = CResourceFactory::Create(a2, this, *((unsigned int *)a4 + 2), &v27);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x32u);
    v6 = v27;
  }
  else
  {
    v6 = v27;
    if ( *((_DWORD *)a4 + 2) == 75 )
      *((_DWORD *)v27 + 21) = *((_DWORD *)a3 + 4);
    v16 = (*(__int64 (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v6 + 40LL))(v6);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x42u);
    }
    else
    {
      v17 = *((_DWORD *)a4 + 1);
      v14 = -2147024890;
      if ( v17
        && v17 < *((_DWORD *)this + 7)
        && (v18 = *((_QWORD *)this + 5), *(_DWORD *)(v17 * *((_DWORD *)this + 6) + v18)) )
      {
        v19 = v18 + v17 * *((_DWORD *)this + 6);
      }
      else
      {
        v19 = 0LL;
      }
      if ( v19 )
      {
        *(_QWORD *)(v19 + 8) = v6;
        v14 = 0;
        v20 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v6 + 8LL);
        if ( v20 == CBitmapOfDeviceBitmaps::AddRef )
          goto LABEL_19;
        if ( (char *)v20 == (char *)CBoundsBitmap::AddRef )
        {
          CBoundsBitmap::AddRef(v6);
          goto LABEL_20;
        }
        if ( v20 == CBitmapOfDeviceBitmaps::AddRef )
        {
LABEL_19:
          CBitmapOfDeviceBitmaps::AddRef(v6);
LABEL_20:
          *a5 = v6;
          v6 = 0LL;
          v8 = 0LL;
          goto LABEL_21;
        }
        v20(v6);
      }
      if ( v14 >= 0 )
        goto LABEL_20;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x43u);
    }
  }
LABEL_21:
  if ( v14 < 0 )
  {
    if ( v8 )
      CResourceTable::DeleteHandle(this, *((_DWORD *)a4 + 1));
    if ( v6 )
      (*(void (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v14;
}
