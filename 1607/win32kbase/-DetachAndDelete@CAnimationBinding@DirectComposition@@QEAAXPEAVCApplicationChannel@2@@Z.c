/*
 * XREFs of ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004C7F4
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C003F3D0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C003F820 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003F888 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F93C (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00416E8 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0042210 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00E46F4 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall DirectComposition::CAnimationBinding::DetachAndDelete(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rax

  if ( !*((_DWORD *)this + 2) )
    goto LABEL_9;
  for ( i = (_QWORD *)(*((_QWORD *)this + 2) + 32LL);
        (DirectComposition::CAnimationBinding *)*i != this;
        i = (_QWORD *)(*i + 32LL) )
  {
    ;
  }
  *i = *((_QWORD *)this + 4);
  for ( j = (_QWORD *)(*((_QWORD *)this + 3) + 8LL);
        (DirectComposition::CAnimationBinding *)*j != this;
        j = (_QWORD *)(*j + 40LL) )
  {
    ;
  }
  *j = *((_QWORD *)this + 5);
  if ( (*((_DWORD *)this + 2) & 3) != 0 )
  {
    v6 = (struct DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
  }
  if ( !*((_QWORD *)a2 + 45) )
  {
    *((_QWORD *)a2 + 45) = this;
    memset(this, 0, 0x30uLL);
  }
  else
  {
LABEL_9:
    Win32FreePool();
  }
}
