/*
 * XREFs of MiPConvertLogicalRect @ 0x1C0007EF0
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C00065DC (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x1C00EF164 (_GetPointerDeviceRects.c)
 * Callees:
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E6484 (VirtualizeMultiMonDigitizerSize.c)
 */

int *__fastcall MiPConvertLogicalRect(int *a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx

  v3 = 2540 * (*a2 - *(_DWORD *)(gpDispInfo + 104LL));
  *a1 = v3;
  *a1 = v3 / *(unsigned __int16 *)(gpDispInfo + 176LL);
  v4 = 2540 * (a2[2] - *(_DWORD *)(gpDispInfo + 104LL));
  a1[2] = v4;
  a1[2] = v4 / *(unsigned __int16 *)(gpDispInfo + 176LL);
  v5 = 2540 * (a2[1] - *(_DWORD *)(gpDispInfo + 108LL));
  a1[1] = v5;
  a1[1] = v5 / *(unsigned __int16 *)(gpDispInfo + 176LL);
  v6 = 2540 * (a2[3] - *(_DWORD *)(gpDispInfo + 108LL));
  a1[3] = v6;
  v7 = (unsigned int)(v6 >> 31);
  LODWORD(v7) = v6 % *(unsigned __int16 *)(gpDispInfo + 176LL);
  a1[3] = v6 / *(unsigned __int16 *)(gpDispInfo + 176LL);
  if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
    VirtualizeMultiMonDigitizerSize(a1, v7);
  return a1;
}
