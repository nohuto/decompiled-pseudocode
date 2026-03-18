/*
 * XREFs of InitializePointerDeviceFrameContactIdMgr @ 0x1C01CD9F0
 * Callers:
 *     ?GetMaxCountFeatureDetails@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HIDP_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@E@Z @ 0x1C01C6AB8 (-GetMaxCountFeatureDetails@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HI.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializePointerDeviceFrameContactIdMgr(__int64 a1, _WORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 712);
  v3 = 0;
  if ( *a2 == 5 )
    ++*(_DWORD *)(a1 + 720);
  v4 = Win32AllocPoolZInit(8LL * *(unsigned int *)(a1 + 720), 2020635477LL);
  *(_QWORD *)(v2 + 48) = v4;
  if ( v4 )
    return 1;
  return v3;
}
