/*
 * XREFs of ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004158C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0041A44 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitCreationCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  char v7; // al
  char *v8; // rdx

  if ( *((_QWORD *)this + 51) )
  {
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**((_QWORD **)this + 51)
                                                                                           + 56LL))(
              *((_QWORD *)this + 51),
              a2) )
        break;
      *(_DWORD *)(*((_QWORD *)this + 51) + 16LL) |= 1u;
      v5 = *((_QWORD *)this + 51);
      v6 = *(_QWORD *)(v5 + 8);
      if ( (*(_DWORD *)(v5 + 16) & 2) != 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, 95LL);
        v8 = (char *)this + 424;
        if ( !v7 )
          v8 = (char *)this + 416;
        *(_QWORD *)(*((_QWORD *)this + 51) + 8LL) = *(_QWORD *)v8;
        *(_QWORD *)v8 = *((_QWORD *)this + 51);
      }
      else
      {
        *(_QWORD *)(v5 + 8) = 0LL;
      }
      *((_QWORD *)this + 51) = v6;
    }
    while ( v6 );
  }
  return *((_QWORD *)this + 51) == 0LL;
}
