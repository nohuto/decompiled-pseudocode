/*
 * XREFs of ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C01843E8
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00CF23C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C01835A4 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0183B4C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTENTRY::ReleasePresentDoneEvent(BLTENTRY *this, char a2)
{
  struct _KEVENT *v3; // rcx

  v3 = (struct _KEVENT *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    if ( a2 )
      KeSetEvent(v3, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
}
