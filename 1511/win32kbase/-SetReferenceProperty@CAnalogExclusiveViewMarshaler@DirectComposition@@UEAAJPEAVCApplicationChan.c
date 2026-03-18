/*
 * XREFs of ?SetReferenceProperty@CAnalogExclusiveViewMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DA9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAnalogExclusiveViewMarshaler::SetReferenceProperty(
        DirectComposition::CAnalogExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  if ( a3 == 2
    && (!a4
     || (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 16LL))(a4) == 87) )
  {
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
    if ( v9 != a4 )
    {
      if ( v9 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 7) = a4;
      if ( a4 )
        ++*((_DWORD *)a4 + 5);
      *((_DWORD *)this + 4) |= 0x80u;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
