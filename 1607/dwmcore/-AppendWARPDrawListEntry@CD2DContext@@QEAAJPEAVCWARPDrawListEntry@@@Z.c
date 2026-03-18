/*
 * XREFs of ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180175B24
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801373F0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x18012994C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?AppendWARPDrawListEntry@CWARPCallbackRenderer@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180199178 (-AppendWARPDrawListEntry@CWARPCallbackRenderer@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180199250 (-Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::AppendWARPDrawListEntry(CD2DContext *this, struct CWARPDrawListEntry *a2)
{
  struct CD3DDeviceLevel1 *v4; // rax
  int appended; // eax
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CWARPCallbackRenderer *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( *((_QWORD *)this + 40) )
    CD2DContext::FlushDrawList((struct ID2D1PrivateCompositorRenderer **)this);
  CD2DContext::EnsureBeginDraw(this);
  if ( *((_QWORD *)this + 45) )
    goto LABEL_15;
  if ( *((_DWORD *)this + 98) )
  {
LABEL_14:
    v10 = *((_DWORD *)this + 98) - 1;
    *((_QWORD *)this + 45) = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * v10);
    DynArray<CWARPCallbackRenderer *,0>::RemoveAt((__int64 *)this + 46, v10);
LABEL_15:
    appended = CWARPCallbackRenderer::AppendWARPDrawListEntry(*((CWARPCallbackRenderer **)this + 45), a2);
    v6 = appended;
    if ( appended >= 0 )
      goto LABEL_18;
    v12 = 974;
    goto LABEL_17;
  }
  v4 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 176LL))(this);
  appended = CWARPCallbackRenderer::Create(v4, &v13);
  v6 = appended;
  if ( appended < 0 )
  {
    v12 = 964;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, v12);
    goto LABEL_18;
  }
  v7 = *((_DWORD *)this + 98);
  v8 = v7 + 1;
  if ( v7 + 1 >= v7 )
  {
    if ( v8 <= *((_DWORD *)this + 97) )
    {
      *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * *((unsigned int *)this + 98)) = v13;
      *((_DWORD *)this + 98) = v8;
LABEL_13:
      v13 = 0LL;
      goto LABEL_14;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 368, 8u, 1, &v13);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v6 >= 0 )
    goto LABEL_13;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3C5u);
LABEL_18:
  if ( v13 )
    CMILRefCountBase::Release((struct CWARPCallbackRenderer *)((char *)v13 + 8));
  return (unsigned int)v6;
}
