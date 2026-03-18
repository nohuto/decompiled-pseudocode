/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0123C10
 * Callers:
 *     DxgkLock2 @ 0x1C0076C50 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C007A3E0 (DxgkUnlock2.c)
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000D2D0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0146BF8 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(struct DXGADAPTER **this, struct DXGALLOCATION *a2, int a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _BYTE v19[56]; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 70) )
  {
    v5 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
    if ( (v5 & 4) != 0 )
    {
      if ( a3 )
      {
        v6 = (v5 >> 6) & 0xF;
        COREACCESS::COREACCESS((COREACCESS *)v19, this[354]);
        COREACCESS::AcquireShared((COREACCESS *)v19);
        if ( *((_DWORD *)this + 88) == 1
          && ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)this[354] + 248), (const struct DXGDEVICE *)this, v6)
          && DXGDEVICE::GetDisplayedPrimary((DXGDEVICE *)this, v6) == a2 )
        {
          DXGDEVICE::UpdateDodFrontBuffer((DXGDEVICE *)this, a2);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v19);
      }
    }
  }
  v7 = this[2];
  v8 = *((_QWORD *)a2 + 3);
  v9 = *((_QWORD *)v7 + 54);
  v10 = *((_QWORD *)v7 + 53);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v20, Current);
  v12 = (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 8) + 800LL))(v9, v8);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v20);
  if ( (int)v12 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v17[3] = this;
    v17[4] = a2;
    v17[5] = v12;
    WdLogEvent5_WdWarning(v17);
  }
  return (unsigned int)v12;
}
