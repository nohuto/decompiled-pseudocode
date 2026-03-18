/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18006CF24
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800680F0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x18006CBA0 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUMILCMD_CHAN.c)
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18006C934 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v5; // r10d
  struct CResourceTable::HANDLE_ENTRY *v6; // rdi
  CVisual *v7; // rbx
  __int64 (__fastcall *v8)(CVisual *); // rsi

  Entry = CResourceTable::GetEntry(this, a2);
  v6 = Entry;
  if ( Entry && *(_DWORD *)Entry )
  {
    v7 = (CVisual *)*((_QWORD *)Entry + 1);
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 16LL);
      if ( v8 == CVisual::Release )
        CVisual::Release(v7);
      else
        v8(v7);
      *((_QWORD *)v6 + 1) = 0LL;
    }
    memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
    return 0;
  }
  return v5;
}
