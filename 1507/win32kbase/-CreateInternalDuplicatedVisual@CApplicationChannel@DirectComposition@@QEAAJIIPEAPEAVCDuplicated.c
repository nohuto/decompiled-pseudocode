/*
 * XREFs of ?CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicatedVisualMarshaler@2@@Z @ 0x1C002E4C8
 * Callers:
 *     ?CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z @ 0x1C002DA24 (-CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z.c)
 * Callees:
 *     ?Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z @ 0x1C00238C4 (-Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C002E3F8 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalDuplicatedVisual(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        int a3,
        struct DirectComposition::CDuplicatedVisualMarshaler **a4)
{
  __int64 v8; // rax
  DirectComposition::CDuplicatedVisualMarshaler *v9; // rbx
  int v10; // edi

  v8 = Win32AllocPoolWithQuotaZInit(0xF0uLL);
  v9 = (DirectComposition::CDuplicatedVisualMarshaler *)v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 20) = 1;
    *(_QWORD *)v8 = &DirectComposition::CDuplicatedVisualMarshaler::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = DirectComposition::CDuplicatedVisualMarshaler::Initialize(v9, this, a2, a3);
    if ( v10 < 0 || (v10 = DirectComposition::CApplicationChannel::RegisterResource(this, v9), v10 < 0) )
    {
      (*(void (__fastcall **)(DirectComposition::CDuplicatedVisualMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v9 + 104LL))(
        v9,
        this);
      (*(void (__fastcall **)(DirectComposition::CDuplicatedVisualMarshaler *, __int64))(*(_QWORD *)v9 + 96LL))(v9, 1LL);
    }
    else
    {
      *a4 = v9;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
