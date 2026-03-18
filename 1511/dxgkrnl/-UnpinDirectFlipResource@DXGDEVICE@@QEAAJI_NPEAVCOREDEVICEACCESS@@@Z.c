/*
 * XREFs of ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C013BA6C
 * Callers:
 *     DxgkUnpinDirectFlipResources @ 0x1C013DB90 (DxgkUnpinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0065DC4 (-Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013AC1C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B85C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipResource(
        DXGDEVICE *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r10d
  __int64 v10; // r8
  int v11; // edx
  struct DXGRESOURCE *v12; // rdx
  __int64 v13; // rdx
  DXGDEVICE *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGALLOCATION *i; // rbx
  unsigned int v18; // edi
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdi
  __int64 v27; // rax
  struct DXGALLOCATION *v28[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v29 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 192));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v9 < *(_DWORD *)(v4 + 232)
    && (v10 = *(_QWORD *)(v4 + 216),
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x30))
    && (v11 & 0x1000) == 0
    && (v11 & 0xF) != 0
    && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 4 )
  {
    v12 = *(struct DXGRESOURCE **)(v10 + 16LL * v9);
  }
  else
  {
    v12 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v28, v12);
  ExReleasePushLockSharedEx(v4 + 192, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::Assign(&v29, v28);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v28);
  if ( v29 )
  {
    for ( i = (struct DXGALLOCATION *)v29[3].Count; ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
    {
      v28[0] = i;
      if ( !i )
      {
        LODWORD(v25) = 0;
        goto LABEL_18;
      }
      v18 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
      if ( (v18 & 0x2000) == 0 )
        goto LABEL_21;
      v19 = (v18 >> 6) & 0xF;
      if ( a3 && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 354) + 1984LL), this, v19) )
      {
        v27 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
        LODWORD(v25) = -1073741790;
        *(_QWORD *)(v27 + 24) = -1073741790LL;
        goto LABEL_23;
      }
      if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, i) )
      {
        v24 = DXGDEVICE::UnpinDirectFlipAllocation(v14, v19, v15, v28, a4);
        v25 = v24;
        if ( v24 < 0 )
          break;
      }
    }
    v27 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v27 + 24) = i;
  }
  else
  {
LABEL_21:
    v27 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v25 = -1073741811LL;
    *(_QWORD *)(v27 + 24) = v8;
  }
  *(_QWORD *)(v27 + 32) = v25;
LABEL_23:
  WdLogEvent5_WdWarning(v27);
LABEL_18:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v29);
  return (unsigned int)v25;
}
