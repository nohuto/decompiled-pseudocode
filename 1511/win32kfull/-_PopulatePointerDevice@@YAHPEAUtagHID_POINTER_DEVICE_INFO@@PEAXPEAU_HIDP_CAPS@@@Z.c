/*
 * XREFs of ?_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z @ 0x1C01DE948
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     RetrieveNormalizationRange @ 0x1C01C3E8C (RetrieveNormalizationRange.c)
 *     GetDeviceButtons @ 0x1C01CC804 (GetDeviceButtons.c)
 *     IsEssentialUsage @ 0x1C01CDB68 (IsEssentialUsage.c)
 */

__int64 __fastcall _PopulatePointerDevice(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        struct _HIDP_CAPS *a3)
{
  struct _HIDP_PREPARSED_DATA *v3; // r12
  USHORT v5; // r8
  unsigned int v7; // ebx
  NTSTATUS SpecificValueCaps; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  struct _HIDP_VALUE_CAPS *ValueCaps; // rdi
  unsigned int v13; // r9d
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  USAGE Usage; // r9
  __int64 v17; // r8
  USHORT v18; // r10
  __int16 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _OWORD v25[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+80h] [rbp+17h]
  USHORT ValueCapsLength; // [rsp+D0h] [rbp+67h] BYREF
  struct _HIDP_PREPARSED_DATA *v28; // [rsp+D8h] [rbp+6Fh]

  v28 = PreparsedData;
  v3 = PreparsedData;
  v5 = *((_WORD *)a1 + 366);
  v7 = 0;
  ValueCapsLength = 0;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v5, 0, 0LL, &ValueCapsLength, PreparsedData);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v10 = 6LL;
  v11 = (_DWORD *)((char *)a1 + 32);
  do
  {
    *v11 = -1;
    v11 += 4;
    --v10;
  }
  while ( v10 );
  ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * ValueCapsLength);
  if ( !ValueCaps )
  {
    UserSetLastError(14);
    return 0LL;
  }
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, *((_WORD *)a1 + 366), 0, ValueCaps, &ValueCapsLength, v3) >= 0 )
  {
    v14 = 0;
    v15 = 0;
    if ( ValueCapsLength )
    {
      do
      {
        if ( v15 >= 6 )
          break;
        Usage = a3->Usage;
        if ( a3->Usage == 2 )
          Usage = 1;
        if ( (unsigned int)IsEssentialUsage(ValueCaps[v14].Range.UsageMin | (unsigned __int16)((ValueCaps[v14].UsagePage | (unsigned __int16)(16 * Usage)) << 8)) )
        {
          v20 = 60LL * v15;
          *(_WORD *)((char *)a1 + v20 + 336) = v19;
          *(_WORD *)((char *)a1 + v20 + 348) = *(&ValueCaps->Range.UsageMin + 4 * v17);
          *(_DWORD *)((char *)a1 + v20 + 340) = *(&ValueCaps->ReportID + 8 * v17);
          *(_WORD *)((char *)a1 + v20 + 346) = *(&ValueCaps->LinkUsagePage + 4 * v17);
          *(_DWORD *)((char *)a1 + v20 + 352) = *(&ValueCaps->HasNull + 8 * v17);
          *(_DWORD *)((char *)a1 + v20 + 368) = *(&ValueCaps->LogicalMin + 2 * v17);
          *(_DWORD *)((char *)a1 + v20 + 372) = *(&ValueCaps->LogicalMax + 2 * v17);
          *(_DWORD *)((char *)a1 + v20 + 376) = *(&ValueCaps->PhysicalMin + 2 * v17);
          *(_DWORD *)((char *)a1 + v20 + 380) = *(&ValueCaps->PhysicalMax + 2 * v17);
          *(_WORD *)((char *)a1 + v20 + 392) = *(&ValueCaps->BitSize + 4 * v17);
          v21 = 16LL * v15;
          *((_DWORD *)a1 + 4 * v15 + 8) = v15;
          *(_WORD *)((char *)a1 + v21 + 28) = *(&ValueCaps->UsagePage + 4 * v17);
          *(_WORD *)((char *)a1 + v21 + 30) = *(&ValueCaps->Range.UsageMin + 4 * v17);
          v22 = *(_OWORD *)(&ValueCaps->HasNull + 8 * v17);
          v25[0] = *(_OWORD *)(&ValueCaps->UsagePage + 4 * v17);
          v23 = *(_OWORD *)&ValueCaps->Reserved2[4 * v17 + 5];
          v25[1] = v22;
          v24 = *(_OWORD *)(&ValueCaps->PhysicalMin + 2 * v17);
          v25[2] = v23;
          *(_QWORD *)&v23 = *((_QWORD *)&ValueCaps->NotRange.DesignatorIndex + v17);
          v25[3] = v24;
          v26 = v23;
          RetrieveNormalizationRange(v13, (__int16 *)v25, (struct tagHID_POINTER_DEVICE_INFO *)((char *)a1 + v21 + 36));
          v18 = ValueCapsLength;
          ++v15;
        }
        ++v14;
      }
      while ( v14 < v18 );
      v3 = v28;
    }
    *((_DWORD *)a1 + 182) = v15;
    if ( (int)GetDeviceButtons((__int64)a1, v3, a3, v13) >= 0 )
      v7 = 1;
  }
  Win32FreePool(ValueCaps);
  return v7;
}
