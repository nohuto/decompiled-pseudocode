/*
 * XREFs of PspInitializeSiloStructures @ 0x14079DE5C
 * Callers:
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspStorageAllocSlot @ 0x1405524D8 (PspStorageAllocSlot.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 *     PspAllocStorage @ 0x140579A30 (PspAllocStorage.c)
 *     PspStorageFreeSlot @ 0x140682B4C (PspStorageFreeSlot.c)
 */

char PspInitializeSiloStructures()
{
  PVOID v1; // rcx
  _QWORD v2[16]; // [rsp+20h] [rbp-29h] BYREF

  dword_1403BF8E0 = 1;
  dword_1403BF8E4 = 259;
  if ( (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectorySiloContextSlot) >= 0 )
  {
    if ( (int)PspStorageAllocSlot(&PsCmVirtualKeySiloContextSlot) < 0 )
    {
      PspStorageFreeSlot(PsObjectDirectorySiloContextSlot);
    }
    else
    {
      PspSiloMonitorLock = 0LL;
      qword_1403013F8 = (__int64)&PspSiloMonitorList;
      PspSiloMonitorList = (__int64)&PspSiloMonitorList;
      memset(v2, 0, 0x78uLL);
      BYTE2(v2[0]) |= 0x84u;
      LOWORD(v2[0]) = 120;
      HIDWORD(v2[1]) = 0x20000;
      v2[2] = 0x2000000020000LL;
      HIDWORD(v2[4]) = 1;
      v2[3] = 0xF0000000F0000LL;
      v2[9] = PspDeleteSiloContext;
      if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", (__int64)v2, 0LL, (__int64)&PsSiloContextPagedType) >= 0 )
      {
        HIDWORD(v2[4]) = 512;
        if ( (int)ObCreateObjectType(
                    (const UNICODE_STRING *)L"*,",
                    (__int64)v2,
                    0LL,
                    (__int64)&PsSiloContextNonPagedType) < 0 )
        {
          v1 = PsSiloContextPagedType;
        }
        else
        {
          if ( (int)PspAllocStorage(&qword_1403BF8D8) >= 0 )
            return 1;
          ObfDereferenceObjectWithTag(PsSiloContextPagedType, 0x746C6644u);
          v1 = (PVOID)PsSiloContextNonPagedType;
        }
        ObfDereferenceObjectWithTag(v1, 0x746C6644u);
      }
    }
  }
  return 0;
}
