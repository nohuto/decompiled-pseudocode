/*
 * XREFs of ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C007B294
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000F8E4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C001C498 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C007B454 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsAndTransferToList(
        struct _KTHREAD **this,
        struct DXGALLOCATION **a2,
        unsigned int a3,
        struct DXGALLOCATION **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  struct DXGALLOCATION *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+28h] [rbp-30h]
  DXGPUSHLOCK *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, this + 17);
  v16 = 0LL;
  v17 = 0;
  if ( (_DWORD)v5 && *a2 && (v8 = *((_QWORD *)*a2 + 5)) != 0 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v16, (struct DXGFASTMUTEX *const)(v8 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v16);
  }
  else
  {
    DXGAUTOPUSHLOCK::AcquireExclusive(v18);
  }
  if ( (_DWORD)v5 )
  {
    v13 = v5;
    do
    {
      v14 = *a2;
      if ( *a2 )
      {
        DXGDEVICE::RemoveAllocationFromList((DXGDEVICE *)this, *a2, 1);
        *((_QWORD *)v14 + 8) = *a4;
        *a4 = v14;
      }
      else
      {
        v15 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        *(_QWORD *)(v15 + 24) = 7222LL;
        WdLogEvent5_WdAssertion(v15);
      }
      ++a2;
      --v13;
    }
    while ( v13 );
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v16);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
}
