/*
 * XREFs of USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003F7D0
 * Callers:
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003FD4C (UsbhGetMsOsExtendedConfigDesc.c)
 * Callees:
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall USBD_ValidateExtendedConfigurationDescriptor(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v7; // ebx
  __int16 v8; // r15
  _BYTE *v9; // rsi
  unsigned __int16 v10; // ax
  _BYTE *PoolWithTag; // rax
  unsigned __int8 *v12; // rcx
  int v13; // r9d
  unsigned __int64 v14; // r8
  int v15; // r11d
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r11d
  unsigned int v21; // eax
  unsigned __int8 *v22; // rdx
  unsigned __int8 *v23; // r10
  __int64 v24; // rbp
  __int64 v25; // rax
  _BYTE *v26; // rcx
  char v27; // r9
  unsigned int i; // r8d
  unsigned __int8 v29; // al
  char v30; // r9
  _BYTE *v31; // rcx
  unsigned int j; // r8d
  unsigned __int8 v33; // al

  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a1 && a2 >= 0x10 )
  {
    if ( !a3 )
      return (unsigned int)-1073741811;
    v10 = *(_WORD *)(a3 + 2);
    if ( v10 < 9u || v10 > a4 )
      return (unsigned int)-1073741811;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x100uLL, 0x42554855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x100uLL);
    v12 = (unsigned __int8 *)(a3 + 9);
    v13 = *(unsigned __int8 *)(a3 + 4);
    v14 = a3 + *(unsigned __int16 *)(a3 + 2);
    v15 = 0;
    while ( (unsigned __int64)v12 < v14 )
    {
      if ( (unsigned __int64)&v12[*v12] > v14 )
        goto LABEL_47;
      if ( v12[1] == 11 )
      {
        v16 = 1;
        v9[v12[2]] = 1;
        if ( v12[3] > 1u )
        {
          do
          {
            v17 = v16 + (unsigned int)v12[2];
            if ( (unsigned int)v17 >= 0x100 )
              goto LABEL_47;
            v9[v17] = 2;
          }
          while ( ++v16 < (unsigned int)v12[3] );
        }
        ++v15;
        v13 -= v12[3];
      }
      if ( v12[1] == 4 )
      {
        v18 = v12[2];
        if ( !v9[v18] )
          v9[v18] = 1;
      }
      if ( !*v12 )
        break;
      v12 += *v12;
    }
    v19 = *a1;
    v20 = v13 + v15;
    if ( (unsigned int)(v19 - 16) <= 0x1800 && (unsigned int)v19 <= a2 && *((_WORD *)a1 + 3) == 4 )
    {
      v21 = *((unsigned __int8 *)a1 + 8);
      if ( v21 <= v20 && (unsigned int)v19 >= 24 * v21 + 16 )
      {
        v22 = (unsigned __int8 *)(a1 + 4);
        v23 = (unsigned __int8 *)a1 + v19;
        if ( a1 + 4 >= (unsigned int *)((char *)a1 + v19) )
        {
LABEL_46:
          if ( v8 == *((unsigned __int8 *)a1 + 8) )
            goto LABEL_48;
        }
        else
        {
          v24 = 0x87FFFFFE03FFLL;
          while ( 1 )
          {
            v25 = *v22;
            if ( v9[v25] != 1 && v20 > 1 )
              break;
            v9[v25] = 3;
            v26 = v22 + 2;
            v27 = 0;
            for ( i = 0; i < 8; ++i )
            {
              if ( *v26 )
              {
                if ( v27 )
                  goto LABEL_47;
                v29 = *v26 - 48;
                if ( v29 > 0x2Fu || !_bittest64(&v24, v29) )
                  goto LABEL_47;
              }
              else
              {
                v27 = 1;
              }
              ++v26;
            }
            v30 = 0;
            v31 = v22 + 10;
            for ( j = 0; j < 8; ++j )
            {
              if ( *v31 )
              {
                if ( v30 )
                  goto LABEL_47;
                v33 = *v31 - 48;
                if ( v33 > 0x2Fu || !_bittest64(&v24, v33) )
                  goto LABEL_47;
              }
              else
              {
                v30 = 1;
              }
              ++v31;
            }
            v22 += 24;
            ++v8;
            if ( v22 >= v23 )
              goto LABEL_46;
          }
        }
      }
    }
  }
LABEL_47:
  v7 = -1073741811;
LABEL_48:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v7;
}
