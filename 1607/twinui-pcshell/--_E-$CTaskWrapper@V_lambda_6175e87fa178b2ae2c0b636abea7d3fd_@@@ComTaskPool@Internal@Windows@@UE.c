/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180021100
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800262A8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>::`vector deleting destructor'(
        char *Block,
        char a2)
{
  char *v2; // rbx
  __int64 v5; // rcx

  v2 = Block + 48;
  *((_QWORD *)Block + 6) = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(Block + 48);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v2);
  WindowsDeleteString(*((HSTRING *)Block + 4));
  *((_QWORD *)Block + 4) = 0LL;
  v5 = *((_QWORD *)Block + 2);
  if ( v5 )
  {
    *((_QWORD *)Block + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
