/*
 * XREFs of RIMIsPTPPointerDeviceAllowed @ 0x1C00D0DE0
 * Callers:
 *     RIMABIsDeviceAllowed @ 0x1C00D25A8 (RIMABIsDeviceAllowed.c)
 * Callees:
 *     RIMAbortDeviceActivity @ 0x1C00C37A4 (RIMAbortDeviceActivity.c)
 */

__int64 __fastcall RIMIsPTPPointerDeviceAllowed(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // r10

  v2 = 1;
  v3 = *(_QWORD **)(a1 + 536);
  while ( v3 != (_QWORD *)(a1 + 536) )
  {
    v4 = v3 - 1;
    v3 = (_QWORD *)*v3;
    v5 = *v4;
    if ( ((unsigned int)(*(_DWORD *)(*v4 + 24LL) - 6) <= 1 || (unsigned int)(*(_DWORD *)(v5 + 24) - 1) <= 4) && v5 != a2 )
    {
      v2 = 0;
      RIMAbortDeviceActivity(a1, a2);
      return v2;
    }
  }
  return v2;
}
