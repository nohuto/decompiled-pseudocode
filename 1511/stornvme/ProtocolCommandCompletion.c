/*
 * XREFs of ProtocolCommandCompletion @ 0x1C000A7A0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00023DC (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C000C5A0 (ProcessCommand.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  char v6; // dl
  __int64 v8; // rbx
  _DWORD *v9; // rdi
  __int64 result; // rax
  __int64 v11; // r8
  __int64 PhysicalAddress; // rax
  char v13; // [rsp+48h] [rbp+10h] BYREF
  void *v14; // [rsp+50h] [rbp+18h]

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  if ( v6 == 40 )
    v9 = *(_DWORD **)(a2 + 64);
  else
    v9 = *(_DWORD **)(a2 + 24);
  result = *a3;
  v9[16] = result;
  v11 = *(_QWORD *)(v8 + 4208);
  if ( v11 )
  {
    result = StorPortExtendedFunction(1LL, a1, v11, a4);
    *(_QWORD *)(v8 + 4208) = 0LL;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v9[5] = 0;
    v9[4] = 1;
LABEL_13:
    *(_BYTE *)(v8 + 4186) = 1;
    return result;
  }
  v9[4] = 2;
  result = *((unsigned __int16 *)a3 + 7);
  v9[5] = result;
  *(_BYTE *)(a2 + 3) = 1;
  if ( !v9[7] )
    goto LABEL_13;
  v14 = 0LL;
  result = NVMeAllocateDmaBuffer(a1, 0x40u);
  if ( !v14 )
    goto LABEL_13;
  memset(v14, 0, 0x40uLL);
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v14, &v13);
  *(_DWORD *)(v8 + 4100) = -1;
  *(_QWORD *)(v8 + 4120) = PhysicalAddress;
  *(_BYTE *)(v8 + 4096) = 2;
  *(_BYTE *)(v8 + 4136) = 1;
  *(_BYTE *)(v8 + 4138) = 15;
  *(_QWORD *)(v8 + 4216) = NVMeGetErrorInfoLogPageCompletion;
  *(_QWORD *)(v8 + 4192) = v14;
  *(_BYTE *)(v8 + 4168) = 1;
  *(_DWORD *)(v8 + 4200) = 64;
  return ProcessCommand(a1, a2);
}
