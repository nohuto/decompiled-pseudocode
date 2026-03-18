/*
 * XREFs of ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BA658
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AnalogCompositor__ @ 0x1800BFB00 (_dynamic_atexit_destructor_for__g_AnalogCompositor__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18007AF38 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A1918 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ @ 0x18013D0C0 (-FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x18013D6AC (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 */

void __fastcall CAnalogCompositorClient::~CAnalogCompositorClient(CAnalogCompositorClient *this)
{
  __int64 i; // rbx

  CAnalogCompositorClient::SetActiveExclusiveView(this, 0);
  if ( *((_QWORD *)&xmmword_1801A3FB0 + 1) )
  {
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*(_QWORD *)(*((_QWORD *)&xmmword_1801A3FB0 + 1) + 16LL) + 32LL),
      *((struct CRenderTarget **)&xmmword_1801A3FB0 + 1));
    if ( *((_QWORD *)&xmmword_1801A3FB0 + 1) )
    {
      CMILCOMBase::InternalRelease(*((CMILCOMBase **)&xmmword_1801A3FB0 + 1));
      *((_QWORD *)&xmmword_1801A3FB0 + 1) = 0LL;
    }
  }
  AcquireSRWLockExclusive(&stru_1801A3FC0);
  for ( i = 0LL; (unsigned int)i < dword_1801A3FA0; i = (unsigned int)(i + 1) )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(qword_1801A3F88 + 8 * i));
  dword_1801A3FA0 = 0;
  DynArrayImpl<1>::ShrinkToSize(&qword_1801A3F88);
  ReleaseSRWLockExclusive(&stru_1801A3FC0);
  if ( *((_QWORD *)&xmmword_1801A3FB0 + 1) )
    CAnalogCompositorTarget::FlushD3DDevice(*((CAnalogCompositorTarget **)&xmmword_1801A3FB0 + 1));
  if ( hObject )
    CloseHandle(hObject);
  if ( qword_1801A3F80 )
    CloseHandle(qword_1801A3F80);
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&xmmword_1801A3FB0);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_1801A3F88);
}
