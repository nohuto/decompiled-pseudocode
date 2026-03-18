/*
 * XREFs of ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0074480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C0074730 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00747D0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00A3884 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters2(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS2 *v8; // rcx
  int v9; // edi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  void *v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  DXGGLOBAL *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rax
  DXGGLOBAL *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+28h] [rbp-100h] BYREF
  __int64 v30; // [rsp+2Ch] [rbp-FCh]
  _BYTE Src[12]; // [rsp+34h] [rbp-F4h] BYREF
  void *v32[2]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v33[21]; // [rsp+50h] [rbp-D8h] BYREF
  int v34; // [rsp+F8h] [rbp-30h]

  if ( a1 )
  {
    LODWORD(v32[0]) = 0;
    v32[1] = 0LL;
    v29 = 0;
    v30 = 0LL;
    memset(Src, 0, sizeof(Src));
    v33[0] = 0LL;
    v34 = 0;
    if ( a2 == 1 )
    {
      v8 = a1 + 1;
      if ( v8 < a1 || (unsigned __int64)v8 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(struct _D3DKMT_ENUMADAPTERS2 *)v32 = *a1;
    }
    else
    {
      *(struct _D3DKMT_ENUMADAPTERS2 *)v32 = *a1;
    }
    if ( !v32[1] )
    {
      v9 = 0;
      Global = DXGGLOBAL::GetGlobal();
      MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
      goto LABEL_9;
    }
    v16 = DXGGLOBAL::GetGlobal();
    v17 = DXGGLOBAL::GetMaximumAdapterCount(v16);
    v18 = (unsigned int)v32[0];
    if ( v17 < LODWORD(v32[0]) )
    {
      v24 = DXGGLOBAL::GetGlobal();
      v18 = DXGGLOBAL::GetMaximumAdapterCount(v24);
      LODWORD(v32[0]) = v18;
    }
    v19 = 1LL;
    if ( v18 > 1 )
      v19 = v18;
    PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(v33, v19);
    if ( v33[0] )
    {
      *(_QWORD *)&Src[4] = v33[0];
      LODWORD(v30) = v32[0];
      v9 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v29, a2, a3, a4);
      if ( v29 > LODWORD(v32[0]) )
      {
        v26 = WdLogNewEntry5_WdAssertion(LODWORD(v32[0]));
        *(_QWORD *)(v26 + 24) = 850LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v21 = (unsigned int)v30;
      if ( v29 > (unsigned int)v30 )
      {
        v27 = WdLogNewEntry5_WdAssertion((unsigned int)v30);
        *(_QWORD *)(v27 + 24) = 851LL;
        WdLogEvent5_WdAssertion(v27);
      }
      v22 = HIDWORD(v30);
      if ( v29 > HIDWORD(v30) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v28 + 24) = 852LL;
        WdLogEvent5_WdAssertion(v28);
        v22 = HIDWORD(v30);
      }
      if ( v9 < 0 )
        goto LABEL_44;
      if ( (unsigned int)v30 < v22 )
      {
        v9 = -1073741789;
        LODWORD(v32[0]) = 0;
LABEL_10:
        if ( v9 >= 0 )
        {
          if ( a2 == 1 )
          {
            if ( (unsigned __int64)&a1[1] > MmUserProbeAddress || &a1[1] <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a1 = *(struct _D3DKMT_ENUMADAPTERS2 *)v32;
          }
          else
          {
            memmove(a1, v32, 0x10uLL);
          }
          v12 = v32[1];
          if ( v32[1] )
          {
            if ( a2 == 1 )
            {
              v13 = 20LL * v29;
              v14 = *(const void **)&Src[4];
              if ( (char *)v32[1] + v13 > (void *)MmUserProbeAddress || (char *)v32[1] + v13 <= v32[1] )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v12, v14, v13);
            }
            else
            {
              memmove(v32[1], *(const void **)&Src[4], 20LL * v29);
            }
          }
          goto LABEL_22;
        }
LABEL_44:
        while ( v29 )
          DXGADAPTER::DestroyHandle(*(_DWORD *)(*(_QWORD *)&Src[4] + 20LL * --v29));
LABEL_22:
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v33);
        return (unsigned int)v9;
      }
      MaximumAdapterCount = v29;
LABEL_9:
      LODWORD(v32[0]) = MaximumAdapterCount;
      goto LABEL_10;
    }
    v25 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v25);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v33);
    return 3221225495LL;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
}
