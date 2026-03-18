/*
 * XREFs of DxgkGetPresentStats @ 0x1C014D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGADAPTER *v25; // [rsp+30h] [rbp-78h] BYREF
  DXGADAPTER *v26; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v27[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v28[64]; // [rsp+50h] [rbp-58h] BYREF

  v5 = a1;
  Current = DXGPROCESS::GetCurrent();
  v10 = (__int64)Current;
  if ( Current )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
    {
      v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v16 + 24) = v10;
      LODWORD(v10) = -1073741790;
      *(_QWORD *)(v16 + 32) = -1073741790LL;
      WdLogEvent5_WdWarning(v16);
      return (unsigned int)v10;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *(struct DXGFASTMUTEX *const *)(v10 + 88));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v26, v5, (struct _KTHREAD **)v10, &v25);
    v18 = v25;
    if ( !v25 )
    {
      v19 = WdLogNewEntry5_WdError(v17);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v19 + 24) = v5;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v19);
LABEL_15:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v26);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
      return (unsigned int)v10;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v25, 0LL);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28);
    v10 = v20;
    if ( v20 >= 0 )
    {
      if ( !*((_BYTE *)v18 + 1917) )
      {
        v23 = *((_QWORD *)v18 + 249);
        if ( v23 )
        {
          LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v23 + 400)
                                                                                                + 8LL)
                                                                                    + 408LL))(
                           *(_QWORD *)(v23 + 408),
                           a2,
                           a3,
                           a4);
LABEL_14:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
          goto LABEL_15;
        }
      }
      v22 = WdLogNewEntry5_WdError(v21);
      v10 = -1073741811LL;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v21);
    }
    *(_QWORD *)(v22 + 24) = v18;
    *(_QWORD *)(v22 + 32) = v10;
    WdLogEvent5_WdError(v22);
    goto LABEL_14;
  }
  v11 = WdLogNewEntry5_WdError(v9);
  LODWORD(v10) = -1073741811;
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v11);
  return (unsigned int)v10;
}
