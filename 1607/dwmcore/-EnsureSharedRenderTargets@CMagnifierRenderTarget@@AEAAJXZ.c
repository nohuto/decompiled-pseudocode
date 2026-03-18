/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18011E9A0
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011E6D0 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18011EE3C (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  int v2; // ebx
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  struct IRenderTargetBitmap *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 100);
  v2 = 0;
  v13 = 0LL;
  if ( !v1 )
    return (unsigned int)v2;
  v4 = 0;
  while ( 1 )
  {
    v5 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
           this,
           *((void **)this + 4 * v4 + 52),
           *(struct _LUID *)((char *)this + 32 * v4 + 424),
           *((HMONITOR *)this + 4 * v4 + 54),
           &v13);
    v12 = v5;
    v2 = v5;
    if ( v5 < 0 )
      break;
    v6 = *((_DWORD *)this + 68);
    v7 = v6 + 1;
    if ( v6 + 1 >= v6 )
    {
      v2 = 0;
      if ( v7 <= *((_DWORD *)this + 67) )
      {
        v8 = *((unsigned int *)this + 68);
        v9 = *((_QWORD *)this + 31);
        v12 = 0;
        *(_QWORD *)(v9 + 8 * v8) = v13;
        *((_DWORD *)this + 68) = v7;
        goto LABEL_11;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 8u, 1, &v13);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    v12 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v2, 0x33Eu);
      goto LABEL_15;
    }
LABEL_11:
    v13 = 0LL;
    if ( ++v4 >= *((_DWORD *)this + 100) )
      goto LABEL_17;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v5, 0x33Bu);
LABEL_15:
  if ( v13 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_17:
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 9, &v12);
    return (unsigned int)v12;
  }
  return (unsigned int)v2;
}
