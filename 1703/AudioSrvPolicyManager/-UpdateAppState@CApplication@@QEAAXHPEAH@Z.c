/*
 * XREFs of ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000AF48
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180013578 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001DF00 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplication::UpdateAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r9d
  int v6; // edx
  BOOL v7; // esi

  v3 = *((_DWORD *)this + 42);
  if ( a2 )
    *((_DWORD *)this + 42) |= 2u;
  else
    *((_DWORD *)this + 42) &= ~2u;
  v6 = *((_DWORD *)this + 42);
  v7 = ((v3 & 0xFFFFFFF7) != 0) != ((v6 & 0xFFFFFFF7) != 0);
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v6) & 2) != 0 && !a2 )
    *((_QWORD *)this + 70) = GetTickCount64();
  if ( a3 )
    *a3 = v7;
}
