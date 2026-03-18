/*
 * XREFs of RIMInjectInput @ 0x1C00CF600
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(void *a1, void *a2, char a3, const void *a4, unsigned int Size)
{
  void *v6; // rdi
  int v8; // esi
  _BYTE *v9; // rbx
  int v10; // edx
  int v11; // edx
  PVOID v12; // r15
  char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  size_t v16; // r8
  void *v17; // rcx
  ULONGLONG v18; // rax
  PVOID v20; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    87,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v20);
  if ( v8 >= 0 )
  {
    v9 = v20;
    RIMLockExclusive((__int64)v20 + 96);
    if ( v9[73] || v9[74] )
    {
      v8 = -1073741637;
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        90,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
      goto LABEL_22;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, Object);
    if ( v8 < 0 )
    {
LABEL_22:
      RIMUnlockExclusive((__int64)(v9 + 96));
      ObfDereferenceObject(v9);
      goto LABEL_23;
    }
    v12 = Object[0];
    if ( Object[0] )
      v13 = (char *)Object[0] + 64;
    else
      v13 = 0LL;
    Object[1] = v13;
    if ( (*((_DWORD *)v13 + 46) & 0x800) == 0 )
    {
      v8 = -1073741811;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        3,
        89,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
      goto LABEL_20;
    }
    RIMLockExclusive((__int64)(v9 + 696));
    *((_DWORD *)v13 + 64) = 0;
    v14 = *((_QWORD *)v13 + 58);
    v15 = *(unsigned __int16 *)(v14 + 44);
    if ( Size < (unsigned int)v15 )
      v15 = Size;
    v16 = (unsigned int)v15;
    *((_QWORD *)v13 + 33) = (unsigned int)v15;
    if ( a3 )
    {
      v17 = *(void **)(v14 + 24);
      v18 = (ULONGLONG)a4 + v15;
      if ( v18 < (unsigned __int64)a4 || v18 > W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    else
    {
      v17 = *(void **)(v14 + 24);
      if ( a4 == v17 )
      {
LABEL_18:
        rimProcessDeviceBufferAndStartRead((__int64)v9, (__int64)v13);
        RIMUnlockExclusive((__int64)(v9 + 696));
LABEL_20:
        ObfDereferenceObject(v12);
        goto LABEL_22;
      }
    }
    memmove(v17, a4, v16);
    goto LABEL_18;
  }
LABEL_23:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x5Bu,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v8);
  return (unsigned int)v8;
}
