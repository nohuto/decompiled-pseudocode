/*
 * XREFs of ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C003BF00
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018DC8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0018FA0 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C003DD50 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C003ED30 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C003F3D0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall DirectComposition::CLinearObjectTableBase::EnumerateObjects(
        DirectComposition::CLinearObjectTableBase *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx
  _QWORD *v5; // r9
  __int64 v6; // rcx

  v2 = *a2;
  v4 = *((_QWORD *)this + 4);
  if ( *a2 >= v4 )
    return 0LL;
  v5 = (_QWORD *)(*((_QWORD *)this + 1) + v2 * *((_QWORD *)this + 5));
  do
  {
    if ( *v5 )
      break;
    ++v2;
    v5 = (_QWORD *)((char *)v5 + *((_QWORD *)this + 5));
  }
  while ( v2 < v4 );
  if ( v2 >= v4 )
    return 0LL;
  v6 = *((_QWORD *)this + 5);
  *a2 = v2 + 1;
  return *(void **)(v2 * v6 + *((_QWORD *)this + 1));
}
