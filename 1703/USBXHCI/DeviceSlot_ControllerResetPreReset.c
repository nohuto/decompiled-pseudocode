/*
 * XREFs of DeviceSlot_ControllerResetPreReset @ 0x1C001CE60
 * Callers:
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

__int64 __fastcall DeviceSlot_ControllerResetPreReset(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp

  for ( i = 1; i <= *(_DWORD *)(a1 + 16); ++i )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      result = i;
      v3 = *(_QWORD *)(v3 + 8LL * i);
    }
    if ( v3 )
    {
      v5 = v3 + 176;
      v6 = 31LL;
      do
      {
        if ( *(_QWORD *)v5 )
          result = ESM_AddEvent((PVOID)(*(_QWORD *)v5 + 272LL));
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
