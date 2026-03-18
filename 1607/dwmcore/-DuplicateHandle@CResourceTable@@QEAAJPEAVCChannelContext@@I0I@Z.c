/*
 * XREFs of ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x18003AC78
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18003BB4C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18003BBD0 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18003AA44 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x18003AA78 (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x18008DE90 (-AddRef@CResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  struct CResourceTable::HANDLE_ENTRY *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  CResource *v11; // rcx
  void (*v12)(void); // rax
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
      v9 = CResourceTable::AllocateEntryAtHandle(*(_QWORD *)(v7 + 24), a5, *(_DWORD *)Entry, &v14);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x162u);
      }
      else
      {
        v11 = (CResource *)*((_QWORD *)v8 + 1);
        *((_QWORD *)v14 + 1) = v11;
        v12 = *(void (**)(void))(*(_QWORD *)v11 + 8LL);
        if ( (char *)v12 == (char *)CResource::AddRef )
        {
          CResource::AddRef(v11);
        }
        else if ( (char *)v12 == (char *)CBitmapOfDeviceBitmaps::AddRef )
        {
          CBitmapOfDeviceBitmaps::AddRef(v11);
        }
        else
        {
          v12();
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
