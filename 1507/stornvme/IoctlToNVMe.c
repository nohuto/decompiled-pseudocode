/*
 * XREFs of IoctlToNVMe @ 0x1C000A180
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001E50 (NVMeHwBuildIo.c)
 * Callees:
 *     SglToPrp @ 0x1C0005F6C (SglToPrp.c)
 *     FirmwareGetInfo @ 0x1C0008D64 (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C0008F38 (FirmwareDownload.c)
 *     FirmwareActivate @ 0x1C00092C4 (FirmwareActivate.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0009498 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C0009620 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000986C (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009E90 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000A048 (IoctlSetTemperatureThresholdProcess.c)
 *     CompareId @ 0x1C000D45C (CompareId.c)
 */

__int64 __fastcall IoctlToNVMe(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v5; // dl
  __int64 v6; // rcx
  int v7; // eax
  unsigned int Info; // eax
  int v9; // ebp
  _DWORD *v10; // rdx
  unsigned int *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // rdx
  unsigned int *v18; // rax
  unsigned __int64 v19; // r9
  unsigned int v20; // ebx

  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v6 = *(_QWORD *)(a2 + 64);
  else
    v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_DWORD *)(v6 + 16);
  if ( v7 == 1771392 )
  {
    if ( v5 == 40 )
    {
      v17 = *(_DWORD **)(a2 + 64);
      v18 = (unsigned int *)(a2 + 60);
    }
    else
    {
      v17 = *(_DWORD **)(a2 + 24);
      v18 = (unsigned int *)(a2 + 16);
    }
    v19 = *v18;
    if ( (unsigned int)v19 >= 0x34 )
    {
      a3 = (unsigned int)v17[11];
      if ( v19 >= a3 + (unsigned __int64)(unsigned int)v17[12]
        && v17[7]
        && (v17[10] & 0x7FFFFFFF) == 1
        && (unsigned int)a3 >= 0x34
        && (a3 & 3) == 0 )
      {
        switch ( v17[9] )
        {
          case 1:
            Info = FirmwareGetInfo((__int64)a1, a2);
            goto LABEL_43;
          case 2:
            Info = FirmwareDownload(a1, a2);
            goto LABEL_43;
          case 3:
            Info = FirmwareActivate((__int64)a1, a2);
            goto LABEL_43;
        }
      }
      else
      {
        v17[5] = 3;
      }
    }
    goto LABEL_45;
  }
  if ( v7 != 2954240 )
  {
    if ( v7 == 3002880 && (unsigned __int8)CompareId((unsigned int)"SETTEMPT", 8, (int)v6 + 4, 8, 0LL) )
    {
      Info = IoctlSetTemperatureThresholdProcess((__int64)a1, a2);
LABEL_43:
      v20 = Info;
      goto LABEL_47;
    }
    goto LABEL_7;
  }
  v9 = v6 + 4;
  if ( (unsigned __int8)CompareId((unsigned int)"PROTOCOL", 8, (int)v6 + 4, 8, 0LL) )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v10 = *(_DWORD **)(a2 + 64);
      v11 = (unsigned int *)(a2 + 60);
    }
    else
    {
      v10 = *(_DWORD **)(a2 + 24);
      v11 = (unsigned int *)(a2 + 16);
    }
    v12 = *v11;
    if ( (unsigned int)v12 >= 0x4C )
    {
      v13 = (unsigned int)v10[13];
      a3 = v13 + 36;
      if ( v12 >= v13 + 36 + (unsigned __int64)(unsigned int)v10[14] )
      {
        if ( (!(_DWORD)v13 || (a3 & 7) == 0) && v10[9] == 3 )
        {
          v14 = v10[10];
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( !v15 )
            {
              Info = QueryProtocolInfoIdentifyData((__int64)a1, a2);
              goto LABEL_43;
            }
            v16 = v15 - 1;
            if ( !v16 )
            {
              Info = QueryProtocolInfoLogPageData((__int64)a1, a2);
              goto LABEL_43;
            }
            if ( v16 == 1 )
            {
              Info = QueryProtocolInfoFeatureData((__int64)a1, a2);
              goto LABEL_43;
            }
          }
        }
        goto LABEL_7;
      }
    }
LABEL_45:
    *(_BYTE *)(a2 + 3) = 21;
    goto LABEL_46;
  }
  if ( (unsigned __int8)CompareId((unsigned int)"TEMPERAT", 8, v9, 8, 0LL) )
  {
    Info = IoctlQueryTemperatureInfoProcess((__int64)a1, a2);
    goto LABEL_43;
  }
LABEL_7:
  *(_BYTE *)(a2 + 3) = 6;
LABEL_46:
  v20 = -1056964602;
LABEL_47:
  if ( !*(_BYTE *)(a2 + 3) )
    SglToPrp((__int64)a1, a2, a3);
  return v20;
}
