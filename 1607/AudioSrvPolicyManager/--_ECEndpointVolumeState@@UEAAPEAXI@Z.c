/*
 * XREFs of ??_ECEndpointVolumeState@@UEAAPEAXI@Z @ 0x18001A5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CEndpointVolumeState *__fastcall CEndpointVolumeState::`vector deleting destructor'(
        CEndpointVolumeState *this,
        char a2)
{
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CEndpointVolumeState::`vftable';
  if ( *((_DWORD *)this + 10) )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 248LL))(*((_QWORD *)this + 4), (char *)this + 48);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
