/*
 * XREFs of USBMidiOutChangePowerState @ 0x1C00233A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiOutChangePowerState(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r11
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // r9

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 136);
  v4 = *(_QWORD *)(v2 + 128);
  if ( a2 == 1 )
  {
    v5 = *(_QWORD *)(v4 + 192);
    v6 = 0;
    v7 = *(_DWORD *)(v5 + 32);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v5 + 40);
      while ( *(_BYTE *)(*(_QWORD *)(v4 + 168) + 2LL) != *(_BYTE *)(168LL * v6 + v8 + 2) )
      {
        if ( ++v6 >= v7 )
          return 0LL;
      }
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(168LL * v6 + v8 + 8);
    }
  }
  return 0LL;
}
