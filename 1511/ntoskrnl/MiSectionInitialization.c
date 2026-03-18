/*
 * XREFs of MiSectionInitialization @ 0x14075A850
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  int v4; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v5; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING v6; // [rsp+60h] [rbp-A0h] BYREF
  int v7; // [rsp+70h] [rbp-90h] BYREF
  __int64 v8; // [rsp+78h] [rbp-88h]
  int *v9; // [rsp+80h] [rbp-80h]
  int v10; // [rsp+88h] [rbp-78h]
  __int128 v11; // [rsp+90h] [rbp-70h]
  _QWORD v12[18]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE ThreadHandle; // [rsp+140h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+148h] [rbp+48h] BYREF

  dword_1402FF21C = -1;
  qword_1402FE298 = 0LL;
  v6.Buffer = L"Section";
  *(_DWORD *)&v6.Length = 1048590;
  v5 = L"\\Device\\PhysicalMemory";
  v4 = 3014700;
  memset(v12, 0, 0x78uLL);
  BYTE2(v12[0]) |= 4u;
  v12[7] = MiSectionOpen;
  LOWORD(v12[0]) = 120;
  v12[8] = MiSectionClose;
  LODWORD(v12[1]) = 256;
  v12[9] = MiSectionDelete;
  HIDWORD(v12[4]) = 1;
  LODWORD(v12[5]) = 64;
  HIDWORD(v12[3]) = 983071;
  *(_OWORD *)((char *)&v12[1] + 4) = MiSectionMapping;
  HIDWORD(v12[0]) = 128;
  if ( (int)ObCreateObjectType(&v6, (__int64)v12, 0LL, (__int64)&MmSectionObjectType) >= 0
    && PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         0LL,
         0LL,
         0LL,
         (PKSTART_ROUTINE)MiDereferenceSegmentThread,
         MiSystemPartition) >= 0 )
  {
    ObCloseHandle(ThreadHandle, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67536D4Du);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      memset(&qword_1402FE330, 0, 0x78uLL);
      memset(&qword_1402FE2C0, 0, 0x70uLL);
      v1[5] = 0LL;
      dword_1402FE368 |= 0x400u;
      v8 = 0LL;
      v9 = &v4;
      qword_1402FE2C0 = (__int64)&qword_1402FE330;
      qword_1402FE330 = (__int64)v1;
      qword_1402FE348 = 1LL;
      *v1 = &qword_1402FE330;
      v7 = 48;
      v10 = 65552;
      v11 = 0LL;
      if ( (int)ObCreateObject(0, MmSectionObjectType, (__int64)&v7, 0, 0, 64, 64, 0, &ThreadHandle) < 0 )
      {
        ExFreePoolWithTag(v1, 0);
      }
      else
      {
        v2 = ThreadHandle;
        *((_QWORD *)ThreadHandle + 5) = &qword_1402FE330;
        v2[6] = 0xFFFFFFFFFFFFLL;
        *((_DWORD *)v2 + 14) = 0;
        *((_DWORD *)v2 + 15) = *((_DWORD *)v2 + 15) & 0xFFFFF000 | 0x40;
        if ( ObInsertObject(v2, 0LL, 4u, 0, 0LL, &Handle) >= 0 )
        {
          ObCloseHandle(Handle, 0);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
