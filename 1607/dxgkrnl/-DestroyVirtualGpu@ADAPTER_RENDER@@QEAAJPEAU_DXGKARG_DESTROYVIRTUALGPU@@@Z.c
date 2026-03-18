/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C015A340
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C015800C (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C015A4FC (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(struct DXGDEVICE **this, struct _DXGKARG_DESTROYVIRTUALGPU *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  PERESOURCE *v10; // rbp
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  ULONG PartitionId; // eax
  __int64 v20; // rsi
  __int64 v21; // rcx
  struct DXGDEVICE *v22; // rax
  void *v23; // rsi
  __int64 v24; // rax
  _BYTE v25[16]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v26[32]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v27[96]; // [rsp+60h] [rbp-68h] BYREF

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)this);
  if ( (int)result >= 0 )
  {
    if ( this[135] )
    {
      v10 = (PERESOURCE *)this[2];
      DXGADAPTER::ReleaseCoreResource(v10);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25,
        this[135]);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v26,
        (struct DXGADAPTER *)v10,
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)this[135], 2, v11, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27);
      v17 = v12;
      if ( v12 >= 0 )
      {
        PartitionId = a2->PartitionId;
        if ( a2->PartitionId < *((_DWORD *)this + 266)
          && (v14 = PartitionId, (v20 = *((_QWORD *)this[134] + PartitionId)) != 0) )
        {
          if ( *(_BYTE *)(v20 + 64) )
          {
            ADAPTER_RENDER::DdiDestroyVirtualGpu((ADAPTER_RENDER *)this, a2);
            *(_BYTE *)(v20 + 64) = 0;
          }
          --*((_DWORD *)this + 267);
          DXGK_VIRTUAL_GPU::DestroyVirtualGpu(*((DXGK_VIRTUAL_GPU **)this[134] + a2->PartitionId), 1u);
          v21 = a2->PartitionId;
          v22 = this[134];
          v23 = (void *)*((_QWORD *)v22 + v21);
          if ( v23 )
          {
            DXGK_VIRTUAL_GPU::DestroyVirtualGpu(*((DXGK_VIRTUAL_GPU **)v22 + v21), 1u);
            operator delete(v23);
          }
          *((_QWORD *)this[134] + a2->PartitionId) = 0LL;
          LODWORD(v17) = 0;
        }
        else
        {
          v24 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          *(_QWORD *)(v24 + 24) = a2->PartitionId;
          WdLogEvent5_WdWarning(v24);
          LODWORD(v17) = -1073741811;
        }
      }
      else
      {
        v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        *(_QWORD *)(v18 + 24) = this[135];
        *(_QWORD *)(v18 + 32) = v17;
        WdLogEvent5_WdWarning(v18);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
      if ( v26[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25);
      DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v10);
      return (unsigned int)v17;
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v9 + 24) = a2->PartitionId;
      *(_QWORD *)(v9 + 32) = 1195LL;
      WdLogEvent5_WdWarning(v9);
      return 3221225485LL;
    }
  }
  return result;
}
