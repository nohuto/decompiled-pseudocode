/*
 * XREFs of ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00AF990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C014DB34 (-ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        const struct _DXGKWIN32KENG_INTERFACE *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct _CDDDXGK_DRIVERINFO *a5,
        struct _CDDDXGK_DRIVERINFO *a6,
        void **a7,
        struct _OBJECT_TYPE **a8)
{
  struct _CDDDXGK_DRIVERINFO *v11; // rbx
  struct _CDDDXGK_DRIVERINFO *v12; // r14
  void **v13; // r13
  struct DXGPROCESS *Current; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct DXGDEVICE *v18; // r15
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // r8
  struct _OBJECT_TYPE **v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct DXGDEVICE *v32; // [rsp+20h] [rbp-48h] BYREF
  struct DXGCONTEXT *v33; // [rsp+28h] [rbp-40h] BYREF
  struct _LUID v34; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v35; // [rsp+88h] [rbp+20h]

  v35 = a4;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3000);
    a4 = v35;
  }
  if ( !a3 )
    goto LABEL_29;
  if ( !a4 )
    goto LABEL_29;
  v11 = a5;
  if ( !a5 )
    goto LABEL_29;
  v12 = a6;
  if ( !a6 )
    goto LABEL_29;
  v13 = a7;
  if ( !a7 )
    goto LABEL_29;
  *a3 = 0;
  *(_QWORD *)v11 = 0LL;
  *((_QWORD *)v11 + 1) = 0LL;
  *((_QWORD *)v11 + 2) = 0LL;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  *((_QWORD *)v12 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    goto LABEL_8;
  v26 = DXGPROCESS::ForceCreation(a2);
  v17 = v26;
  if ( v26 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
LABEL_24:
    v28[3] = v17;
    v29 = v28;
    v28[4] = a1;
    v28[5] = PsGetCurrentProcess();
    v30 = (__int64)v29;
LABEL_31:
    WdLogEvent5_WdError(v30);
    goto LABEL_18;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v17 = -1073741811LL;
    goto LABEL_24;
  }
LABEL_8:
  *((_BYTE *)Current + 312) = 1;
  if ( !a1 )
  {
LABEL_29:
    v31 = WdLogNewEntry5_WdError(a1);
    v17 = -1073741811LL;
    goto LABEL_30;
  }
  v34 = *(struct _LUID *)(a1 + 252);
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v34, &v32, &v33);
  v17 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v16);
LABEL_30:
    *(_QWORD *)(v31 + 24) = v17;
    v30 = v31;
    goto LABEL_31;
  }
  v18 = v32;
  v19 = *(_QWORD *)(*((_QWORD *)v32 + 2) + 16LL);
  if ( !*(_QWORD *)(v19 + 1992) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v24 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v20 = *((_QWORD *)v18 + 354);
  if ( v20 && !*(_QWORD *)(v20 + 1984) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v25 + 24) = 242LL;
    WdLogEvent5_WdAssertion(v25);
  }
  *v13 = (void *)v19;
  *(_DWORD *)v12 = *(_DWORD *)(v19 + 260);
  *((_DWORD *)v12 + 1) = *(_DWORD *)(v19 + 264);
  *((_DWORD *)v12 + 2) = *(_DWORD *)(v19 + 268);
  *((_DWORD *)v12 + 3) = *(_DWORD *)(v19 + 272);
  *((_DWORD *)v12 + 4) = *(_DWORD *)(v19 + 276);
  *((_DWORD *)v12 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v19);
  if ( v20 )
  {
    *(_DWORD *)v11 = *(_DWORD *)(v20 + 260);
    *((_DWORD *)v11 + 1) = *(_DWORD *)(v20 + 264);
    *((_DWORD *)v11 + 2) = *(_DWORD *)(v20 + 268);
    *((_DWORD *)v11 + 3) = *(_DWORD *)(v20 + 272);
    *((_DWORD *)v11 + 4) = *(_DWORD *)(v20 + 276);
    *((_DWORD *)v11 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v20);
  }
  else
  {
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
  }
  *a3 = *((_DWORD *)v18 + 71);
  *v35 = *((_DWORD *)v33 + 6);
  v22 = a8;
  *a8 = g_pDxgkSharedAllocationObjectType;
LABEL_18:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v22, &EventProfilerExit, v21, 3000);
  return (unsigned int)v17;
}
