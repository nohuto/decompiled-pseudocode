/*
 * XREFs of UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027360
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhQueryGlobalLegacyDeviceValue(
        __int64 a1,
        int a2,
        const void *a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  SIZE_T v6; // rsi
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  int v12; // ebp
  int v14; // r8d
  void *v15; // rcx
  PVOID PoolWithTag; // rax
  void *v17; // rbp
  __int64 v18; // rdi

  v6 = a4;
  v10 = 0;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      65,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v14,
        66,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        a1);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          67,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          a2);
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            1,
            68,
            (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
            (char)a3);
          v11 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              69,
              (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
              v6);
            v11 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_q(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1,
                70,
                (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                a5);
              v11 = WPP_GLOBAL_Control;
            }
          }
        }
      }
    }
  }
  if ( LOWORD(v11->DeviceType) )
    WPP_RECORDER_SF_q(v11->DeviceExtension, a2, 1, 71, (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids, a6);
  v12 = a2 - 1;
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      if ( *(_DWORD *)a6 != 3 )
        return v10;
      if ( (unsigned int)v6 > 2 )
        LODWORD(v6) = 2;
      if ( (_DWORD)v6 )
      {
        if ( a3 )
        {
          v15 = *(void **)(a6 + 8);
          if ( v15 )
          {
            if ( v15 != a3 )
              memmove(v15, a3, (unsigned int)v6);
            return v10;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)a6 > 1u )
    return v10;
  if ( !(_DWORD)v6 || !a3 || !*(_QWORD *)(a6 + 8) )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v6);
  v18 = *(_QWORD *)(a6 + 8);
  if ( v17 )
  {
    memmove(v17, a3, v6);
    *(_QWORD *)(v18 + 8) = v17;
    *(_DWORD *)(v18 + 4) = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
