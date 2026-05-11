/*
 * XREFs of USBParseGetMicArrayDescriptor @ 0x1C001DC38
 * Callers:
 *     USBParseTerminalUnit @ 0x1C001E7D0 (USBParseTerminalUnit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00066A0 (__security_check_cookie.c)
 *     USBHwAllocateAndBag @ 0x1C001C444 (USBHwAllocateAndBag.c)
 *     USBHwGetSetMemory @ 0x1C001C878 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBParseGetMicArrayDescriptor(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int16 v3; // bx
  unsigned int v4; // ebp
  _WORD *v7; // rsi
  _WORD *v8; // rdi
  __int64 v9; // r13
  int SetMemory; // eax
  int v11; // ebx
  _WORD *PoolWithTag; // r14
  unsigned __int16 v13; // dx
  void *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  _WORD *v18; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int16 v20; // [rsp+58h] [rbp-60h]

  v3 = *(unsigned __int8 *)(a2 + 3);
  v4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  SetMemory = USBHwGetSetMemory(a1, 0x85u, 0, v3, *(unsigned __int8 *)(*(_QWORD *)(v9 + 48) + 2LL), 0, 18, (__int64)v19);
  if ( SetMemory < 0 )
  {
    if ( SetMemory == -1073741823 )
      SetMemory = -1073741275;
    v11 = SetMemory;
  }
  else if ( v19[0] == USBAUDIO_MIC_ARRAY_DESCRIPTOR && v19[1] == 0x14D34A2D16C584B1LL )
  {
    if ( v20 < 0x24u )
    {
LABEL_5:
      v11 = -1073741668;
      goto LABEL_27;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, v20, 0x41627845u);
    if ( PoolWithTag )
    {
      v11 = USBHwGetSetMemory(
              a1,
              0x85u,
              0,
              v3,
              *(unsigned __int8 *)(*(_QWORD *)(v9 + 48) + 2LL),
              0,
              v20,
              (__int64)PoolWithTag);
      if ( v11 >= 0 )
      {
        v13 = PoolWithTag[8];
        if ( v13 > v20 || v13 < 0x24u || v13 < 12 * ((unsigned __int64)(unsigned __int16)PoolWithTag[17] + 3) )
        {
          ExFreePool(PoolWithTag);
          goto LABEL_5;
        }
        v8 = PoolWithTag;
      }
      else
      {
        ExFreePool(PoolWithTag);
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073741275;
  }
  if ( v11 >= 0 )
  {
    v14 = *(void **)(a1 + 8);
    v18 = ExAllocatePoolWithTag(PagedPool, 12 * ((unsigned int)(unsigned __int16)v8[17] - 1) + 30, 0x41627845u);
    v7 = v18;
    if ( v18 )
      v11 = USBHwAllocateAndBag((PVOID *)&v18, v14);
    else
      v11 = -1073741670;
    if ( v11 >= 0 )
    {
      *v7 = v8[9];
      v7[1] = v8[10];
      v7[2] = v8[11];
      v7[3] = v8[12];
      v7[4] = v8[13];
      v7[5] = v8[14];
      v7[6] = v8[15];
      v7[7] = v8[16];
      v7[8] = v8[17];
      if ( v8[17] )
      {
        do
        {
          v15 = v4++;
          v16 = 3 * v15;
          v7[2 * v16 + 9] = v8[6 * v15 + 18];
          v7[2 * v16 + 10] = v8[6 * v15 + 19];
          v7[2 * v16 + 11] = v8[6 * v15 + 20];
          v7[2 * v16 + 12] = v8[6 * v15 + 21];
          v7[2 * v16 + 13] = v8[6 * v15 + 22];
          v7[2 * v16 + 14] = v8[6 * v15 + 23];
        }
        while ( v4 < (unsigned __int16)v8[17] );
      }
    }
    ExFreePool(v8);
  }
LABEL_27:
  *a3 = v7;
  return (unsigned int)v11;
}
