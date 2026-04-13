/*
 * XREFs of ?Run@CRemoteTask@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180008800
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CRemoteTask::Run(Windows::Internal::ComTaskPool::CRemoteTask *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *(_BYTE *)(*((_QWORD *)this + 3) + 40LL) = 1;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 16LL))(v2 + 16);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
