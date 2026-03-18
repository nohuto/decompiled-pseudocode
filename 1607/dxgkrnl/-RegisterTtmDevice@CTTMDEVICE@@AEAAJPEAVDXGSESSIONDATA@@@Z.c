/*
 * XREFs of ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C017FFC8
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0077A64 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C00FBC30 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct DXGSESSIONDATA **v17; // rdx
  struct DXGSESSIONDATA *v18; // rax
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v20, 0, 0x20uLL);
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal(v4) + 69) + 160LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3962LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v7 = *((_BYTE *)this + 904);
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    v9 = WdLogNewEntry5_WdEvent(v8);
    LODWORD(v10) = -1073741130;
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = -1073741130LL;
    WdLogEvent5_WdEvent(v9);
  }
  else
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
    v12 = (unsigned int)(v11 >> 31);
    LODWORD(v12) = v11 % 32;
    *((_DWORD *)this + 2 * v12 + 157) = 0x40000000;
    v20[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)(v11 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v13 = *((unsigned int *)this + 21);
    v20[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v14 = TtmNotifyDeviceArrival(1LL, this, v20, v13, (char *)this + 608);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v17 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2322);
      v18 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v17 != (struct DXGSESSIONDATA *)((char *)a2 + 18568) )
        __fastfail(3u);
      *(_QWORD *)v18 = (char *)a2 + 18568;
      *((_QWORD *)this + 3) = v17;
      *v17 = v18;
      *((_QWORD *)a2 + 2322) = v18;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v16[3] = *((unsigned int *)this + 20);
      v16[4] = *((_QWORD *)this + 8);
      v16[5] = v10;
      WdLogEvent5_WdError(v16);
    }
  }
  return (unsigned int)v10;
}
