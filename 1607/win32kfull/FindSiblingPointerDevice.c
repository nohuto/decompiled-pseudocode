/*
 * XREFs of FindSiblingPointerDevice @ 0x1C01CC488
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8CDC (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindSiblingPointerDevice(__int64 a1, __int64 a2)
{
  struct DEVICEINFO *v2; // rdi
  unsigned int v5; // ebp
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rcx

  v2 = gpRimDevBackedDeviceInfoList;
  v5 = 0;
  while ( v2 )
  {
    if ( *((_DWORD *)v2 + 79) )
    {
      v6 = *((_QWORD *)v2 + 58);
      v7 = *(_DWORD *)(a2 + 344);
      if ( *(_WORD *)(v6 + 110) == *(_WORD *)(a1 + 6)
        && *(_WORD *)(v6 + 112) == *(_WORD *)(a1 + 8)
        && v7 == *((_DWORD *)v2 + 86)
        && (!v7 || RtlCompareMemory(*(const void **)(a2 + 336), *((const void **)v2 + 42), v7) == v7) )
      {
        v8 = *((_QWORD *)v2 + 60);
        v5 = 1;
        if ( *(_DWORD *)(v8 + 24) == 7 )
        {
          *(_WORD *)(a2 + 740) |= 2u;
        }
        else if ( (unsigned int)(*(_DWORD *)(v8 + 24) - 5) > 1 )
        {
          if ( (unsigned int)(*(_DWORD *)(v8 + 24) - 1) <= 3 )
            *(_WORD *)(a2 + 740) |= 8u;
        }
        else
        {
          *(_WORD *)(a2 + 740) |= 4u;
        }
        return v5;
      }
    }
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  return v5;
}
