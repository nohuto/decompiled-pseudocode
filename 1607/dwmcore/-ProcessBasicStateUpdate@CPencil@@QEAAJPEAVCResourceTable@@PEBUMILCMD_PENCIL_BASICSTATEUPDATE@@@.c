/*
 * XREFs of ?ProcessBasicStateUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_BASICSTATEUPDATE@@@Z @ 0x18010CAA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetPaperTextureBitmap@CPencil@@AEAAJPEAVCResource@@PEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18014DE78 (-SetPaperTextureBitmap@CPencil@@AEAAJPEAVCResource@@PEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CPencil::ProcessBasicStateUpdate(
        CPencil *this,
        struct CResourceTable *a2,
        const struct MILCMD_PENCIL_BASICSTATEUPDATE *a3)
{
  __int64 v3; // r14
  unsigned int v7; // esi
  unsigned int v8; // edx
  struct CResource *v9; // rax
  int v10; // eax
  unsigned int v11; // edx
  struct CResource *ResourceWithoutType; // rax
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rbx

  v3 = 0LL;
  *(_OWORD *)((char *)this + 284) = *(_OWORD *)((char *)a3 + 8);
  v7 = 0;
  *(_OWORD *)((char *)this + 300) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)this + 79) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 80) = *((_DWORD *)a3 + 11);
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)((char *)a3 + 52);
  *((_OWORD *)this + 14) = *(_OWORD *)((char *)a3 + 72);
  v8 = *((_DWORD *)a3 + 12);
  if ( v8
    && (v9 = CResourceTable::GetResourceWithoutType(a2, v8),
        v10 = CPencil::SetPaperTextureBitmap(this, v9, (struct CCompositionSurfaceBitmap **)this + 24),
        v7 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x38u);
  }
  else
  {
    v11 = *((_DWORD *)a3 + 17);
    if ( v11
      && (ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v11),
          v13 = CPencil::SetPaperTextureBitmap(
                  this,
                  ResourceWithoutType,
                  (struct CCompositionSurfaceBitmap **)this + 27),
          v7 = v13,
          v13 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3Du);
    }
    else
    {
      v14 = *((_DWORD *)this + 38);
      if ( v14 )
      {
        v7 = 0;
        v15 = v14;
        do
        {
          v16 = *(_QWORD *)(v3 + *((_QWORD *)this + 16));
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 104) + 8LL))(*(_QWORD *)(v16 + 104));
          v17 = *(_QWORD *)(v16 + 104);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          v3 += 8LL;
          --v15;
        }
        while ( v15 );
      }
      CResource::NotifyOnChanged(this, 0, 0LL);
    }
  }
  return v7;
}
