/*
 * XREFs of _GetPointerDeviceProperties @ 0x1C00EF474
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C00EEDF0 (NtUserGetPointerDeviceProperties.c)
 * Callees:
 *     ?_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@IPEAUtagPOINTER_DEVICE_PROPERTY@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00EF6B8 (-_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@I.c)
 *     ?GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00EF8A0 (-GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall GetPointerDeviceProperties(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        unsigned int a2,
        struct tagPOINTER_DEVICE_PROPERTY *a3,
        unsigned int a4)
{
  unsigned int v5; // ebx
  struct _HIDP_BUTTON_CAPS *v6; // r14
  USHORT v7; // r12
  unsigned __int16 v8; // r15
  int v10; // ecx
  struct _HIDP_PREPARSED_DATA *v11; // rdi
  struct _HIDP_VALUE_CAPS *v12; // r15
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // r13
  unsigned int v17; // edi
  USHORT v18; // r8
  unsigned int v19; // r8d
  USAGE *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v24; // rax
  USHORT ValueCapsLength[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v26; // [rsp+54h] [rbp-1Ch]
  unsigned int v27; // [rsp+58h] [rbp-18h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+5Ch] [rbp-14h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-10h] BYREF

  *(_DWORD *)ButtonCapsLength = 0;
  v5 = 0;
  v27 = 0;
  v6 = 0LL;
  ValueCapsLength[0] = 0;
  v7 = 0;
  v26 = 0;
  v8 = 0;
  PreparsedData = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &PreparsedData) )
    return 0LL;
  v10 = *((_DWORD *)a1 + 59);
  if ( (v10 & 2) != 0 )
  {
    v24 = *((_QWORD *)a1 + 87);
    v8 = *(_WORD *)(v24 + 44);
    v7 = *(_WORD *)(v24 + 12);
    v26 = v8;
  }
  if ( (v10 & 0x20) != 0 )
    v7 = *((_WORD *)a1 + 358);
  v11 = PreparsedData;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, v7, 0, 0LL, ValueCapsLength, PreparsedData) != -1072627705 )
    return 0LL;
  v12 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * (v8 + ValueCapsLength[0]), 1668707157LL);
  if ( v12 )
  {
    if ( (unsigned int)_PopulatePropertyUsageValues(a1, &v27, a4, v7, ValueCapsLength[0], v12, a2, a3, v11) )
    {
      v13 = *((_QWORD *)a1 + 87);
      if ( !v13
        || (v14 = *(_WORD *)(v13 + 14)) == 0
        || (unsigned int)_PopulatePropertyUsageValues(a1, &v27, a4, v14, v26, &v12[v27], a2, a3, v11) )
      {
        v15 = a2;
        v16 = v27;
        v17 = v15 - v27;
        *(_DWORD *)ButtonCapsLength = v17;
        if ( v17 )
        {
          v6 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72LL * v17, 1668707157LL);
          if ( v6 )
          {
            v18 = 0;
            if ( *((_DWORD *)a1 + 6) != 8 )
              v18 = v7;
            if ( HidP_GetSpecificButtonCaps(HidP_Input, 0, v18, 0, v6, ButtonCapsLength, PreparsedData) >= 0
              && v17 == *(_DWORD *)ButtonCapsLength )
            {
              memset((char *)a3 + 28 * v16, 0, 28LL * v17);
              v19 = 0;
              v5 = 1;
              if ( (unsigned int)v16 < a2 )
              {
                v20 = (USAGE *)((char *)a3 + 28 * v16 + 26);
                v21 = v17;
                do
                {
                  v22 = v19++;
                  *(v20 - 1) = v6[v22].UsagePage;
                  *v20 = v6[v22].Range.UsageMin;
                  *(_DWORD *)(v20 - 11) = 1;
                  v20 += 14;
                  --v21;
                }
                while ( v21 );
              }
            }
          }
        }
      }
    }
    Win32FreePool(v12);
  }
  if ( v6 )
    Win32FreePool(v6);
  return v5;
}
