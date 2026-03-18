/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C00DCD98
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C00DCBB4 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C0006454 (rimHidP_GetUsageValue.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00D23C0 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _WORD *a10)
{
  unsigned int v12; // ebp
  struct _HIDP_PREPARSED_DATA *v13; // rbx
  __int64 v14; // r14
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+98h] [rbp+10h]

  v26 = a2;
  v12 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  v24 = *(_QWORD *)(a2 + 480);
  v14 = *(_QWORD *)(v24 + 680);
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    45,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  *a8 = 0;
  *a9 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a10 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v13, a3, a4) < 0 )
  {
    if ( (*(_DWORD *)(v14 + 32) & 1) != 0 )
    {
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        5,
        48,
        (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
      goto LABEL_20;
    }
    *a6 = *(_DWORD *)v14;
    v20 = a9;
LABEL_17:
    *v20 = 1;
    goto LABEL_18;
  }
  if ( *a5 )
  {
    if ( *(_DWORD *)(v14 + 36) )
    {
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        5,
        46,
        (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
      RIMAbandonPointerDeviceFrame(a1, v26);
    }
    v16 = *a5;
    if ( *a5 <= *(_DWORD *)(v24 + 688) )
    {
      v17 = *(_DWORD *)v14;
      if ( v16 <= *(_DWORD *)v14 )
      {
        *a6 = v16;
        *(_DWORD *)(v14 + 36) = 0;
        *a8 = 1;
      }
      else
      {
        *a6 = v17;
        *(_DWORD *)(v14 + 36) = v16 - v17;
      }
      goto LABEL_8;
    }
    LODWORD(v23) = *(_DWORD *)(v24 + 688);
    LODWORD(v22) = *a5;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x2Fu,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
      v22,
      v23);
LABEL_20:
    v12 = -1073741668;
    goto LABEL_21;
  }
  v18 = *(_DWORD *)(v14 + 36);
  if ( v18 )
  {
    v19 = *(_DWORD *)v14;
    if ( v18 > *(_DWORD *)v14 )
    {
      *a6 = v19;
      *(_DWORD *)(v14 + 36) = v18 - v19;
      goto LABEL_18;
    }
    *a6 = v18;
    v20 = a8;
    *(_DWORD *)(v14 + 36) = 0;
    goto LABEL_17;
  }
LABEL_8:
  *a7 = 1;
LABEL_18:
  *a10 = *(_WORD *)(v14 + 6);
LABEL_21:
  LODWORD(v22) = v12;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x31u,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
    v22);
  return v12;
}
