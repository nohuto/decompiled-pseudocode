/*
 * XREFs of ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002F084
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitCreationCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  char v7; // al
  char *v8; // rdx

  if ( *((_QWORD *)this + 50) )
  {
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**((_QWORD **)this + 50)
                                                                                           + 56LL))(
              *((_QWORD *)this + 50),
              a2) )
        break;
      *(_DWORD *)(*((_QWORD *)this + 50) + 16LL) |= 2u;
      v5 = *((_QWORD *)this + 50);
      v6 = *(_QWORD *)(v5 + 8);
      if ( (*(_DWORD *)(v5 + 16) & 4) != 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, 82LL);
        v8 = (char *)this + 416;
        if ( !v7 )
          v8 = (char *)this + 408;
        *(_QWORD *)(*((_QWORD *)this + 50) + 8LL) = *(_QWORD *)v8;
        *(_QWORD *)v8 = *((_QWORD *)this + 50);
      }
      else
      {
        *(_QWORD *)(v5 + 8) = 0LL;
      }
      *((_QWORD *)this + 50) = v6;
    }
    while ( v6 );
  }
  return *((_QWORD *)this + 50) == 0LL;
}
