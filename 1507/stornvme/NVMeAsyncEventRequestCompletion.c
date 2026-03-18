/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C000C170
 * Callers:
 *     <none>
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00022EC (NVMeAllocateDmaBuffer.c)
 *     NVMeControllerReset @ 0x1C0004E88 (NVMeControllerReset.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000C3E0 (NVMeIssueAsyncEventCommand.c)
 *     ProcessCommand @ 0x1C000C470 (ProcessCommand.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  char v8; // cl
  __int64 v9; // r15
  unsigned int v10; // edx
  unsigned __int8 v11; // r12
  unsigned int v12; // edi
  void *v13; // rcx
  int v14; // esi
  __int64 PhysicalAddress; // rax
  int v16; // edx
  int v17; // r8d
  _QWORD v18[10]; // [rsp+20h] [rbp-50h] BYREF
  int v19; // [rsp+B8h] [rbp+48h] BYREF
  char v20; // [rsp+C0h] [rbp+50h] BYREF
  void *v21; // [rsp+C8h] [rbp+58h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  result = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - result + 4096;
  if ( !a3
    || (v8 = *(_BYTE *)(a2 + 3), v8 == 14)
    || (result = *(unsigned int *)(a1 + 20), (result & 0xE) != 0)
    || v8 != 1 )
  {
    *(_BYTE *)(v6 + 4186) = 1;
    return result;
  }
  memset((char *)v18 + 4, 0, 0x44uLL);
  v9 = 0LL;
  v19 = 72;
  if ( a2 == a1 + 560 )
  {
    v9 = a1 + 552;
  }
  else
  {
    v10 = 0;
    while ( a2 != 104LL * v10 + a1 + 664 )
    {
      if ( ++v10 >= 4 )
        goto LABEL_17;
    }
    v9 = 104LL * v10 + a1 + 656;
  }
LABEL_17:
  HIDWORD(v18[1]) = 0;
  v18[0] = 0x4800000100LL;
  BYTE4(v18[3]) = 1;
  v18[4] = 0x100000006LL;
  LODWORD(v18[5]) = 4;
  v18[6] = a3;
  StorPortExtendedFunction(16LL, a1, v18, &v19);
  v11 = *(_BYTE *)(a3 + 2);
  result = *(_DWORD *)a3 & 7;
  if ( (*(_DWORD *)a3 & 7) == 0 )
  {
    if ( *(_BYTE *)(a3 + 1) == 1 )
      NVMeControllerReset(a1, 0);
LABEL_20:
    v12 = 64;
    goto LABEL_28;
  }
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result == 6 )
    {
      if ( *(_BYTE *)(a3 + 1) )
        goto LABEL_24;
      goto LABEL_20;
    }
    if ( (_DWORD)result != 7 )
      goto LABEL_24;
  }
  v12 = 512;
LABEL_28:
  v21 = 0LL;
  result = NVMeAllocateDmaBuffer(a1, v12);
  v13 = v21;
  if ( v21 )
  {
    if ( v9 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v14 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v14 = *(unsigned __int8 *)(a2 + 7);
      if ( v12 >> 2 )
      {
        memset(v21, 0, 4LL * (v12 >> 2));
        v13 = v21;
      }
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v13, &v20);
      v16 = v14 + 1;
      if ( v11 <= 5u && (v17 = 42, _bittest(&v17, v11)) || v11 == 0x80 )
        v16 = -1;
      *(_QWORD *)(v6 + 4120) = PhysicalAddress;
      *(_DWORD *)(v6 + 4100) = v16;
      *(_BYTE *)(v6 + 4096) = 2;
      *(_BYTE *)(v6 + 4136) = v11;
      *(_BYTE *)(v6 + 4138) = (v12 >> 2) - 1;
      *(_QWORD *)(v6 + 4216) = NVMeGetLogPageCompletion;
      *(_QWORD *)(v6 + 4192) = v21;
      *(_BYTE *)(v6 + 4168) = 1;
      *(_DWORD *)(v6 + 4200) = v12;
      return ProcessCommand(a1, v9 + 8);
    }
    return result;
  }
LABEL_24:
  if ( v9 )
    return NVMeIssueAsyncEventCommand(a1, v9);
  return result;
}
