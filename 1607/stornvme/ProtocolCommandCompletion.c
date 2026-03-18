/*
 * XREFs of ProtocolCommandCompletion @ 0x1C000ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 SrbExtension; // rsi
  unsigned int *v8; // r8
  _DWORD *v9; // rbx
  __int64 result; // rax
  __int64 v11; // r8
  unsigned int v12; // edx
  int NamespaceId; // ebx
  __int64 PhysicalAddress; // rax
  char v15; // [rsp+58h] [rbp+10h] BYREF
  void *v16; // [rsp+60h] [rbp+18h]

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v9 = *(_DWORD **)(v6 + 64);
  else
    v9 = *(_DWORD **)(v6 + 24);
  result = *v8;
  v9[16] = result;
  v11 = *(_QWORD *)(SrbExtension + 4208);
  if ( v11 )
  {
    result = StorPortExtendedFunction(1LL, a1, v11);
    *(_QWORD *)(SrbExtension + 4208) = 0LL;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v9[5] = 0;
    v9[4] = 1;
LABEL_8:
    *(_BYTE *)(SrbExtension + 4245) |= 8u;
    return result;
  }
  v9[4] = 2;
  result = *(unsigned __int16 *)(a3 + 14);
  v9[5] = result;
  *(_BYTE *)(a2 + 3) = 1;
  if ( !v9[7] )
    goto LABEL_8;
  v16 = 0LL;
  result = NVMeAllocateDmaBuffer(a1, 0x40u);
  if ( !v16 )
    goto LABEL_8;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v12 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v12 = *(unsigned __int8 *)(a2 + 7);
  NamespaceId = GetNamespaceId(a1, v12);
  memset(v16, 0, 0x40uLL);
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v16, &v15);
  BuildGetLogPageCommand(SrbExtension + 4096, 1u, 0x40u, PhysicalAddress, NamespaceId);
  *(_BYTE *)(SrbExtension + 4245) |= 4u;
  *(_QWORD *)(SrbExtension + 4216) = NVMeGetErrorInfoLogPageCompletion;
  *(_QWORD *)(SrbExtension + 4200) = v16;
  *(_DWORD *)(SrbExtension + 4232) = 64;
  return ProcessCommand(a1, a2);
}
