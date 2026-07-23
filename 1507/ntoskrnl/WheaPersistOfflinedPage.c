/*
 * XREFs of WheaPersistOfflinedPage @ 0x140266E7C
 * Callers:
 *     EmpRemoveBadS3PageWorker @ 0x14066BE48 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1406FC934 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BcdOpenSystemStore @ 0x14056DC50 (BcdOpenSystemStore.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     WheapCountBadPageExtents @ 0x1406FCB44 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x1406FCB80 (WheapIsPageInList.c)
 *     WheapSortBadPages @ 0x1406FCBA0 (WheapSortBadPages.c)
 *     BcdCreateObject @ 0x14070D28C (BcdCreateObject.c)
 *     BcdGetElementData @ 0x14070D9C0 (BcdGetElementData.c)
 *     BcdSetElementData @ 0x14070D9D8 (BcdSetElementData.c)
 */

__int64 __fastcall WheaPersistOfflinedPage(__int64 a1)
{
  _QWORD *v2; // rdi
  NTSTATUS v3; // ebx
  HANDLE v4; // rsi
  NTSTATUS ElementData; // eax
  ULONG v6; // r14d
  NTSTATUS v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+20h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+78h] [rbp+48h] BYREF
  HANDLE BcdStoreHandle; // [rsp+80h] [rbp+50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+88h] [rbp+58h] BYREF

  BcdStoreHandle = 0LL;
  v2 = 0LL;
  BcdObjectHandle = 0LL;
  v3 = BcdOpenSystemStore(&BcdStoreHandle);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &BcdObjectHandle) < 0 )
  {
    Description.Version = 1;
    Description.Type = 537919488;
    v3 = BcdCreateObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &Description, &BcdObjectHandle);
    if ( v3 < 0 )
    {
      v4 = BcdObjectHandle;
      goto LABEL_18;
    }
  }
  v4 = BcdObjectHandle;
  BufferSize = 0;
  ElementData = BcdGetElementData(BcdObjectHandle, 0x1700000Au, 0LL, &BufferSize);
  v6 = BufferSize;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  BufferSize = v6;
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
        v3 = BcdSetElementData(v4, 0x1700000Au, v2, v6 + 8);
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
  v3 = BcdGetElementData(v4, 0x1700000Au, PoolWithTag, &BufferSize);
  if ( v3 >= 0 )
  {
    v6 = BufferSize;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x61656857u);
  return (unsigned int)v3;
}
