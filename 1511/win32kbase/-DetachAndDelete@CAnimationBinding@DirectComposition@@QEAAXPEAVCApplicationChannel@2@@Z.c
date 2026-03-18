/*
 * XREFs of ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0071DDC
 * Callers:
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0004668 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001AE40 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C001B1C0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001B228 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001B328 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C568 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001CFF0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall DirectComposition::CAnimationBinding::DetachAndDelete(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rax

  if ( !*((_DWORD *)this + 2) )
    goto LABEL_10;
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
  if ( !*((_QWORD *)a2 + 44) )
  {
    *((_QWORD *)a2 + 44) = this;
    memset(this, 0, 0x30uLL);
  }
  else
  {
LABEL_10:
    Win32FreePool();
  }
}
