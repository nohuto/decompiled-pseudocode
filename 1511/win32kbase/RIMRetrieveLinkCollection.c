/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C00087E4
 * Callers:
 *     RIMAssignTouchType @ 0x1C0007760 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMCacheAxisChildIndex @ 0x1C0005F00 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x1C0007AD8 (RIMGetPropertyCount.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C0009E90 (rimHidP_GetLinkCollectionNodes.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edx
  unsigned __int16 v11; // r14
  int v12; // r9d
  _WORD v14[2]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v15; // [rsp+44h] [rbp-55h]
  unsigned int v16; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v17[8]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v18[20]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v19; // [rsp+74h] [rbp-25h]

  v3 = *(_QWORD *)(a1 + 712);
  v16 = a3;
  v17[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 14) = 0;
  if ( v16 <= 1 )
    return v6;
  v8 = Win32AllocPool(24LL * v16, 1701016402LL);
  v9 = v8;
  if ( !v8 )
    return v6;
  *(_QWORD *)(v3 + 32) = v8;
  if ( (unsigned int)rimHidP_GetLinkCollectionNodes(v8, &v16, a2) != 1114112 )
    return v6;
  v15 = 0;
  v14[0] = 0;
  v11 = *(_WORD *)(v9 + 10);
  if ( !v16 )
    goto LABEL_23;
  while ( 1 )
  {
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v11, 81, (__int64)v18, (__int64)v14, a2) == 1114112 )
      break;
    v11 = *(_WORD *)(v9 + 24LL * v11 + 8);
    if ( (unsigned __int16)++v15 >= v16 )
      goto LABEL_23;
  }
  v14[0] = 1;
  *(_WORD *)(v3 + 12) = v11;
  *(_WORD *)(a1 + 732) = v11;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v11, 48, (__int64)v18, (__int64)v14, a2) == 1114112 )
  {
    v15 = v19;
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v11, 49, (__int64)v18, (__int64)v14, a2) == 1114112 )
    {
      v7 = 0;
      if ( v15 == 2 && v19 == 2 )
        *(_DWORD *)(a1 + 252) |= 0x800u;
    }
  }
  if ( !*(_WORD *)(v9 + 24LL * v11 + 10) )
  {
    if ( !v7 )
      goto LABEL_13;
LABEL_23:
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      3,
      23,
      (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
    goto LABEL_15;
  }
  if ( v7 )
  {
    v12 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v12 = 0;
LABEL_14:
  v6 = RIMCacheAxisChildIndex(a1, a2, v16, v12);
LABEL_15:
  if ( v6
    && (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v3 + 12), 0, 0LL, (__int64)v17, a2) == -1072627705 )
  {
    RIMGetPropertyCount(a1, *(_WORD *)(v3 + 12), v17[0], a2);
  }
  return v6;
}
