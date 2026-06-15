/*
 * XREFs of ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000BBB0
 * Callers:
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140008B90 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009600 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000C4E0 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessNode::GetRightFormat(CProcessNode *this, struct IAudioMediaType **a2)
{
  volatile signed __int32 *v2; // rcx
  void (*v3)(void); // rax

  if ( !a2 )
    return 2147500035LL;
  *a2 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)CAudioMediaType::AddRef )
      _InterlockedIncrement(v2 + 2);
    else
      v3();
  }
  return 0LL;
}
