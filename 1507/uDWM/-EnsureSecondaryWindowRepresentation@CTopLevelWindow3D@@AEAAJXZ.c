/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x1800270A8
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027690 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180035018 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(CTopLevelWindow3D *this)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 40) )
  {
    v2 = CSecondaryWindowRepresentation::Create(
           160LL,
           (char *)this + 264,
           *((_QWORD *)this + 39),
           0LL,
           100,
           (char *)this + 320);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x296u);
  }
  return v1;
}
