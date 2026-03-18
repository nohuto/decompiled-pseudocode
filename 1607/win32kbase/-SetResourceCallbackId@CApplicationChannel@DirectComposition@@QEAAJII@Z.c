/*
 * XREFs of ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C003FBAC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceCallbackId(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rbx
  int v6; // esi
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v5 = *(struct DirectComposition::CResourceMarshaler **)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *))(*(_QWORD *)v5 + 176LL))(
           v5,
           a3,
           &v8);
    if ( v6 >= 0 && v8 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
