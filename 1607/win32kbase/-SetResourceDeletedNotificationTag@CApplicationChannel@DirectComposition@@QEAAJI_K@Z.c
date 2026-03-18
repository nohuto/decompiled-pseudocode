/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C003FF98
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3)
{
  unsigned __int64 v4; // rcx
  _DWORD *v5; // rbx
  int v6; // esi

  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v5 = *(_DWORD **)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a3);
    if ( v6 >= 0 && v5[5] == 1 && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 48LL))(v5) )
      (*(void (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v5 + 40LL))(v5, (char *)this + 480);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
