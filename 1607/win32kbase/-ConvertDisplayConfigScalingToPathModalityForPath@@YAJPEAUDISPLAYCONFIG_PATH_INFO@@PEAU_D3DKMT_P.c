/*
 * XREFs of ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00C6050
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00C5AEC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConvertDisplayConfigScalingToPathModalityForPath(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        int *a3)
{
  __int64 v4; // rcx
  int *v5; // rdi
  int v7; // eax

  if ( *((_DWORD *)a1 + 11) == 1 )
    *((_DWORD *)a1 + 11) = 128;
  v4 = *((unsigned int *)a1 + 11);
  v5 = (int *)((char *)a2 + 132);
  if ( (_DWORD)v4 == 128 )
  {
    *v5 = 253;
    if ( a3 )
      *a3 = 1;
  }
  else if ( (int)((__int64 (__fastcall *)(__int64, char *, int *))qword_1C011B510)(v4, (char *)a2 + 8, v5) < 0 )
  {
    return 3221225485LL;
  }
  v7 = *v5;
  *(_DWORD *)a2 |= 0x10400u;
  *((_DWORD *)a2 + 32) = v7;
  return 0LL;
}
