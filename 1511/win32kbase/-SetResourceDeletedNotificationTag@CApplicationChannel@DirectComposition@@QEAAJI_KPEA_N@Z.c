/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_N@Z @ 0x1C001DCBC
 * Callers:
 *     NtDCompositionSetResourceDeletedNotificationTag @ 0x1C0071470 (NtDCompositionSetResourceDeletedNotificationTag.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rbx
  int v9; // esi

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 32LL))(
           v7,
           a3);
    if ( v9 >= 0 )
    {
      if ( *((_DWORD *)v8 + 5) == 1
        && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v8 + 48LL))(v8) )
      {
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)v8 + 40LL))(
          v8,
          (char *)this + 472);
      }
      *a4 = *((_DWORD *)this + 131) != 0;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v9;
}
