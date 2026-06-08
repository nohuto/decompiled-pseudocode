/*
 * XREFs of ValidatePlatformIdleState @ 0x1C001CF58
 * Callers:
 *     UpdateKernelPlatformStates @ 0x1C0003240 (UpdateKernelPlatformStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00162BC (RegisterKernelPlatformStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidatePlatformIdleState(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  __int64 v3; // r10
  _DWORD *v4; // r9
  __int64 v5; // rax
  unsigned int v6; // r11d
  unsigned int v7; // r9d
  _DWORD *v8; // rdi
  __int64 v9; // rax

  v1 = a1 + 8;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 1088);
    v5 = *(unsigned __int8 *)(a1 + 16);
    if ( (unsigned int)v5 >= *v4 || (v4[3 * v5 + 1] & 1) == 0 )
      return (unsigned int)-1073741811;
  }
  v6 = *(_DWORD *)(a1 + 28);
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(v1 + 16 * (v7 + 2LL)) + 1088LL);
      if ( (unsigned int)*(unsigned __int8 *)(v1 + 16 * (v7 + 2LL) + 8) >= *v8 )
        break;
      if ( !*(_BYTE *)(v1 + 16 * (v7 + 2LL) + 10) )
        break;
      if ( !v3 )
      {
        v9 = *(unsigned __int8 *)(a1 + 16);
        if ( (unsigned int)v9 >= *v8 || (v8[3 * v9 + 1] & 1) == 0 )
          break;
      }
      if ( ++v7 >= v6 )
        return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
