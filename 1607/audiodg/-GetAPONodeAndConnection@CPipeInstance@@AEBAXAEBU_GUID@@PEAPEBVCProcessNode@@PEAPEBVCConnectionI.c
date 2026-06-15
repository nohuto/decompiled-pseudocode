/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@@Z @ 0x14002E468
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140009AB0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002E5BC (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140025018 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbp
  const struct CConnectionInstance *v10; // r12
  int v11; // eax
  int (__fastcall ***v12)(_QWORD, const struct _GUID *, _QWORD *); // rbx
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  int (__fastcall ***v14)(_QWORD, const struct _GUID *, __int64 *); // [rsp+80h] [rbp+18h] BYREF

  v7 = *((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v10 = *(const struct CConnectionInstance **)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    if ( *(_DWORD *)(v9 + 40) == 2 )
    {
      v14 = 0LL;
      v11 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL), &v14);
      v12 = v14;
      if ( v11 >= 0 )
      {
        v13 = 0LL;
        if ( (**v14)(v14, a2, &v13) >= 0 )
        {
          if ( a3 )
            *a3 = (const struct CProcessNode *)v9;
          if ( a4 )
            *a4 = v10;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          if ( v12 )
            ((void (__fastcall *)(int (__fastcall ***)(_QWORD, const struct _GUID *, _QWORD *)))(*v12)[2])(v12);
          return;
        }
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v12 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, const struct _GUID *, _QWORD *)))(*v12)[2])(v12);
    }
  }
}
