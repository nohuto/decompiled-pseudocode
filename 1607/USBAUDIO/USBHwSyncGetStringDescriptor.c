/*
 * XREFs of USBHwSyncGetStringDescriptor @ 0x1C001D29C
 * Callers:
 *     USBHwGetDeviceIDString @ 0x1C001D408 (USBHwGetDeviceIDString.c)
 *     USBParseGetUnitString @ 0x1C001E65C (USBParseGetUnitString.c)
 *     USBCntrlGetDescriptor @ 0x1C0021230 (USBCntrlGetDescriptor.c)
 * Callees:
 *     USBHwGetDescriptor @ 0x1C001C918 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwSyncGetStringDescriptor(
        __int64 a1,
        char a2,
        __int16 a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned int *a6)
{
  _QWORD *P; // rax
  int Descriptor; // eax
  _QWORD *v12; // rax
  int v13; // ecx
  unsigned __int8 v14; // al
  unsigned int v15; // ebx
  _QWORD *PoolWithTag; // rax
  int v17; // eax

  a5 = 4;
  P = ExAllocatePoolWithTag((POOL_TYPE)512, 0x88uLL, 0x41627845u);
  if ( P )
    Descriptor = USBHwGetDescriptor(a1, (int *)&a5, (__int64)a4, 3, a2, a3, P);
  else
    Descriptor = -1073741670;
  if ( Descriptor >= 0
    || ((a5 = 255, (v12 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x88uLL, 0x41627845u)) == 0LL)
      ? (v13 = -1073741670)
      : (v13 = USBHwGetDescriptor(a1, (int *)&a5, (__int64)a4, 3, a2, a3, v12)),
        v13 >= 0) )
  {
    if ( a5 < 4 )
      return (unsigned int)-1073741668;
    v14 = *a4;
    if ( *a4 <= 4u )
      return (unsigned int)-1073741668;
    v15 = v14;
    a5 = v14;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x88uLL, 0x41627845u);
    if ( PoolWithTag )
    {
      v17 = USBHwGetDescriptor(a1, (int *)&a5, (__int64)a4, 3, a2, a3, PoolWithTag);
      v15 = a5;
      v13 = v17;
    }
    else
    {
      v13 = -1073741670;
    }
    if ( v13 >= 0 )
    {
      if ( v15 <= 0xFF && v15 == *a4 )
      {
        if ( a6 )
          *a6 = v15;
        return (unsigned int)v13;
      }
      return (unsigned int)-1073741668;
    }
  }
  return (unsigned int)v13;
}
