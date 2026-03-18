/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C001DADC (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001E07C (-EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00737BC (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
    v2 = DirectComposition::CLinearHandleTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 56),
           &v7);
    v3 = v2;
    if ( !v2 )
      break;
    v2[1] = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v2;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v2 + 80LL))(v2) )
      *((_DWORD *)v3 + 4) |= 4u;
    for ( i = (_QWORD *)v3[4]; i; i = (_QWORD *)i[4] )
    {
      *i = *((_QWORD *)this + 55);
      *((_QWORD *)this + 55) = i;
    }
  }
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CApplicationChannel *)((char *)this + 608),
    *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 232LL));
  if ( *((_DWORD *)this + 167) )
    *((_BYTE *)this + 184) |= 0x20u;
  if ( *((_DWORD *)this + 169) )
    *((_BYTE *)this + 184) |= 0x40u;
  v4 = (*((_BYTE *)this + 184) & 1) == 0;
  *((_DWORD *)this + 6) = 0;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 15);
    if ( !v5 || !*(_QWORD *)(v5 + 40) )
      DirectComposition::CApplicationChannel::Commit(this, 0LL, 0);
  }
}
