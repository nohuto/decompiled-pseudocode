/*
 * XREFs of UsbhMakeId @ 0x1C0008D00
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C0008538 (UsbhBuildCompatibleID.c)
 *     UsbhGetLocationIdString @ 0x1C0008604 (UsbhGetLocationIdString.c)
 *     UsbhBuildDeviceID @ 0x1C00086EC (UsbhBuildDeviceID.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0008844 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildHardwareID @ 0x1C0008A88 (UsbhBuildHardwareID.c)
 *     UsbhBuildContainerID @ 0x1C002881C (UsbhBuildContainerID.c)
 *     UsbhBuildUnknownIds @ 0x1C0051C5C (UsbhBuildUnknownIds.c)
 * Callees:
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

char *__fastcall UsbhMakeId(
        int a1,
        _WORD *a2,
        void *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int16 a6,
        unsigned __int16 a7,
        char *Str)
{
  __int64 v9; // rsi
  size_t v12; // rsi
  char *v13; // rdi
  SIZE_T v14; // r15
  char *PoolWithTag; // rax
  char *v16; // r12
  size_t v17; // rbx
  char *v18; // rbx
  bool v19; // zf
  int v20; // ebp
  unsigned int i; // ecx

  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = 2 * v9;
  v13 = Str;
  v14 = v12 + (unsigned int)*a4 + 2LL * a5;
  if ( a1 == 2 && Str )
    v14 = v14 + 2 * strnlen(Str, 8uLL) - 2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v14, 0x42554855u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v14);
    v17 = (unsigned int)*a4;
    memmove(v16, a3, v17);
    v18 = &v16[v17];
    memmove(v18, a2, v12);
    v19 = *(_WORD *)v18 == 110;
    *a4 = v14;
    if ( !v19 )
    {
      do
      {
        if ( !a6 )
          break;
        v18 += 2;
      }
      while ( *(_WORD *)v18 != 110 );
    }
    if ( a1 )
    {
      v20 = a1 - 1;
      if ( v20 )
      {
        if ( v20 == 1 && Str )
        {
          for ( i = 0; i < 8; ++i )
          {
            if ( !*v13 )
              break;
            *(_WORD *)v18 = (unsigned __int8)*v13++;
            v18 += 2;
          }
        }
      }
      else if ( a6 == 2 )
      {
        *(_WORD *)v18 = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v18 + 1) = (a7 & 0xF) + 48;
      }
      else if ( a6 == 4 )
      {
        *(_WORD *)v18 = (a7 >> 12) + 48;
        *((_WORD *)v18 + 1) = (HIBYTE(a7) & 0xF) + 48;
        *((_WORD *)v18 + 2) = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v18 + 3) = (a7 & 0xF) + 48;
      }
    }
    else if ( a6 == 2 )
    {
      *(_WORD *)v18 = Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v18 + 1) = Nibble[a7 & 0xF];
    }
    else if ( a6 == 4 )
    {
      *(_WORD *)v18 = Nibble[(unsigned __int64)a7 >> 12];
      *((_WORD *)v18 + 1) = Nibble[HIBYTE(a7) & 0xF];
      *((_WORD *)v18 + 2) = Nibble[(unsigned __int8)a7 >> 4];
      *((_WORD *)v18 + 3) = Nibble[a7 & 0xF];
    }
  }
  else
  {
    *a4 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return v16;
}
