/*
 * XREFs of UsbhGetExtendedHubInformation @ 0x1C001EBD0
 * Callers:
 *     UsbhInitialize @ 0x1C0019A10 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D1D0 (UsbhEtwLogPortInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EDC0 (UsbhGetAcpiPortAttributes.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetExtendedHubInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r13
  unsigned __int16 v9; // si
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID PoolWithTag; // r15
  _DWORD *v15; // rax
  unsigned __int16 i; // di
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v26; // r10

  v8 = FdoExt(a1, a2, a3, a4);
  v9 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      41,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  v10 = FdoExt(a1, v5, v6, v7);
  PoolWithTag = ExAllocatePoolWithTag(
                  ExDefaultNonPagedPoolType,
                  4LL * (*((unsigned __int8 *)v10 + 2938) + 1),
                  0x42554855u);
  if ( PoolWithTag )
  {
    v15 = FdoExt(a1, v11, v12, v13);
    memset(PoolWithTag, 0, 4LL * (*((unsigned __int8 *)v15 + 2938) + 1));
  }
  *((_QWORD *)v8 + 377) = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = 1; ; ++i )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v12, v13);
      v17 = *(_QWORD *)(a1 + 64);
      if ( !v17 )
        UsbhTrapFatal_Dbg(a1, 0LL, v12, v13);
      if ( *(_DWORD *)v17 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v17, v12, v13);
      if ( i > *(unsigned __int8 *)(v17 + 2938) )
        break;
      v12 = i;
      if ( ((unsigned __int8)(1 << (i & 7)) & *((_BYTE *)v8 + ((unsigned __int64)i >> 3) + 2943)) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            42,
            (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
            i);
        *((_DWORD *)PoolWithTag + i) |= 0x10u;
      }
    }
    UsbhGetAcpiPortAttributes(a1, PoolWithTag);
    v21 = 0;
    if ( *((_QWORD *)v8 + 378) )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        if ( !v18 )
          UsbhTrapFatal_Dbg(a1, 0LL, v19, v20);
        if ( *(_DWORD *)v18 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v18, v19, v20);
        if ( v9 > *(unsigned __int8 *)(v18 + 2938) )
          break;
        if ( (*((_DWORD *)PoolWithTag + v9) & 0x40) != 0 )
        {
          Log(a1, 8, 1735410772, v9, 0LL);
          if ( v9 )
          {
            v23 = *(_QWORD *)(a1 + 64);
            if ( !v23 )
              UsbhTrapFatal_Dbg(a1, 0LL, v19, v20);
            if ( *(_DWORD *)v23 != 541218120 )
              UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v19, v20);
            if ( v9 <= *((unsigned __int8 *)FdoExt(a1, v22, v19, v20) + 2938) )
            {
              v24 = *(_QWORD *)(v23 + 3056);
              if ( v24 )
              {
                Log(a1, 8, 1735410750, v9, v24 + 2928LL * (v9 - 1));
                if ( v26 )
                  *(_QWORD *)(v26 + 2920) = (*(_DWORD *)(28LL * v9 + *((_QWORD *)v8 + 378) + 20) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(28LL * v9 + *((_QWORD *)v8 + 378) + 20)) & 0x7F80)) >> 7;
              }
            }
          }
        }
        ++v9;
      }
    }
    UsbhEtwLogPortInformation(a1, v18, v19, v20);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v21;
}
