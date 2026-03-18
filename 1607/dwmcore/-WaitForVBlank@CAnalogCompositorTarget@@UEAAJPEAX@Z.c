/*
 * XREFs of ?WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z @ 0x180167340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x180165D2C (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x180167530 (-GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z.c)
 */

__int64 __fastcall CAnalogCompositorTarget::WaitForVBlank(CAnalogCompositorTarget *this, void *a2)
{
  CAnalogExclusiveView *ExclusiveView; // rax
  char v4; // bl
  __int64 result; // rax

  ExclusiveView = CAnalogCompositorClient::GetExclusiveView(this, dword_1801F0398);
  v4 = 0;
  if ( ExclusiveView )
    result = CAnalogExclusiveView::WaitForSurfaceUpdate(ExclusiveView);
  else
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)xmmword_1801F03A0 + 80LL))(xmmword_1801F03A0, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 142213121 )
    {
      v4 = 1;
    }
    else
    {
      SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this - 12) + 512LL) + 96LL));
      result = 0LL;
    }
  }
  *((_BYTE *)this + 40) = v4;
  return result;
}
