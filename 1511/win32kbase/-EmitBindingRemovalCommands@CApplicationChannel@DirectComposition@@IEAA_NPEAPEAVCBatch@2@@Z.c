/*
 * XREFs of ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C568
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0071DDC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  char *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 56) )
  {
    do
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
        break;
      v5 = (char *)v8;
      *(_DWORD *)v8 = 20;
      *(_QWORD *)(v5 + 4) = 0LL;
      *(_QWORD *)(v5 + 12) = 0LL;
      *((_DWORD *)v5 + 1) = 129;
      *((_DWORD *)v5 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 56) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 56) + 24LL))
                                      + 24);
      *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 56) + 16LL) + 24LL);
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*((_QWORD *)this + 56) + 12LL);
      v6 = (__int64 *)*((_QWORD *)this + 56);
      v7 = *v6;
      *v6 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(*((DirectComposition::CAnimationBinding **)this + 56), this);
      *((_QWORD *)this + 56) = v7;
    }
    while ( v7 );
  }
  return *((_QWORD *)this + 56) == 0LL;
}
