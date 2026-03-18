/*
 * XREFs of USBDInternal_BuildServicePath @ 0x1C0031B60
 * Callers:
 *     USBD_CreateHandle @ 0x1C0031D54 (USBD_CreateHandle.c)
 * Callees:
 *     memmove @ 0x1C0035000 (memmove.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall USBDInternal_BuildServicePath(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char *v4; // rdi
  int v5; // ebx
  const void *v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  char *PoolWithTag; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _WORD *v12; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  signed __int64 v17; // rdx
  __int16 v18; // ax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( *(_WORD *)(v2 + 56) > 0x10u && RtlCompareMemory(*(const void **)(v2 + 64), L"\\Driver\\", 0x10uLL) == 16 )
  {
    v6 = (const void *)(*(_QWORD *)(v2 + 64) + 16LL);
    v7 = *(unsigned __int16 *)(v2 + 56) - 16;
    v8 = v7 + 24;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v7 + 24, 0x68334855u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v8);
      goto LABEL_33;
    }
    memset(PoolWithTag, 0, v7 + 24);
    memmove(v4, v6, v7);
    v10 = (unsigned __int64)(v7 + 24) >> 1;
    v5 = 0;
    if ( v10 - 1 > 0x7FFFFFFE )
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      v11 = v10;
      v12 = v4;
      v5 = 0;
      if ( v10 )
      {
        do
        {
          if ( !*v12 )
            break;
          ++v12;
          --v11;
        }
        while ( v11 );
        if ( v11 )
        {
          v13 = v10 - v11;
          goto LABEL_19;
        }
      }
      v5 = -1073741811;
    }
    v13 = 0LL;
LABEL_19:
    if ( v5 < 0 )
      goto LABEL_28;
    v14 = &v4[2 * v13];
    v5 = 0;
    v15 = v10 - v13;
    if ( v10 == v13 )
      goto LABEL_26;
    v16 = 2147483646LL;
    v17 = (char *)L"\\Parameters" - v14;
    do
    {
      if ( !v16 )
        break;
      v18 = *(_WORD *)&v14[v17];
      if ( !v18 )
        break;
      *(_WORD *)v14 = v18;
      --v16;
      v14 += 2;
      --v15;
    }
    while ( v15 );
    if ( !v15 )
    {
LABEL_26:
      v14 -= 2;
      v5 = -2147483643;
    }
    *(_WORD *)v14 = 0;
    if ( v5 >= 0 )
    {
      v5 = 0;
    }
    else
    {
LABEL_28:
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v5);
    }
    if ( v5 < 0 )
    {
      ExFreePoolWithTag(v4, 0x68334855u);
      v4 = 0LL;
    }
    goto LABEL_33;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", (const void *)v2);
  v5 = -1073741595;
LABEL_33:
  result = (unsigned int)v5;
  *a2 = v4;
  return result;
}
