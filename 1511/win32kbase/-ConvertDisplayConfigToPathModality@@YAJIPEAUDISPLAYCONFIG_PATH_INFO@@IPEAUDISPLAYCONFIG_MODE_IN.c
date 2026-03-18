/*
 * XREFs of ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00BA3F8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C00649A8 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B9E2C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 */

__int64 __fastcall ConvertDisplayConfigToPathModality(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        __int64 a3,
        struct DISPLAYCONFIG_MODE_INFO *a4,
        __int16 a5,
        struct _D3DKMT_GETPATHSMODALITY *a6,
        int *a7)
{
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned int v10; // r13d
  struct DISPLAYCONFIG_PATH_INFO *v11; // rdi
  unsigned int i; // r14d
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // r9
  int v19; // edi
  __int64 v20; // rax

  v7 = 0;
  v8 = 0;
  v10 = a3;
  v11 = a2;
  for ( i = a1; v8 < i; v11 = (struct DISPLAYCONFIG_PATH_INFO *)((char *)v11 + 72) )
  {
    if ( (*((_DWORD *)v11 + 17) & 1) != 0 )
    {
      if ( v7 >= *((unsigned __int16 *)a6 + 11) )
      {
        v20 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
        *(_QWORD *)(v20 + 24) = *((unsigned __int16 *)a6 + 11);
        WdLogEvent5_WdError(v20);
        return 3221225507LL;
      }
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(v11, v7, v8, v10, a4, a5, 1, a6, a7);
      if ( (int)result < 0 )
        return result;
      ++v7;
    }
    ++v8;
  }
  v14 = *((unsigned __int16 *)a6 + 10);
  v15 = 0;
  if ( *((_WORD *)a6 + 10) )
  {
    while ( 1 )
    {
      v16 = 216LL * v15;
      if ( (*(_DWORD *)((_BYTE *)a6 + v16 + 48) & 0x40000) == 0 )
      {
        v17 = v15;
        if ( v15 < v14 )
          break;
      }
LABEL_20:
      v14 = *((unsigned __int16 *)a6 + 10);
      if ( ++v15 >= v14 )
        return 0LL;
    }
    while ( 1 )
    {
      v18 = 216LL * v17;
      v19 = *(_DWORD *)((char *)a6 + v18 + 48);
      if ( (v19 & 0x40000) == 0 )
      {
        if ( a5 < 0 )
        {
          if ( *(_DWORD *)((char *)a6 + v16 + 180) != *(_DWORD *)((char *)a6 + v18 + 180)
            || *(_DWORD *)((char *)a6 + v16 + 184) != *(_DWORD *)((char *)a6 + v18 + 184) )
          {
            goto LABEL_19;
          }
        }
        else if ( *(_DWORD *)((char *)a6 + v16 + 64) != *(_DWORD *)((char *)a6 + v18 + 64)
               || !operator==(
                     (struct _D3DKMT_GETPATHSMODALITY *)((char *)a6 + v16 + 56),
                     (struct _D3DKMT_GETPATHSMODALITY *)((char *)a6 + v18 + 56)) )
        {
          goto LABEL_19;
        }
        *(_DWORD *)((char *)a6 + v18 + 248) = v15 | 0xFE510000;
        *(_DWORD *)((char *)a6 + v18 + 48) = v19 | 0x40000;
      }
LABEL_19:
      if ( ++v17 >= *((unsigned __int16 *)a6 + 10) )
        goto LABEL_20;
    }
  }
  return 0LL;
}
