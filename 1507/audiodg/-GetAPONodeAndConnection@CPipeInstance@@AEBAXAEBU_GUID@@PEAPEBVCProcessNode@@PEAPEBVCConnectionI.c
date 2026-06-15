/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@@Z @ 0x1400306E0
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140006800 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003085C (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140026088 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4)
{
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rsi
  const struct CConnectionInstance *v9; // r12
  int v10; // eax
  int (__fastcall ***v11)(_QWORD, const struct _GUID *, _QWORD *); // rbx
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  const struct _GUID *v13; // [rsp+78h] [rbp+10h]
  int (__fastcall ***v14)(_QWORD, const struct _GUID *, __int64 *); // [rsp+80h] [rbp+18h] BYREF

  v13 = a2;
  v6 = *((_QWORD *)this + 3);
  v7 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    v9 = *(const struct CConnectionInstance **)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    if ( *(_DWORD *)(v8 + 40) == 2 )
    {
      v14 = 0LL;
      v10 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL), &v14);
      v11 = v14;
      if ( v10 >= 0 )
      {
        v12 = 0LL;
        if ( (**v14)(v14, v13, &v12) >= 0 )
        {
          if ( a3 )
            *a3 = (const struct CProcessNode *)v8;
          if ( a4 )
            *a4 = v9;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          if ( v11 )
            ((void (__fastcall *)(int (__fastcall ***)(_QWORD, const struct _GUID *, _QWORD *)))(*v11)[2])(v11);
          return;
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v11 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, const struct _GUID *, _QWORD *)))(*v11)[2])(v11);
    }
  }
}
