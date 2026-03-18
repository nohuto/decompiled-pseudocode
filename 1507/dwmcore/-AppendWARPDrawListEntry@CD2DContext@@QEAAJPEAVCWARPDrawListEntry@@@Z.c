/*
 * XREFs of ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180134F78
 * Callers:
 *     ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVID2DContext@@UD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FEB1C (-AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVID2DContext@@UD2D_MATRIX_4X4_F@@W4D2D1_A.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x1800DEB0C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?AppendWARPDrawListEntry@CWARPCallbackRenderer@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801588AC (-AppendWARPDrawListEntry@CWARPCallbackRenderer@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18015895C (-Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::AppendWARPDrawListEntry(CD2DContext *this, struct CWARPDrawListEntry *a2)
{
  struct CD3DDeviceLevel1 *v4; // rax
  int appended; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // esi
  unsigned int v10; // edx
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CWARPCallbackRenderer *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( *((_QWORD *)this + 39) )
    CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  if ( *((_QWORD *)this + 44) )
    goto LABEL_13;
  if ( *((_DWORD *)this + 96) )
  {
LABEL_12:
    v10 = *((_DWORD *)this + 96) - 1;
    *((_QWORD *)this + 44) = *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * v10);
    DynArray<CWARPCallbackRenderer *,0>::RemoveAt((__int64 *)this + 45, v10);
LABEL_13:
    appended = CWARPCallbackRenderer::AppendWARPDrawListEntry(*((CWARPCallbackRenderer **)this + 44), a2);
    v6 = appended;
    if ( appended >= 0 )
      goto LABEL_16;
    v13 = 594;
    goto LABEL_15;
  }
  v4 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 184LL))(this);
  appended = CWARPCallbackRenderer::Create(v4, &v14);
  v6 = appended;
  if ( appended < 0 )
  {
    v13 = 584;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, v13);
    goto LABEL_16;
  }
  v7 = *((_DWORD *)this + 96);
  v8 = v7 + 1;
  if ( v7 + 1 >= v7 )
  {
    if ( v8 > *((_DWORD *)this + 95) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 360, 8u, 1, &v14);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      v6 = v9;
      if ( v9 < 0 )
        goto LABEL_22;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * *((unsigned int *)this + 96)) = v14;
      *((_DWORD *)this + 96) = v8;
    }
    v14 = 0LL;
    goto LABEL_12;
  }
  v9 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v6 = -2147024362;
LABEL_22:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x249u);
LABEL_16:
  if ( v14 )
    CMILRefCountBase::Release((struct CWARPCallbackRenderer *)((char *)v14 + 8));
  return v6;
}
