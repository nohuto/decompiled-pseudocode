/*
 * XREFs of ExtractPointerPropertyValues @ 0x1C01C9FA0
 * Callers:
 *     ?GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01F8714 (-GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00EF8A0 (-GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     SignExtendLong @ 0x1C01CC91C (SignExtendLong.c)
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
  struct _USAGE_AND_PAGE *v11; // r14
  char *v13; // rcx
  unsigned int v14; // r12d
  __int64 v15; // r13
  NTSTATUS SpecificValueCaps; // ecx
  __int64 v17; // r10
  int v18; // eax
  __int64 v19; // rdx
  USHORT v20; // r8
  ULONG *v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG v24; // ecx
  USHORT v26; // [rsp+44h] [rbp-124h]
  USHORT ValueCapsLength[2]; // [rsp+48h] [rbp-120h] BYREF
  int v28; // [rsp+4Ch] [rbp-11Ch]
  int v29; // [rsp+50h] [rbp-118h]
  int v30; // [rsp+54h] [rbp-114h]
  ULONG ReportLength; // [rsp+58h] [rbp-110h]
  ULONG UsageLength; // [rsp+5Ch] [rbp-10Ch] BYREF
  __int64 v33; // [rsp+60h] [rbp-108h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-F8h]
  __int64 v36; // [rsp+78h] [rbp-F0h]
  PCHAR Report; // [rsp+88h] [rbp-E0h]
  ULONG v38; // [rsp+90h] [rbp-D8h]
  __int64 v39; // [rsp+98h] [rbp-D0h]
  struct _USAGE_AND_PAGE *v40; // [rsp+A0h] [rbp-C8h]
  __int64 v41; // [rsp+B0h] [rbp-B8h]
  char *v42; // [rsp+C0h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+D0h] [rbp-98h] BYREF

  Report = a4;
  ReportLength = a3;
  v7 = a2;
  v39 = a6;
  v36 = a7;
  v9 = 0;
  PreparsedData = 0LL;
  v10 = 0;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength[0] = 1;
  if ( a1 )
  {
    if ( a5 <= *((_DWORD *)a1 + 75) )
    {
      v11 = (struct _USAGE_AND_PAGE *)Win32AllocPool(4LL * *((unsigned int *)a1 + 74), 2020635477LL);
      v40 = v11;
      if ( v11 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &PreparsedData) )
        {
          Win32FreePool(v11);
          return 0LL;
        }
        UsageLength = *((_DWORD *)a1 + 74);
        v13 = (char *)a1 + 320;
        v42 = (char *)a1 + 320;
        v14 = 0;
        v35 = 0;
        while ( v14 < a5 )
        {
          v26 = v7;
          if ( *((_DWORD *)v13 + 1) == (unsigned __int8)*Report )
          {
            ValueCapsLength[0] = 1;
            v15 = 28LL * v14;
            v33 = v15;
            SpecificValueCaps = HidP_GetSpecificValueCaps(
                                  HidP_Input,
                                  *(_WORD *)(v15 + v39 + 24),
                                  a2,
                                  *(_WORD *)(v15 + v39 + 26),
                                  &ValueCaps,
                                  ValueCapsLength,
                                  PreparsedData);
            v17 = v39;
            if ( *(int *)(v15 + v39 + 4) > 1
              || (int)(SpecificValueCaps + 0x80000000) < 0
              || SpecificValueCaps == -1072627705 )
            {
              v18 = 1;
              v29 = 1;
            }
            else
            {
              v18 = 0;
              v29 = 0;
            }
            if ( v18 )
            {
              v19 = *((_QWORD *)a1 + 87);
              v41 = v19;
              if ( v19 && *(_WORD *)(v19 + 14) && (unsigned __int16)(*(_WORD *)(v15 + v39 + 26) - 48) <= 1u )
                v20 = *(_WORD *)(*(_QWORD *)(v19 + 24) + 8LL * a2 + 2);
              else
                v20 = v26;
              v21 = (ULONG *)(v36 + 4LL * v14);
              LODWORD(v33) = HidP_GetUsageValue(
                               HidP_Input,
                               *(_WORD *)(v33 + v39 + 24),
                               v20,
                               *(_WORD *)(v33 + v39 + 26),
                               v21,
                               PreparsedData,
                               Report,
                               ReportLength);
              if ( (int)v33 < 0 )
                break;
              if ( ValueCaps.LogicalMin < 0 )
                *v21 = SignExtendLong(*v21, ValueCaps.BitSize);
            }
            else
            {
              v22 = v14;
              v23 = v36;
              *(_DWORD *)(v36 + 4LL * v14) = 0;
              if ( v30 )
              {
                LODWORD(v33) = 0;
              }
              else
              {
                LODWORD(v33) = HidP_GetUsagesEx(HidP_Input, a2, v11, &UsageLength, PreparsedData, Report, ReportLength);
                v30 = 1;
                if ( (int)v33 < 0 )
                  break;
                v17 = v39;
                v22 = v14;
                v23 = v36;
              }
              v24 = 0;
              v38 = 0;
              while ( v24 < UsageLength )
              {
                if ( v11[v24].UsagePage == *(_WORD *)(v15 + v17 + 24) && v11[v24].Usage == *(_WORD *)(v15 + v17 + 26) )
                  *(_DWORD *)(v23 + 4 * v22) = 1;
                v38 = ++v24;
              }
            }
            ++v10;
            v7 = a2;
            v13 = (char *)a1 + 320;
            v28 = v10;
          }
          v35 = ++v14;
        }
        Win32FreePool(v11);
      }
    }
  }
  if ( v10 == a5 )
    return 1;
  return v9;
}
