/*
 * XREFs of USBD_ValidateConfigurationDescriptorInternal @ 0x1C003F628
 * Callers:
 *     UsbhValidateConfigurationDescriptor @ 0x1C00064F8 (UsbhValidateConfigurationDescriptor.c)
 * Callees:
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall USBD_ValidateConfigurationDescriptorInternal(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 **a4)
{
  unsigned __int8 **v4; // rdi
  int v6; // ebx
  unsigned __int8 *PoolWithTag; // r14
  PVOID v8; // r12
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // r15
  unsigned int v11; // ecx
  int v12; // edx
  unsigned __int8 *v13; // rdi
  unsigned __int64 v14; // r13
  char v15; // r8
  __int64 v16; // rdx
  int v17; // ecx
  unsigned __int8 v18; // al
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // r15
  char v22; // [rsp+70h] [rbp+18h]
  __int16 v24; // [rsp+80h] [rbp+28h]

  v4 = a4;
  v24 = 0;
  v6 = 0;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v22 = 1;
  if ( !a1 || a2 < 9 || !a4 )
    return 3221237760LL;
  if ( *a1 < 9u )
  {
    v6 = -1072693247;
    v9 = a1;
    goto LABEL_34;
  }
  if ( a1[1] != 2 )
  {
    v6 = -1072693246;
    v9 = a1 + 1;
    goto LABEL_34;
  }
  v10 = a1 + 2;
  v11 = *((unsigned __int16 *)a1 + 1);
  if ( v11 > a2 || (v12 = a1[4], v11 < 9 * (v12 + 1)) )
  {
    v6 = -1072693242;
    v9 = v10;
    goto LABEL_29;
  }
  if ( !(_BYTE)v12 )
    goto LABEL_65;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x204uLL, 0x42554855u);
  if ( !PoolWithTag )
  {
    v6 = -1073737728;
    v9 = a1;
    goto LABEL_34;
  }
  v8 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x100uLL, 0x42554855u);
  if ( !v8 )
  {
    v9 = a1;
    v6 = -1073737728;
    goto LABEL_29;
  }
  memset(PoolWithTag, 0, 0x204uLL);
  memset(v8, 0, 0x100uLL);
  v13 = a1 + 9;
  v14 = (unsigned __int64)&a1[*(unsigned __int16 *)v10];
  if ( (unsigned __int64)(a1 + 9) >= v14 )
  {
LABEL_55:
    if ( v24 != a1[4] )
    {
      v6 = -1072693241;
      v9 = a1;
    }
    goto LABEL_28;
  }
  v15 = 1;
  while ( 1 )
  {
    if ( v14 - (unsigned __int64)v13 < 2 )
    {
      v6 = -1072693248;
      goto LABEL_27;
    }
    v16 = *v13;
    if ( (unsigned __int64)&v13[v16] > v14 )
      goto LABEL_60;
    if ( v13[1] == 4 )
      break;
    if ( v13[1] == 5 )
    {
      if ( (_BYTE)v16 != 7 )
        goto LABEL_60;
      v18 = v13[2];
      if ( v15 )
      {
        v6 = -1072693244;
        goto LABEL_27;
      }
      if ( PoolWithTag[v18 + 258] )
      {
        v6 = -1072693239;
        goto LABEL_58;
      }
      PoolWithTag[v18 + 258] = 1;
      ++PoolWithTag[515];
    }
    else if ( v13[1] == 11 )
    {
      if ( (_BYTE)v16 != 8 || (v17 = v13[3], v17 + v13[2] > 256) || (unsigned __int8)v17 > a1[4] || !(_BYTE)v17 )
      {
        v6 = -1072693243;
LABEL_27:
        v9 = v13;
        goto LABEL_28;
      }
    }
LABEL_53:
    if ( *v13 )
    {
      v13 += *v13;
      if ( (unsigned __int64)v13 < v14 )
        continue;
    }
    goto LABEL_55;
  }
  if ( (_BYTE)v16 != 9 )
  {
LABEL_60:
    v6 = -1072693247;
    goto LABEL_27;
  }
  v19 = v13[2];
  v20 = v13[3];
  if ( v22 )
  {
    if ( v20 )
      goto LABEL_46;
    *PoolWithTag = v19;
    ++v24;
    *(_WORD *)(PoolWithTag + 1) = 256;
    PoolWithTag[514] = v13[4];
    PoolWithTag[515] = 0;
    v22 = 0;
    v15 = 0;
    *((_BYTE *)v8 + v19) = 1;
    goto LABEL_53;
  }
  if ( v19 == *PoolWithTag )
  {
    if ( PoolWithTag[v20 + 2] == 1 || PoolWithTag[1] >= v20 )
    {
LABEL_46:
      v6 = -1072693245;
      v9 = v13 + 3;
      goto LABEL_28;
    }
    goto LABEL_51;
  }
  if ( *((_BYTE *)v8 + v19) != 1 && *PoolWithTag <= v19 )
  {
    if ( v20 )
      goto LABEL_46;
    ++v24;
    *((_BYTE *)v8 + v19) = 1;
    *PoolWithTag = v19;
    memset(PoolWithTag + 2, 0, 0x100uLL);
LABEL_51:
    if ( PoolWithTag[515] != PoolWithTag[514] )
    {
      v6 = -1072693240;
      goto LABEL_27;
    }
    memset(PoolWithTag + 258, 0, 0x100uLL);
    v15 = 0;
    PoolWithTag[515] = 0;
    PoolWithTag[514] = v13[4];
    PoolWithTag[v20 + 2] = 1;
    PoolWithTag[1] = v20;
    goto LABEL_53;
  }
  v6 = -1072693245;
LABEL_58:
  v9 = v13 + 2;
LABEL_28:
  v4 = a4;
LABEL_29:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v6 < 0 )
  {
LABEL_34:
    *v4 = v9;
    return (unsigned int)v6;
  }
LABEL_65:
  *v4 = 0LL;
  return (unsigned int)v6;
}
