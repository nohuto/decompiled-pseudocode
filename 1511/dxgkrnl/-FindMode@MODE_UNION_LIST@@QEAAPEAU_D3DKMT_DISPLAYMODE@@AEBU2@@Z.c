/*
 * XREFs of ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00B8870
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DKMT_DISPLAYMODE *__fastcall MODE_UNION_LIST::FindMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v5 = *((_QWORD *)this + 1);
  while ( 1 )
  {
    v6 = v5 + 44LL * v3;
    if ( a2->Width == *(_DWORD *)v6
      && a2->Height == *(_DWORD *)(v6 + 4)
      && a2->Format == *(_DWORD *)(v6 + 8)
      && a2->IntegerRefreshRate == *(_DWORD *)(v6 + 12)
      && a2->DisplayOrientation == *(_DWORD *)(v6 + 28)
      && a2->DisplayFixedOutput == *(_DWORD *)(v6 + 32) )
    {
      v8 = *(unsigned int *)(v6 + 24);
      if ( a2->ScanLineOrdering == (_DWORD)v8 && ((*((_BYTE *)&a2->Flags + 4) ^ *(_BYTE *)(v6 + 40)) & 0x10) == 0 )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  if ( a2->RefreshRate.Numerator != *(_DWORD *)(v6 + 16) || a2->RefreshRate.Denominator != *(_DWORD *)(v6 + 20) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
    v9[3] = a2->Width;
    v9[4] = a2->Height;
    v9[5] = a2->Format;
    v9[6] = a2->IntegerRefreshRate;
    WdLogEvent5_WdDmmEvent(v9);
    v11 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v10);
    v11[3] = a2->RefreshRate.Numerator;
    v11[4] = a2->RefreshRate.Denominator;
    v11[5] = *(unsigned int *)(v6 + 16);
    v11[6] = *(unsigned int *)(v6 + 20);
    WdLogEvent5_WdDmmEvent(v11);
  }
  return (struct _D3DKMT_DISPLAYMODE *)v6;
}
