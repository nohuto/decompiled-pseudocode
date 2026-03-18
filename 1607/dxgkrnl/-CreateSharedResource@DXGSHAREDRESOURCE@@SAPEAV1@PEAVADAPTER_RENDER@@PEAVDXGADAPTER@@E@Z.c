/*
 * XREFs of ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C008F6E4
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C0151A08 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C0021180 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z @ 0x1C008F778 (--0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00D5328 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

struct DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::CreateSharedResource(
        DXGADAPTER **a1,
        struct DXGADAPTER *a2,
        char a3)
{
  DXGSHAREDRESOURCE_NONPAGED *v6; // rdi
  unsigned int v7; // edx
  DXGSHAREDRESOURCE *v8; // rax
  DXGSHAREDRESOURCE *v9; // rbx
  KSPIN_LOCK *v11; // rax
  DXGSHAREDRESOURCE *v12; // rax

  v6 = 0LL;
  if ( (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(a1[2]) > 1 )
  {
    v11 = (KSPIN_LOCK *)operator new(0x18uLL, v7, 1, (enum _POOL_TYPE)512);
    v6 = (DXGSHAREDRESOURCE_NONPAGED *)v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      KeInitializeSpinLock(v11 + 2);
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
      return 0LL;
  }
  if ( a3 )
  {
    v12 = (DXGSHAREDRESOURCE *)operator new(0xD8uLL, 0x4B677844u, PagedPool);
    v9 = v12;
    if ( v12 )
    {
      DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v12, (struct ADAPTER_RENDER *)a1, a2);
      *((_DWORD *)v9 + 44) = 0;
      *((_DWORD *)v9 + 45) = 0;
      *((_DWORD *)v9 + 46) = 0;
      *((_QWORD *)v9 + 24) = 0LL;
      *((_QWORD *)v9 + 25) = 0LL;
      *((_DWORD *)v9 + 3) |= 0x20u;
      *(_QWORD *)v9 = &DXGSHAREDRESOURCECA::`vftable';
      goto LABEL_5;
    }
    goto LABEL_9;
  }
  v8 = (DXGSHAREDRESOURCE *)operator new(0xB0uLL, 0x4B677844u, PagedPool);
  if ( !v8 )
  {
LABEL_9:
    v9 = 0LL;
    goto LABEL_5;
  }
  v9 = DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v8, (struct ADAPTER_RENDER *)a1, a2);
LABEL_5:
  if ( v9 )
  {
    if ( v6 )
    {
      *((_QWORD *)v9 + 21) = v6;
      *(_QWORD *)v6 = v9;
    }
  }
  else if ( v6 )
  {
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v6);
  }
  return v9;
}
