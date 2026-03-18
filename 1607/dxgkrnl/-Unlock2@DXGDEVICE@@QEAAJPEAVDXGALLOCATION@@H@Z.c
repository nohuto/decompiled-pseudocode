/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0143A3C
 * Callers:
 *     DxgkLock2 @ 0x1C009EBF0 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C00A54B0 (DxgkUnlock2.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000EC48 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C016A770 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-28h]
  char v23; // [rsp+38h] [rbp-20h]
  char v24; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 76) )
  {
    v5 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
    if ( (v5 & 4) != 0 )
    {
      if ( a3 )
      {
        v6 = *((_QWORD *)this + 357);
        v7 = (v5 >> 6) & 0xF;
        v22 = v6;
        v23 = 0;
        if ( v6 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24));
          v21 = -1LL;
        }
        COREACCESS::AcquireShared((COREACCESS *)v20);
        if ( *((_DWORD *)this + 94) == 1
          && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL), this, v7)
          && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v7) == a2 )
        {
          DXGDEVICE::UpdateDodFrontBuffer(this, a2);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v20);
      }
    }
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *((_QWORD *)a2 + 3);
  v10 = *(_QWORD *)(v8 + 408);
  v11 = *(_QWORD *)(v8 + 400);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v24, Current);
  v13 = (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 + 8) + 816LL))(v10, v9);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v24);
  if ( (int)v13 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v18[3] = this;
    v18[4] = a2;
    v18[5] = v13;
    WdLogEvent5_WdWarning(v18);
  }
  return (unsigned int)v13;
}
