/*
 * XREFs of ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C0040628
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void **a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rcx

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v4 = *(_QWORD *)(v3 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 24LL))(v4, a3);
  else
    return 3221225506LL;
}
