/*
 * XREFs of USBCntrlGetDescriptor @ 0x1C00211C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0007F00 (memmove.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C001D244 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBCntrlGetDescriptor(IRP *a1, __int64 a2, _WORD *a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int StringDescriptor; // ebx
  unsigned __int64 Length; // rsi
  PKSDEVICE Device; // rax
  __int64 v10; // r13
  __int64 v11; // r8
  unsigned __int8 *PoolWithTag; // rdi
  __int16 v13; // r8
  char v14; // dl
  size_t v15; // r8
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  FilterFromIrp = KsGetFilterFromIrp(a1);
  StringDescriptor = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  a1->IoStatus.Information = 0LL;
  if ( !FilterFromIrp )
    return StringDescriptor;
  Device = KsGetDevice(FilterFromIrp);
  v10 = (__int64)Device;
  if ( !Device )
    return StringDescriptor;
  v11 = *((_QWORD *)Device->Context + 9);
  switch ( *(_DWORD *)(a2 + 24) )
  {
    case 1:
      a1->IoStatus.Information = 18LL;
      if ( (_DWORD)Length )
      {
        if ( (unsigned int)Length >= 0x12 )
        {
          v17 = *(_QWORD *)(v11 + 32);
          *(_OWORD *)a3 = *(_OWORD *)v17;
          a3[8] = *(_WORD *)(v17 + 16);
          return 0;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-2147483643;
    case 2:
      a1->IoStatus.Information = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 2LL);
      if ( (_DWORD)Length )
      {
        v16 = *(unsigned __int16 **)(v11 + 40);
        if ( (unsigned int)Length >= v16[1] )
        {
          memmove(a3, v16, v16[1]);
          return 0;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-2147483643;
    case 3:
      PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPool, 0xFFuLL, 0x41627845u);
      StringDescriptor = -1073741670;
      if ( PoolWithTag )
      {
        v13 = *(_WORD *)(a2 + 32);
        v14 = *(_BYTE *)(a2 + 28);
        LODWORD(v20) = 0;
        StringDescriptor = USBHwSyncGetStringDescriptor(v10, v14, v13, PoolWithTag, v19, (unsigned int *)&v20);
        if ( (StringDescriptor & 0x80000000) == 0 )
        {
          a1->IoStatus.Information = *PoolWithTag + 2LL;
          if ( (_DWORD)Length )
          {
            v15 = *PoolWithTag;
            if ( Length >= v15 + 2 )
              memmove(a3, PoolWithTag + 2, v15);
            else
              StringDescriptor = -1073741789;
          }
          else
          {
            StringDescriptor = -2147483643;
          }
        }
        ExFreePool(PoolWithTag);
      }
      break;
  }
  return StringDescriptor;
}
