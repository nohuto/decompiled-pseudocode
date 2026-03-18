/*
 * XREFs of GatherDeviceInfoSummaryInformation @ 0x1C00953F4
 * Callers:
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C00952BC (ApplyRimDevBackedDeviceSummaryInfomation.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

void __fastcall GatherDeviceInfoSummaryInformation(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  const wchar_t *v13; // rcx
  int v14; // eax
  unsigned __int16 v15; // cx
  __int16 v16; // r8
  __int16 v17; // ax
  unsigned int v18; // edx

  if ( !*(_QWORD *)(a1 + 216) )
  {
    if ( *(_BYTE *)(a1 + 48) != 2 )
      return;
    goto LABEL_10;
  }
  v9 = *(unsigned __int8 *)(a1 + 48);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return;
      if ( *(_DWORD *)(a1 + 308) )
      {
        v11 = *(_QWORD *)(a1 + 416);
        if ( v11 )
        {
          if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 7 )
            ++*a2;
        }
      }
      goto LABEL_10;
    }
    v13 = *(const wchar_t **)(a1 + 208);
    if ( !v13 || wcsncmp(v13, L"\\??\\Root#RDP", 0xCuLL) )
    {
      v14 = *(unsigned __int8 *)(a1 + 400);
      if ( v14 == 4 )
      {
        if ( *(_BYTE *)(a1 + 401) != 0xFF )
        {
LABEL_16:
          v15 = WORD2(gKeyboardInfo);
          gKeyboardInfo = *(_OWORD *)(a1 + 400);
          qword_1C031B120 = *(_QWORD *)(a1 + 416);
          dword_1C031B128 = *(_DWORD *)(a1 + 424);
          if ( v15 > WORD2(gKeyboardInfo) )
            WORD2(gKeyboardInfo) = v15;
        }
      }
      else if ( (unsigned int)(v14 - 7) <= 1 )
      {
        goto LABEL_16;
      }
    }
    a7 = a6;
LABEL_10:
    ++*a7;
    return;
  }
  v16 = *(_WORD *)(a1 + 400);
  v17 = *(_WORD *)(a1 + 66);
  if ( (v17 & 0x20) != 0 )
    *(_WORD *)(a1 + 66) = v17 & 0xFFDF;
  ++*a2;
  v18 = *(unsigned __int16 *)(a1 + 402);
  if ( *a5 > v18 )
    v18 = *a5;
  *a5 = v18;
  if ( v16 < 0 )
  {
    *a4 = 1;
    v16 &= ~0x8000u;
  }
  if ( v16 == 32 || v16 == 64 || v16 == 256 )
    ++*a3;
  if ( ghMouseDevice == -1 )
    ghMouseDevice = *(_QWORD *)a1;
}
