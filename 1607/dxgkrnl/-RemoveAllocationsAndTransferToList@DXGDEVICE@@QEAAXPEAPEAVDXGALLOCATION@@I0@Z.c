/*
 * XREFs of ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0096A8C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00112B4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0021530 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C0096B84 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsAndTransferToList(
        struct _KTHREAD **this,
        struct DXGALLOCATION **a2,
        unsigned int a3,
        struct DXGALLOCATION **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct DXGALLOCATION *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+28h] [rbp-30h]
  DXGPUSHLOCK *v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, this + 17);
  v13 = 0LL;
  v14 = 0;
  if ( (_DWORD)v5 && *a2 && (v8 = *((_QWORD *)*a2 + 5)) != 0 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v13, (struct DXGFASTMUTEX *const)(v8 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v13);
  }
  else
  {
    DXGAUTOPUSHLOCK::AcquireExclusive(v15);
  }
  if ( (_DWORD)v5 )
  {
    v10 = v5;
    do
    {
      v11 = *a2;
      if ( *a2 )
      {
        DXGDEVICE::RemoveAllocationFromList((DXGDEVICE *)this, *a2, 1);
        *((_QWORD *)v11 + 8) = *a4;
        *a4 = v11;
      }
      else
      {
        v12 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v12 + 24) = 7551LL;
        WdLogEvent5_WdAssertion(v12);
      }
      ++a2;
      --v10;
    }
    while ( v10 );
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v13);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
}
