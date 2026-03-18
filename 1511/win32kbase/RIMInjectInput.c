/*
 * XREFs of RIMInjectInput @ 0x1C00C2A80
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(void *a1, void *a2, char a3, const void *a4, unsigned int Size)
{
  int v8; // esi
  _BYTE *v9; // rbx
  PVOID v10; // r15
  char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // r8
  void *v15; // rcx
  unsigned __int64 v16; // rax
  PVOID v18; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x56u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v18);
  if ( v8 >= 0 )
  {
    v9 = v18;
    RIMLockExclusive((__int64)v18 + 96);
    if ( v9[73] || v9[74] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x59u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
      goto LABEL_22;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, Object);
    if ( v8 < 0 )
    {
LABEL_22:
      RIMUnlockExclusive((__int64)(v9 + 96));
      ObfDereferenceObject(v9);
      goto LABEL_23;
    }
    v10 = Object[0];
    if ( Object[0] )
      v11 = (char *)Object[0] + 64;
    else
      v11 = 0LL;
    Object[1] = v11;
    if ( (*((_DWORD *)v11 + 44) & 0x800) == 0 )
    {
      v8 = -1073741811;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x58u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
      goto LABEL_20;
    }
    RIMLockExclusive((__int64)(v9 + 744));
    *((_DWORD *)v11 + 62) = 0;
    v12 = *((_QWORD *)v11 + 50);
    v13 = *(unsigned __int16 *)(v12 + 44);
    if ( Size < (unsigned int)v13 )
      v13 = Size;
    v14 = (unsigned int)v13;
    *((_QWORD *)v11 + 32) = (unsigned int)v13;
    if ( a3 )
    {
      v15 = *(void **)(v12 + 24);
      v16 = (unsigned __int64)a4 + v13;
      if ( v16 < (unsigned __int64)a4 || v16 > (unsigned __int64)W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    else
    {
      v15 = *(void **)(v12 + 24);
      if ( a4 == v15 )
      {
LABEL_18:
        rimProcessDeviceBufferAndStartRead((__int64)v9, (__int64)v11);
        RIMUnlockExclusive((__int64)(v9 + 744));
LABEL_20:
        ObfDereferenceObject(v10);
        goto LABEL_22;
      }
    }
    memmove(v15, a4, v14);
    goto LABEL_18;
  }
LABEL_23:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x5Au,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v8);
  return (unsigned int)v8;
}
