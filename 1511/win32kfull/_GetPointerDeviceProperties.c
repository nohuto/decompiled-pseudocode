/*
 * XREFs of _GetPointerDeviceProperties @ 0x1C0118528
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C011A8E0 (NtUserGetPointerDeviceProperties.c)
 * Callees:
 *     ?_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@IPEAUtagPOINTER_DEVICE_PROPERTY@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C011876C (-_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@I.c)
 *     ?GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0118954 (-GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  struct _HIDP_PREPARSED_DATA *v11; // r13
  struct _HIDP_VALUE_CAPS *v12; // r15
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // r13
  unsigned int v16; // edi
  USHORT v17; // r8
  unsigned int v18; // r8d
  USAGE *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v23; // rax
  USHORT ValueCapsLength[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v25; // [rsp+54h] [rbp-1Ch]
  unsigned int v26; // [rsp+58h] [rbp-18h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+5Ch] [rbp-14h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-10h] BYREF

  *(_DWORD *)ButtonCapsLength = 0;
  v5 = 0;
  v26 = 0;
  v6 = 0LL;
  ValueCapsLength[0] = 0;
  v7 = 0;
  v25 = 0;
  v8 = 0;
  PreparsedData = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &PreparsedData) )
    return 0LL;
  v10 = *((_DWORD *)a1 + 63);
  if ( (v10 & 8) != 0 )
  {
    v23 = *((_QWORD *)a1 + 89);
    v8 = *(_WORD *)(v23 + 44);
    v7 = *(_WORD *)(v23 + 12);
    v25 = v8;
  }
  if ( (v10 & 0x80u) != 0 )
    v7 = *((_WORD *)a1 + 366);
  v11 = PreparsedData;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, v7, 0, 0LL, ValueCapsLength, PreparsedData) != -1072627705 )
    return 0LL;
  v12 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * (v8 + ValueCapsLength[0]));
  if ( v12 )
  {
    if ( (unsigned int)_PopulatePropertyUsageValues(a1, &v26, a4, v7, ValueCapsLength[0], v12, a2, a3, v11) )
    {
      v13 = *((_QWORD *)a1 + 89);
      if ( !v13
        || (v14 = *(_WORD *)(v13 + 14)) == 0
        || (unsigned int)_PopulatePropertyUsageValues(a1, &v26, a4, v14, v25, &v12[v26], a2, a3, v11) )
      {
        v15 = v26;
        v16 = a2 - v26;
        *(_DWORD *)ButtonCapsLength = v16;
        if ( v16 )
        {
          v6 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72LL * v16);
          if ( v6 )
          {
            v17 = 0;
            if ( *((_DWORD *)a1 + 6) != 8 )
              v17 = v7;
            if ( HidP_GetSpecificButtonCaps(HidP_Input, 0, v17, 0, v6, ButtonCapsLength, PreparsedData) >= 0
              && v16 == *(_DWORD *)ButtonCapsLength )
            {
              memset((char *)a3 + 28 * v15, 0, 28LL * v16);
              v18 = 0;
              v5 = 1;
              if ( (unsigned int)v15 < a2 )
              {
                v19 = (USAGE *)((char *)a3 + 28 * v15 + 26);
                v20 = v16;
                do
                {
                  v21 = v18++;
                  *(v19 - 1) = v6[v21].UsagePage;
                  *v19 = v6[v21].Range.UsageMin;
                  *(_DWORD *)(v19 - 11) = 1;
                  v19 += 14;
                  --v20;
                }
                while ( v20 );
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
