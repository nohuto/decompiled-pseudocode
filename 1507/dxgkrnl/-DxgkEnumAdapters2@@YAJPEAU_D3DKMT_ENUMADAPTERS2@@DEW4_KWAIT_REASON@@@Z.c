/*
 * XREFs of ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00A7870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C008A9CC (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C008AB14 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C00A7B50 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00ADB3C (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEnumAdapters2(struct _D3DKMT_ENUMADAPTERS2 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  char v5; // r14
  char v6; // r15
  struct _D3DKMT_ENUMADAPTERS2 *v7; // rsi
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGGLOBAL *Global; // r14
  unsigned int v14; // eax
  void *v15; // rcx
  size_t v16; // r8
  const void *v17; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int MaximumAdapterCount; // ecx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  DXGGLOBAL *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // [rsp+28h] [rbp-110h] BYREF
  __int64 v47; // [rsp+2Ch] [rbp-10Ch]
  _BYTE Src[12]; // [rsp+34h] [rbp-104h] BYREF
  void *v49[2]; // [rsp+40h] [rbp-F8h] BYREF
  PVOID P; // [rsp+50h] [rbp-E8h] BYREF
  char v51; // [rsp+58h] [rbp-E0h] BYREF
  int v52; // [rsp+F8h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( !a1 )
  {
    v34 = WdLogNewEntry5_WdError(0LL);
    v35 = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    return v35;
  }
  LODWORD(v49[0]) = 0;
  v49[1] = 0LL;
  v46 = 0;
  v47 = 0LL;
  memset(Src, 0, sizeof(Src));
  P = 0LL;
  v52 = 0;
  if ( (_BYTE)a2 == 1 )
  {
    if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
    {
      a1 = (struct _D3DKMT_ENUMADAPTERS2 *)MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    *(struct _D3DKMT_ENUMADAPTERS2 *)v49 = *v7;
  }
  else
  {
    *(struct _D3DKMT_ENUMADAPTERS2 *)v49 = *a1;
  }
  if ( !v49[1] )
  {
    v8 = 0;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
    if ( !*((_DWORD *)Global + 196) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v37 + 24) = 1189LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v14 = *((_DWORD *)Global + 196);
    goto LABEL_11;
  }
  v21 = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  if ( !*((_DWORD *)v21 + 196) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v20, v19, v22, v23);
    *(_QWORD *)(v38 + 24) = 1189LL;
    WdLogEvent5_WdAssertion(v38);
  }
  MaximumAdapterCount = (unsigned int)v49[0];
  if ( *((_DWORD *)v21 + 196) < LODWORD(v49[0]) )
  {
    v39 = DXGGLOBAL::GetGlobal(LODWORD(v49[0]), v19, v22, v23);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(v39, v40, v41, v42);
    LODWORD(v49[0]) = MaximumAdapterCount;
  }
  v25 = 1LL;
  if ( MaximumAdapterCount > 1 )
    v25 = MaximumAdapterCount;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v25);
  if ( !P )
  {
    v36 = WdLogNewEntry5_WdError(v27);
    v35 = -1073741801;
    *(_QWORD *)(v36 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v36);
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
    return v35;
  }
  *(_QWORD *)&Src[4] = P;
  LODWORD(v47) = v49[0];
  LOBYTE(v28) = v5;
  LOBYTE(v26) = v6;
  v8 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v46, v26, v28, v4);
  if ( v46 > LODWORD(v49[0]) )
  {
    v43 = WdLogNewEntry5_WdAssertion(LODWORD(v49[0]), v29, v30, v31);
    *(_QWORD *)(v43 + 24) = 4201LL;
    WdLogEvent5_WdAssertion(v43);
  }
  v32 = (unsigned int)v47;
  if ( v46 > (unsigned int)v47 )
  {
    v44 = WdLogNewEntry5_WdAssertion((unsigned int)v47, v29, v30, v31);
    *(_QWORD *)(v44 + 24) = 4202LL;
    WdLogEvent5_WdAssertion(v44);
  }
  v33 = HIDWORD(v47);
  if ( v46 > HIDWORD(v47) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v32, v29, v30, v31);
    *(_QWORD *)(v45 + 24) = 4203LL;
    WdLogEvent5_WdAssertion(v45);
    v33 = HIDWORD(v47);
  }
  if ( v8 < 0 )
    goto LABEL_52;
  if ( (unsigned int)v47 >= v33 )
  {
    v14 = v46;
LABEL_11:
    LODWORD(v49[0]) = v14;
    goto LABEL_12;
  }
  v8 = -1073741789;
  LODWORD(v49[0]) = 0;
LABEL_12:
  if ( v8 >= 0 )
  {
    if ( v6 == 1 )
    {
      if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v7 = *(struct _D3DKMT_ENUMADAPTERS2 *)v49;
    }
    else
    {
      memmove(v7, v49, 0x10uLL);
    }
    v15 = v49[1];
    if ( v49[1] )
    {
      if ( v6 == 1 )
      {
        v16 = 20LL * v46;
        v17 = *(const void **)&Src[4];
        if ( (char *)v49[1] + v16 > (void *)MmUserProbeAddress || (char *)v49[1] + v16 <= v49[1] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v15, v17, v16);
      }
      else
      {
        memmove(v49[1], *(const void **)&Src[4], 20LL * v46);
      }
    }
    goto LABEL_24;
  }
LABEL_52:
  while ( v46 )
    DXGADAPTER::DestroyHandle(*(_DWORD *)(*(_QWORD *)&Src[4] + 20LL * --v46));
LABEL_24:
  if ( P != &v51 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v8;
}
