/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C000B578
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00044F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00023DC (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C000C5A0 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CE5C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

_UNKNOWN **__fastcall NVMeGetCommandEffectsLog(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbp
  _QWORD *v6; // rsi
  void *v7; // rcx
  __int64 PhysicalAddress; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v13; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 648);
  v13 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = *(_UNKNOWN ***)(a1 + 1072);
    if ( (*((_BYTE *)result + 261) & 2) != 0 )
    {
      v6 = (_QWORD *)(a1 + 3216);
      v7 = *(void **)(a1 + 3216);
      if ( v7 || (result = (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 0x1000u), (v7 = (void *)*v6) != 0LL) )
      {
        memset(v7, 0, 0x1000uLL);
        PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, *v6, &v13);
        v9 = *(void **)(a1 + 648);
        *(_BYTE *)(a1 + 563) = 0;
        v10 = PhysicalAddress;
        memset(v9, 0, 0x10A8uLL);
        *(_QWORD *)(a1 + 616) = *(_QWORD *)(a1 + 648);
        *(_DWORD *)(a1 + 552) = 1;
        *(_WORD *)(v3 + 4166) = 257;
        *(_WORD *)(v3 + 4160) = 0;
        *(_DWORD *)(v3 + 4100) = -1;
        *(_QWORD *)(v3 + 4120) = v10;
        *(_BYTE *)(v3 + 4096) = 2;
        *(_BYTE *)(v3 + 4136) = 5;
        *(_BYTE *)(v3 + 4138) = -1;
        *(_BYTE *)(v3 + 4168) = 1;
        *(_QWORD *)(v3 + 4192) = *v6;
        *(_DWORD *)(v3 + 4200) = 4096;
        ProcessCommand(a1, a1 + 560);
        LOBYTE(v11) = a2;
        return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v11, 10000LL);
      }
    }
  }
  return result;
}
