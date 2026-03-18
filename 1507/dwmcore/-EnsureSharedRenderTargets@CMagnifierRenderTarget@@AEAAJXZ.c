/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1800EC408
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1800EC130 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800EC9BC (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  int v2; // edi
  unsigned int v4; // r14d
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  unsigned int v13; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v14; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 88);
  v2 = 0;
  v14 = 0LL;
  if ( v1 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * v4 + 46),
             *(struct _LUID *)((char *)this + 32 * v4 + 376),
             *((HMONITOR *)this + 4 * v4 + 48),
             &v14);
      v13 = v5;
      v2 = v5;
      if ( v5 < 0 )
        break;
      v6 = *((_DWORD *)this + 56);
      v7 = v6 + 1;
      if ( v6 + 1 < v6 )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v2 = -2147024362;
        v13 = -2147024362;
LABEL_13:
        MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v11, 0x3CBu);
        goto LABEL_15;
      }
      v2 = 0;
      if ( v7 > *((_DWORD *)this + 55) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 200, 8u, 1, &v14);
        v11 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
        v13 = v11;
        v2 = v11;
        if ( v11 < 0 )
          goto LABEL_13;
      }
      else
      {
        v8 = v6;
        v9 = *((_QWORD *)this + 25);
        v13 = 0;
        *(_QWORD *)(v9 + 8 * v8) = v14;
        *((_DWORD *)this + 56) = v7;
      }
      v14 = 0LL;
      if ( ++v4 >= *((_DWORD *)this + 88) )
        goto LABEL_17;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v5, 0x3C8u);
LABEL_15:
    if ( v14 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_17:
    if ( v2 < 0 )
    {
      TranslateDXGIorD3DErrorInContext(v2, 10, &v13);
      return v13;
    }
  }
  return (unsigned int)v2;
}
