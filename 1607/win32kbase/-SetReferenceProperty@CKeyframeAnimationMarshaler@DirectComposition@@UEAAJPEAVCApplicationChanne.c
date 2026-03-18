/*
 * XREFs of ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C003B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C003CAB0 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  DirectComposition::CResourceMarshaler *v10; // rcx
  __int64 v12; // rax
  struct DirectComposition::CResourceMarshaler *v13; // rcx
  struct DirectComposition::CResourceMarshaler *v14; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 10 )
  {
    if ( !a4
      || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
            a4,
            95LL) )
    {
      return (unsigned int)-1073741811;
    }
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
    if ( v9 == a4 )
      return v5;
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    v10 = a4;
    *((_QWORD *)this + 13) = a4;
    goto LABEL_9;
  }
  if ( a3 != 23 )
  {
    if ( a3 != 24 )
      return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
    if ( a4
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
           a4,
           95LL) )
    {
      if ( *((_QWORD *)this + 17) )
        return (unsigned int)-1073741790;
      *((_QWORD *)this + 17) = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
      *a5 = 1;
      *((_DWORD *)this + 40) = 1;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          88LL) )
  {
    return (unsigned int)-1073741811;
  }
  v12 = *((_QWORD *)this + 32);
  v13 = (struct DirectComposition::CResourceMarshaler *)(v12 + 16);
  if ( !v12 )
    v13 = 0LL;
  if ( a4 != v13 )
  {
    v14 = (struct DirectComposition::CResourceMarshaler *)(v12 + 16);
    if ( !v12 )
      v14 = 0LL;
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
    *((_QWORD *)this + 32) = 0LL;
    if ( !a4 )
      goto LABEL_10;
    *((_QWORD *)this + 32) = (char *)a4 - 16;
    v10 = a4;
LABEL_9:
    DirectComposition::CResourceMarshaler::AddRef(v10);
LABEL_10:
    *a5 = 1;
LABEL_11:
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  return v5;
}
