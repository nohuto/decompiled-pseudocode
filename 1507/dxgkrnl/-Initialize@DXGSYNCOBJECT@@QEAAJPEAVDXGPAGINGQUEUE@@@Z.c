/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00DC5D4
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00C3020 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00048F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DC4CC (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C014C9EC (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2, __int64 a3, __int64 a4)
{
  DXGSYNCOBJECT *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // bl
  char v18; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+30h] [rbp-18h] BYREF
  char v24; // [rsp+38h] [rbp-10h]

  v5 = this;
  if ( *((_DWORD *)this + 32) == 5 )
  {
    v16 = *((unsigned int *)this + 33);
    if ( (v16 & 0x80u) == 0LL )
    {
      if ( (v16 & 4) != 0 )
      {
        *((_BYTE *)this + 208) = 0;
      }
      else
      {
        this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 29) + 16LL);
        *((_BYTE *)v5 + 208) = (*((_BYTE *)this + 1376) & 0x20) == 0;
      }
    }
    else
    {
      *((_BYTE *)this + 208) = 1;
    }
    v17 = *((_BYTE *)v5 + 208) != 0;
    v18 = v16 & 1;
    Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, v16, a4);
    LOBYTE(v20) = v18;
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, bool))(*(_QWORD *)(*((_QWORD *)Global + 14)
                                                                                           + 8LL)
                                                                               + 888LL))(
               (__int64)v5 + 88,
               v20,
               0LL,
               *((_QWORD *)v5 + 17),
               v17);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      v21 = *((_QWORD *)a2 + 4);
    else
      v21 = 0LL;
    *((_QWORD *)v5 + 14) = v21;
  }
  if ( (*((_DWORD *)v5 + 33) & 4) != 0 )
    result = DXGSYNCOBJECTCA::Initialize(v5);
  else
    result = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)v5 + 216), v5, a3, a4);
  if ( (int)result >= 0 )
  {
    v11 = *((_DWORD *)v5 + 33);
    if ( (v11 & 1) == 0 || (v11 & 2) != 0 )
      goto LABEL_10;
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v23);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v12 = DXGGLOBAL::AllocHandle(*((_QWORD *)v5 + 2), (__int64)v5, 8u);
    *((_DWORD *)v5 + 18) = v12;
    if ( v12 )
    {
      v13 = v24 == 0;
      *((_DWORD *)v5 + 50) = v12;
      if ( !v13 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
LABEL_10:
      v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
      v14[3] = v5;
      v15 = *((unsigned int *)v5 + 18);
      v14[4] = v15;
      v14[5] = DXGPROCESS::GetCurrent(v15);
      WdLogEvent5_WdEvent(v14);
      return 0LL;
    }
    v22 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v22 + 24) = v5;
    *(_QWORD *)(v22 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v22);
    if ( v24 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    return 3221225495LL;
  }
  return result;
}
