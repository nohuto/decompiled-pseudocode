/*
 * XREFs of ?_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@IPEAUtagPOINTER_DEVICE_PROPERTY@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00EF6B8
 * Callers:
 *     _GetPointerDeviceProperties @ 0x1C00EF474 (_GetPointerDeviceProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _PopulatePropertyUsageValues(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        unsigned int *a2,
        unsigned int a3,
        USHORT a4,
        unsigned __int16 a5,
        struct _HIDP_VALUE_CAPS *a6,
        unsigned int a7,
        struct tagPOINTER_DEVICE_PROPERTY *a8,
        struct _HIDP_PREPARSED_DATA *a9)
{
  unsigned __int16 v9; // r15
  unsigned int v10; // ebx
  unsigned int v14; // esi
  struct _HIDP_VALUE_CAPS *v15; // r14
  unsigned __int16 v16; // r9
  struct tagPOINTER_DEVICE_PROPERTY *v17; // rdx
  __int64 v18; // rcx
  int v20; // eax

  v9 = a5;
  v10 = 0;
  if ( !a5 || !a7 )
    return 0LL;
  v14 = *a2;
  v15 = a6;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, a4, 0, a6, &a5, a9) >= 0 )
  {
    v16 = 0;
    if ( v14 < a7 )
    {
      v17 = a8;
      while ( 1 )
      {
        if ( v16 >= v9 )
          goto LABEL_13;
        if ( *((_BYTE *)a1 + 1408) == v15[v16].ReportID && v14 < a3 )
          break;
LABEL_12:
        ++v16;
        if ( v14 >= a7 )
          goto LABEL_13;
      }
      v18 = 28LL * v14;
      *(_WORD *)((char *)v17 + v18 + 24) = v15[v16].UsagePage;
      *(_WORD *)((char *)v17 + v18 + 26) = v15[v16].Range.UsageMin;
      *(_DWORD *)((char *)v17 + v18) = v15[v16].LogicalMin;
      *(_DWORD *)((char *)v17 + v18 + 4) = v15[v16].LogicalMax;
      if ( v15[v16].UsagePage != 1 )
        goto LABEL_10;
      if ( v15[v16].Range.UsageMin != 48 || *((_DWORD *)a1 + 6) == 7 )
      {
        if ( v15[v16].Range.UsageMin != 49 || *((_DWORD *)a1 + 6) == 7 )
        {
LABEL_10:
          *(_DWORD *)((char *)v17 + v18 + 8) = v15[v16].PhysicalMin;
          *(_DWORD *)((char *)v17 + v18 + 12) = v15[v16].PhysicalMax;
          *(_DWORD *)((char *)v17 + v18 + 16) = v15[v16].Units;
          *(_DWORD *)((char *)v17 + v18 + 20) = v15[v16].UnitsExp;
LABEL_11:
          ++v14;
          goto LABEL_12;
        }
        *(_DWORD *)((char *)v17 + v18 + 8) = 0;
        if ( ((*((_DWORD *)a1 + 187) - 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_18;
      }
      else
      {
        *(_DWORD *)((char *)v17 + v18 + 8) = 0;
        if ( ((*((_DWORD *)a1 + 187) - 1) & 0xFFFFFFFD) == 0 )
        {
LABEL_18:
          v20 = *((_DWORD *)a1 + 37);
LABEL_19:
          *(_DWORD *)((char *)v17 + v18 + 12) = v20;
          *(_DWORD *)((char *)v17 + v18 + 16) = 17;
          *(_DWORD *)((char *)v17 + v18 + 20) = 13;
          goto LABEL_11;
        }
      }
      v20 = *((_DWORD *)a1 + 38);
      goto LABEL_19;
    }
LABEL_13:
    *a2 = v14;
    return 1;
  }
  return v10;
}
