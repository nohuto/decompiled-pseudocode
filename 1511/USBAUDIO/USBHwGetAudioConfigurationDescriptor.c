/*
 * XREFs of USBHwGetAudioConfigurationDescriptor @ 0x1C001B898
 * Callers:
 *     USBDeviceStart @ 0x1C001AAD0 (USBDeviceStart.c)
 * Callees:
 *     memset @ 0x1C0008000 (memset.c)
 *     USBHwGetDescriptor @ 0x1C001B818 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwGetAudioConfigurationDescriptor(__int64 a1, _QWORD *a2, __int64 a3)
{
  _WORD *v3; // rdi
  _QWORD *P; // rax
  int Descriptor; // ebx
  unsigned __int16 v8; // ax
  unsigned int v9; // esi
  _WORD *PoolWithTag; // rax
  _QWORD *v11; // rax
  unsigned int v12; // eax
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_WORD *)a3;
  v14 = 9;
  *(_QWORD *)a3 = 0LL;
  *(_BYTE *)(a3 + 8) = 0;
  P = ExAllocatePoolWithTag(NonPagedPool, 0x88uLL, 0x41627845u);
  if ( P )
    Descriptor = USBHwGetDescriptor(a1, &v14, (__int64)v3, 2, 0, 0, P);
  else
    Descriptor = -1073741670;
  if ( Descriptor < 0 )
    goto LABEL_17;
  v8 = v3[1];
  if ( v8 < 9u )
    Descriptor = -1073741668;
  if ( Descriptor < 0 )
    goto LABEL_17;
  Descriptor = -1073741670;
  v9 = v8;
  v14 = v8;
  ExFreePool(v3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, v9 + 2, 0x41627845u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v9 + 2);
    v11 = ExAllocatePoolWithTag(NonPagedPool, 0x88uLL, 0x41627845u);
    if ( v11 )
      Descriptor = USBHwGetDescriptor(a1, &v14, (__int64)v3, 2, 0, 0, v11);
    if ( Descriptor >= 0 )
    {
      v12 = (unsigned __int16)v3[1];
      if ( v12 > v9 || (unsigned __int16)v12 < 9u )
        Descriptor = -1073741668;
      if ( Descriptor >= 0 )
      {
        *a2 = v3;
        return (unsigned int)Descriptor;
      }
    }
LABEL_17:
    ExFreePool(v3);
  }
  return (unsigned int)Descriptor;
}
