/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@AEBVCMILMatrix@@@Z @ 0x180103640
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180158E2C (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800F3BC0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2, const struct CMILMatrix *a3)
{
  unsigned int v3; // esi
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // r10
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  int v15; // eax
  struct CPolygon *v16; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v17[4]; // [rsp+40h] [rbp-19h] BYREF

  v3 = 0;
  v16 = a2;
  if ( !*((_QWORD *)this + 53) )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_DWORD *)(v6 + 16) = 0;
      *(_DWORD *)(v6 + 20) = 0;
      *(_DWORD *)(v6 + 24) = 0;
    }
    *((_QWORD *)this + 53) = v6;
    if ( !v6 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1215u);
      return v3;
    }
    a2 = v16;
  }
  if ( *((_DWORD *)a2 + 58) != 1 )
    goto LABEL_10;
  v7 = *((_OWORD *)a3 + 1);
  v17[0] = *(_OWORD *)a3;
  v8 = *((_OWORD *)a3 + 2);
  v17[1] = v7;
  v9 = *((_OWORD *)a3 + 3);
  v17[2] = v8;
  v17[3] = v9;
  D2DMatrixMultiply((struct D2DMatrix *)v17, (struct CPolygon *)((char *)a2 + 144), (const struct D2DMatrix *)v17);
  if ( CMILMatrix::IsFacingUser((CMILMatrix *)v17) )
  {
LABEL_10:
    v10 = *((_QWORD *)this + 53);
    v11 = *(_DWORD *)(v10 + 24);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_19:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1223u);
      return v3;
    }
    if ( v12 > *(_DWORD *)(v10 + 20) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(*((_QWORD *)this + 53), 8u, 1, &v16);
      v13 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      v3 = v13;
      if ( v13 < 0 )
        goto LABEL_19;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 24)) = v16;
      *(_DWORD *)(v10 + 24) = v12;
    }
    (**(void (__fastcall ***)(struct CPolygon *))v16)(v16);
  }
  return v3;
}
