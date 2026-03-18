/*
 * XREFs of ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D060
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0096990 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C009D310 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D3B0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00B98D4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters2(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS2 *v7; // rsi
  int v8; // edi
  DXGGLOBAL *Global; // rax
  int MaximumAdapterCount; // eax
  void *v11; // rcx
  size_t v12; // r8
  const void *v13; // rdx
  DXGGLOBAL *v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rax
  DXGGLOBAL *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+28h] [rbp-100h] BYREF
  __int64 v29; // [rsp+2Ch] [rbp-FCh]
  _BYTE Src[12]; // [rsp+34h] [rbp-F4h] BYREF
  void *v31[2]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v32[21]; // [rsp+50h] [rbp-D8h] BYREF
  int v33; // [rsp+F8h] [rbp-30h]

  v7 = a1;
  if ( a1 )
  {
    LODWORD(v31[0]) = 0;
    v31[1] = 0LL;
    v28 = 0;
    v29 = 0LL;
    memset(Src, 0, sizeof(Src));
    v32[0] = 0LL;
    v33 = 0;
    if ( a2 == 1 )
    {
      if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
      {
        a1 = (struct _D3DKMT_ENUMADAPTERS2 *)MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *(struct _D3DKMT_ENUMADAPTERS2 *)v31 = *v7;
    }
    else
    {
      *(struct _D3DKMT_ENUMADAPTERS2 *)v31 = *a1;
    }
    if ( !v31[1] )
    {
      v8 = 0;
      Global = DXGGLOBAL::GetGlobal((__int64)a1);
      MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
      goto LABEL_9;
    }
    v15 = DXGGLOBAL::GetGlobal((__int64)a1);
    v16 = DXGGLOBAL::GetMaximumAdapterCount(v15);
    v17 = (unsigned int)v31[0];
    if ( v16 < LODWORD(v31[0]) )
    {
      v23 = DXGGLOBAL::GetGlobal(LODWORD(v31[0]));
      v17 = DXGGLOBAL::GetMaximumAdapterCount(v23);
      LODWORD(v31[0]) = v17;
    }
    v18 = 1LL;
    if ( v17 > 1 )
      v18 = v17;
    PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(v32, v18);
    if ( v32[0] )
    {
      *(_QWORD *)&Src[4] = v32[0];
      LODWORD(v29) = v31[0];
      v8 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v28, a2, a3, a4);
      if ( v28 > LODWORD(v31[0]) )
      {
        v25 = WdLogNewEntry5_WdAssertion(LODWORD(v31[0]));
        *(_QWORD *)(v25 + 24) = 4310LL;
        WdLogEvent5_WdAssertion(v25);
      }
      v20 = (unsigned int)v29;
      if ( v28 > (unsigned int)v29 )
      {
        v26 = WdLogNewEntry5_WdAssertion((unsigned int)v29);
        *(_QWORD *)(v26 + 24) = 4311LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v21 = HIDWORD(v29);
      if ( v28 > HIDWORD(v29) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v27 + 24) = 4312LL;
        WdLogEvent5_WdAssertion(v27);
        v21 = HIDWORD(v29);
      }
      if ( v8 < 0 )
        goto LABEL_44;
      if ( (unsigned int)v29 < v21 )
      {
        v8 = -1073741789;
        LODWORD(v31[0]) = 0;
LABEL_10:
        if ( v8 >= 0 )
        {
          if ( a2 == 1 )
          {
            if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *v7 = *(struct _D3DKMT_ENUMADAPTERS2 *)v31;
          }
          else
          {
            memmove(v7, v31, 0x10uLL);
          }
          v11 = v31[1];
          if ( v31[1] )
          {
            if ( a2 == 1 )
            {
              v12 = 20LL * v28;
              v13 = *(const void **)&Src[4];
              if ( (char *)v31[1] + v12 > (void *)MmUserProbeAddress || (char *)v31[1] + v12 <= v31[1] )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v11, v13, v12);
            }
            else
            {
              memmove(v31[1], *(const void **)&Src[4], 20LL * v28);
            }
          }
          goto LABEL_22;
        }
LABEL_44:
        while ( v28 )
          DXGADAPTER::DestroyHandle(*(_DWORD *)(*(_QWORD *)&Src[4] + 20LL * --v28));
LABEL_22:
        PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v32);
        return (unsigned int)v8;
      }
      MaximumAdapterCount = v28;
LABEL_9:
      LODWORD(v31[0]) = MaximumAdapterCount;
      goto LABEL_10;
    }
    v24 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v24);
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v32);
    return 3221225495LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
}
