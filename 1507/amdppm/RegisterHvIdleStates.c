/*
 * XREFs of RegisterHvIdleStates @ 0x1C001A1F0
 * Callers:
 *     <none>
 * Callees:
 *     GetHvPpmCapabilities @ 0x1C001A0D0 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C001A260 (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C001AF74 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v4; // esi
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 248);
  v2 = 0;
  if ( (v1 & 0x200) != 0 )
  {
    v4 = RegisterHvCStates();
    if ( v4 >= 0 )
    {
      GetHvPpmCapabilities(0LL, &v6);
      if ( v6 )
        return (unsigned int)RegisterVmIdleStates(a1);
    }
    return (unsigned int)v4;
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    return (unsigned int)RegisterHvCStates();
  }
  return v2;
}
