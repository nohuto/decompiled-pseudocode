/*
 * XREFs of ??$make_shared@VSpatialInteractionController@SpatialInteractionDevices@@AEAKAEAI@std@@YA?AV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@0@AEAKAEAI@Z @ 0x18007B164
 * Callers:
 *     ?AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800790B0 (-AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionCo.c)
 * Callees:
 *     ??0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KK@Z @ 0x180099544 (--0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KK@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

SpatialInteractionDevices::SpatialInteractionController **__fastcall std::make_shared<SpatialInteractionDevices::SpatialInteractionController,unsigned long &,unsigned int &>(
        SpatialInteractionDevices::SpatialInteractionController **a1,
        unsigned int *a2,
        unsigned int *a3)
{
  _DWORD *v6; // rdi
  SpatialInteractionDevices::SpatialInteractionController *v7; // rsi
  SpatialInteractionDevices::SpatialInteractionController **result; // rax

  v6 = operator new(0x268uLL);
  v6[2] = 1;
  v7 = (SpatialInteractionDevices::SpatialInteractionController *)(v6 + 4);
  v6[3] = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj<SpatialInteractionDevices::SpatialInteractionController>::`vftable';
  if ( v6 != (_DWORD *)-16LL )
    SpatialInteractionDevices::SpatialInteractionController::SpatialInteractionController(v7, *a2, *a3);
  *a1 = v7;
  result = a1;
  a1[1] = (SpatialInteractionDevices::SpatialInteractionController *)v6;
  return result;
}
