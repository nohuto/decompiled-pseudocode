/*
 * XREFs of ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C001D3F0
 * Callers:
 *     NtDCompositionSetResourceIntegerProperty @ 0x1C0019F10 (NtDCompositionSetResourceIntegerProperty.c)
 * Callees:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C001B3A0 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceIntegerProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v8; // rbx
  int v9; // esi
  char v10; // cl
  int v11; // eax
  char v13; // al
  char *v14; // rcx
  char v15; // al
  char v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(v5 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 200LL))(v8) )
    v8 &= -(__int64)((*(_BYTE *)(v8 + 16) & 1) != 0);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v8 + 128LL))(
           v8,
           this,
           a3,
           a4,
           &v16);
    if ( v9 >= 0 )
    {
      if ( *(_QWORD *)(v8 + 32) )
      {
        v15 = DirectComposition::CApplicationChannel::UnbindAnimation(
                this,
                (struct DirectComposition::CResourceMarshaler *)v8,
                a3);
        v10 = v16;
        if ( v15 )
          v10 = 1;
        v16 = v10;
      }
      else
      {
        v10 = v16;
      }
      if ( v10 )
      {
        v11 = *(_DWORD *)(v8 + 16);
        if ( (v11 & 4) == 0 )
        {
          if ( (v11 & 2) != 0 && (v11 & 0x10) == 0 )
          {
            v13 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v8 + 112LL))(v8, 90LL);
            v14 = (char *)this + 416;
            if ( !v13 )
              v14 = (char *)this + 408;
            *(_QWORD *)(v8 + 8) = *(_QWORD *)v14;
            *(_QWORD *)v14 = v8;
          }
          *(_DWORD *)(v8 + 16) |= 4u;
          *((_BYTE *)this + 184) |= 1u;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v9;
}
