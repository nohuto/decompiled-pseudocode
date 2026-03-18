/*
 * XREFs of ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C0030328
 * Callers:
 *     NtDCompositionSetResourceFloatProperty @ 0x1C002CBA0 (NtDCompositionSetResourceFloatProperty.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C002E15C (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceFloatProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        float a4)
{
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  __int64 v7; // r8
  int v8; // ebx
  char v9; // cl
  char v11; // al
  char v12[16]; // [rsp+30h] [rbp-28h] BYREF

  v12[0] = 0;
  v6 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v6 )
  {
    if ( _finite(a4) )
    {
      v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, char *))(*(_QWORD *)v6 + 136LL))(
             v6,
             a3,
             v7,
             v12);
      if ( v8 >= 0 )
      {
        if ( *((_QWORD *)v6 + 4) )
        {
          v11 = DirectComposition::CApplicationChannel::UnbindAnimation(this, v6, a3);
          v9 = v12[0];
          if ( v11 )
            v9 = 1;
          v12[0] = v9;
        }
        else
        {
          v9 = v12[0];
        }
        if ( v9 )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v8;
}
