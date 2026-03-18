/*
 * XREFs of ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C005BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0149D0C (-ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r8
  struct _OBJECT_TYPE **v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  struct _LUID v36; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v37; // [rsp+88h] [rbp+20h]

  v37 = a4;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3000);
    a4 = v37;
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
  v28 = DXGPROCESS::ForceCreation(a2);
  v20 = v28;
  if ( v28 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
LABEL_24:
    v30[3] = v20;
    v31 = v30;
    v30[4] = a1;
    v30[5] = PsGetCurrentProcess();
    v32 = (__int64)v31;
LABEL_31:
    WdLogEvent5_WdError(v32);
    goto LABEL_18;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v20 = -1073741811LL;
    goto LABEL_24;
  }
LABEL_8:
  *((_BYTE *)Current + 312) = 1;
  if ( !a1 )
  {
LABEL_29:
    v33 = WdLogNewEntry5_WdError(a1);
    v20 = -1073741811LL;
    goto LABEL_30;
  }
  v36 = *(struct _LUID *)(a1 + 252);
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v36);
  v20 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v17);
LABEL_30:
    *(_QWORD *)(v33 + 24) = v20;
    v32 = v33;
    goto LABEL_31;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL);
  if ( !*(_QWORD *)(v21 + 1984) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v26 + 24) = 220LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v22 = *(_QWORD *)(v34 + 18704);
  if ( v22 && !*(_QWORD *)(v22 + 1976) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v27 + 24) = 222LL;
    WdLogEvent5_WdAssertion(v27);
  }
  *v13 = (void *)v21;
  *(_DWORD *)v12 = *(_DWORD *)(v21 + 260);
  *((_DWORD *)v12 + 1) = *(_DWORD *)(v21 + 264);
  *((_DWORD *)v12 + 2) = *(_DWORD *)(v21 + 268);
  *((_DWORD *)v12 + 3) = *(_DWORD *)(v21 + 272);
  *((_DWORD *)v12 + 4) = *(_DWORD *)(v21 + 276);
  *((_DWORD *)v12 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v21);
  if ( v22 )
  {
    *(_DWORD *)v11 = *(_DWORD *)(v22 + 260);
    *((_DWORD *)v11 + 1) = *(_DWORD *)(v22 + 264);
    *((_DWORD *)v11 + 2) = *(_DWORD *)(v22 + 268);
    *((_DWORD *)v11 + 3) = *(_DWORD *)(v22 + 272);
    *((_DWORD *)v11 + 4) = *(_DWORD *)(v22 + 276);
    *((_DWORD *)v11 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v22);
  }
  else
  {
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
  }
  *a3 = *(_DWORD *)(v34 + 284);
  *v37 = *(_DWORD *)(v35 + 24);
  v24 = a8;
  *a8 = g_pDxgkSharedAllocationObjectType;
LABEL_18:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v24, &EventProfilerExit, v23, 3000);
  return (unsigned int)v20;
}
