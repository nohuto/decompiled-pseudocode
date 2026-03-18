/*
 * XREFs of ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BD2C0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AnalogCompositor__ @ 0x1800C2F20 (_dynamic_atexit_destructor_for__g_AnalogCompositor__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180072E9C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A3618 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ @ 0x1801670BC (-FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x1801676B8 (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 */

void __fastcall CAnalogCompositorClient::~CAnalogCompositorClient(CAnalogCompositorClient *this)
{
  __int64 i; // rbx

  CAnalogCompositorClient::SetActiveExclusiveView(this, 0);
  if ( *((_QWORD *)&xmmword_1801F03A0 + 1) )
  {
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*(_QWORD *)(*((_QWORD *)&xmmword_1801F03A0 + 1) + 16LL) + 32LL),
      *((struct CRenderTarget **)&xmmword_1801F03A0 + 1));
    if ( *((_QWORD *)&xmmword_1801F03A0 + 1) )
    {
      CMILCOMBase::InternalRelease(*((CMILCOMBase **)&xmmword_1801F03A0 + 1));
      *((_QWORD *)&xmmword_1801F03A0 + 1) = 0LL;
    }
  }
  AcquireSRWLockExclusive(&stru_1801F03B0);
  for ( i = 0LL; (unsigned int)i < dword_1801F0390; i = (unsigned int)(i + 1) )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(qword_1801F0378 + 8 * i));
  dword_1801F0390 = 0;
  DynArrayImpl<1>::ShrinkToSize(&qword_1801F0378);
  ReleaseSRWLockExclusive(&stru_1801F03B0);
  if ( *((_QWORD *)&xmmword_1801F03A0 + 1) )
    CAnalogCompositorTarget::FlushD3DDevice(*((CAnalogCompositorTarget **)&xmmword_1801F03A0 + 1));
  if ( hObject )
    CloseHandle(hObject);
  if ( qword_1801F0370 )
    CloseHandle(qword_1801F0370);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&xmmword_1801F03A0);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&qword_1801F0378);
}
