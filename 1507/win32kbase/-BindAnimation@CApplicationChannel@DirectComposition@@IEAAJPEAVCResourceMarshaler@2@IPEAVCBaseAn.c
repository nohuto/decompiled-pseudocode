/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C002E1C8
 * Callers:
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0030648 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 * Callees:
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C0028C44 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0028EE0 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C0028F2C (-RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C002B86C (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C002DF2C (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C002DF48 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C00A41A0 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00D509C (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C00D57E4 (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        union _SLIST_HEADER *this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r15d
  struct DirectComposition::CBaseAnimation **v9; // r14
  struct DirectComposition::CBaseAnimation **v10; // r12
  struct DirectComposition::CAnimationBinding *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx
  struct DirectComposition::CAnimationBinding **v15; // rdx
  struct DirectComposition::CAnimationBinding *Alignment; // rcx
  struct DirectComposition::CAnimationBinding *v17; // rdx
  DirectComposition::CAnimationBinding *v19; // rdx
  _DWORD *v20; // r15
  __int64 v21; // rax
  _DWORD *v22; // r15
  int v23; // [rsp+30h] [rbp-30h] BYREF
  struct DirectComposition::CAnimationBinding *v24; // [rsp+38h] [rbp-28h] BYREF
  struct DirectComposition::CAnimationBinding *v25; // [rsp+40h] [rbp-20h] BYREF
  struct DirectComposition::CAnimationBinding *v26; // [rsp+48h] [rbp-18h] BYREF
  struct DirectComposition::CAnimationBinding *v27; // [rsp+50h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v29; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0LL;
  v5 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v24, &v25, &v27);
  v9 = (struct DirectComposition::CBaseAnimation **)v24;
  v10 = (struct DirectComposition::CBaseAnimation **)v25;
  v11 = v25;
  if ( v24 )
    v11 = v24;
  v29 = v11;
  v12 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 112LL))(v12, 75LL) )
  {
    v13 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
    if ( v13 )
      v4 = v13 - 16;
    if ( v4 && *(_DWORD *)(v4 + 164) )
    {
      DirectComposition::CApplicationChannel::ProcessReturnedBatches(this, 0);
      v20 = 0LL;
      v23 = 0;
      if ( v29
        && (v21 = (***((__int64 (__fastcall ****)(_QWORD))v29 + 3))(*((_QWORD *)v29 + 3)), (v20 = (_DWORD *)v21) != 0LL)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 112LL))(v21, 76LL) )
      {
        v23 = v20[10];
      }
      else
      {
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, int *))(*(_QWORD *)a2 + 192LL))(
          a2,
          a3,
          &v23);
      }
      if ( v20 && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v20 + 112LL))(v20, 75LL) )
      {
        v22 = v20 - 4;
        if ( *(_QWORD *)(v4 + 176) || (*(_DWORD *)(v4 + 32) & 0x2000) != 0 || v22 == (_DWORD *)v4 )
          return (unsigned int)-1073741811;
        if ( v22 )
        {
          *(_QWORD *)(v4 + 176) = v22;
          DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(v22 + 4));
          DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
            (DirectComposition::CAnimationMarshaler *)v22,
            (bool *)&v29,
            (__int64 *)(v4 + 192),
            (unsigned __int64 *)(v4 + 200));
          *(_BYTE *)(v4 + 208) ^= (*(_BYTE *)(v4 + 208) ^ (unsigned __int8)v29) & 1;
          v22[8] |= 0x2000u;
        }
      }
      v5 = a3;
      *(_DWORD *)(v4 + 184) = v23;
    }
  }
  v14 = 0;
  if ( v10 )
    goto LABEL_17;
  if ( v9 && v9[3] != a4 )
    goto LABEL_13;
  v15 = (struct DirectComposition::CAnimationBinding **)v27;
  if ( v27 )
  {
    if ( *((struct DirectComposition::CBaseAnimation **)v27 + 3) != a4 )
      goto LABEL_13;
  }
  if ( v9 )
    goto LABEL_44;
  if ( !v27 )
  {
LABEL_13:
    Alignment = (struct DirectComposition::CAnimationBinding *)this[22].Alignment;
    if ( Alignment )
    {
      this[22].Alignment = 0LL;
      v26 = Alignment;
      DirectComposition::CAnimationBinding::Initialize(Alignment, a2, v5, a4);
    }
    else
    {
      v14 = DirectComposition::CAnimationBinding::Create(a2, v5, a4, &v26);
      if ( (v14 & 0x80000000) != 0 )
        return v14;
    }
    v9 = (struct DirectComposition::CBaseAnimation **)v24;
    v10 = (struct DirectComposition::CBaseAnimation **)v25;
    if ( *((int *)&this[1].HeaderX64 + 2) > 2 )
    {
      *(_QWORD *)v26 = 0LL;
    }
    else
    {
      v17 = v26;
      *(_QWORD *)v26 = this[27].Region;
      this[27].Region = (ULONGLONG)v17;
    }
LABEL_17:
    if ( !v9 )
    {
      v15 = (struct DirectComposition::CAnimationBinding **)v27;
      if ( !v27 )
      {
LABEL_19:
        if ( v10 && v10[3] != a4 )
          DirectComposition::CAnimationBinding::Reassign(
            (DirectComposition::CAnimationBinding *)v10,
            a4,
            (struct DirectComposition::CApplicationChannel *)this);
        return v14;
      }
      goto LABEL_23;
    }
LABEL_44:
    if ( v9[3] != a4 )
      DirectComposition::CApplicationChannel::NewRemovingBinding(
        (DirectComposition::CApplicationChannel *)this,
        (struct DirectComposition::CAnimationBinding *)v9);
    return v14;
  }
LABEL_23:
  if ( v15[3] != a4 )
    goto LABEL_19;
  DirectComposition::CApplicationChannel::DiscardRemovingBinding(
    (struct DirectComposition::CAnimationBinding ***)this,
    v15);
  DirectComposition::CAnimationBinding::RemovingToBound(v19);
  if ( v10 )
    DirectComposition::CApplicationChannel::DeleteAddingBinding(
      (DirectComposition::CApplicationChannel *)this,
      (struct DirectComposition::CAnimationBinding *)v10);
  return v14;
}
