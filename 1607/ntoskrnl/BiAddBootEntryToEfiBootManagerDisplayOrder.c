/*
 * XREFs of BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D3518
 * Callers:
 *     BiExportBcdObjects @ 0x1406D4AD4 (BiExportBcdObjects.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BiGetElement @ 0x1406D2944 (BiGetElement.c)
 */

__int64 __fastcall BiAddBootEntryToEfiBootManagerDisplayOrder(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  int Element; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // r8
  int v7; // r9d
  __int64 v8; // rcx
  _OWORD *PoolWithTag; // rax
  void *v10; // rbp
  void *v11; // rdx
  BCD_FLAGS v12; // r8d
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  Src = 0LL;
  BcdObjectHandle = 0LL;
  v3 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle);
  if ( v3 < 0 )
    goto LABEL_17;
  Element = BiGetElement(BcdObjectHandle, 0x24000001u, &Src, &v15);
  v3 = Element;
  if ( Element == -1073741275 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  if ( Element >= 0 )
  {
    v5 = v15;
LABEL_6:
    v6 = Src;
    v7 = 0;
    if ( v5 >> 4 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(a2 + 16) - *v6;
        if ( !v8 )
          v8 = *(_QWORD *)(a2 + 24) - v6[1];
        if ( !v8 )
          break;
        v6 += 2;
        if ( ++v7 >= v5 >> 4 )
          goto LABEL_11;
      }
      v3 = 0;
    }
    else
    {
LABEL_11:
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5 + 16LL, 0x4B444342u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = Src;
        *PoolWithTag = *(_OWORD *)(a2 + 16);
        memmove(PoolWithTag + 1, v11, v5);
        v3 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000001u, v12, v10, v5 + 16);
        ExFreePoolWithTag(v10, 0x4B444342u);
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
LABEL_17:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v3;
}
