/*
 * XREFs of ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1C023C940
 * Callers:
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C023DE60 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 * Callees:
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C023C8FC (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 */

void __fastcall InteractiveControlDevice::CleanQueue(InteractiveControlDevice *this, __int64 a2, __int64 a3)
{
  InteractiveControlInput *v4; // rcx
  unsigned __int64 v5; // rdi
  InteractiveControlDevice *v6; // rbx
  __int64 v7; // rax

  v4 = (InteractiveControlInput *)*((_QWORD *)this + 3);
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( v4 != (InteractiveControlDevice *)((char *)this + 16) )
  {
    do
    {
      v6 = (InteractiveControlDevice *)*((_QWORD *)v4 + 1);
      if ( (unsigned int)(v5 - *((_DWORD *)v4 + 7)) < 0x1388 )
        break;
      v7 = *(_QWORD *)v4;
      if ( *(InteractiveControlInput **)(*(_QWORD *)v4 + 8LL) != v4 || *(InteractiveControlInput **)v6 != v4 )
        __fastfail(3u);
      *(_QWORD *)v6 = v7;
      *(_QWORD *)(v7 + 8) = v6;
      InteractiveControlInput::`scalar deleting destructor'(v4, 1LL, a3);
      --*((_DWORD *)this + 8);
      v4 = v6;
    }
    while ( v6 != (InteractiveControlDevice *)((char *)this + 16) );
  }
}
