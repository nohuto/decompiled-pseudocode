/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00A4854
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00A38A8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0009C0C (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C007F578 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C017619C (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2)
{
  int v4; // r8d
  bool v5; // bl
  char v6; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+30h] [rbp-18h] BYREF
  char v21; // [rsp+38h] [rbp-10h]

  if ( *((_DWORD *)this + 32) == 5 )
  {
    v4 = *((_DWORD *)this + 33);
    *((_BYTE *)this + 208) = (v4 & 0x80u) != 0
                          || (v4 & 4) == 0
                          && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 29) + 16LL) + 1520LL) & 0x20) == 0;
    v5 = *((_BYTE *)this + 208) != 0;
    v6 = v4 & 1;
    Global = DXGGLOBAL::GetGlobal();
    LOBYTE(v8) = v6;
    result = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD, bool))(*(_QWORD *)(*((_QWORD *)Global + 14)
                                                                                          + 8LL)
                                                                              + 912LL))(
               (char *)this + 88,
               v8,
               0LL,
               *((_QWORD *)this + 17),
               v5);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      v10 = *((_QWORD *)a2 + 4);
    else
      v10 = 0LL;
    *((_QWORD *)this + 14) = v10;
  }
  if ( (*((_DWORD *)this + 33) & 4) != 0 )
    result = DXGSYNCOBJECTCA::Initialize(this);
  else
    result = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)this + 216), this);
  if ( (int)result >= 0 )
  {
    v12 = *((_DWORD *)this + 33);
    if ( (v12 & 1) == 0 || (v12 & 2) != 0 )
      goto LABEL_13;
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v20);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v17 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 8u);
    *((_DWORD *)this + 18) = v17;
    if ( v17 )
    {
      v18 = v21 == 0;
      *((_DWORD *)this + 50) = v17;
      if ( !v18 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
LABEL_13:
      v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
      v13[3] = this;
      v14 = *((unsigned int *)this + 18);
      v13[4] = v14;
      CurrentProcess = PsGetCurrentProcess(v14);
      v13[5] = PsGetProcessDxgProcess(CurrentProcess, v16);
      WdLogEvent5_WdEvent(v13);
      return 0LL;
    }
    v19 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
    if ( v21 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    return 3221225495LL;
  }
  return result;
}
