/*
 * XREFs of ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C003FD0C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3)
{
  unsigned __int64 v4; // r9
  struct DirectComposition::CResourceMarshaler *v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v6 = *(struct DirectComposition::CResourceMarshaler **)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v6 + 112LL))(
          v6,
          32LL) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, char *))(*(_QWORD *)v6 + 248LL))(
           v6,
           this,
           &v12);
    goto LABEL_12;
  }
  v7 = (unsigned int)(a3 - 1);
  if ( v7 >= *((_QWORD *)this + 11) )
  {
    v8 = 0LL;
  }
  else
  {
    _mm_lfence();
    v8 = *(_QWORD *)(v7 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  if ( !v8 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 112LL))(v8, 32LL) )
    return (unsigned int)-1073741811;
  v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(*(_QWORD *)v6 + 240LL))(
         v6,
         this,
         v8,
         &v12);
LABEL_12:
  v10 = v9;
  if ( v9 >= 0 && v12 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
  return v10;
}
