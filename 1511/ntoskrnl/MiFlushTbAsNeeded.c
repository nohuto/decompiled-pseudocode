/*
 * XREFs of MiFlushTbAsNeeded @ 0x140061B60
 * Callers:
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1400073F4 (MiCompareTbFlushTimeStamp.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, _KPROCESS *a2, int a3)
{
  unsigned int v3; // ebp
  int v6; // r15d
  int v7; // r14d
  unsigned __int64 v8; // r12
  ULONG_PTR BugCheckParameter4; // rax
  unsigned int v10; // ebx
  ULONG_PTR v11; // rdi
  int v13; // [rsp+30h] [rbp-108h] BYREF
  __int16 v14; // [rsp+34h] [rbp-104h]
  __int64 v15; // [rsp+38h] [rbp-100h]
  __int64 v16; // [rsp+40h] [rbp-F8h]
  __int64 v17; // [rsp+48h] [rbp-F0h]

  v3 = 0;
  v15 = 20LL;
  v13 = a3;
  v14 = 0;
  v16 = 0LL;
  v6 = 0;
  v17 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( a2 )
  {
    do
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      if ( (BugCheckParameter4 & 0x401) != 0
        || (BugCheckParameter4 & 0x800) != 0
        || ((BugCheckParameter4 >> 5) & 0x1F) != 0 && ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
      {
        KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, (ULONG_PTR)a2 - v8, BugCheckParameter4);
      }
      v10 = BugCheckParameter4;
      v11 = HIDWORD(BugCheckParameter4);
      *(_QWORD *)BugCheckParameter2 = (unsigned int)BugCheckParameter4;
      if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
        MiWritePteShadow(BugCheckParameter2, v10);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 == v6 )
        {
          if ( v7 == 1 )
            MiInsertTbFlushEntry((__int64)&v13, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0);
        }
        else
        {
          if ( MiCompareTbFlushTimeStamp(v11, -1) )
          {
            MiInsertTbFlushEntry((__int64)&v13, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0);
            v7 = 1;
          }
          else
          {
            v7 = 0;
          }
          v6 = v11;
        }
      }
      else
      {
        v7 = 0;
        v6 = 0;
      }
      ++v8;
      BugCheckParameter2 += 8LL;
    }
    while ( v8 < (unsigned __int64)a2 );
    v3 = HIDWORD(v15);
  }
  MiFlushTbList((__int64)&v13, a2);
  return v3;
}
