/*
 * XREFs of ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180048E90
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSourceModifications(CChannel *this, int a2, int a3, int a4, int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  unsigned int v9; // ebx
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v11[0] = 99;
  v11[2] = a3;
  v11[4] = a5;
  v11[1] = a2;
  v11[3] = a4;
  v9 = CChannel::SendCommand(this, v11, 0x14u);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v9;
}
