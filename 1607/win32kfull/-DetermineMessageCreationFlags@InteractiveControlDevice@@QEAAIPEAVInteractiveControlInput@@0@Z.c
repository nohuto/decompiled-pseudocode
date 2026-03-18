/*
 * XREFs of ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C023D00C
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C023D1B8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDevice::DetermineMessageCreationFlags(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        struct InteractiveControlInput *a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // r8d
  int v7; // r10d
  int v8; // edi
  int v9; // r8d

  v3 = 0;
  if ( *((_DWORD *)this + 108) )
  {
    v5 = *((_DWORD *)a3 + 18);
    if ( (v5 & 4) != 0 )
      *((_DWORD *)a3 + 18) = v5 & 0xFFFFFF7B | 0x80;
  }
  v6 = *((_DWORD *)a3 + 18);
  v7 = v6 & 4;
  if ( (v6 & 4) != 0 || (v6 & 0x80u) != 0 )
    *((_DWORD *)a3 + 19) = 0;
  if ( a2 )
  {
    v8 = *((_DWORD *)a2 + 18);
    if ( (v7 != 0) != (((unsigned __int8)v8 >> 2) & 1) )
      v3 = 1 << ((v7 != 0) + 8);
    if ( ((v6 & 0x80) != 0) != (unsigned __int8)v8 >> 7 )
      v3 |= 1 << (((v6 & 0x80) != 0) + 5);
    if ( ((v6 & 1) != 0) != (*((_DWORD *)a2 + 18) & 1) )
      v3 |= 1 << (-23 - ((v6 & 1) != 0) + 24);
    if ( *((_DWORD *)a3 + 14) != *((_DWORD *)a2 + 14)
      || *((_DWORD *)a3 + 15) != *((_DWORD *)a2 + 15)
      || (((unsigned __int8)v6 >> 1) & 1) != (((unsigned __int8)v8 >> 1) & 1) )
    {
      v9 = v6 & 2;
      if ( (v9 != 0) == (((unsigned __int8)v8 >> 1) & 1) )
      {
        if ( v9 )
          v3 |= 0x1000u;
      }
      else
      {
        v3 |= 1 << (-13 - (v9 != 0) + 24);
        if ( v9 == 0 )
        {
          *((_QWORD *)a3 + 7) = *((_QWORD *)a2 + 7);
          *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 8);
        }
      }
    }
  }
  else
  {
    if ( (v6 & 4) != 0 )
      v3 = 512;
    if ( (v6 & 0x80u) != 0 )
      v3 |= 0x40u;
    if ( (v6 & 1) != 0 )
      v3 |= 1u;
    if ( (v6 & 2) != 0 )
      v3 |= 0x400u;
  }
  if ( *((_DWORD *)a3 + 19) )
    v3 |= 0x80u;
  return v3 & (unsigned int)~*((_DWORD *)InteractiveControlManager::Instance() + 23);
}
