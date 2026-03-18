/*
 * XREFs of ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1C001A8C4
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C001B410 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C000450C (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CheckAndAddHandoff(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4,
        struct DirectComposition::CAnimationBinding *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _DWORD *v14; // rdi
  __int64 v15; // rax
  DirectComposition::CAnimationMarshaler *v16; // rdi
  _DWORD v17[10]; // [rsp+20h] [rbp-28h] BYREF
  bool v18; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v10 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 112LL))(v10, 83LL) )
  {
    v11 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
    v12 = v11 ? v11 - 16 : 0LL;
    if ( v12 && *(_DWORD *)(v12 + 156) )
    {
      DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
      v14 = 0LL;
      v17[0] = 0;
      if ( a5
        && (v15 = (***((__int64 (__fastcall ****)(_QWORD))a5 + 3))(*((_QWORD *)a5 + 3)), (v14 = (_DWORD *)v15) != 0LL)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 112LL))(v15, 84LL) )
      {
        v17[0] = v14[10];
      }
      else
      {
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _DWORD *))(*(_QWORD *)a2 + 192LL))(
          a2,
          a3,
          v17);
      }
      if ( v14 && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v14 + 112LL))(v14, 83LL) )
      {
        v16 = (DirectComposition::CAnimationMarshaler *)(v14 - 4);
        if ( *(_QWORD *)(v12 + 168)
          || (*(_DWORD *)(v12 + 32) & 0x2000) != 0
          || v16 == (DirectComposition::CAnimationMarshaler *)v12 )
        {
          return (unsigned int)-1073741811;
        }
        if ( v16 )
        {
          *(_QWORD *)(v12 + 168) = v16;
          ++*((_DWORD *)v16 + 9);
          DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
            v16,
            &v18,
            (__int64 *)(v12 + 184),
            (unsigned __int64 *)(v12 + 192));
          *(_BYTE *)(v12 + 200) ^= (v18 ^ *(_BYTE *)(v12 + 200)) & 1;
          *((_DWORD *)v16 + 8) |= 0x2000u;
        }
      }
      *(_DWORD *)(v12 + 176) = v17[0];
    }
  }
  return v9;
}
