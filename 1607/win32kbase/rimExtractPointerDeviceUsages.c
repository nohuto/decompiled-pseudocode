/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C00DD0D8
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C00DDD00 (rimPopulateContactFrameData.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C0006454 (rimHidP_GetUsageValue.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetUsageValueArray @ 0x1C00D2EDC (rimHidP_GetUsageValueArray.c)
 *     rimHidP_GetUsages @ 0x1C00D2F40 (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C00DB464 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C00DC994 (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C00DCA4C (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C00DCC74 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C00DD004 (rimExtractPenInfo.c)
 *     rimExtractTouchInfo @ 0x1C00DD80C (rimExtractTouchInfo.c)
 */

__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v11; // rdi
  unsigned __int8 v12; // bl
  unsigned int v13; // r14d
  __int64 v14; // rsi
  struct _HIDP_PREPARSED_DATA *v16; // r15
  __int64 v18; // rcx
  unsigned int v19; // r12d
  int v20; // eax
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r8
  BOOL v23; // r15d
  int UsageValueArray; // eax
  int DigitizerPageButtonUsages; // ebx
  _DWORD *v26; // r14
  int v27; // edx
  int v28; // ecx
  _DWORD *v29; // rax
  unsigned __int16 v30; // r9
  int v31; // edx
  int v32; // eax
  unsigned __int16 v33; // r8
  __int64 v35; // [rsp+28h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp+8h]
  struct _HIDP_PREPARSED_DATA *v37; // [rsp+A8h] [rbp+10h]
  char v38; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v37 = a2;
  v11 = a1 + 320;
  v12 = *a3;
  v13 = a4;
  v14 = a7;
  v36 = *(_QWORD *)(a1 + 680);
  v16 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    51,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  *a8 = 1;
  v18 = 0LL;
  v19 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 696) )
  {
LABEL_23:
    *(_DWORD *)(v14 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
    *(_DWORD *)(v14 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v28 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v28 - 1) > 3 )
    {
      if ( v28 != 7 )
      {
        if ( (unsigned int)(v28 - 5) > 1 )
        {
          LOBYTE(v27) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v27,
            5,
            54,
            (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
        }
        else
        {
          v31 = a6;
          *(_DWORD *)(v14 + 64) = 3;
          rimExtractPenInfo(a1, v31, (_DWORD *)v14);
        }
LABEL_44:
        DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, v16, a3, v13, v14);
        if ( DigitizerPageButtonUsages >= 0 )
        {
          v32 = *(_DWORD *)(a1 + 252);
          if ( (v32 & 0x20) != 0 && (v32 & 0x10000) == 0 )
          {
            v33 = *(_WORD *)(v14 + 58);
            LOWORD(a8) = 0;
            LODWORD(a9) = 1;
            if ( rimHidP_GetUsages(HidP_Input, 0xFF00u, v33, (unsigned __int16 *)&a8, (unsigned int *)&a9, v16, a3, v13) >= 0
              && (_DWORD)a9 == 1
              && (_WORD)a8 == 207 )
            {
              *a11 = 1;
            }
          }
        }
        goto LABEL_51;
      }
      *(_DWORD *)(v14 + 64) = 5;
    }
    else
    {
      *(_DWORD *)(v14 + 64) = 2;
    }
    rimExtractTouchInfo(a1, a6, v14);
    goto LABEL_44;
  }
  v20 = v12;
  LODWORD(a7) = v12;
  while ( v20 != *(_DWORD *)(v11 + 4) )
  {
LABEL_21:
    ++v19;
    v11 += 60LL;
    if ( v19 >= *(_DWORD *)(a1 + 696) )
    {
      v16 = v37;
      goto LABEL_23;
    }
  }
  v21 = *(_WORD *)(v11 + 12);
  v22 = *(_WORD *)(v14 + 58);
  v23 = (unsigned __int16)(v21 - 48) <= 1u;
  if ( v36 && *(_WORD *)(v36 + 8) && *(_WORD *)v11 == 1 && (unsigned __int16)(*(_WORD *)(v11 + 12) - 48) <= 1u )
  {
    *(_DWORD *)(v11 + 48) = 0;
    v18 = *(unsigned __int16 *)(v14 + 58);
    v22 = *(_WORD *)(*(_QWORD *)(v36 + 24) + 8 * v18 + 2);
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 && *(_WORD *)v11 == 1 && (unsigned __int16)(v21 - 48) <= 1u )
  {
    UsageValueArray = rimHidP_GetUsageValueArray(v18, 1u, v22, v21, &v38, v35, v37, a3, v13);
    DigitizerPageButtonUsages = UsageValueArray;
    if ( UsageValueArray < 0 )
    {
      v30 = 52;
      goto LABEL_36;
    }
    v26 = (_DWORD *)(v11 + 52);
    rimExtractGeometryPoints(*(_WORD *)(v11 + 12), v14, v11 + 52, (__int64)&v38, *(unsigned __int16 *)(v11 + 56));
    v18 = 0LL;
LABEL_15:
    if ( *(_DWORD *)(v11 + 16) )
    {
      if ( *v26 < *(_DWORD *)(v11 + 32) || *v26 > *(_DWORD *)(v11 + 36) )
      {
        if ( *(_WORD *)v11 == 1 && v23 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v13 = v39;
          if ( *(_WORD *)(v11 + 12) == 48 )
            v29 = a9;
          else
            v29 = a10;
          *v29 = 1;
          goto LABEL_20;
        }
      }
      else
      {
        *a8 = 0;
      }
    }
    else
    {
      *a8 = 0;
      if ( !v23 || a5 )
      {
        RIMEnsureUsageWithinLogicalBoundary(v11);
        v18 = 0LL;
      }
    }
    v13 = v39;
LABEL_20:
    v20 = a7;
    goto LABEL_21;
  }
  v26 = (_DWORD *)(v11 + 52);
  UsageValueArray = rimHidP_GetUsageValue(HidP_Input, *(_WORD *)v11, v22, v21, (unsigned int *)(v11 + 52), v37, a3, v39);
  v18 = 0LL;
  DigitizerPageButtonUsages = UsageValueArray;
  if ( UsageValueArray >= 0 )
    goto LABEL_15;
  v30 = 53;
LABEL_36:
  LODWORD(v35) = UsageValueArray;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    5u,
    v30,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
    v35);
LABEL_51:
  LODWORD(v35) = DigitizerPageButtonUsages;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x37u,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
    v35);
  return (unsigned int)DigitizerPageButtonUsages;
}
