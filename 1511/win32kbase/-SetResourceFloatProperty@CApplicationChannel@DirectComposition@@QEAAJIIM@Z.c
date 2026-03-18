/*
 * XREFs of ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C001D518
 * Callers:
 *     NtDCompositionSetResourceFloatProperty @ 0x1C0019EA0 (NtDCompositionSetResourceFloatProperty.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C001B3A0 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceFloatProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        float a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // edi
  char v10; // cl
  char v12; // al
  char v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v7 = *(_QWORD *)(v5 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 200LL))(v7) )
    v7 &= -(__int64)((*(_BYTE *)(v7 + 16) & 1) != 0);
  if ( v7 )
  {
    if ( _finite(a4) )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, char *))(*(_QWORD *)v7 + 136LL))(
             v7,
             a3,
             v8,
             &v13);
      if ( v9 >= 0 )
      {
        if ( *(_QWORD *)(v7 + 32) )
        {
          v12 = DirectComposition::CApplicationChannel::UnbindAnimation(
                  this,
                  (struct DirectComposition::CResourceMarshaler *)v7,
                  a3);
          v10 = v13;
          if ( v12 )
            v10 = 1;
          v13 = v10;
        }
        else
        {
          v10 = v13;
        }
        if ( v10 )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
            this,
            (struct DirectComposition::CResourceMarshaler *)v7);
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
  return (unsigned int)v9;
}
