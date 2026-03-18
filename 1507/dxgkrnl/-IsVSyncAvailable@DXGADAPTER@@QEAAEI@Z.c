/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C011E940
 * Callers:
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008A580 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00A4450 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C011E4B0 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = *((_QWORD *)this + 248);
  if ( v4 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 376) + 8LL) + 448LL))(
             *(_QWORD *)(v4 + 384),
             (unsigned int)a2);
  else
    return DmmIsSourceInActiveVidPnTopology((__int64)this, a2, (unsigned int)a2, a4);
}
