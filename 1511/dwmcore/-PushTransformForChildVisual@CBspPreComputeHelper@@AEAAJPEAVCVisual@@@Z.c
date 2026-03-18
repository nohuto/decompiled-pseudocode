/*
 * XREFs of ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B6A4
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B2F0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushTransformForChildVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  __int64 *v2; // r9
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ecx
  _QWORD *v9; // rax
  int v10; // eax
  _OWORD *v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  _BYTE v16[16]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[64]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v18[64]; // [rsp+80h] [rbp-58h] BYREF

  v2 = (__int64 *)*((_QWORD *)a2 + 43);
  v5 = 0;
  if ( v2 )
    v6 = *v2;
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *((_QWORD *)a2 + 8);
    if ( v6 != v7 )
    {
      v8 = *((_DWORD *)this + 8);
      v9 = 0LL;
      if ( v8 )
        v9 = (_QWORD *)(*((_QWORD *)this + 6) + 8LL * (unsigned int)(v8 - 1));
      while ( v7 )
      {
        if ( v7 == v6 )
          goto LABEL_15;
        if ( v7 == *v9 )
          break;
        v7 = *(_QWORD *)(v7 + 64);
        ++v5;
      }
      if ( v7 != v6 )
        v5 = 0;
    }
  }
LABEL_15:
  v10 = *((_DWORD *)this + 24) - v5;
  v11 = 0LL;
  v12 = v10 - 1;
  if ( *((_DWORD *)this + 24) && v12 < *((_DWORD *)this + 24) )
    v11 = (_OWORD *)(*((_QWORD *)this + 14) + ((unsigned __int64)v12 << 6));
  CVisual::CalcEffectiveTransform((__int64)a2, 5, v11, v16, (struct D2DMatrix *)v18, (__int64)v17);
  v13 = CBaseMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 96), (const struct CMILMatrix *)v17, 0);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xE7u);
  return v14;
}
