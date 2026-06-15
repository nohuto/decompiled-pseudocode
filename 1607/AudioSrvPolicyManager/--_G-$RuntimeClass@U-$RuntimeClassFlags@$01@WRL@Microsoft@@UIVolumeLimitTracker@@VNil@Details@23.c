/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIVolumeLimitTracker@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180022FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        _DWORD *lpMem,
        char a2)
{
  HANDLE ProcessHeap; // rax

  lpMem[3] = -1073741823;
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
