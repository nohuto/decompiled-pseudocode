/*
 * XREFs of _GetPointerDeviceType @ 0x1401D8C20
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401B8710 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1402338C8 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14023F1A8 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402C3910 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1401D8DD4 (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = HMValidateHandleNoSecure(a1, 19);
  v2 = -1;
  if ( v1 && (*(_DWORD *)(v1 + 184) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v1 + 456), 0xFFFFFFFFLL);
  return v2;
}
