/*
 * XREFs of ?SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180020528
 * Callers:
 *     ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x180020900 (-ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 *     ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014EB80 (-SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180023E90 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CComponentTransform2D::SetTransformMatrix(
        CComponentTransform2D *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  int v4; // edi
  __int64 v6; // xmm1_8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned int v10; // ecx
  _QWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  *(struct D2D_MATRIX_3X2_F *)((char *)this + 172) = *a2;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  v4 = 0;
  if ( !CPropertyChangeResource::ShouldNotify(this, 0x3EEu) )
    goto LABEL_2;
  v6 = *(_QWORD *)&a2->m[2][0];
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 1232LL);
  v8 = *((_QWORD *)this + 14);
  v12 = *(_OWORD *)&a2->m11;
  v13 = v6;
  v9 = *(_QWORD *)(v7 + 56);
  v10 = v8 ? *(_DWORD *)(v8 + 52) : 0;
  v11[0] = v10;
  v11[1] = *((unsigned int *)this + 30);
  v4 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int128 *))CoreUICallSend)(
         v9,
         v11,
         2LL,
         5LL,
         6,
         &unk_1801AD3EC,
         1006,
         &v12);
  if ( v4 == -2018375675 )
    v4 = 0;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x182u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x16Bu);
  }
  else
  {
LABEL_2:
    CResource::InvalidateAnimationSources(this, 0x3EEu);
  }
  return (unsigned int)v4;
}
