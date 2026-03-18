/*
 * XREFs of HUBDSM_CheckingIfDeviceSpeedChanged @ 0x1C001A8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceSpeedChanged(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int16 v4; // cx
  bool v5; // zf
  unsigned int v6; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_DWORD *)(v1 + 156);
  if ( v2 == 3 )
  {
    return 4061;
  }
  else
  {
    v4 = *(_WORD *)(*(_QWORD *)(v1 + 8) + 184LL);
    if ( (v4 & 0x400) != 0 )
    {
      v5 = v2 == 2;
    }
    else
    {
      if ( (v4 & 0x200) != 0 )
        return (unsigned int)(v2 != 0 ? 4089 : 4061);
      v5 = v2 == 1;
    }
    v6 = 4089;
    if ( v5 )
      return 4061;
    return v6;
  }
}
