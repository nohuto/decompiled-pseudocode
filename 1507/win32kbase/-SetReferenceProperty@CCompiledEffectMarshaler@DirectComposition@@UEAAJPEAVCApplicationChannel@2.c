/*
 * XREFs of ?SetReferenceProperty@CCompiledEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D89E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@@Z @ 0x1C00D94F0 (-SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarsha.c)
 */

__int64 __fastcall DirectComposition::CCompiledEffectMarshaler::SetReferenceProperty(
        DirectComposition::CCompiledEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // ebx
  struct DirectComposition::CResourceMarshaler **v10; // rsi
  __int64 v11; // rdx
  int v12; // r14d

  v5 = 0;
  *a5 = 0;
  if ( (a3 & 0xC0000000) == 0x40000000 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
           a4,
           79LL) )
    {
      v5 = DirectComposition::CEffectInputSet::SetInput(
             (DirectComposition::CCompiledEffectMarshaler *)((char *)this + 56),
             a2,
             a3 & 0x3FFFFFFF,
             a4);
      if ( v5 >= 0 )
        goto LABEL_15;
      return (unsigned int)v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741811;
    v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 48);
    v11 = 95LL;
    v12 = 128;
  }
  else
  {
    v11 = 98LL;
    v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 40);
    v12 = 64;
  }
  if ( !v10
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          v11) )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v10 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v10);
    *v10 = a4;
    DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) &= ~v12;
LABEL_15:
    *a5 = 1;
  }
  return (unsigned int)v5;
}
