/*
 * XREFs of ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C00400DC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C003FA20 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        int a4)
{
  unsigned __int64 v5; // rcx
  __int64 v8; // rcx
  struct DirectComposition::CBaseAnimation *v9; // r14
  unsigned __int64 v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // eax

  v5 = (unsigned int)(a4 - 1);
  if ( a4 && v5 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(v5 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = (struct DirectComposition::CBaseAnimation *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
    if ( v9 )
    {
      v10 = (unsigned int)(a2 - 1);
      if ( a2 && v10 < *((_QWORD *)this + 11) )
      {
        _mm_lfence();
        v11 = *(struct DirectComposition::CResourceMarshaler **)(v10 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
        return 3221225506LL;
      v12 = *(_QWORD *)v11;
      v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CBaseAnimation *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD))(v12 + 184))(
             v11,
             a3,
             v13) )
      {
        return DirectComposition::CApplicationChannel::BindAnimation(
                 (struct DirectComposition::CAnimationBinding **)this,
                 v11,
                 a3,
                 v9);
      }
    }
  }
  return 3221225485LL;
}
