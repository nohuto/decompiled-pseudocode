/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C003ED30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C003BF00 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0042718 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  bool v4; // zf
  __int64 v5; // rax
  _QWORD *i; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  while ( 1 )
  {
    v2 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 120),
           &v7);
    v3 = v2;
    if ( !v2 )
      break;
    v2[1] = *((_QWORD *)this + 51);
    *((_QWORD *)this + 51) = v2;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v2 + 80LL))(v2) )
      *((_DWORD *)v3 + 4) |= 2u;
    for ( i = (_QWORD *)v3[4]; i; i = (_QWORD *)i[4] )
    {
      *i = *((_QWORD *)this + 56);
      *((_QWORD *)this + 56) = i;
    }
  }
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CApplicationChannel *)((char *)this + 616),
    *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 232LL));
  if ( *((_DWORD *)this + 169) )
    *((_BYTE *)this + 248) |= 0x20u;
  if ( *((_DWORD *)this + 171) )
    *((_BYTE *)this + 248) |= 0x40u;
  v4 = (*((_BYTE *)this + 248) & 1) == 0;
  *((_DWORD *)this + 6) = 0;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 23);
    if ( !v5 || !*(_QWORD *)(v5 + 40) )
      DirectComposition::CApplicationChannel::Commit(this, 0LL, 0);
  }
}
