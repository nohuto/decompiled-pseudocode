/*
 * XREFs of ExtractPointerPropertyValues @ 0x1C01C734C
 * Callers:
 *     ?GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01EFDB0 (-GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00E49B4 (-GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall ExtractPointerPropertyValues(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        USHORT a2,
        ULONG a3,
        CHAR *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  USHORT v7; // r13
  unsigned int v9; // ebx
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  struct _USAGE_AND_PAGE *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  char *v17; // rcx
  unsigned int v18; // r12d
  NTSTATUS SpecificValueCaps; // ecx
  __int64 v20; // r10
  __int64 v21; // r11
  int v22; // eax
  __int64 v23; // rdx
  int v24; // edx
  __int64 v25; // r9
  ULONG v26; // ecx
  USHORT ValueCapsLength; // [rsp+44h] [rbp-124h] BYREF
  USHORT v29; // [rsp+48h] [rbp-120h]
  int v30; // [rsp+4Ch] [rbp-11Ch]
  int v31; // [rsp+50h] [rbp-118h]
  ULONG ReportLength; // [rsp+54h] [rbp-114h]
  NTSTATUS UsageValue; // [rsp+58h] [rbp-110h]
  int v34; // [rsp+5Ch] [rbp-10Ch]
  ULONG UsageLength; // [rsp+60h] [rbp-108h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+68h] [rbp-100h] BYREF
  __int64 v37; // [rsp+70h] [rbp-F8h]
  ULONG v38; // [rsp+78h] [rbp-F0h]
  unsigned int v39; // [rsp+7Ch] [rbp-ECh]
  PCHAR Report; // [rsp+88h] [rbp-E0h]
  __int64 v41; // [rsp+90h] [rbp-D8h]
  __int64 v42; // [rsp+98h] [rbp-D0h]
  struct _USAGE_AND_PAGE *v43; // [rsp+A8h] [rbp-C0h]
  char *v44; // [rsp+B0h] [rbp-B8h]
  __int64 v45; // [rsp+B8h] [rbp-B0h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+D0h] [rbp-98h] BYREF

  Report = a4;
  ReportLength = a3;
  v7 = a2;
  v41 = a6;
  v37 = a7;
  v9 = 0;
  PreparsedData = 0LL;
  v10 = 0;
  v30 = 0;
  v31 = 1;
  v34 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( a1 )
  {
    if ( a5 <= *((_DWORD *)a1 + 76) )
    {
      v13 = (struct _USAGE_AND_PAGE *)Win32AllocPool(4LL * *((unsigned int *)a1 + 400), 2020635477LL);
      v43 = v13;
      if ( v13 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &PreparsedData, v11, v12) )
        {
          Win32FreePool(v13, v14, v15);
          return 0LL;
        }
        UsageLength = *((_DWORD *)a1 + 400);
        v17 = (char *)a1 + 320;
        v44 = (char *)a1 + 320;
        v18 = 0;
        v39 = 0;
        while ( v18 < a5 )
        {
          v29 = v7;
          if ( *((_DWORD *)v17 + 1) == (unsigned __int8)*Report )
          {
            ValueCapsLength = 1;
            v42 = 28LL * v18;
            SpecificValueCaps = HidP_GetSpecificValueCaps(
                                  HidP_Input,
                                  *(_WORD *)(v42 + v41 + 24),
                                  a2,
                                  *(_WORD *)(v42 + v41 + 26),
                                  &ValueCaps,
                                  &ValueCapsLength,
                                  PreparsedData);
            v20 = v42;
            v21 = v41;
            if ( *(int *)(v42 + v41 + 4) > 1
              || (v14 = 0x80000000LL, (int)(SpecificValueCaps + 0x80000000) < 0)
              || SpecificValueCaps == -1072627705 )
            {
              v22 = 1;
              v31 = 1;
            }
            else
            {
              v22 = 0;
              v31 = 0;
            }
            if ( v22 )
            {
              v23 = *((_QWORD *)a1 + 85);
              v45 = v23;
              if ( v23 && *(_WORD *)(v23 + 8) && (unsigned __int16)(*(_WORD *)(v42 + v41 + 26) - 48) <= 1u )
              {
                v7 = *(_WORD *)(*(_QWORD *)(v23 + 24) + 8LL * a2 + 2);
                v29 = v7;
              }
              UsageValue = HidP_GetUsageValue(
                             HidP_Input,
                             *(_WORD *)(v42 + v41 + 24),
                             v7,
                             *(_WORD *)(v42 + v41 + 26),
                             (PULONG)(v37 + 4LL * v18),
                             PreparsedData,
                             Report,
                             ReportLength);
              if ( UsageValue < 0 )
                break;
              if ( ValueCaps.LogicalMin < 0 )
              {
                v15 = *(unsigned int *)(v37 + 4LL * v18);
                v24 = 1 << (LOBYTE(ValueCaps.BitSize) - 1);
                if ( (v24 & (unsigned int)v15) != 0 )
                  v14 = (unsigned int)v15 | -v24;
                else
                  v14 = (unsigned int)v15;
                *(_DWORD *)(v37 + 4LL * v18) = v14;
              }
            }
            else
            {
              v15 = v18;
              v25 = v37;
              *(_DWORD *)(v37 + 4LL * v18) = 0;
              if ( v34 )
              {
                UsageValue = 0;
              }
              else
              {
                UsageValue = HidP_GetUsagesEx(HidP_Input, a2, v13, &UsageLength, PreparsedData, Report, ReportLength);
                v34 = 1;
                if ( UsageValue < 0 )
                  break;
                v20 = v42;
                v15 = v18;
                v21 = v41;
                v25 = v37;
              }
              v26 = 0;
              v38 = 0;
              while ( v26 < UsageLength )
              {
                v14 = v26;
                if ( v13[v26].UsagePage == *(_WORD *)(v20 + v21 + 24) && v13[v26].Usage == *(_WORD *)(v20 + v21 + 26) )
                  *(_DWORD *)(v25 + 4 * v15) = 1;
                v38 = ++v26;
              }
            }
            ++v10;
            v17 = (char *)a1 + 320;
            v30 = v10;
          }
          v39 = ++v18;
          v7 = a2;
        }
        Win32FreePool(v13, v14, v15);
      }
    }
  }
  if ( v10 == a5 )
    return 1;
  return v9;
}
