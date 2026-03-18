/*
 * XREFs of ?ConvertDCPixelFormatToD3DDI@@YAHW4DISPLAYCONFIG_PIXELFORMAT@@PEAW4_D3DDDIFORMAT@@@Z @ 0x1C00B9DC8
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B9E2C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDCPixelFormatToD3DDI(int a1, _DWORD *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ecx
  __int64 v4; // rax

  v2 = a1;
  v3 = 1;
  switch ( (_DWORD)v2 )
  {
    case 1:
      *a2 = 41;
      break;
    case 2:
      *a2 = 23;
      break;
    case 3:
      *a2 = 20;
      break;
    case 4:
      *a2 = 21;
      break;
    default:
      v4 = WdLogNewEntry5_WdWarning(1LL, a2);
      *(_QWORD *)(v4 + 24) = v2;
      WdLogEvent5_WdWarning(v4);
      return 0;
  }
  return v3;
}
