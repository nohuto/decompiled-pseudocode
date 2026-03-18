/*
 * XREFs of ?WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z @ 0x18013D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54 (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x18013D514 (-GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z.c)
 */

__int64 __fastcall CAnalogCompositorTarget::WaitForVBlank(CAnalogCompositorTarget *this, void *a2)
{
  CAnalogExclusiveView *ExclusiveView; // rax
  char v4; // si
  __int64 result; // rax

  ExclusiveView = CAnalogCompositorClient::GetExclusiveView(this, dword_1801A3FA8);
  v4 = 0;
  if ( ExclusiveView )
    result = CAnalogExclusiveView::WaitForSurfaceUpdate(ExclusiveView);
  else
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)xmmword_1801A3FB0 + 80LL))(xmmword_1801A3FB0, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 142213121 )
    {
      v4 = 1;
    }
    else
    {
      SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this - 3) + 504LL) + 96LL));
      result = 0LL;
    }
  }
  *((_BYTE *)this + 40) = v4;
  return result;
}
