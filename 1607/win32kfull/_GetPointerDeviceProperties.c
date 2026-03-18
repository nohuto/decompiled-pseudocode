/*
 * XREFs of _GetPointerDeviceProperties @ 0x1C00E4588
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C00E3D00 (NtUserGetPointerDeviceProperties.c)
 * Callees:
 *     ?_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@IPEAUtagPOINTER_DEVICE_PROPERTY@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00E47CC (-_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@I.c)
 *     ?GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00E49B4 (-GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _HIDP_VALUE_CAPS *v14; // r15
  USAGE *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int16 v18; // r9
  unsigned int v19; // edi
  __int64 v20; // r13
  unsigned int v21; // edi
  USHORT v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v26; // rax
  USHORT ValueCapsLength[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v28; // [rsp+54h] [rbp-1Ch]
  unsigned int v29; // [rsp+58h] [rbp-18h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+5Ch] [rbp-14h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-10h] BYREF

  *(_DWORD *)ButtonCapsLength = 0;
  v5 = 0;
  v29 = 0;
  v6 = 0LL;
  ValueCapsLength[0] = 0;
  v7 = 0;
  v28 = 0;
  v8 = 0;
  PreparsedData = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &PreparsedData) )
    return 0LL;
  v10 = *((_DWORD *)a1 + 63);
  if ( (v10 & 8) != 0 )
  {
    v26 = *((_QWORD *)a1 + 85);
    v8 = *(_WORD *)(v26 + 10);
    v7 = *(_WORD *)(v26 + 4);
    v28 = v8;
  }
  if ( (v10 & 0x80u) != 0 )
    v7 = *((_WORD *)a1 + 350);
  v11 = PreparsedData;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, v7, 0, 0LL, ValueCapsLength, PreparsedData) != -1072627705 )
    return 0LL;
  v14 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * (v8 + ValueCapsLength[0]), 1668707157LL);
  if ( v14 )
  {
    if ( (unsigned int)_PopulatePropertyUsageValues(a1, &v29, a4, v7, ValueCapsLength[0], v14, a2, a3, v11) )
    {
      v17 = *((_QWORD *)a1 + 85);
      if ( !v17
        || (v18 = *(_WORD *)(v17 + 8)) == 0
        || (unsigned int)_PopulatePropertyUsageValues(a1, &v29, a4, v18, v28, &v14[v29], a2, a3, v11) )
      {
        v19 = a2;
        v20 = v29;
        v21 = v19 - v29;
        *(_DWORD *)ButtonCapsLength = v21;
        if ( v21 )
        {
          v6 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72LL * v21, 1668707157LL);
          if ( v6 )
          {
            v22 = 0;
            if ( *((_DWORD *)a1 + 6) != 7 )
              v22 = v7;
            if ( HidP_GetSpecificButtonCaps(HidP_Input, 0, v22, 0, v6, ButtonCapsLength, PreparsedData) >= 0
              && v21 == *(_DWORD *)ButtonCapsLength )
            {
              memset((char *)a3 + 28 * v20, 0, 28LL * v21);
              v16 = 0LL;
              v5 = 1;
              if ( (unsigned int)v20 < a2 )
              {
                v15 = (USAGE *)((char *)a3 + 28 * v20 + 26);
                v23 = v21;
                do
                {
                  v24 = (unsigned int)v16;
                  v16 = (unsigned int)(v16 + 1);
                  *(v15 - 1) = v6[v24].UsagePage;
                  *v15 = v6[v24].Range.UsageMin;
                  *(_DWORD *)(v15 - 11) = 1;
                  v15 += 14;
                  --v23;
                }
                while ( v23 );
              }
            }
          }
        }
      }
    }
    Win32FreePool(v14, v15, v16);
  }
  if ( v6 )
    Win32FreePool(v6, v12, v13);
  return v5;
}
