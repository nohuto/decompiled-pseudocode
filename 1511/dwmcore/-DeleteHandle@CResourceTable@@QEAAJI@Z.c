/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800944E8
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800949E0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800856B0 (-Release@CResource@@UEAAKXZ.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800945AC (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v5; // r10d
  struct CResourceTable::HANDLE_ENTRY *v6; // rdi
  CVisual *v7; // rbx
  __int64 (__fastcall *v8)(CResource *); // rsi

  Entry = CResourceTable::GetEntry(this, a2);
  v6 = Entry;
  if ( Entry && *(_DWORD *)Entry )
  {
    v7 = (CVisual *)*((_QWORD *)Entry + 1);
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v7 + 16LL);
      if ( v8 == CVisual::Release )
      {
        CVisual::Release(v7);
      }
      else if ( v8 == CResource::Release )
      {
        CResource::Release(v7);
      }
      else
      {
        v8(v7);
      }
      *((_QWORD *)v6 + 1) = 0LL;
    }
    memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
    return 0;
  }
  return v5;
}
