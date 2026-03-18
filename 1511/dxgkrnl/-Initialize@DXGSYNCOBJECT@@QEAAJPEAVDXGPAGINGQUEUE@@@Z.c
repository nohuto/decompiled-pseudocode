/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00949B8
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C0096ED8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0006BC4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0093A20 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C0151014 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2)
{
  DXGSYNCOBJECT *v3; // rsi
  int v4; // r8d
  bool v5; // bl
  char v6; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  _QWORD *v16; // rbx
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+30h] [rbp-18h] BYREF
  char v21; // [rsp+38h] [rbp-10h]

  v3 = this;
  if ( *((_DWORD *)this + 38) == 5 )
  {
    v4 = *((_DWORD *)this + 39);
    if ( (v4 & 0x80u) != 0 )
    {
      *((_BYTE *)this + 232) = 1;
    }
    else if ( (v4 & 4) != 0 )
    {
      *((_BYTE *)this + 232) = 0;
    }
    else
    {
      this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 32) + 16LL);
      *((_BYTE *)v3 + 232) = (*((_BYTE *)this + 1384) & 0x20) == 0;
    }
    v5 = *((_BYTE *)v3 + 232) != 0;
    v6 = v4 & 1;
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    LOBYTE(v8) = v6;
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, bool))(*(_QWORD *)(*((_QWORD *)Global + 14)
                                                                                           + 8LL)
                                                                               + 896LL))(
               (__int64)v3 + 112,
               v8,
               0LL,
               *((_QWORD *)v3 + 20),
               v5);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      v10 = *((_QWORD *)a2 + 4);
    else
      v10 = 0LL;
    *((_QWORD *)v3 + 17) = v10;
  }
  if ( (*((_DWORD *)v3 + 39) & 4) != 0 )
    result = DXGSYNCOBJECTCA::Initialize(v3);
  else
    result = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)v3 + 240), v3);
  if ( (int)result >= 0 )
  {
    v15 = *((_DWORD *)v3 + 39);
    if ( (v15 & 1) == 0 || (v15 & 2) != 0 )
      goto LABEL_13;
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v20);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v17 = DXGGLOBAL::AllocHandle(*((_QWORD *)v3 + 2), (__int64)v3, 8u);
    *((_DWORD *)v3 + 24) = v17;
    if ( v17 )
    {
      v18 = v21 == 0;
      *((_DWORD *)v3 + 56) = v17;
      if ( !v18 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
LABEL_13:
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
      v16[3] = v3;
      v16[4] = *((unsigned int *)v3 + 24);
      v16[5] = DXGPROCESS::GetCurrent();
      WdLogEvent5_WdEvent(v16);
      return 0LL;
    }
    v19 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v19 + 24) = v3;
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
    if ( v21 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    return 3221225495LL;
  }
  return result;
}
