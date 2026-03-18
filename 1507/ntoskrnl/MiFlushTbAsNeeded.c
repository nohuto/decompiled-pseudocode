/*
 * XREFs of MiFlushTbAsNeeded @ 0x1400ADC10
 * Callers:
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  ULONG_PTR v5; // r14
  int v6; // esi
  int v7; // edi
  unsigned __int64 v8; // r15
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  int PteTimeStamp; // eax
  int v13; // ebp
  unsigned __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // edi
  signed __int32 v18[8]; // [rsp+0h] [rbp-138h] BYREF
  int v19; // [rsp+30h] [rbp-108h] BYREF
  __int16 v20; // [rsp+34h] [rbp-104h]
  __int64 v21; // [rsp+38h] [rbp-100h]
  __int64 v22; // [rsp+40h] [rbp-F8h]
  __int64 v23; // [rsp+48h] [rbp-F0h]

  v3 = 0;
  v21 = 20LL;
  v19 = a3;
  v20 = 0;
  v5 = BugCheckParameter2;
  v22 = 0LL;
  v6 = 0;
  v23 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( a2 )
  {
    do
    {
      BugCheckParameter4 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(BugCheckParameter2, BugCheckParameter4)
        && (BugCheckParameter4 & 1) != 0
        && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
      {
        v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            BugCheckParameter4 |= 0x20uLL;
          if ( (v11 & 0x42) != 0 )
            BugCheckParameter4 |= 0x42uLL;
        }
      }
      if ( (BugCheckParameter4 & 0x401) != 0
        || (BugCheckParameter4 & 0x800) != 0
        || ((BugCheckParameter4 >> 5) & 0x1F) != 0 && ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
      {
        KeBugCheckEx(0x1Au, 0x5100uLL, v5, a2 - v8, BugCheckParameter4);
      }
      PteTimeStamp = MiGetPteTimeStamp(BugCheckParameter4);
      *(_QWORD *)v5 = 0LL;
      v13 = PteTimeStamp;
      if ( v14 <= 0x7F8 )
        MiWritePteShadow(v5, 0LL);
      if ( v13 )
      {
        if ( v13 == v6 )
        {
          if ( v7 == 1 )
            MiInsertTbFlushEntry(&v19, (__int64)(v5 << 25) >> 16, 1LL, 0LL);
        }
        else
        {
          _InterlockedOr(v18, 0);
          BugCheckParameter2 = (unsigned int)KiTbFlushTimeStamp;
          v15 = KiTbFlushTimeStamp - v13;
          if ( (unsigned int)(KiTbFlushTimeStamp - v13) <= 2 )
          {
            while ( (v13 & 1) != 0 || v15 < 2 )
            {
              if ( (BugCheckParameter2 & 1) == 0 )
              {
                MiInsertTbFlushEntry(&v19, (__int64)(v5 << 25) >> 16, 1LL, 0LL);
                v7 = 1;
                goto LABEL_36;
              }
              v16 = 0;
              _InterlockedOr(v18, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
              {
                if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v16);
              }
              if ( (v13 & 1) != 0 )
              {
                _InterlockedOr(v18, 0);
                BugCheckParameter2 = (unsigned int)KiTbFlushTimeStamp;
                v15 = KiTbFlushTimeStamp - v13;
                if ( (unsigned int)(KiTbFlushTimeStamp - v13) <= 2 )
                  continue;
              }
              break;
            }
          }
          v7 = 0;
LABEL_36:
          v6 = v13;
        }
      }
      else
      {
        v7 = 0;
        v6 = 0;
      }
      ++v8;
      v5 += 8LL;
    }
    while ( v8 < a2 );
    v3 = HIDWORD(v21);
  }
  MiFlushTbList((__int64)&v19);
  return v3;
}
