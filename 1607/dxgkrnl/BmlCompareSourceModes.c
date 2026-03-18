/*
 * XREFs of BmlCompareSourceModes @ 0x1C00C01D4
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00BFEF0 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00BFD08 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00C0300 (BmlCompareSourceModesWithConstraint.c)
 *     BmlGetPixelFormatPreference @ 0x1C00C048C (BmlGetPixelFormatPreference.c)
 *     BmlCompareModeRegions @ 0x1C00C058C (BmlCompareModeRegions.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1C01AB9F0 (BmlCompareSourceModesWithContentRes.c)
 *     ?RegionGreaterThanContentResAllDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z @ 0x1C01AC118 (-RegionGreaterThanContentResAllDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z.c)
 *     ?RegionGreaterThanContentResAnyDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z @ 0x1C01AC140 (-RegionGreaterThanContentResAnyDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z.c)
 */

__int64 __fastcall BmlCompareSourceModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v6; // di
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 result; // rax
  unsigned int v13; // ebx
  int PixelFormatPreference; // edi
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  const struct _POINTL *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  struct _D3DKMDT_2DREGION v25; // rbx
  struct _D3DKMDT_2DREGION v26; // rdi
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  const struct _POINTL *v32; // rdx
  const struct _POINTL *v33; // rdx
  int v34; // r10d
  const struct _POINTL *v35; // rdx
  const struct _POINTL *v36; // rdx
  int v37; // r10d
  struct _D3DKMDT_2DREGION v38; // [rsp+70h] [rbp+40h] BYREF
  const struct _POINTL *v39; // [rsp+78h] [rbp+48h]
  unsigned __int16 v40; // [rsp+80h] [rbp+50h]

  v40 = a3;
  v6 = a3;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = a5;
  if ( a4 == a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !v9 )
    return 1LL;
  v10 = 1;
  if ( g_IsMobileCore )
  {
    v21 = *(const struct _POINTL **)(104LL * v6 + a1 + 16);
    v39 = v21;
    if ( (v21->x & 0x8000) != 0 && !IsInternalVideoOutput(v21[10].x) && (*(_DWORD *)(v22 + a1 + 116) & 2) != 0 )
    {
      v25 = *(struct _D3DKMDT_2DREGION *)(a4 + 76);
      v26 = *(struct _D3DKMDT_2DREGION *)(v9 + 76);
      v38 = v25;
      a5 = (__int64)v26;
      if ( (v24 & 0x20000) != 0 )
      {
        v27 = *(_QWORD *)(a2 + 48);
        if ( !v27 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v28);
        }
        if ( !*(_QWORD *)(v27 + 8) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v29);
        }
        v30 = *(_QWORD *)(v27 + 8);
        if ( *(_DWORD *)(*(_QWORD *)(v30 + 16) + 276LL) == 1297040209 )
        {
          if ( !v30 )
          {
            v31 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v31);
          }
          if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v27 + 8) + 16LL)) <= 1300 )
          {
            if ( (unsigned int)RegionGreaterThanContentResAnyDimension(&v38, v39 + 18) )
            {
              if ( (unsigned int)RegionGreaterThanContentResAnyDimension((const struct _D3DKMDT_2DREGION *)&a5, v32) )
                return v25.cx * (unsigned __int64)v38.cy < v26.cx * (unsigned __int64)HIDWORD(a5) ? 1 : -1;
              return v10;
            }
            return 0xFFFFFFFFLL;
          }
        }
        v34 = RegionGreaterThanContentResAllDimension(&v38, v39 + 18);
        if ( v34 && (unsigned int)RegionGreaterThanContentResAllDimension((const struct _D3DKMDT_2DREGION *)&a5, v33) )
          return v25.cx * (unsigned __int64)v38.cy < v26.cx * (unsigned __int64)HIDWORD(a5) ? 1 : -1;
        if ( !v34 )
        {
          if ( (unsigned int)RegionGreaterThanContentResAllDimension((const struct _D3DKMDT_2DREGION *)&a5, v33) )
            return 0xFFFFFFFFLL;
          v37 = RegionGreaterThanContentResAnyDimension(&v38, v35);
          if ( v37 && (unsigned int)RegionGreaterThanContentResAnyDimension((const struct _D3DKMDT_2DREGION *)&a5, v36) )
            return v25.cx * (unsigned __int64)v38.cy < v26.cx * (unsigned __int64)HIDWORD(a5) ? 1 : -1;
          if ( v37 )
            return v10;
          if ( (unsigned int)RegionGreaterThanContentResAnyDimension((const struct _D3DKMDT_2DREGION *)&a5, v36) )
            return 0xFFFFFFFFLL;
          if ( v26.cx > v25.cx || v38.cy < HIDWORD(a5) && v26.cx >= v25.cx )
          {
            if ( HIDWORD(a5) >= v38.cy )
              return 0xFFFFFFFFLL;
            if ( v25.cx <= v26.cx )
              return (unsigned int)-1;
          }
        }
        return v10;
      }
      v6 = v40;
    }
  }
  v11 = 104LL * v6;
  if ( *(_BYTE *)(*(_QWORD *)(v11 + a1 + 16) + 121LL) && (*(_DWORD *)(a1 + 8) & 1) != 0
    || (result = BmlCompareSourceModesWithConstraint(a1, v6, a4, v9), !(_DWORD)result) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v11 + a1 + 16) + 121LL)
      || (*(_DWORD *)(v11 + a1 + 116) & 1) == 0
      || (result = BmlCompareSourceModesWithContentRes(a1, v6, a4, v9), !(_DWORD)result) )
    {
      v13 = *(_DWORD *)(a4 + 96);
      PixelFormatPreference = BmlGetPixelFormatPreference(*(unsigned int *)(v9 + 96));
      v15 = BmlGetPixelFormatPreference(v13);
      if ( v15 <= PixelFormatPreference )
      {
        if ( v15 >= PixelFormatPreference )
        {
          v10 = BmlCompareModeRegions(a4 + 76, v9 + 76);
          if ( v10 )
          {
            v17 = BmlCompareSourceModesWithMonitors(a1, v40, v16, a4, v9);
            if ( v17 )
              return v17;
          }
          return v10;
        }
        return (unsigned int)-1;
      }
      return v10;
    }
  }
  return result;
}
