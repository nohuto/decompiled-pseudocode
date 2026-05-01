/*
 * XREFs of ?IsKillable@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18002EEE0
 * Callers:
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::IsKillable(
        ExecutionModel::ModernActivationResourceInfo *this)
{
  _QWORD *i; // rax

  for ( i = (_QWORD *)*((_QWORD *)this + 3); i != (_QWORD *)((char *)this + 24); i = (_QWORD *)*i )
  {
    if ( !*(_DWORD *)(i[2] + 1464LL) )
      return 0LL;
  }
  return 1LL;
}
