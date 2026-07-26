/*
 * XREFs of ndisWmiGetGuid @ 0x1C00178A4
 * Callers:
 *     ndisWriteWmiStatusIndication @ 0x1C00176D4 (ndisWriteWmiStatusIndication.c)
 *     ndisWmiEnableEvents @ 0x1C00A8A18 (ndisWmiEnableEvents.c)
 *     ndisQueryGuidDataSize @ 0x1C00A95E4 (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x1C00A976C (ndisQueryGuidData.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A9BF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiDisableEvents @ 0x1C00B0578 (ndisWmiDisableEvents.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiGetGuid(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned int v7; // edx
  unsigned int i; // edi
  __int64 v9; // rcx
  bool v10; // zf

  *a1 = 0LL;
  v5 = *(_QWORD *)(a2 + 1368);
  v6 = -1073741823;
  if ( v5 )
  {
    v7 = *(unsigned __int16 *)(a2 + 1386);
    for ( i = 0; i < v7; v5 += 28LL )
    {
      if ( a3 )
      {
        v9 = *(_QWORD *)v5 - *a3;
        if ( *(_QWORD *)v5 == *a3 )
          v9 = *(_QWORD *)(v5 + 8) - a3[1];
        v10 = v9 == 0;
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 24) & 2) == 0 )
          goto LABEL_5;
        v10 = *(_DWORD *)(v5 + 16) == a4;
      }
      if ( v10 )
      {
        *a1 = v5;
        return 0;
      }
LABEL_5:
      ++i;
    }
  }
  return v6;
}
