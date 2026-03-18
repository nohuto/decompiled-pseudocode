/*
 * XREFs of RIMGetDeviceProperties @ 0x1C00C2400
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMGetDeviceProperties(void *a1, void *a2, unsigned __int64 a3, char a4)
{
  int v8; // ebx
  _BYTE *v9; // rsi
  PVOID v10; // r9
  char *v11; // rdx
  char v12; // al
  int v13; // r8d
  _DWORD *v14; // rcx
  int *v15; // rcx
  _QWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  int v20; // [rsp+30h] [rbp-38h]
  PVOID v21; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x73u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v21);
  if ( v8 >= 0 )
  {
    v9 = v21;
    RIMLockExclusive((__int64)v21 + 96);
    if ( v9[73] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x74u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      v8 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v8 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 64;
        else
          v11 = 0LL;
        if ( *((_QWORD *)v11 + 27) )
        {
          v12 = v11[48];
          if ( v12 == 1 )
          {
            v13 = (*((_DWORD *)v11 + 44) >> 12) & 1;
            v20 = v13;
            if ( a4 )
            {
              v14 = (_DWORD *)a3;
              if ( a3 >= (unsigned __int64)W32UserProbeAddress )
                v14 = W32UserProbeAddress;
              *v14 = 1;
              v15 = (int *)(a3 + 4);
              if ( a3 + 4 >= (unsigned __int64)W32UserProbeAddress )
                v15 = (int *)W32UserProbeAddress;
              *v15 = v13;
              v16 = (_QWORD *)(a3 + 8);
              if ( a3 + 8 >= (unsigned __int64)W32UserProbeAddress )
                v16 = W32UserProbeAddress;
              *(_OWORD *)v16 = *((_OWORD *)v11 + 25);
              v16[2] = *((_QWORD *)v11 + 52);
              *((_DWORD *)v16 + 6) = *((_DWORD *)v11 + 106);
            }
            else
            {
              *(_DWORD *)a3 = 1;
              *(_DWORD *)(a3 + 4) = v13;
              *(_OWORD *)(a3 + 8) = *((_OWORD *)v11 + 25);
              *(_QWORD *)(a3 + 24) = *((_QWORD *)v11 + 52);
              *(_DWORD *)(a3 + 32) = *((_DWORD *)v11 + 106);
            }
          }
          else if ( !v12 )
          {
            if ( a4 )
            {
              v17 = (_DWORD *)a3;
              if ( a3 >= (unsigned __int64)W32UserProbeAddress )
                v17 = W32UserProbeAddress;
              *v17 = 2;
              v18 = (_DWORD *)(a3 + 8);
              if ( a3 + 8 >= (unsigned __int64)W32UserProbeAddress )
                v18 = W32UserProbeAddress;
              *(_QWORD *)v18 = *((_QWORD *)v11 + 50);
              v18[2] = *((_DWORD *)v11 + 102);
            }
            else
            {
              *(_DWORD *)a3 = 2;
              *(_QWORD *)(a3 + 8) = *((_QWORD *)v11 + 50);
              *(_DWORD *)(a3 + 16) = *((_DWORD *)v11 + 102);
            }
          }
        }
        else
        {
          v8 = -1073741811;
        }
        ObfDereferenceObject(v10);
      }
    }
    RIMUnlockExclusive((__int64)(v9 + 96));
    ObfDereferenceObject(v9);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x75u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v8,
    v20);
  return (unsigned int)v8;
}
