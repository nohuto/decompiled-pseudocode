/*
 * XREFs of ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x18013D7C4
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800949E0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x18013B4A8 (-DeactivateView@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ @ 0x18013D0C0 (-FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ.c)
 */

void __fastcall CAnalogCompositorClient::UnregisterExclusiveView(
        CAnalogCompositorClient *this,
        struct CAnalogExclusiveView *a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // rcx

  if ( *((_BYTE *)a2 + 56) )
    CAnalogExclusiveView::DeactivateView(a2);
  AcquireSRWLockExclusive(&stru_1801A3FC0);
  v3 = dword_1801A3FA0;
  v4 = 0LL;
  if ( dword_1801A3FA0 )
  {
    v5 = qword_1801A3F88;
    do
    {
      if ( *(struct CAnalogExclusiveView **)(v5 + 8 * v4) == a2 )
      {
        if ( (unsigned int)v4 < v3 )
        {
          v6 = v4;
          if ( (unsigned int)v4 < v3 - 1 )
          {
            do
            {
              v7 = v6++;
              *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)(v5 + 8LL * v6);
              v3 = dword_1801A3FA0;
            }
            while ( v6 < dword_1801A3FA0 - 1 );
          }
          dword_1801A3FA0 = v3 - 1;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        CMILCOMBase::InternalRelease(a2);
        v3 = dword_1801A3FA0;
        v5 = qword_1801A3F88;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v3 );
  }
  ReleaseSRWLockExclusive(&stru_1801A3FC0);
  if ( *((_QWORD *)&xmmword_1801A3FB0 + 1) )
    CAnalogCompositorTarget::FlushD3DDevice(*((CAnalogCompositorTarget **)&xmmword_1801A3FB0 + 1));
}
