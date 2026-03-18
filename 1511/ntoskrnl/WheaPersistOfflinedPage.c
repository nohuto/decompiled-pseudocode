/*
 * XREFs of WheaPersistOfflinedPage @ 0x14021682C
 * Callers:
 *     EmpRemoveBadS3PageWorker @ 0x1405F311C (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140678118 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdOpenSystemStore @ 0x1404FB6B8 (BcdOpenSystemStore.c)
 *     BcdCloseStore @ 0x1404FBE3C (BcdCloseStore.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     WheapCountBadPageExtents @ 0x140678328 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x140678364 (WheapIsPageInList.c)
 *     WheapSortBadPages @ 0x140678384 (WheapSortBadPages.c)
 *     BcdCreateObject @ 0x14068D774 (BcdCreateObject.c)
 *     BcdGetElementData @ 0x14068DEA8 (BcdGetElementData.c)
 *     BcdSetElementData @ 0x14068DEC0 (BcdSetElementData.c)
 */

__int64 __fastcall WheaPersistOfflinedPage(__int64 a1)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  HANDLE v4; // rsi
  int ElementData; // eax
  unsigned int v6; // r14d
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  _DWORD v11[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+48h] BYREF
  HANDLE v13; // [rsp+80h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+58h] BYREF

  v13 = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  v3 = BcdOpenSystemStore(&v13);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v13, &GUID_BAD_MEMORY_GROUP, &Handle) < 0 )
  {
    v11[0] = 1;
    v11[1] = 537919488;
    v3 = ((__int64 (__fastcall *)(HANDLE, GUID *, _DWORD *, HANDLE *))BcdCreateObject)(
           v13,
           &GUID_BAD_MEMORY_GROUP,
           v11,
           &Handle);
    if ( v3 < 0 )
    {
      v4 = Handle;
      goto LABEL_18;
    }
  }
  v4 = Handle;
  v12 = 0;
  ElementData = BcdGetElementData(Handle, 385875978LL, 0LL, &v12);
  v6 = v12;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  v12 = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 8LL, 0x61656857u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v2, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      v2[v9] = a1;
      WheapSortBadPages(v2, (unsigned int)(v9 + 1));
      if ( (unsigned int)WheapCountBadPageExtents(v2, (unsigned int)(v9 + 1)) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 385875978LL, v2, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = BcdGetElementData(v4, 385875978LL, PoolWithTag, &v12);
  if ( v3 >= 0 )
  {
    v6 = v12;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( v13 )
    BcdCloseStore(v13);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x61656857u);
  return (unsigned int)v3;
}
