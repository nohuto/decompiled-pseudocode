/*
 * XREFs of MiFlushTbAsNeeded @ 0x1400DDEE0
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // ebp
  int v7; // edi
  unsigned __int64 v8; // r15
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int PteTimeStamp; // eax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // cl
  unsigned int v17; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-148h] BYREF
  _DWORD v20[4]; // [rsp+30h] [rbp-118h] BYREF
  int v21; // [rsp+40h] [rbp-108h] BYREF
  __int16 v22; // [rsp+44h] [rbp-104h]
  __int64 v23; // [rsp+48h] [rbp-100h]
  __int64 v24; // [rsp+50h] [rbp-F8h]
  __int64 v25; // [rsp+58h] [rbp-F0h]

  v3 = 0;
  v23 = 20LL;
  v21 = a3;
  v22 = 0;
  v24 = 0LL;
  v6 = 0;
  v25 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( a2 )
  {
    do
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      if ( (BugCheckParameter4 & 0xC01) != 0
        || ((BugCheckParameter4 >> 5) & 0x1F) != 0 && ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
      {
        KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v8, BugCheckParameter4);
      }
      PteTimeStamp = MiGetPteTimeStamp(BugCheckParameter4, v10, v11);
      *(_QWORD *)BugCheckParameter2 = 0LL;
      v13 = PteTimeStamp;
      if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2, v14) )
        MiWritePteShadow(v15, 0LL);
      if ( v13 )
      {
        if ( v13 == v6 )
        {
          if ( v7 == 1 )
            MiInsertTbFlushEntry(&v21, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL);
        }
        else
        {
          _InterlockedOr(v19, 0);
          v16 = KiTbFlushTimeStamp;
          v17 = KiTbFlushTimeStamp - v13;
          if ( (unsigned int)(KiTbFlushTimeStamp - v13) <= 2 )
          {
            while ( (v13 & 1) != 0 || v17 < 2 )
            {
              if ( (v16 & 1) == 0 )
              {
                MiInsertTbFlushEntry(&v21, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL);
                v7 = 1;
                goto LABEL_21;
              }
              v20[0] = 0;
              _InterlockedOr(v19, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(v20);
              if ( (v13 & 1) != 0 )
              {
                _InterlockedOr(v19, 0);
                v16 = KiTbFlushTimeStamp;
                v17 = KiTbFlushTimeStamp - v13;
                if ( (unsigned int)(KiTbFlushTimeStamp - v13) <= 2 )
                  continue;
              }
              break;
            }
          }
          v7 = 0;
LABEL_21:
          v6 = v13;
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
    while ( v8 < a2 );
    v3 = HIDWORD(v23);
  }
  MiFlushTbList(&v21);
  return v3;
}
