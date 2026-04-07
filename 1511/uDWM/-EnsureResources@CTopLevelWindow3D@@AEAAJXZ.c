/*
 * XREFs of ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800353F8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800354E0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180016490 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureResources(CTopLevelWindow3D *this)
{
  int v1; // ebx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( !*((_QWORD *)this + 40) )
  {
    v5 = CSecondaryWindowRepresentation::Create(
           160LL,
           (__int64)this + 264,
           *((_QWORD *)this + 39),
           0,
           100,
           (CSecondaryWindowRepresentation **)this + 40);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x242u);
  }
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x24Du);
  }
  else
  {
    if ( !*((_QWORD *)this + 42) )
    {
      v4 = CResource::Create(0x3Cu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 42);
      v1 = v4;
      if ( v4 < 0 )
      {
        v6 = 593;
LABEL_13:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, v6);
        return (unsigned int)v1;
      }
    }
    if ( !*((_QWORD *)this + 41) )
    {
      v4 = CResource::Create(0x3Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 41);
      v1 = v4;
      if ( v4 < 0 )
      {
        v6 = 598;
        goto LABEL_13;
      }
    }
  }
  return (unsigned int)v1;
}
