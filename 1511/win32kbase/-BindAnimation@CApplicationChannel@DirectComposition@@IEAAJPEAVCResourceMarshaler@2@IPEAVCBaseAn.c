/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C001B410
 * Callers:
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C001D810 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 * Callees:
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C0004458 (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0004630 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0004668 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C001928C (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1C001A8C4 (-CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCB.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C001B1C0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C0071D68 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0071E84 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        struct DirectComposition::CAnimationBinding **this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  struct DirectComposition::CBaseAnimation **v8; // rbx
  struct DirectComposition::CBaseAnimation **v9; // r14
  struct DirectComposition::CAnimationBinding *v10; // rax
  unsigned int v11; // r15d
  struct DirectComposition::CBaseAnimation **v12; // rdx
  struct DirectComposition::CAnimationBinding *v13; // rcx
  struct DirectComposition::CAnimationBinding *v14; // rcx
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD); // rcx
  __int64 v18; // rax
  struct DirectComposition::CAnimationBinding *v19; // [rsp+30h] [rbp-20h] BYREF
  struct DirectComposition::CAnimationBinding *v20; // [rsp+38h] [rbp-18h] BYREF
  struct DirectComposition::CAnimationBinding *v21; // [rsp+40h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v22; // [rsp+48h] [rbp-8h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v19, &v20, &v22);
  v8 = (struct DirectComposition::CBaseAnimation **)v19;
  v9 = (struct DirectComposition::CBaseAnimation **)v20;
  v10 = v20;
  if ( v19 )
    v10 = v19;
  v11 = DirectComposition::CApplicationChannel::CheckAndAddHandoff(
          (DirectComposition::CApplicationChannel *)this,
          a2,
          a3,
          a4,
          v10);
  if ( (v11 & 0x80000000) != 0 )
    return v11;
  if ( v9 )
  {
LABEL_14:
    if ( !v8 )
    {
      v12 = (struct DirectComposition::CBaseAnimation **)v22;
      if ( !v22 )
      {
LABEL_16:
        if ( v9 && v9[3] != a4 )
          DirectComposition::CAnimationBinding::Reassign(
            (DirectComposition::CAnimationBinding *)v9,
            a4,
            (struct DirectComposition::CApplicationChannel *)this);
        return v11;
      }
      goto LABEL_28;
    }
LABEL_21:
    if ( v8[3] != a4 )
      DirectComposition::CApplicationChannel::NewRemovingBinding(
        (DirectComposition::CApplicationChannel *)this,
        (struct DirectComposition::CAnimationBinding *)v8);
    return v11;
  }
  if ( v8 && v8[3] != a4 )
    goto LABEL_9;
  v12 = (struct DirectComposition::CBaseAnimation **)v22;
  if ( v22 )
  {
    if ( *((struct DirectComposition::CBaseAnimation **)v22 + 3) != a4 )
      goto LABEL_9;
  }
  if ( v8 )
    goto LABEL_21;
  if ( !v22 )
  {
LABEL_9:
    v13 = this[44];
    if ( v13 )
    {
      this[44] = 0LL;
      v21 = v13;
      DirectComposition::CAnimationBinding::Initialize(v13, a2, a3, a4);
    }
    else
    {
      v11 = DirectComposition::CAnimationBinding::Create(a2, a3, a4, &v21);
    }
    if ( (v11 & 0x80000000) != 0 )
      return v11;
    v8 = (struct DirectComposition::CBaseAnimation **)v19;
    v9 = (struct DirectComposition::CBaseAnimation **)v20;
    if ( *((int *)this + 6) > 2 )
    {
      *(_QWORD *)v21 = 0LL;
    }
    else
    {
      v14 = v21;
      *(_QWORD *)v21 = this[55];
      this[55] = v14;
    }
    goto LABEL_14;
  }
LABEL_28:
  if ( v12[3] != a4 )
    goto LABEL_16;
  DirectComposition::CApplicationChannel::DiscardRemovingBinding(
    this,
    (struct DirectComposition::CAnimationBinding *)v12);
  v17 = *(__int64 (__fastcall ****)(_QWORD))(v16 + 24);
  *(_DWORD *)(v16 + 8) = *(_DWORD *)(v16 + 8) & 0xFFFFFFFA | 1;
  v18 = (**v17)(v17);
  ++*(_DWORD *)(v18 + 20);
  if ( v9 )
    DirectComposition::CApplicationChannel::DeleteAddingBinding(
      (struct DirectComposition::CAnimationBinding ***)this,
      v9);
  return v11;
}
