/*
 * XREFs of ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x180094360
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x1800953E8 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18009546C (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddRef@CVisual@@UEAAKXZ @ 0x18004DA20 (-AddRef@CVisual@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800945AC (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x1800945E0 (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 */

__int64 __fastcall CResourceTable::DuplicateHandle(
        CResourceTable *this,
        struct CChannelContext *a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int a5)
{
  CResourceTable *v5; // rcx
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  __int64 v7; // r10
  struct CResourceTable::HANDLE_ENTRY *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  CBitmapOfDeviceBitmaps *v11; // rbx
  __int64 (__fastcall *v12)(CVisual *); // rsi
  CResourceTable *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = this;
  v5 = (CResourceTable *)*((_QWORD *)a2 + 3);
  v14 = 0LL;
  Entry = CResourceTable::GetEntry(v5, a3);
  v8 = Entry;
  if ( Entry )
  {
    if ( *((_QWORD *)Entry + 1) )
    {
      v9 = CResourceTable::AllocateEntryAtHandle(*(_QWORD *)(v7 + 24), a5, *(unsigned int *)Entry, &v14);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x162u);
      }
      else
      {
        v11 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)v8 + 1);
        *((_QWORD *)v14 + 1) = v11;
        v12 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v11 + 8LL);
        if ( v12 == CBitmapOfDeviceBitmaps::AddRef )
        {
          CBitmapOfDeviceBitmaps::AddRef(v11);
        }
        else if ( v12 == CVisual::AddRef )
        {
          CVisual::AddRef(v11);
        }
        else
        {
          v12(v11);
        }
      }
    }
    else
    {
      v10 = -2147467261;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467261, 0x157u);
    }
  }
  else
  {
    v10 = -2147467261;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467261, 0x156u);
  }
  return v10;
}
