/*
 * XREFs of ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00403A0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetVisualInputSink(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void *a3)
{
  unsigned __int64 v4; // r9
  __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 112LL))(v6, 32LL) )
      v8 = -1073741811;
    v10 = 0LL;
    if ( v8 >= 0 )
    {
      LOBYTE(v7) = 1;
      v8 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v6 + 256LL))(
             v6,
             this,
             v7,
             &v10);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, char *))(*(_QWORD *)v10 + 144LL))(
               v10,
               0LL,
               a3,
               &v11);
        if ( v8 >= 0 )
        {
          if ( v11 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v8;
}
