/*
 * XREFs of PsInitializeFullProcessImageName @ 0x140466C64
 * Callers:
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     PsReferenceProcessFilePointer @ 0x1404676D0 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall PsInitializeFullProcessImageName(__int64 a1)
{
  _OWORD *v1; // rdi
  int v3; // ebx
  int v4; // eax
  _OWORD *v5; // rax
  _OWORD *v7; // rax
  _OWORD *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-D0h] BYREF
  char *Object; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD Object_8[17]; // [rsp+48h] [rbp-C0h] BYREF

  Object = 0LL;
  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 1716) & 1) != 0 )
  {
LABEL_20:
    LODWORD(NumberOfBytes) = 16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
      v3 = 0;
    }
    else
    {
      v3 = -1073741801;
    }
    goto LABEL_13;
  }
  v3 = PsReferenceProcessFilePointer(a1, &Object);
  if ( v3 >= 0 )
  {
    LODWORD(NumberOfBytes) = 272;
    Object_8[0] = 0uLL;
    v1 = Object_8;
    v4 = ObQueryNameStringMode(Object, (__int64)Object_8, 0x110u, &NumberOfBytes, 0);
    v3 = v4;
    if ( v4 != -2147483643 && v4 != -1073741789 && v4 != -1073741820 )
    {
      if ( v4 < 0 )
        goto LABEL_10;
      if ( (unsigned int)(NumberOfBytes - 17) <= 0xFF )
      {
        v5 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
        v1 = v5;
        if ( v5 )
        {
          *v5 = Object_8[0];
          *((_QWORD *)v5 + 1) = v5 + 1;
          memmove(v5 + 1, *((const void **)&Object_8[0] + 1), WORD1(Object_8[0]));
          goto LABEL_10;
        }
        goto LABEL_19;
      }
LABEL_18:
      v3 = -1073741637;
      goto LABEL_10;
    }
    if ( (unsigned int)NumberOfBytes <= 0x110 )
      goto LABEL_18;
    v7 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v1 = v7;
    if ( !v7 )
    {
LABEL_19:
      v3 = -1073741801;
      goto LABEL_10;
    }
    v3 = ObQueryNameStringMode(Object, (__int64)v7, NumberOfBytes, &NumberOfBytes, 0);
    if ( v3 < 0 )
      ExFreePoolWithTag(v1, 0);
  }
LABEL_10:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v3 < 0 )
    goto LABEL_20;
LABEL_13:
  *(_QWORD *)(a1 + 1120) = v1;
  return (unsigned int)v3;
}
